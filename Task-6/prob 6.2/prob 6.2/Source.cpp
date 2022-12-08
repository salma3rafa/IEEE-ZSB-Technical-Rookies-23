#include<iostream>
using namespace std;
int main()
{
	int d1, d2, m1, m2, y1, y2, diffDays, diffMon, diffYears;
	long long fine = 0;
	cin >> d1 >> m1 >> y1;
	cin >> d2 >> m2 >> y2;
	if (d1 > d2&& m1 == m2 && y1 == y2)
	{
		diffDays = abs(d2 - d1);
		fine += (diffDays * 15);
	}
	else if (m1> m2&& y1 == y2)
	{
		diffMon = abs(m2 - m1);
		fine += (diffMon * 500);
	}
	else if (y1>y2)
	{
		diffYears = abs(y2 - y1);
		fine += (diffYears * 10000);
	}
	cout << fine << endl;

	return 0;
}