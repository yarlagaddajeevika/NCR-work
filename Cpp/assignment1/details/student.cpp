#include<iostream>
#include<cstdlib>
#include<cstring>
using namespace std;
class student
{
	char *sptr,*grade;
	float m[3],avg=0;
	int i,len;
public:
	void setdata()
	{
		cout << "enter the length of name u want to enter";
		cin>> len;
		sptr = (char *)malloc(sizeof(char)*(len + 1));
		for (i = 0; i < len; i++)
			cin >> *(sptr + i);
	
		cout << "enter 3 subject marks" << '\n';
		for (i = 0; i < 3; i++)
			cin >> m[i];
		getchar();
	}
	void display()
	{
		cout << "entered string"<<'\n';
		for (i = 0; i < len; i++)
			cout << *(sptr + i);
		cout << "entered marks"<<'\n';
		for (i = 0; i < 3; i++)
			cout<< m[i];
		cout << "average "<<avg<<'\n';
		cout << "grade "<<'\n';
		int k = strlen(grade);
		for (i = 0; i < k; i++)
			cout << *(grade + i);
	}
	void average()
	{
		for(i=0;i<3;i++)
		avg = avg + m[i];

		avg = avg / 3;
	}
	void calgrade()
	{
		grade = (char *)malloc(sizeof(char)*(13));
		if (avg > 60)
			strcpy_s(grade,12,"first class");
		else if (avg > 50 && avg < 60)
			strcpy_s(grade,12,"second class");
		else if (avg > 40 && avg < 50)
			strcpy_s(grade,12,"third class");
		else
			strcpy_s(grade,12,"fail");
	}
};
int main()
{
	student s1;
	s1.setdata();
	s1.average();
	s1.calgrade();
	s1.display();
	getchar();
	return 0;
}