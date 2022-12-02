#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int n;
	cin >> n;
	long long sum1=0, sum2=0, diffOfSum;
	int** arr = new int* [n];
	for (int i = 0; i < n; i++)
	{
		arr[i] = new int[n];
		for (int j = 0; j < n; j++)
		{
			cin >> arr[i][j];
		}
	}
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (i == j)
				sum1 += arr[i][j];
		    if (i + j==n-1)
				sum2 += arr[i][j];
		}
	}
	diffOfSum = sum1 - sum2;
	cout << abs(diffOfSum) << '\n';
	return 0;
}