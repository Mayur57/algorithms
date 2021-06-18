#include<bits/stdc++.h>

using namespace std;

// TODO: Very verbose; SHRINK CODE

    bool isPalin(string s) {
        if(s.length() < 2){
            return true;
        }
        int right = s.length()-1;
        int left = 0;

        while(left<=right) {
            if(s[left] != s[right]) {
                return false;
            }
            left++;
            right--;
        }
        return true;
    }

    bool isASCII(char c) {
        return (c>96 && c<123) || (c>64 && c<91) || (c>47 && c<58);
    }

    bool isPalindrome(string s) {
        int i = 0;

        string result="";

        for(int i=0; i<s.length(); i++){
            if(isASCII(s[i])) {
                result += s[i];
            }
        }

        transform(result.begin(), result.end(), result.begin(), ::tolower);

        return isPalin(result);
    }




int main() {
    cout<<isPalindrome("A man, a plan, a canal: Panama");
    return 0;
}