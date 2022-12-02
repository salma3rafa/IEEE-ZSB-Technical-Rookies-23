#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
	int n,count=0;
	cin >> n;
	int* a1 = new int[n];//remaining volume
	int* a2 = new int[n];//capacity
	long long sumofVol=0,sumOfCap ;
	for (int i = 0; i < n; i++)
	{
		cin >> a1[i] >> a2[i];
	}
	sort(a2, a2 + n);
	sumOfCap = a2[0] + a2[n - 1];
	cout << sumOfCap << endl;
	for (int i = 0; i < n; i++)
	{
		sumofVol += a1[i];
	}
	if (sumOfCap > sumofVol)
		cout << "Yes\n";
	else
		cout << "No\n";
	


	return 0;
}