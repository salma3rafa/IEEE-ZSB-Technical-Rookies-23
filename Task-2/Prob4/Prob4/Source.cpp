#include<iostream>
#include<set>
#include<queue>
using namespace std;
int main()
{
	queue<int>q;
	int num;
	set<int>ans;
	cout << "if u wand to end the inputing seq enter 0 \n";
	cin >> num;
	while (num != 0)
	{
		q.push(num);
		cin >> num;
	}
	while (!q.empty())
	{
		ans.insert(q.front());
		q.pop();
	}
	set<int>::iterator itr;
	for (itr = ans.begin(); itr != ans.end(); itr++)
	{
		cout << *itr << " ";
	}
	cout << '\n';
	return 0;
}