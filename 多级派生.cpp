/*
**	�༶����
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
	/*---����b1������A�е�i---*/
	/*b1.i;
	b1.j;
	b1.k*/;
	/*---������B�еĺ����ܵ���A�еĺ���---*/
	/*---������B�еĺ����ܷ���A�е�i,j---*/
	/*---����c1ֻ�ܷ���i---*/
	/*c1.i;
	c1.j;
	c1.k;
	c1.m;
	c1.n;
	c1.9;*/
	/*---����C1ֻ�ܵ���f1,f3��f4---*/
	/*c1.f1();
	c1.f2();
	c1.f3();
	c1.f4();*/
	/*---������C�ĳ�Ա����f4���ܵ���f1,f2��f3---*/
	system("pause");
	return 0;
}