#include<iostream>
#include<stack>
using namespace std;
int greatestCD(int num1, int num2)
{
	stack<int>s;
	int n = max(num1, num2);
	for (int i = 1; i <= n; i++)
	{
		if (num1 % i == 0 & num2 % i == 0)
			s.push(i);
	}
	return s.top();
}
int main()
{
	int n, m;
	cin >> n;
	cin >> m;
	cout << greatestCD(n, m) << endl;

}