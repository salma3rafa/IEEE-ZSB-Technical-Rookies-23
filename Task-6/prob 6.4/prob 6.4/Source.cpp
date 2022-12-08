#include<iostream>
#include<string>
using namespace std;
int main()
{
    int n, m, counter, countMax = 0, countNums = 0;
    string s[1200];
    cin >> n >> m;
    for (int i = 0; i < n; i++)
    {
        cin >> s[i];
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            counter = 0;
            for (int ind = 0; ind < m; ind++) {
                if (s[i][ind] == '1' || s[j][ind] == '1')
                    counter++;
            }
            if (counter == countMax)
                countNums++;
            if (counter > countMax)
            {
                countMax = counter;
                countNums = 1;
            }
        }
    }
    cout << countMax << '\n';
    cout << countNums << '\n';

    return 0;
}
