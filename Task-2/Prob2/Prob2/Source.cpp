#include<iostream>
#include<string>
#include<stack>
using namespace std;
int main()
{
	string s;
	getline(cin, s);
	string rev="";
	stack<char>ans;
	for (int i = 0; i < s.length(); i++)
	{
		ans.push(s[i]);
	}
	while (!ans.empty())
	{
		rev += ans.top();
		ans.pop();
	}
	if (rev == s)
		cout << "yes\n";
	else
		cout << "no\n";
	return 0;
}