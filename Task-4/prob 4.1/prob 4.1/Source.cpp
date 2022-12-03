#include<iostream>
using namespace std;
int main()
{
	int n, k, index = 0;//counter for counting element and index for the arrof count
	cin >> n >> k;
	int* arr = new int[n];
	int arrOfCount[100];
	bool* check = new bool[n];
	for (int i = 0; i < n; i++)
		check[i] = false;
	for (int i = 0; i < n; i++)
		cin >> arr[i];
	for (int i = 0; i < n; i++) {
		if (check[i] == 1) {
			continue;
		}
		int Count = 1;
		for (int j = i + 1; j < n; j++) {
			if (arr[i] == arr[j]) {
				check[j] = 1;
				Count++;
			}
		}
		arrOfCount[index++] = Count;
	}
	int maxx = arrOfCount[0], secMax = 0, index1 = 0, index2;
	for (int i = 1; i < index; i++)
	{
		if (arrOfCount[i] > maxx) {
			maxx = arrOfCount[i];
			index1 = i;
		}
	}
	for (int i = 0; i < index; i++)
	{
		if (arrOfCount[i] > secMax && arrOfCount[i] != maxx) {
			secMax = arrOfCount[i];
			index2 = i;
		}
	}
	cout << index1 + 1 << " " << index2 + 1 << endl;

	return 0;
}
