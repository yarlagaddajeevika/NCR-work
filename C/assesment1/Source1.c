#include<stdio.h>
#include"header.h"
#include"match1.h"
#include"replace4.h"
#include"count4.h"
#include"remove.h"
#include<ctype.h>
int main()
{
	int option;
	//menu
	printf("1. count number of alphabets, digits, spaces, special characters \n");
	printf("2. remove all comments \n");
	printf("3. find a matching word and rotate \n");
	printf("4. replace all tabs \n");
	//option
	printf("enter the option");
	scanf_s("%d", &option);
	printf("%d is the option u have entered", option);

	switch (option)
	{
	case 1: count();
		break;
	case 2: remove();
		break;
	case 3: matchword();
		break;
	case 4: replace();
		break;

	}
	getch();
	return 0;
}