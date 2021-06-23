#include<bits/stdc++.h>
#include<unordered_map>

using namespace std;

    int firstUniqChar(string s) {
        unordered_map<char, int> map;

        for(int i=0; i<s.length(); i++) {
            map[s[i]]++;
        }

        for(auto c : s) {
            if(map[c]==1) {
                return s.find(c);
            }
        }
        return -1;
    }

int main() {
    string s="llt9823459783467289jshdfgvbchsda";
    cout<<firstUniqChar(s);
    return 0;
}