#include<stdio.h>

void reverse(char *str)
{
	if (*str)
	{
		reverse(str + 1);
		printf("%c", *str);
	}
}

int main()
{
	char a[20];
	printf("Enter a string to reverse: ");
	scanf("%[^\n]s", a);
	reverse(a);
	return 0;
}