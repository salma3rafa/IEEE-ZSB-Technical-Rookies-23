#include<iostream>
using namespace std;
int reverse(int num)
{
	int rev = 0;
	while (num)
	{
		rev = rev + (num % 10);
		rev = rev * 10;
		num = num / 10;
	}
	return rev/10;
}
int main()
{
	int n;
	cin >> n;
	int x = n;
	cout << reverse(n) << endl;
	if (x == reverse(n))
		cout << "YES\n";
	else
		cout << "NO\n";
	return 0;
}