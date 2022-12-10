#include<iostream>
#include<algorithm>
using namespace std;
int main()
{

	long long n, t,sum=0,count=0,ind=1;
	cin >> n >> t;

	long long* arr = new long long[n];
	for (int i = 0; i < n&&ind; i++)
	{
		cin >> arr[i];
		count++;
		sum += (86400 - arr[i]);
		if (sum >= t)
			ind = 0;
	}
	cout << count << endl;
	return 0;
}