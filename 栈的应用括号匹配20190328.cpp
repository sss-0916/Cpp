#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <stack>
#include <string>
using namespace std;

class Solution
{
public:
	bool isValid(string s)
	{
		stack<int> st;
		int size = s.size();
		if (size % 2 == 1)
		{
			return false;
		}
		int i = 0;
		for (i = 0; i < size; ++i)
		{
			char ch = s[i];
			switch (ch)
			{
			case '(':
			case '[':
			case '{': st.push(ch); break;
			case ')': 
			case ']':
			case '}':
			{
				if (st.empty())
				{
					return false;
				}
				char left = st.top();
				if (left == '(' && ch == ')' ||
					left == '[' && ch == ']' ||
					left == '{' && ch == '}')
				{
					st.pop();
				}
				else
				{
					return false;
				}
			}
			}
		}
		if (!st.empty())
		{
			return false;
		}
		return true;
	}
};