#include<bits/stdc++.h>
#define pb push_back

using namespace std;

// !!! Very Important: Kadane's Algorithm

int main() {
    vector<int> nums;
    nums.pb(-2);
    nums.pb(1);
    nums.pb(-3);
    nums.pb(4);
    nums.pb(-1);
    nums.pb(2);
    nums.pb(1);
    nums.pb(-5);
    nums.pb(4);

    int sum=nums[0];
    int curr = sum;

    for(int i=1; i<nums.size(); i++) {
        curr = max(nums[i], nums[i] + curr);
        sum = max(sum, curr);
    }
    
    cout<<sum<<"\n";
    return 0;
}