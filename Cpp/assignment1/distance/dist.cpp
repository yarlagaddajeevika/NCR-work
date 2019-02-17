#include<iostream>
using namespace std;
class distance2;
class distance1
{
	float m, cm;
public:
	distance1()
	{
		float m = 0, cm = 0;
	}
	friend void add(distance1 , distance2 );
};
class distance2
{
	float inch, feet;
public:
	distance2()
	{
		float inch = 0, feet = 0;
	}
	friend void add(distance1, distance2);
};
void add(distance1 d1, distance2 d2)
{
	cout << "enter the distances in m and cm" << endl;
	cin >> d1.m >> d1.cm;
	getchar();
	cout << "enter distances in feet and inch" << endl;
	cin >> d2.feet >> d2.inch;
	getchar();
	cout << "1.distance in m and cm" <<'\n'<< "2.distance in feet and inches" << endl;
	int k;
	cout << "enter the option";
	cin >> k;
	switch (k)
	{
	case 1:d1.m = d1.m + (0.3048*d2.feet);
		d1.cm = d1.cm + (2.54*d2.inch);
		cout << "distance in m cm " << d1.m << "m" << d1.cm << "cm" << endl;
		getchar();
		break;
	case 2:d2.feet += (0.3048*d1.m);
		d2.inch += (2.54*d1.cm);
		cout << "distance in feet inch" << d2.feet << "feet" << d2.inch << "inch" << endl;
		getchar();
		break;
	}
}
int main()
{
	distance1 d1;
	distance2 d2;
	add(d1, d2);
	getchar();
	return 0;
}