#include<bits/stdc++.h>

using namespace std;

    string largestNumber(vector<int>& nums) {
    vector<string> s;
    string result;

    for(int i : nums) {
        s.push_back(to_string(i));
    }

    for(int i=0; i<s.size() ; i++){
        cout<<s[i]<<"\n";
    }

    sort(s.begin(), s.end(), [](string &string1, string &string2) {
        return string1+string2>string2+string1;
    });

    for(string str : s) {
        result += str;
    }

    while(result[0]=='0' && result.length()>1) {
        result.erase(0,1);
    }
    
    return result;
    }

int main() {
    vector<int> nums {10, 156, 0};
    cout<<largestNumber(nums);
    return 0;
}