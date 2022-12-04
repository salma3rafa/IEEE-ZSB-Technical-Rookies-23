#include<iostream>
#include<vector>
#include<unordered_map>
#include<string>
#include<algorithm>
using namespace std;
int main()
{
	int n;
	vector<string>st;
	string s;
	vector<vector<string>>strs;
	unordered_map<string, vector<string>>map;
	vector<vector<string>>ans;
	cin >> n;
	for (int i = 0; i <= n ; i++) {
		getline(cin, s);
		st.insert(st.begin() + i, s);
		string k = st[i];
		sort(k.begin(), k.end());
		map[k].push_back(st[i]);
	}
	for (auto x : map)
		ans.push_back(x.second);
	for (int i = ans.size()-1; i>=0; i--)
	{
		if (ans[i].size() > 0) {
			sort(ans[i].begin(), ans[i].end());
			for (int j = 0; j < ans[i].size(); j++)
				cout << ans[i][j] << " ";
			cout << '\n';
		}
	}cout << '\n';
	return 0;
}
