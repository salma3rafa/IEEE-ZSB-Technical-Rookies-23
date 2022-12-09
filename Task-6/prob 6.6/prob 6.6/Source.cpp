#include<iostream>
using namespace std;
int main()
{
	long long n, k, q;
	cin >> n >> k >> q;
	long long *arr = new long long[n];
	long long* qurr = new long long[q];
	long long* newArr = new long long[n];
	for (int i = 0; i < n; i++)
		cin >> arr[i];
	for (int i = 0; i < q; i++)
		cin >> qurr[i];
	while (k--)
	{
		long long i = n - 1;
		long long j = i - 1;
		long long t = arr[n - 1];
		while (i >= 0 && j >= 0)
		{
			arr[i] = arr[j];
			i--;
			j--;
		}
		arr[0] = t;
	}
	for (int i = 0; i < q; i++)
		cout << arr[qurr[i]]<<'\n';

	return 0;
}