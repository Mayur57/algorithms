#include <bits/stdc++.h>

using namespace std;

int findLength(vector<int> &nums1, vector<int> &nums2) {
    int a = nums1.size();
    int b = nums2.size();

    int result = 0;

    int lengths[a + 1][b + 1];
    memset(lengths, 0, sizeof lengths);

    for (int i = 1; i <= a; i++) {
        for (int j = 1; j <= b; j++) {
            if (nums1[i - 1] == nums2[j - 1]) {
                lengths[i][j] = 1 + lengths[i - 1][j - 1];
                result = max(result, lengths[i][j]);
            }
        }
    }

    return result;
}

int main()
{
    vector<int> nums1{1, 2, 3, 2, 1};
    vector<int> nums2{3, 2, 1, 4, 7};
    cout << "Resulttttt " << findLength(nums1, nums2) << "\n";
    return 0;
}