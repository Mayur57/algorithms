#include<bits/stdc++.h>

using namespace std;

int searchInsert(vector<int>& nums, int target) {
    int low = 0, high = nums.size(), mid;
    while (low < high) {
        mid = (low + high) / 2;
        if (nums[mid] >= target)
            high = mid;
        else
            low = mid + 1;
    }
    return low;
}

int main() {
    vector<int> nums;
    nums.push_back(1);
    nums.push_back(3);
    nums.push_back(5);
    nums.push_back(6);
    // nums.push_back(4);
    // nums.push_back(5);
    // nums.push_back(6);
    int key=5;
    cout<<searchInsert(nums, key);
    return 0;
}