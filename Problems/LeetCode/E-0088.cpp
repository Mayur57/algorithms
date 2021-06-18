#include<bits/stdc++.h>

using namespace std;

// TODO: This is trivial, devise an in-place method

void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
    for(int i=0; i<nums2.length(); i++) {
        nums1[m+i] = nums2[i];
    }
    sort(nums1.begin(), nums1.end());
}

int main() {
    return 0;
}