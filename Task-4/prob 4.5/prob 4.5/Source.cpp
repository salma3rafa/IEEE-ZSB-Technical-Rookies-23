#include<iostream>
using namespace std;
int main()
{
	int n;
	cin >> n;
	int** arr = new int* [n];
	int** newArr = new int* [n];
	for (int i = 0; i < n; i++)
	{
		arr[i] = new int[n];
		for (int j = 0; j < n; j++)
			cin >> arr[i][j];
	}
	for (int i = 0; i < n; i++)
	{
		newArr[i] = new int[n];
		for (int j = 0; j < n; j++)
		{
			newArr[i][j] = arr[n - 1 - j][i];
		}
	}
	for (int i = 0; i < n; i++)
	{
		for (int j = 0;j < n; j++)
			cout << newArr[i][j] << ' ';
		cout << '\n';
	}

	return 0;
}