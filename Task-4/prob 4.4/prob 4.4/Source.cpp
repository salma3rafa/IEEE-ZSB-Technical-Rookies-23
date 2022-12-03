#include<iostream>
#include<vector>
using namespace std;
int main()
{
	int n,c=0;
	cin >> n;
	vector<long long>num;
	int x;
	for (int i = 0; i < n; i++) {
		cin >> x;
		num.insert(num.begin()+i,x);
	}
	std::reverse(num.begin(),num.end());
	for (int i = 0; i < n; i++)
	{
		if (i == 0)//when carry=0
			num[i] += (c + 1);
		else if (c != 0) {// If num[i]>9  the value got at tens place in carry
		//else if num[i]<9 carry will be 0
			num[i] += c;
		}
		c = num[i] / 10;
		if (c != 0)
			num[i] = num[i] % 10;
	}
	if (c != 0)
		num.push_back(c);
	std::reverse(num.begin(), num.end());
	for (int i = 0; i < n; i++)
		cout << num[i] << " ";
	if (num[n] == 0) {
		cout << num[n];
	}
	cout << '\n';



}