#include<bits/stdc++.h>

using namespace std;

int g(int n){
    return n ^ (n >> 1);
}

vector<int> grayCode(int n) {
    vector<int> nums;
    for (int i = 0; i < pow(2, n); i++) {
        nums.push_back(g(i));
    }
    return nums;
}

int main() {
    // cout << g(4);
    vector<int> s;
    s = grayCode(2);
    for (int i = 0; i < s.size(); i++){
        cout<<s[i]<<"\n";
    }
        return 0;
}