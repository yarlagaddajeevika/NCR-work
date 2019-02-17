#include<iostream>
using namespace std;
class arith
{
	float a, b, add, mul, div, sub;
public:
	void get();
	void addition();
	void subtraction();
	void multiplication();
	void division();
};
inline void arith::get() {
	cout << "enter 2 float numbers" << endl;
	cin >> a >> b;
	getchar();
}
inline void arith::addition()
{
	add = a + b;
	cout << "addition " << add << endl;
}
inline void arith::subtraction() {
	sub = a - b;
	cout << "subtraction " << sub << endl;
}
inline void arith::multiplication() {
	mul = a*b;
	cout << "multiplication is " << mul << endl;
}
inline void arith::division() {
	div = a / b;
	cout << "division" << div << endl;
}
int main()
{
	arith a;
	a.get();
	a.addition();
	a.subtraction();
	a.multiplication();
	a.division();
	getchar();
	return 0;
}