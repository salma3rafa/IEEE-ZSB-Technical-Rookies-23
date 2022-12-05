#include<iostream>
#include<string>
using namespace std;
int main()
{
	long long num;
	cin >> num;
	string ans = "";
	while (num % 2 == 0)//n is even
	{
		ans += to_string(2) + ' ';
		num /= 2;
	}
	for (int i = 3; i <= sqrt(num); i+=2)//when n is odd
	{
		while (num % i == 0) {
			ans += to_string(i) + ' ';
			num /= i;
		}
	}
	if (num > 2)//number is prime and greater than 2
		ans += to_string(num) + ' ';
	cout << ans << '\n';


	return 0;
}