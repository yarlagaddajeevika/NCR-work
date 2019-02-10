#include<stdio.h>
int main()
{
	int n,r,rev=0;
	scanf_s("%d", &n);
	while (n > 0)
	{
		r = n % 10;
		rev = (rev * 10) + r;
		n = n / 10;
	}
	printf("%d is reverse of given number", rev);
	getch();
	return 0;
}
