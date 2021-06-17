#include <bits/stdc++.h>
#define pb push_back

using namespace std;

    string longestCommonPrefix(vector<string>& strs) {
        string res="";
        if (strs.size() == 0) return res;
        if (strs[0].size() == 0) return res;
        if (strs.size() == 1) return strs[0];
        int j=0;
        while (true) {
            for (int i=1;i<strs.size();i++) {
                if (j>=strs[i-1].size()||j>=strs[i].size()||strs[i-1][j] != strs[i][j]) {
                    goto flag;
                }         
            }
            j++;
        }

        flag:
        for (int i=0;i<j;i++) res +=strs[0][i];
        return res;
    }

int main()
{
    vector<string> strs;
    strs.pb("a");
    strs.pb("a");
    strs.pb("a");

    cout<<longestCommonPrefix(strs);
    return 0;
}