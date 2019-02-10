#include<stdio.h>
#include<string.h>
int main()
{
	char *a = "hai";
	char *b = "world";
	char a1[50] = "hello";
	if (strcmp(a, b) == 0)
		printf(" String are same \n");
	else
		printf(" String are not same \n");
	//printf("%s",strrev(a));

	strcat(a1, b);
	printf("%s \n", a1);
	strcpy(a1, b);
	printf("%s", a1);
	getch();
	return 0;
}