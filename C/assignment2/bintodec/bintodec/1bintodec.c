#include<stdio.h>
int main()
{
	long b,d,p,q;
	scanf_s("%ld %ld", &b,&d);
	p=bin_dec(b);
	q=dec_bin(d);
	printf("%ld %ld", p, q);
	getch();
	return 0;
}
int bin_dec(long n)
{
	int r,m=0,base = 1;
	while (n > 0)
	{
		r = n % 10;
		m = m + (r * base);
		base = base * 2;
		n = n / 10;
	}
	return m;
}
int dec_bin(long a)
{
	long r, m = 0, base = 1;
	while (a > 0)
	{
		r = a % 2;
		m = m + (r * base);
		base = base * 10;
		a = a / 2;
	}
	return m;
}