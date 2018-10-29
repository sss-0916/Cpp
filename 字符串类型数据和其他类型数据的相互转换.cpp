ex18.h
#ifndef _ex18_H
#define _ex18_H

#include "iostream"
#include "string"
#include "sstream"

template <class T> T fromString(const std::string& s)
{
	std::istringstream is(s);
	T t;
	is >> t;
	return t;
}

template <class T>std::string toString(const T& t)
{
	std::ostringstream s;
	s << t;
	return s.str();
}

#endif

ex18.c
#include "iostream"
#include "complex"
#include "ex18.h"
using namespace std;

int main()
{
	int i = 1234;
	double j = 567.34;
	complex<double> c(2.5, 4.1);
	cout << "i == \"" << toString(i) << "\"" << endl;
	cout << "i == \"" << toString(j) << "\"" << endl;
	cout << "i == \"" << toString(c) << "\"" << endl;
	//...
	i = fromString<int>(string("1234"));
	j = fromString<double>(string("567.34"));
	c = fromString<complex<double>>(string("(2.5, 4.1)"));
	cout << "i == \"" << i << "\"" << endl;
	cout << "i == \"" << j << "\"" << endl;
	cout << "i == \"" << c << "\"" << endl;
	system("pause");
	return 0;
}
