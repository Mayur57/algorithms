#include<bits/stdc++.h>

using namespace std;

vector<int> findClosestElements(vector<int> &arr, int k, int x) {
    if(k==arr.size())
        return arr;
    
    int left = 0, right = arr.size() - k;
    while (left < right) {
        int mid = (left + right) / 2;
        if (x - arr[mid] > arr[mid + k] - x)
            left = mid + 1;
        else
            right = mid;
    }
    return vector<int>(arr.begin() + left, arr.begin() + left + k);
}

int main() {

    vector<int> nums;
    nums.push_back(1);
    nums.push_back(2);
    nums.push_back(3);
    nums.push_back(4);
    nums.push_back(5);

    int k = nums.size();
    int x = 3;

    vector<int> nums1 = findClosestElements(nums, k, x);

    for (int i = 0; i < nums1.size(); i++) {
        cout << nums1[i] << "\n";
    }
    
    return 0;
}