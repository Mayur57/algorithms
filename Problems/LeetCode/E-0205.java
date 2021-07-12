import java.util.*;

class Solution {
    public static boolean helper(String s, String t) {
        int store1[] = new int[256];
        int store2[] = new int[256];

        Arrays.fill(store1, 0);
        Arrays.fill(store2, 0);

        for (int i = 0; i < s.length(); i++) {
            int si = (int) s.charAt(i);
            int ti = (int) t.charAt(i);
            if (store1[si] != store2[ti])
                return false;

            store1[si] = i + 1;
            store2[ti] = i + 1;
        }

        return true;
    }

    public static void main(String[] args) {
        System.out.println(helper("badc", "baba"));
    }
}