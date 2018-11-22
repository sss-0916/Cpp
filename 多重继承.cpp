/*
**	���ؼ̳�
*/

#define _CRT_SECURE_NO_WARNINGS

#include "iostream"
#include "string"
using namespace std;

/*---��ʦ��---*/
class Teacher
{
public:
	Teacher(string, int, char, string, int, string);
	void teacher_display();
private:
	string name;
	int age;
	char sex;
	string addr;
	int tel;
	string title;
};

/*---�ɲ���---*/
class Cadre
{
public:
	Cadre(string, int, char, string, int, string);
	void carde_display();
protected:
	string name;
	int age;
	char sex;
	string addr;
	int tel;
	string post;
};

/*---��ʦ��ɲ���---*/
class Teacher_Cadre : public Teacher, public Cadre
{
public:
	Teacher_Cadre(string n, int a, char s, string ad, int el, string t, string p, double w):
	Teacher(n, a, s, ad, el, t), Cadre(n, a, s, ad, el, p), wages(w)
	{}
	void teacher_cadre_display();
private:
	double wages;
};

/*---��ʦ�๹�캯��---*/
Teacher::Teacher(string n, int a, char s, string ad, int el, string t)
{
	name = n;
	age = a;
	sex = s;
	addr = ad;
	tel = el;
	title = t;
}

/*---��ʦ���ӡ����---*/
void Teacher::teacher_display()
{
	cout << "name: " << name << endl;
	cout << "age: " << age << endl;
	cout << "sex: " << sex << endl;
	cout << "addr: " << addr << endl;
	cout << "tel: " << tel << endl;
}

/*---�ɲ��๹�캯��---*/
Cadre::Cadre(string n, int a, char s, string ad, int el, string p)
{
	name = n;
	age = a;
	sex = s;
	addr = ad;
	tel = el;
	post = p;
}

/*---�ɲ����ӡ����---*/
void Cadre::carde_display()
{
	cout << "name: " << name << endl;
	cout << "age: " << age << endl;
	cout << "sex: " << sex << endl;
	cout << "addr: " << addr << endl;
	cout << "tel: " << tel << endl;
	cout << "post: " << post << endl;
}

/*---��ʦ��ɲ����ӡ����---*/
void Teacher_Cadre::teacher_cadre_display()
{
	teacher_display();
	cout << "post: " << post << endl;
	cout << "wages: " << wages << endl;
}

int main()
{
	Teacher_Cadre tc("�賿", 18, 'f', "���", 1081, "Teacher", "Cadre", 2000);
	tc.teacher_cadre_display();
	system("pause");
	return 0;
}