#include<iostream>
using namespace std;
int main()
{
	long long n, x,steps;
	cin >> n;
	cin >> x;
	if (x % 2 == 0)
		steps = x / 2;
	else
		steps = (x - 1) / 2;
	cout << steps << '\n';
	
}