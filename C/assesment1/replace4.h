#include<stdio.h>
#include"header.h"
#include<ctype.h>
#include<string.h>
int replace()
{
	FILE *fp1,*fp2;
	char c[3]="\\t";
	
	fopen_s(&fp1, "test.txt", "r");
	fopen_s(&fp2, "abcd.txt", "w");
	if (fp1 == NULL)
		printf("cannot open file");
	if (fp2 == NULL)
		printf("cannot open file");
	char ch;
	//check character by character whether it is tab or not
	ch = fgetc(fp1);
	while (ch!=EOF)
	{
		if (ch =='\t')
			fputs(c, fp2);
		else
			fputc(ch, fp2);
		ch = fgetc(fp1);
	}
	return 0;
}

