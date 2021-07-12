#include<bits/stdc++.h>

using namespace std;

class Solution {
public:
    int result;
    
    int max(int a, int b) {
        return a > b ? a : b;
    }

    int maxPathSum(TreeNode *root) {
        result = -1001; // Constraint min
        makePath(root);
        return result;
    }
    
    int makePath(TreeNode *node) {
        if (node == null) return 0;
        int left = max(0, makePath(node->left));
        int right = max(0, makePath(node->right));
        result = max(result, left + right + node->val);
        return max(left, right) + node->val;
    }
};