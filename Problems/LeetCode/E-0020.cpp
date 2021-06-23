#include<bits/stdc++.h>

using namespace std;

bool isValid(string s) {
    stack<char> stk;

    if(s.length()%2 || s.length()==0){
        return false;
    }

    for(int i=0; i<s.length(); i++) {
        if(s[i]=='{' || s[i]=='[' || s[i]=='(') {
            stk.push(s[i]);
        }
        else {
            if(!stk.empty() && stk.top()=='[' && s[i]==']') {
                stk.pop();
            }
            else if(!stk.empty() && stk.top()=='(' && s[i]==')') {
                stk.pop();
            }
            else if(!stk.empty() && stk.top()=='{' && s[i]=='}') {
                stk.pop();
            }
            else {
                stk.push(s[i]);
            }
        }
    }
    flag:
    return stk.empty();
}

int main() {
    cout<<isValid("}}}}");
    return 0;
}