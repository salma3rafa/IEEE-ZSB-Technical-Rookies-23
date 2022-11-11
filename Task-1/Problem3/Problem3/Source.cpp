#include<iostream>
using namespace std;
int sumFor(int n, int* arr)
{
	int sum = 0;
	if (n == 0)
		return 0;
	else {
		for (int i = 0; i < n; i++)
			sum += arr[i];
		return sum;
	}
}
int sumWhile(int n, int* arr)
{
	int i = 0, sum = 0;
	while (i < n)
	{
		sum += arr[i];
		i++;
	}
	return sum;
}
int sumRecursive(int n,  int* arr)
{
	if (n == 0)
		return 0;
	else if (n == 1)
		return arr[0];
	else
		return arr[0] + sumRecursive(n - 1, arr + 1);
}
int main()
{
	int n;
	cin >> n;
	int* a=new int[n];
	for (int i = 0; i < n; i++)
		cin >> a[i];
	cout<<sumFor(n, a)<<'\n';
	cout << sumWhile(n, a) << endl;
	cout << sumRecursive(n, a) << '\n';

	return 0;
}