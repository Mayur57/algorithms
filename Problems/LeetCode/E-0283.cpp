#include<bits/stdc++.h>
#define pb push_back

using namespace std;

void moveZeroes(vector<int>& nums) {
    int zeros=0;

    if(nums.size()==0 || nums.size()==1){ return; }

    for(int i=0; i<nums.size(); i++) {
        if(nums[i]!=0) {
            nums[zeros] = nums[i];
            zeros++; 
        }      
    }

    for(int j=zeros; j<nums.size(); j++) {
        nums[j] = 0;
    }

    for(int i=0; i<nums.size(); i++) {
        cout<<nums[i]<<"\n";     
    }

}

int main() {

    vector<int> nums;
    nums.pb(0);
    nums.pb(1);
    nums.pb(0);
    nums.pb(3);
    nums.pb(12);

    // for(int i=0; i<nums.size(); i++){
    //     cout<<nums[i]<<"\n";
    // }

    moveZeroes(nums);
    cout<<"\n-------------\n";
    return 0;
}