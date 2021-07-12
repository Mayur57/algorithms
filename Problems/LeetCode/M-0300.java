import java.util.*;

class Solution {
    public static int lengthOfLIS(int[] nums) {
        int n = nums.length;
        int dp[] = new int[2501];
        Arrays.fill(dp, 1);
        int result = 0;

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < i; j++) {
                if (nums[i] > nums[j] && dp[i] < dp[j] + 1) {
                    dp[i] = dp[j] + 1;
                }
            }
        }

        for (int i = 0; i < dp.length; i++)
            result = dp[i] > result ? dp[i] : result;

        return result;
    }
    public static void main(String[] args) {
        int nums[] = { 10, 9, 2, 5, 3, 7, 101, 18 };
        System.out.println(lengthOfLIS(nums));
    }
}

