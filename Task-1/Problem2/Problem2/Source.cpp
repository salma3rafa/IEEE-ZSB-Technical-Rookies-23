#include<iostream>
using namespace std;
int fact(int num)
{
	int fact = 1;
	for (int i = 2; i <= num; i++)
	{
		fact *= i;
	}
	return fact;
}
int main()
{
	int n;
	cin >> n;
	cout << fact(n) << endl;
	return 0;
}