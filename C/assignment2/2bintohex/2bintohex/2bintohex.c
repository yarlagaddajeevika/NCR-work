#include<stdio.h>
#include<string.h>
int main()
{
	long b, p, q;
	char h[10];
	scanf_s("%ld \n", &b);
	gets(h);
	bin_dec_hex(b);
	hex_dec_bin(h);

	getch();
	return 0;
}
int bin_dec_hex(int a)
{
	printf("%x", bin_dec(a));
	return 0;
}
int bin_dec(long n)
{
	int r, m = 0, base = 1;
	while (n > 0)
	{
		r = n % 10;
		m = m + (r * base);
		base = base * 2;
		n = n / 10;
	}
	return m;
}

int hex_dec_bin(char h[])
{
	int i, v;
	for (i = 0; h[i] != '\0'; i++)
	{
		if (h[i] >= 0 && h[i] <= 9)
			v = h[i] - 48;
		else if (h[i] >= 'a' && h[i] <= 'z')
			v = h[i] - 97 + 10;
		else if (h[i] >= 'A' && h[i] <= 'Z')
			v = h[i] - 65 + 10;

		dec_bin(v);
	}
	return 0;
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
	printf("%ld", m);
}