#include<iostream>
using namespace std;
int main()
{
	long long x;
	cin >> x;
	long long res = x;
	while (res!=1&&res>0)
	{
		long long mod = res;
		res = 0;
		res = res + (mod % 10) ^ 2;
	}
	if (res == 1)
		cout << "true\n";
	else
		cout << "false\n";

	return 0;
}