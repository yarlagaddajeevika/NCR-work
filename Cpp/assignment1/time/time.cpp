#include<iostream>
using namespace std;
class time
{
	int hr, min, sec;
public:
	time()
	{
		hr = min = sec = 0;
	}
	time(int h, int m, int s)
	{
		hr = h;
		min = m;
		sec = s;
	}
	void time1()
	{
		cout << "enter time:" << endl;

		cin >> hr >> min >> sec; getchar();
	}
	void print()
	{
		cout << "time is : " << hr << ":" << min << " : " << sec << '\n';
	}
	void add(time c1, time c2)
	{

		sec = c1.sec + c2.sec;
		if (sec>59)
		{
			min = c1.min + c2.min;
			min++;
			sec -= 60;
		}
		else
			min = c1.min + c2.min;
		if (min > 59)
		{
			hr = c1.hr + c2.hr;
			hr++;
			min -= 60;
		}
		else
			hr = c1.hr + c2.hr;
		if (hr > 24)
		{
			hr = hr - 24;
		}
	}
};
int main()
{
	time t1(11, 43, 34), t4;
	t1.print();
	time t2;
	time t3;
	t3.time1();
	t4.add(t1, t3);
	t4.print();

	getchar();
	return 0;
}