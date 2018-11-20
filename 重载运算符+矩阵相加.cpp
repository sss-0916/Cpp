/*
**	�������,���������+
*/

#define _CRT_SECURE_NO_WARNINGS

#include "iostream"
using namespace std;

class Matrix
{
public:
	Matrix();
	void matrix_input();
	void matrix_display();
	Matrix operator+(Matrix&);
private:
	int matrix[2][3];
};

Matrix::Matrix()
{
	for (int i = 0; i < 2; ++i)
	{
		for (int j = 0; j < 3; ++j)
		{
			matrix[i][j] = 0;
		}
	}
}

void Matrix::matrix_input()
{
	for (int i = 0; i < 2; ++i)
	{
		for (int j = 0; j < 3; ++j)
		{
			cin >> matrix[i][j];
		}
	}
}

void Matrix::matrix_display()
{
	for (int i = 0; i < 2; ++i)
	{
		for (int j = 0; j < 3; ++j)
		{
			cout << matrix[i][j] << " ";
		}
		cout << endl;
	}
}

Matrix Matrix::operator+(Matrix& m1)
{
	Matrix m;
	for (int i = 0; i < 2; ++i)
	{
		for (int j = 0; j < 3; ++j)
		{
			m.matrix[i][j] = matrix[i][j] + m1.matrix[i][j];
		}
	}
	return m;
}

int main()
{
	Matrix m, m1, m2;
	cout << "���������1: " << endl;
	m1.matrix_input();
	cout << "���������2: " << endl;
	m2.matrix_input();
	m = m1 + m2;
	cout << "m1��������: " << endl;
	m1.matrix_display();
	cout << "m2��������: " << endl;
	m2.matrix_display();
	cout << "m1 + m2 �������: " << endl;
	m.matrix_display();
	system("pause");
	return 0;
}