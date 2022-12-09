#include<iostream>
using namespace std;
int main()
{
	int n, d;
	cin >> n >> d;
	int* arr = new int[n];
	for (int i = 0; i < n; i++)
		cin >> arr[i];
    int counter = 0;

    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j <n; j++) {
            if (arr[j] - arr[i] == d) {
                for (int k = j + 1; k < n; k++) {
                    if (arr[k] - arr[j] == d) {
                        counter++;
                        break;
                    }
                }
            }
        }
    }
    cout << counter << endl;

	return 0;
}