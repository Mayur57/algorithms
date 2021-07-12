#include<bits/stdc++.h>

using namespace std;

vector<int> mergeTwoSortedLists(vector<int> &nums1, vector<int> &nums2){
    int i = 0;
    vector<int> result;
    int shorter = min(nums2.size(), nums1.size());
    while (i < shorter)
    {
        if(nums1[i] == nums2[i] || nums1[i] < nums2[i]) {
            result.push_back(nums1[i]);
            result.push_back(nums2[i]);
        }
        else {
            result.push_back(nums2[i]);
            result.push_back(nums1[i]);
        }
        i++;
    }

    while ( i < nums1.size()) {
        result.push_back(nums1[i++]);
    }

    while (i < nums2.size())
    {
        result.push_back(nums2[i++]);
    }

    return result;
}

int main(){
    vector<int> nums1{1, 2, 4, 6, 999}, nums2{1, 3, 4, 6}, result;
    result = mergeTwoSortedLists(nums1, nums2);
    for(int i : result) {
        cout << result[i] << "\n";
    }
    return 0;
}