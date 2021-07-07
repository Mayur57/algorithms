#include<bits/stdc++.h>

using namespace std;

double findMedianSortedArrays(vector<int> &nums1, vector<int> &nums2) {
    for (int i = 0; i < nums2.size(); i++) {
        nums1.insert(nums1.end(), nums2[i]);
    }
    sort(nums1.begin(), nums1.end());
    int size = nums1.size();
    return nums1.size() % 2 == 0 ? ((double)nums1[(size / 2) - 1] + (double)nums1[(size / 2)])/2 : (double)nums1[size/2];
}

int main() {
    vector<int> nums1{0, 0};
    vector<int> nums2{0, 0};
    cout<<"---------"<<findMedianSortedArrays(nums1, nums2)<<"\n";
    return 0;
}