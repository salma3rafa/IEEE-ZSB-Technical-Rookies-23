#include<iostream>
using namespace std;
int sumOfMultiple(int num)
{
	int sum = 0;
	for (int i = 2; i <= num; i++)
	{
		if (i % 3 == 0 || i % 5 == 0)
			sum += i;
	}
	return sum;
}
int main()
{
	int n;
	cin >> n;
	cout << sumOfMultiple(n) << endl;
	return 0;
}