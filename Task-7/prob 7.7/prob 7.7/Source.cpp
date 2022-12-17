#include<iostream>
#include<string>
using namespace std;
int main()
{
	int t;
	cin >> t;
	string ans = "";
	while (t--) {
		int n, c, m;
		cin >> n >> c >> m;
		int fAns = n / c;
		int sAns = fAns;
		if (fAns <m)
			sAns += fAns / m;
		else {
			while (sAns >= m) {
				sAns -= m;
				sAns++;
				fAns++;
			}
		}
		ans += to_string(fAns)+'\n';
	}
	cout << ans;

	return 0;
}
