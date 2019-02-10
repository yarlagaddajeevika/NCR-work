#include<string.h>
#include<stdio.h>
void *lowtoupp(char a[]);
int main()
{
	char s[10], *p;
	int i;
	gets(s);
	p = lowtoupp(s);
	for (i = 0; i<strlen(s); i++)
	{
		printf("%c", *(p + i));
	}
	getch();
	return 0;
}

void *lowtoupp(char s1[])
{
	//char s1[10];
	int i;
	for (i = 0; i < strlen(s1); i++)
	{
		if (s1[i] >= 97 && s1[i] <= 122)
		{
			s1[i] = s1[i] - 32;
		}
	}
	return s1;
}