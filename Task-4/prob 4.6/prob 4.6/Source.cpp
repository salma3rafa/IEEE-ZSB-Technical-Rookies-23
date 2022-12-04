#include<iostream>//this program runs forever. only god knows whats wrong,so i recommend not to run it or your processor will cry
#include<vector>
using namespace std;
int main()
{
	long long num,ascNum,descNum,finall=6174;
	cin >> num;
	long long res = num;
	int counter = 0;
	while (res != finall)
	{
		ascNum = 0;
		descNum = 0;
		for (int i = 0; i <= 9; i++)
		{
			int sortAsc = res;
			for (int j = 0; j < 4; j++) {
				int digit = sortAsc % 10;
				if (digit == i)
				{
					if (digit == 0)
						ascNum =10;

					ascNum *= 10;
					ascNum += 10;
				}
				sortAsc /= 10;
			}
		}
		for(int i=9;i>=1;i--){
		  int sortDesc = res;
		  for (int j = 0; j <= 4; j++)
		  {
			int d = sortDesc % 10;
			if (d == i) {
				descNum *= 10;
				descNum += d;
			}
			sortDesc /= 10;
		  }
		}
		res = descNum - ascNum;
		counter++;
	}
	cout << counter << '\n';

	return 0;
}