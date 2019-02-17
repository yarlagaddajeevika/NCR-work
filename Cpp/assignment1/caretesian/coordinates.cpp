#include<iostream>
using namespace std;
class point
{
	int x, y;
public:
	point()
	{
		int x = 0,y=0;
	}
	friend void distance(point p1, point p2);
	friend void input(point &p1, point &p2);
};
void input(point  &p1, point &p2)
{
	cout << "enter coordinates of point1 x and y" << endl;
	cin >> p1.x >> p1.y;
	getchar();
	cout << "enter coordinates of point2 x and y" << endl;
	cin >> p2.x >> p2.y;
	getchar();
	
}
void distance(point p1, point p2)
{
	float dist;
	cout << p1.x << p1.y << p2.x << p2.y;
	dist = sqrt(pow((p1.x - p2.x), 2) + pow((p1.y - p2.y), 2));
	cout << "distance between the given points is:" << dist << endl;
}
int main()
{
	point p1, p2;
	input(p1, p2);
	distance(p1, p2);
	getchar();
	return 0;
}