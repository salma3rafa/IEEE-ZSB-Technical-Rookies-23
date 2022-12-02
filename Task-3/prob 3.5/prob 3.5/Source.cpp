#include<iostream>
#include<algorithm>
#include<cmath>
using namespace std;
int main()
{
	int n, m, index = 0;
	cin >> n >> m;
	int minOfDistane[20];
	int* arr = new int[n];//nums of sities
	for (int i = 0; i < n; i++)
	{
		arr[i] = i;
	}
	int* arrOfStations = new int[m];
	for (int i = 0; i < m; i++)
	{
		cin >> arrOfStations[i];
	}
	for (int i = 0; i < n; i++)
	{
		int dist = abs(i - arrOfStations[0]);
		for (int j = 1; j < m; j++)
		{
			if (abs(arrOfStations[j] - i) < dist)
				dist = abs(arrOfStations[j] - i);
		}
		if (dist != 0 && dist != n - 1) {
			minOfDistane[index++] = dist;
		}
	}
	int maxx = minOfDistane[0];
	for (int i = 0; i < index; i++)
	{
		if (minOfDistane[i] > maxx)
			maxx = minOfDistane[i];
	}
	cout << maxx << endl;

	return 0;
}
