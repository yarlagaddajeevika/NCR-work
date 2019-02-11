#include"header.h"
#include<stdio.h>
#include<ctype.h>
void count()
{
	FILE *fp;
	fopen_s(&fp, "test.txt","r");
	char ch;
	int alpha=0,digits=0,space=0,special=0;
	//calculate 
	while (!feof(fp))
	{
		ch = fgetc(fp);
		if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))
			alpha++;
		else if ((ch >= '0' && ch <= '9'))
			digits++;
		else if (ch == ' ')
			space++;
		else if((ch>=32&&ch<=47)||(ch>=58&&ch<=64)||(ch>=90&&ch<=96)||(ch>=123&&ch<=127))
			special++;
	}

	printf("\n %d is number of alphabets\n %d is number of digits\n %d is spaces\n %d is number of special characters", alpha,digits,space,special);
	//return 0;
}