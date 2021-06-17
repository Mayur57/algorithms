#include<bits/stdc++.h>
#define pb push_back

using namespace std;

int main(){
    vector<int> nums;
    nums.pb(1);
    nums.pb(2);
    nums.pb(3);
    nums.pb(4);

    // nums => [1, 2, 3, 4]
    // sum => [1, 3, 6, 10]

    vector<int> sum;

    int size = nums.capacity();

    for(int i=0; i<nums.size(); i++){
        if(i==0){
            sum.pb(nums[0]);
        }
        else {
            sum.pb(sum[i-1] + nums[i]);
        }
    }


    for(int j=0; j<nums.size(); j++){
        cout<< sum[j]<<"\t";
    }


    return 0;
}