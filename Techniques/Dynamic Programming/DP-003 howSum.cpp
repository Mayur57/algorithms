#include<bits/stdc++.h>

using namespace std;

class Solution{
    public:
    int cache[INT_MAX];
    vector<int> result;
    bool howSumHelper(vector<int> &nums, int target) {
        if(target < 0) return false;
        if(target == 0) return true;
        if(cache[target] == -1) return false;
        if(cache[target] == 1) return true;
        for (int i : nums)
        {
            int rem = target - i;
            if(howSumHelper(nums, rem)){
                result.push_back(nums[i]);
                cache[target] = 1;
                return true;
            }
            cache[target] = -1;
        }
        return false;
    }

    vector<int> howSum(vector<int> &nums, int target) {
        return result;
    }
};

int main() {
    Solution s;
    vector<int> in{2, 4};
    vector<int> of = s.howSum(in, 7);
    for (int i = 0; i < of.size(); i++)
    {
        cout << of[i] << "\n";
    }
    return 0;
}