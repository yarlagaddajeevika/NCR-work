#include<iostream>
using namespace std;
class complex
{
	float real,img;
public:
	complex()
	{
		real = img = 2;
	}
	complex(float r)
	{
		real = img = r;
	}
	complex(float r, float i)
	{
		real = r;
		img = i;
	}
	friend complex add(complex &b,complex &c);
	friend complex mul(complex &b, complex &c);
	void display()
	{
		cout << "values" << real << "+j" << img;
	}
};
complex add(complex &b,complex &c)
{
	complex a;
	a.real = b.real + c.real;
	a.img = b.img + c.img;
	return a;
}
complex mul(complex &b1, complex &c1)
{
	complex a;
	a.real =((b1.real*c1.real) - (b1.img*c1.img));
	a.img = ((b1.img*c1.real) + (b1.real*c1.img));
	return a;
}
int main()
{
	complex a,a1;
	complex e;
	complex f(3);
	
	a1=add(e,f);
	cout << "addition";
	a1.display();
	a1=mul(e, f);
	cout << "multiplication";
	a1.display();
	getchar();
	return 0;
}
