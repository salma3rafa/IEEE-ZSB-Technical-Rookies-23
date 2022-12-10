#include<vector>
#include<unordered_map>
#include<unordered_set>
class DetectSquares {
    std::unordered_map<int, int> m;
   std::unordered_set<int> s;
    int key(int x, int y) {
        return 10000 * x + y;
    }
     int count(int x, int y) {
        int k = key(x, y);
        return m.count(k) ? m[k] : 0;
    }
public:
    DetectSquares() {}
    void add(std::vector<int> p) {
        m[key(p[0], p[1])]++;
        s.insert(p[0]);
    }
    int count(std::vector<int> p) {
        int x = p[0], y = p[1], ans = 0;
        for (int x1 : s) {
            if (x1 == x) continue;
            int c = count(x1, y), d = abs(x - x1), y1 = y - d, y2 = y + d;
            if (c == 0) continue;
            ans += c * (count(x, y1) * count(x1, y1) + count(x, y2) * count(x1, y2));
        }
        return ans;
    }
};