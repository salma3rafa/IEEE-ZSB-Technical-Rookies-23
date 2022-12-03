#include<iostream>
using namespace std;
int main()
{
	int n,index=0;
	cin >> n;
	int* arr = new int[n];
	int dist[100];
	for (int i = 0; i < n-1; i++)
		cin >> arr[i];
	
	for (int i = 0; i < n; i++)
	{
		int diff=0;
		for (int j = i + 1; j < n; j++)
		{
			if (arr[i] == arr[j]) {
				diff = j - i;
				dist[index++] = diff;
			}
		}
		
	}
	int minOfDiff = dist[0];

	for (int i = 1; i < index; i++)
	{
		if (dist[i] < minOfDiff)
			minOfDiff = dist[i];
	}
	cout << minOfDiff << endl;


	return 0;
}