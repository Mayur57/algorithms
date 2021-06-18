#include<bits/stdc++.h>
#define pb push_back

using namespace std;

    int minMoves(vector<int>& nums) {
        int moves=0;
        int min=INT_MAX;

        if(nums.size() == 0 || nums.size() == 1) goto jump;

        for(int i=0; i<nums.size(); i++) {
            min = nums[i] < min ? nums[i] : min;
        }

        for(int i=0; i<nums.size(); i++) {
            moves += nums[i] - min;
        }

        jump:
        return moves;
    }

int main() {
    vector<int> nums;
    nums.pb(1);
    nums.pb(2);
    nums.pb(3);

    cout<<minMoves(nums);
    return 0;
}