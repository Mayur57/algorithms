#include<bits/stdc++.h>
#include<unordered_map>
#define pb push_back

using namespace std;

    vector<int> twoSum(vector<int> &nums, int target) {
        unordered_map<int, int> map;
        vector<int> result;

        for(int i=0; i<nums.size(); i++) {
            int pair = target - nums[i];
            if(map.find(pair) != map.end()) {
                result.pb(i);
                result.pb(map[pair]);
                goto here;
            }
            else {
                map[nums[i]] = i;
            }
        }
        
        here:
        return result;
    }

int main() {
    vector<int> nums;
    nums.pb(2);
    nums.pb(7);
    nums.pb(11);
    nums.pb(15);

    int target=9;
    vector<int> s = twoSum(nums, target);
    cout<<s[0]<<"\n"<<s[1];
    return 0;
}