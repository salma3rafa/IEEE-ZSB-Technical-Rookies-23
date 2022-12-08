#include<iostream>
#include<string>
using namespace std;
int main()
{
	int n;
	cin >> n;
	string ans = "";
	string word = "hackerrank";
	while (n--)
	{
		string s;
		int index = 0;
		cin >> s;
		bool found = 0;
		for (int i = 0; i < s.length(); i++)
		{
			if (s[i] == word[index])
			{
				if (index == word.length() - 1)
					found = 1;
				else
					index++;
			}
		}
		if (found)
			ans += "YES\n";
		else
			ans += "NO\n";
	}
	cout << ans;



	return 0;
}