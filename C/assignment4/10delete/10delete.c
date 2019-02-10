#include<stdio.h>
#define MAXLINE 1000

int mget(char line[], int maxline);
void squeeze(char s1[], char s2[]);

int main(void)
{
	char s1[MAXLINE], s2[MAXLINE];

	printf("s1");
	mget(s1, MAX);

	printf("s2");
	mget(s2, MAX);

	squeeze(s1, s2);

	printf("%s", s1);

	return 0;
}

int mget(char s[], int lim)
{
	int i, c;

	for (i = 0; i<lim - 1 && (c = getchar()) != EOF && c != '\n'; ++i)
		s[i] = c;


	s[i] = '\0';
}

void squeeze(char s1[], char s2[])
{
	int i, j, k;
	k = 0;

	for (i = 0; s1[i] != '\0'; ++i)
	{
		for (j = 0; (s1[i] != s2[j]) && s2[j] != '\0'; ++j)
			;
		if (s2[j] == '\0')
			s1[k++] = s1[i];
	}

	s1[k] = '\0';
}