#include<stdio.h>
#include<string.h>
void printRotatedString(char str[])
{
	int len = strlen(str);
	char temp[len];
	for (int i = 0; i < len; i++)
	{
		int j = i;
		int k = 0;


		while (str[j] != '\0')
		{
			temp[k] = str[j];
			k++;
			j++;
		}

		j = 0;
		while (j < i)
		{
			temp[k] = str[j];
			j++;
			k++;
		}

		printf("%s\n", temp);
	}
}
 
int main()
{
	char str[30];
	scanf("%s", str);
	printRotatedString(str);
	return 0;
}