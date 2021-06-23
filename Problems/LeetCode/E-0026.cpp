#include<bits/stdc++.h>

using namespace std;

    int removeDuplicates(vector<int>& nums) {
        int i=!nums.empty();
        for(int number : nums) {
            if(number > nums[i-1])
                nums[i++] = number;
        }
        return i;
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
    cout<<removeDuplicates(nums)<<"\n\n";
    for(int i=0; i<nums.size(); i++) {
        cout<<nums[i]<<"\t";
    }
    return 0;
}