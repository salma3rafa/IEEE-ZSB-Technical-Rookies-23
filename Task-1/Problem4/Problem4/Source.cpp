#include<iostream>
using namespace std;
int sum(int num)
{
	int sum = 0;
	for (int i = num; i >= 1; i--)
		sum += i;
	return sum;

}
int main()
{
	int n;
	cin >> n;
	cout << sum(n) << endl;
	return 0;
}