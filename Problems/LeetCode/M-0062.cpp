#include<bits/stdc++.h>
#define ll long long 

using namespace std;

class Solution {
public:
    unordered_map<string, ll> cache;
    ll uniquePaths(int m, int n) {
        string key = to_string(m) + "," + to_string(n);
        auto itr = cache.find(key);
        if (itr != cache.end())
            return itr->second;

        if (m == 0 || n == 0)
            return 0;

        if (m == 1 && n == 1)
            return 1;

        cache[key] = uniquePaths(m - 1, n) + uniquePaths(m, n - 1);
        return cache[key];
    }
};

int main() {
    Solution s;
    cout << (s.uniquePaths(3, 7) == 28) << "\n";
    cout << (s.uniquePaths(3, 2) == 3) << "\n";
    cout << (s.uniquePaths(7, 3) == 28) << "\n";
    cout << (s.uniquePaths(3, 3) == 6) << "\n";
    return 0;
}