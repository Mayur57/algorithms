#include<bits/stdc++.h>

using namespace std;

    int removeElement(vector<int>& nums, int val) {
        int index=0;
        for(int i=0; i<nums.size(); ++i) {
            if(nums[i]!=val) {
                nums[index++] = nums[i];
            }
        }
        return index;
    }

int main() {
    vector<int> nums;
    nums.push_back(0);
    nums.push_back(0);
    nums.push_back(1);
    nums.push_back(1);
    nums.push_back(1);
    nums.push_back(2);
    nums.push_back(2);
    nums.push_back(3);
    nums.push_back(3);
    nums.push_back(4);
    int val = 3;
    for(int i : nums) {
        cout<<i<<"\t";
    }
    cout<<'\n'<<removeElement(nums, val)<<'\n';
    for(int i : nums) {
        cout<<i<<"\t";
    }
    return 0;
}