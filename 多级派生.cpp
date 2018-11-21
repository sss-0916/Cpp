/*
**	多级派生
*/

#define _CRT_SECURE_NO_WARNINGS

#include "iostream"
using namespace std;

class A
{
public:
	void f1();
	int i;
protected:
	void f2();
	int j;
private:
	int k;
};

class B : public A
{
public:
	void f3();
protected:
	int m;
private:;
	int n;
};

class C : public B
{
public:
	void f4();
private:
	int p;
};

int main()
{
	A a1;
	B b1;
	C c1;
	/*---对象b1能引用A中的i---*/
	/*b1.i;
	b1.j;
	b1.k*/;
	/*---派生类B中的函数能调用A中的函数---*/
	/*---派生类B中的函数能访问A中的i,j---*/
	/*---对象c1只能访问i---*/
	/*c1.i;
	c1.j;
	c1.k;
	c1.m;
	c1.n;
	c1.9;*/
	/*---对象C1只能调用f1,f3和f4---*/
	/*c1.f1();
	c1.f2();
	c1.f3();
	c1.f4();*/
	/*---派生类C的成员函数f4中能调用f1,f2和f3---*/
	system("pause");
	return 0;
}