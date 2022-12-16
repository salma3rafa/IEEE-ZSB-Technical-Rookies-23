#include<iostream>
#include<cmath>
using namespace std;

int main()
{
	long long n, d;
	cin >> n >> d;
	long long arr[2000];
	long long c, b, e, f, g, h,j=0;
	for (long long i = n; i <= d; i++) {
		c = 0;
		f = g = 0;
		b = i;
		while (b != 0)
		{
			b = b / 10;
			c++;
		}
		e = pow(10, c);
		f = i * i;
		g = f / e;
		h = f % e;
		if (i == (g + h))
		{
			arr[j] = i;
			j++;
		}

	}
	if (j == 0)
		cout << "INVALID RANGE\n";
	else
	{
		for (int i = 0; i < j; i++)
			cout << arr[i] << " ";
	}
	return 0;
}