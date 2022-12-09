#include<iostream>
#include<queue>
using namespace std;
int main()
{
	int index=0, n, m;
	cin >> n;
	int* arr = new int[n];
	int newArr[200000];
	for (int i = 0; i < n; i++)
		cin >> arr[i];
	cin >> m;
	int* score = new int[m];
	queue<int>rate;
	for (int i = 0; i < m; i++)
		cin >> score[i];
	newArr[0] = arr[0];
	index++;
	for (int i = 1; i < n; i++)
	{
		if (arr[i] != arr[i - 1])
			newArr[index++] = arr[i];
	}
	for (int i = 0; i < m; i++)
	{
		if (score[i] >= newArr[0])
			rate.push(1);
		if (score[i] < newArr[index - 1])
			rate.push(index + 1);
		else {
			for (int j = 1; j < index; j++)
			{
				if (score[i] >= newArr[j] && score[i] < newArr[j - 1])
					rate.push(j + 1);
			}
		}
	}
	for (int i = 0; i < m; i++) {
		cout << rate.front() << endl;
		rate.pop();
	}


	return 0;
}