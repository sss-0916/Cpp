#include "iostream"
#include "string"
using namespace std;

int main()
{
	string str1("123456");
	string str2("abcdefghijklmn");
	string str;
	str.assign(str1);		//使用str1初始化str
	cout << "str: " << str << endl;
	str.assign(str1, 3, 3);		//使用str1的一部分初始化str
	cout << "str: " << str << endl;
	str.assign(str1, 2, str1.npos);
	cout << "str: " << str << endl;
	str.assign(5, 'X');
	cout << "str: " << str << endl;
	string::iterator itB;
	string::iterator itE;
	itB = str1.begin();		//获取字符串初始位置
	itE = str1.end();		//获取字符串末端位置指针
	str.assign(itB, (--itE));
	cout << "str: " << endl;
	//
	str = str1;
	cout << "str: " << str << endl;
	//
	str.erase(3);		//删除元素
	cout << "删除元素str: " << str << endl;
	str.erase(str.begin(), str.end());
	cout << ": " << str << " :" << endl;
	//
	str.swap(str2);		//交换元素
	cout << "str: " << str << endl;
	//
	string A("ello");
	string B("H");
	B.insert(1, A);		//插入元素
	cout << "B: " << B << endl;
	//
	A = "ello";
	B = "H";
	B.insert(1, "yanchy ", 3);
	cout << "B: " << B << endl;
	//
	A = "ello";
	B = "H";
	B.insert(1, A, 2, 2);
	cout << "B: " << B << endl;
	//
	A = "ello";
	B = "H";
	B.insert(1, 5, 'C');
	cout << "B: " << B << endl;
	//
	A = "ello";
	B = "H";
	string::iterator it = B.begin() + 1;
	const string::iterator itF = A.begin();
	const string::iterator itG = A.end();
	B.insert(it, itF, itG);		//插入内容
	cout << "B: " << B << endl;
	//
	A = "ello";
	B = "H";
	cout << "A: " << A << ", B: " << B << endl;
	B.append(A);		//追加字符串
	cout << "B: " << B << endl;
	//
	A = "ello";
	B = "H";
	cout << "A: " << A << ", B: " << B << endl;
	B.append("12345", 2);		//追加字符串
	cout << "B: " << B << endl;
	//
	A = "ello";
	B = "H";
	cout << "A: " << A << ", B: " << B << endl;
	B.append("12345", 2, 3);		//追加字符串
	cout << "B: " << B << endl;
	//
	A = "ello";
	B = "H";
	cout << "A: " << A << ", B: " << B << endl;
	B.append(10, 'a');		//追加字符串
	cout << "B: " << B << endl;
	//
	A = "ello";
	B = "H";
	cout << "A: " << A << ", B: " << B << endl;
	B.append(A.begin(), A.end());		//追加字符串
	cout << "B: " << B << endl;
	system("pause");
	return 0;
}