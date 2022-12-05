#include<iostream>
#include<string>
#include<stack>
using namespace std;
int main()
{
	string s;
	getline(cin, s);
	stack<char>st;
	for (int i = 0; i < s.length(); i++)
	{
		if (st.empty())
			st.push(s[i]);
		else if ((st.top() == '(' && s[i] == ')') || st.top() == '{' && s[i] == '}' || st.top() == '[' && s[i] == ']')
			st.pop();
		else
			st.push(s[i]);
	}
	if (st.empty())
		cout << "true\n";
	else
		cout << "false\n";


	return 0;
}
