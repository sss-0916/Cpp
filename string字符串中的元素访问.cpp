#include "iostream"
#include "string"

int main()
{
	const std::string cS("conststring");
	std::string s("abcde");
	char temp = 0;
	char temp_1 = 0;
	char temp_2 = 0;
	char temp_3 = 0;
	char temp_4 = 0;
	char temp_5 = 0;
	temp = s[2];
	temp_1 = s.at(2);
	temp_2 = s[s.length()];		//δ������Ϊ
	temp_3 = cS[cS.length()];		//ָ��\0��
	temp_4 = s.at(s.length());		//�����쳣
	temp_5 = cS.at(s.length());		//�����쳣
	std::cout << temp << temp_1 << temp_2 << temp_3 << temp_4 << temp_5 << std::endl;
	system("pause");
	return 0;
}