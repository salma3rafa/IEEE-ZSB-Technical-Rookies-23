#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
class solution {
public:
	int lastStoneWeight(vector<int>& stones) {
		sort(stones.begin(), stones.end());
		while (stones.size() > 1) {
			int x = stones.back();
			stones.pop_back();
			int y = stones.back();
			stones.pop_back();
			if (x != y) {
				stones.push_back(x - y);
				sort(stones.begin(), stones.end());
			}
		}
		if (stones.size())
			return stones[0];
		return 0;
	}
};
int main()
{

	return 0;
}
