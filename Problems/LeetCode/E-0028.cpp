#include<bits/stdc++.h>

using namespace std;

    int strStr(string haystack, string needle) {
        // cout<<needle.length()<<'\n';
        // cout<<haystack.length()<<'\n';
    if(needle.empty())
        return 0;
    if(haystack.empty() || haystack.size()<needle.size())
        return -1;

        int i=0, j=0, counter=0;
        for( ; i<haystack.size();i++){
            if(haystack[i] == needle[j]) {
                if(j == needle.length()-1) {
                    return i-j;
                }
                else {
                    j++;
                }
            }
            else if(j) {
                i -= j;
                j=0;
            }
        }
        return -1;
    }

    

int main() {
    string haystack = "aaaa", needle = "bba";
    cout<<strStr(haystack, needle)<<'\n';
    return 0;
}