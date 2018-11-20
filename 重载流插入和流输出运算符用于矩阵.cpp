/*
**	重载流插入运算符合流输出运算符,用于矩阵
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
	friend ostream& operator<<(ostream& output, Matrix& m);
	friend istream& operator>>(istream& input, Matrix& m);
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

ostream& operator<<(ostream& output, Matrix& m)
{
	for (int i = 0; i < 2; ++i)
	{
		for (int j = 0; j < 3; ++j)
		{
			output << m.matrix[i][j] << " ";
		}
		output << endl;
	}
	return output;
}

istream& operator>>(istream& input, Matrix& m)
{
	cout << "请输入矩阵:" << endl;
	for (int i = 0; i < 2; ++i)
	{
		for (int j = 0; j < 3; ++j)
		{
			input >> m.matrix[i][j];
		}
	}
	return input;
}

int main()
{
	Matrix m, m1, m2;
	cin >> m1;
	cin >> m2;
	cout << "m1矩阵如下: " << endl;
	cout << m1;
	cout << "m2矩阵如下: " << endl;
	cout << m2;
	cout << "m1 + m2: " << endl;
	m = m1 + m2;
	cout << m;
	system("pause");
	return 0;
}