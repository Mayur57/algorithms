#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    int lengthOfLIS(vector<int> &nums) {
        int n = nums.size();
        vector<int> dp(n, 1); //init dp cache of length n with 1s
        for (int i = 0; i < n; ++i)
            for (int j = 0; j < i; ++j)
                if (nums[i] > nums[j] && dp[i] < dp[j] + 1)
                    dp[i] = dp[j] + 1;
                    
        return *max_element(dp.begin(), dp.end());
    }
};

int main() {
    Solution s;
    vector<int> nums{10, 9, 2, 5, 3, 7, 101, 18};
    cout << s.lengthOfLIS(nums) << "\n";
    return 0;
}