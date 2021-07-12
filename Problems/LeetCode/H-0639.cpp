#include<bits/stdc++.h>

using namespace std;

class Solution {
public:
    int numDecodings(string s) {
        int size = s.size(), p = 1000000007;
        long f1 = 1, f2 = helper(s.substr(0, 1));
        for (int i = 1; i < size; i++) {
            long f3 = (f2 * helper(s.substr(i, 1))) + (f1 * helper(s.substr(i - 1, 2)));
            f1 = f2;
            f2 = f3 % p;
        }
        return f2;
    }

    int helper(string s) {
        if (s.size() == 1) {
            if (s[0] == '*')
                return 9;
            return s[0] == '0' ? 0 : 1;
        }

        if (s == "**")
            return 15;
        else if (s[1] == '*') {
            if (s[0] == '1')
                return 9;
            return s[0] == '2' ? 6 : 0;
        }
        else if (s[0] == '*')
            return s[1] <= '6' ? 2 : 1;
        else
            return stoi(s) >= 10 && stoi(s) <= 26 ? 1 : 0;
    }
};

int main() {
    Solution s;
    string str = "2*";
    cout << s.numDecodings(str) << "\n";
    return 0;
}