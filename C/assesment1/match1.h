#include<stdio.h>
#include<string.h>
int matchword()
{
	FILE *fp, *fp1;
	fopen_s(&fp, "test.txt", "r");
	fopen_s(&fp1, "abcd.txt", "w");

	if (fp == NULL)
		printf("file1 can't opened");
	if (fp1 == NULL)
		printf("file2 can't be opened");

	char str[20], str1[20], ch;
	int i, n, flag = 0, j;

	printf("enter the string");
	gets_s(str, sizeof(str));

	n = strlen(str);
	getchar();
	for (i = 0; i < n; i++)
	{
		str1[i] = str[n - i - 1];
	}
	i = 0;
	long n1 = n;

	while (!feof(fp))
	{
		ch = fgetc(fp);
		while (ch == str[i])
		{
			if (i == n - 1)
			{
				ch = fgetc(fp);
				if (ch == '\0' || ch == ' ' || ch == '\n' || feof(fp) == 1)
				{
					flag = 1;
					break;
				}

			}
			
			ch = fgetc(fp);
			i++;
		}

		fputc(ch, fp1);
		if (flag == 1)
		{
			j = 0;
			while (j < n)
			{
				fputc(str1[j], fp1);
				j++;
			}
			break;
		}
	}
	while (!feof(fp))
	{
		ch = fgetc(fp);
		fputc(ch, fp1);
	}
	return 0;
}
