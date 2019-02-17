#include<iostream>
using namespace std;
class matrix
{
	int a[10][10], b[10][10], mult[10][10], r1, c1, r2, c2, i, j, k;
public:
	matrix()
	{
		int a[10][10], b[10][10], mult[10][10], r1, c1, r2, c2, i, j, k;
	}
	friend void input(matrix m1, matrix m2);
	friend void multi(matrix m1, matrix m2);
};
void input(matrix m1,matrix m2)
{
	cout << "Enter rows and columns for first matrix: ";
	cin >> m1.r1 >> m1.c1;
	cout << "Enter rows and columns for second matrix: ";
	cin >> m2.r2 >> m2.c2;
	getchar();
	while (m1.c1 != m2.r2)
	{
		cout << "matrix multiplication not possible.";
		cout << "re-enter rows and columns for first matrix: ";
		cin >> m1.r1 >> m1.c1;

		cout << "re-nter rows and columns for second matrix: ";
		cin >> m2.r2 >> m2.c2;
	}
	cout << endl << "Enter elements of matrix 1:" << endl;
	int i, j;
	for (i = 0; i < m1.r1; ++i)
		for (j = 0; j < m1.c1; ++j)
		{
			cout << "Enter element a" << i + 1 << j + 1 << " : ";
			cin >> m1.a[i][j];
		}
	getchar();
	// Storing elements of second matrix.
	cout << endl << "Enter elements of matrix 2:" << endl;
	for (i = 0; i < m2.r2; ++i)
		for (j = 0; j < m2.c2; ++j)
		{
			cout << "Enter element b" << i + 1 << j + 1 << " : ";
			cin >> m2.b[i][j];
		}
	getchar();
	// Initializing elements of matrix mult to 0.
	for (i = 0; i < m1.r1; ++i)
		for (j = 0; j < m2.c2; ++j)
		{
			m1.mult[i][j] = 0;
		}
	multi(m1, m2);
}
void multi(matrix m1, matrix m2)
{
	int i, j,k;
	for (i = 0; i < m1.r1; ++i)
		for (j = 0; j < m2.c2; ++j)
			for (k = 0; k < m1.c1; ++k)
			{
				m1.mult[i][j] += m1.a[i][k] * m2.b[k][j];
			}

	// Displaying the multiplication of two matrix.
	cout << endl << "Output Matrix: " << endl;
	for (i = 0; i < m1.r1; ++i)
		for (j = 0; j < m2.c2; ++j)
		{
			cout << " " << m1.mult[i][j];
			if (j == m2.c2 - 1)
				cout << endl;
		}
}
int main()
{
	matrix m1, m2;
	input(m1, m2);

	getchar();
	return 0;
}