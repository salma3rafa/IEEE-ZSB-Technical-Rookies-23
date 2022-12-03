#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main()
{
	string s1, s2;
	getline(cin, s1);
	getline(cin, s2);
	string inv="";
	for (int i = s1.length()-1; i >=0; i--)
	{
		inv += s1[i];
	}
	if (s2.find(inv) != string::npos)
		cout << "true\n";
	else
		cout << "false\n";

	return 0;
}