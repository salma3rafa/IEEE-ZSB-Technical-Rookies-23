#include<iostream>
#include<string>
using namespace std;
int main()
{
	int t;
	long long n;
	cin >> t;
	string ans = "";
	while (t--)
	{
		cin >> n;
		long long tst = n;
		int counter = 0;
		while (n > 0)
		{
			int mod = n % 10;
			if (mod!=0&&tst % mod == 0)
				counter++;
			n=n / 10;
		}
		ans += to_string(counter) + '\n';
	}
	cout << ans << endl;
	return 0;
}