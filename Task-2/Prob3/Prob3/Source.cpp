#include<iostream>
#include<string>
#include<queue>
using namespace std;
int main()
{
	string s = "hello";
	string seq,final;
	getline(cin, seq);
	queue<char>sett;
	sett.push( seq[0]);
	int count = 0;
	for (int i = 1; i < seq.length(); i++)
	{
		 if (seq[i] != sett.back()) {
			 sett.push(seq[i]);
			 if (seq[i] == 'l')
				 count++;
		 }
		 else if (seq[i] == 'l' && count<2)
			 sett.push( seq[i]);
	}
	while (!sett.empty())
	{
		final += sett.front();
		sett.pop();
	}
	cout << final << endl;
	if (final.find(s) == 1)
		cout << "YES\n";
	else
		cout << "NO\n";

		return 0;
}