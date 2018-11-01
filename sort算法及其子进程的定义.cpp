#include "iostream"
#include "vector"
#include "string"
#include "algorithm"
using namespace std;

class student
{
public:
	student(const string &a, double b) :name(a), score(b){}		//const���ã�ʹ������aʱ�����ı�ʵ�ε�����
	string name;
	double score;
	bool operator<(const student& m) const		//�ڶ���const����,�ó�Ա���������޸��κεĳ�Ա������Ҳ���ܵ��÷�const��Ա����
	{
		return score < m.score;
	}
};

bool name_sort_less(const student& m, const student& n)		//�����ӽ���
{
	return m.name < n.name;
}

bool name_sort_greater(const student& m, const student& n)		//�����ӽ���
{
	return m.name > n.name;
}

bool score_sort(const student& m, const student& n)		//�����ӽ���
{
	return m.score > n.score;
}

void print(student& S)		//�����ӽ���
{
	cout << S.name << "         " << S.score << endl;
}

void Original(vector<student>& V)		//��ʼ��10��ͬѧ
{
	student st1("Tom", 74);
	V.push_back(st1);
	st1.name = "Jimy";
	st1.score = 56;
	V.push_back(st1);
	st1.name = "Mary";
	st1.score = 92;
	V.push_back(st1); 
	st1.name = "Jessy";
	st1.score = 85;
	V.push_back(st1);
	st1.name = "Jone";
	st1.score = 56;
	V.push_back(st1);
	st1.name = "Bush";
	st1.score = 52;
	V.push_back(st1);
	st1.name = "Winter";
	st1.score = 77;
	V.push_back(st1);
	st1.name = "Ander";
	st1.score = 63;
	V.push_back(st1);
	st1.name = "Lily";
	st1.score = 76;
	V.push_back(st1);
	st1.name = "Maryia";
	st1.score = 89;
	V.push_back(st1);
}

int main()
{
	vector<student> vect;
	Original(vect);
	cout << "---Before sorted.---" << endl;
	for_each(vect.begin(), vect.end(), print);		//��������е�Ԫ��
	sort(vect.begin(), vect.end());		//��score��С��������ʹ��operator<��
	cout << "---After sorted by score." << endl;
	for_each(vect.begin(), vect.end(), print);		//���������
	sort(vect.begin(), vect.end(), name_sort_less);		//��name��С��������
	cout << "---After sorted by name." << endl;
	for_each(vect.begin(), vect.end(), print);		//���������
	sort(vect.begin(), vect.end(), score_sort);		//��score�Ӵ�С
	cout << "---After sorted by score." << endl;
	for_each(vect.begin(), vect.end(), print);		//���������
	sort(vect.begin(), vect.end(), name_sort_greater);		//��name�Ӵ�С����
	cout << "---After sorted by name." << endl;
	for_each(vect.begin(), vect.end(), print);		//���������
	system("pause");
	return 0;
}