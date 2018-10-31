#include "iostream"
#include "string"
using namespace std;

int main()
{
	string str1("123456");
	string str2("abcdefghijklmn");
	string str;
	str.assign(str1);		//ʹ��str1��ʼ��str
	cout << "str: " << str << endl;
	str.assign(str1, 3, 3);		//ʹ��str1��һ���ֳ�ʼ��str
	cout << "str: " << str << endl;
	str.assign(str1, 2, str1.npos);
	cout << "str: " << str << endl;
	str.assign(5, 'X');
	cout << "str: " << str << endl;
	string::iterator itB;
	string::iterator itE;
	itB = str1.begin();		//��ȡ�ַ�����ʼλ��
	itE = str1.end();		//��ȡ�ַ���ĩ��λ��ָ��
	str.assign(itB, (--itE));
	cout << "str: " << endl;
	//
	str = str1;
	cout << "str: " << str << endl;
	//
	str.erase(3);		//ɾ��Ԫ��
	cout << "ɾ��Ԫ��str: " << str << endl;
	str.erase(str.begin(), str.end());
	cout << ": " << str << " :" << endl;
	//
	str.swap(str2);		//����Ԫ��
	cout << "str: " << str << endl;
	//
	string A("ello");
	string B("H");
	B.insert(1, A);		//����Ԫ��
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
	B.insert(it, itF, itG);		//��������
	cout << "B: " << B << endl;
	//
	A = "ello";
	B = "H";
	cout << "A: " << A << ", B: " << B << endl;
	B.append(A);		//׷���ַ���
	cout << "B: " << B << endl;
	//
	A = "ello";
	B = "H";
	cout << "A: " << A << ", B: " << B << endl;
	B.append("12345", 2);		//׷���ַ���
	cout << "B: " << B << endl;
	//
	A = "ello";
	B = "H";
	cout << "A: " << A << ", B: " << B << endl;
	B.append("12345", 2, 3);		//׷���ַ���
	cout << "B: " << B << endl;
	//
	A = "ello";
	B = "H";
	cout << "A: " << A << ", B: " << B << endl;
	B.append(10, 'a');		//׷���ַ���
	cout << "B: " << B << endl;
	//
	A = "ello";
	B = "H";
	cout << "A: " << A << ", B: " << B << endl;
	B.append(A.begin(), A.end());		//׷���ַ���
	cout << "B: " << B << endl;
	system("pause");
	return 0;
}