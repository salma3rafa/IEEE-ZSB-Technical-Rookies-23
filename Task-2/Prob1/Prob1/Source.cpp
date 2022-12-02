#include <iostream>
#include <cstdlib>
#include <ctime>
#include<string>
using namespace std;
int main()
{
	long long randomNum = rand() % 999 + 1;
	string random = to_string(randomNum);
	string ans;
	cout << "Enter a 3-digit number:\n";
	getline(cin, ans);
	while (ans != random)
	{
		int hits = 0, miss = 0;
		for (int i = 0; i < random.length(); i++)
		{
			for (int j = 0; j < ans.length(); j++)
			{
				if (random[i] == ans[j] && i == j)
					hits++;
				else if (random[i] == ans[j])
					miss++;
			}
		}
		cout << hits << " hits " << miss << " misses \n";
		cout << "Enter a 3-digit number:\n";
		getline(cin, ans);
	}
	return 0;
}
