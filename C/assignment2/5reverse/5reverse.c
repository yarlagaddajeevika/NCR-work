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
	long n = 0;
int i;
for (i = 0; i < strlen(h); i++)
{
	if (h[i] >= 97 && h[i] < 102)
	{
		switch (h[i])
		{
		case 'a':
		case 'A':strcat_s(n, 4, "1010");
			break;
		case 'b':
		case 'B':strcat_s(n, 4, "1011");
			break;
		case 'c':
		case 'C':strcat_s(n, 4, "1100");
			break;
		case 'd':
		case 'D':strcat_s(n, 4, "1101");
			break;
		case 'e':
		case 'E':strcat_s(n, 4, "1110");
			break;
		case 'f':
		case 'F':strcat_s(n, 4, "1111");
			break;
		}
	}
	else
n = dec_bin(h[i]);
}
printf("%ld", n);
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
return m;
}