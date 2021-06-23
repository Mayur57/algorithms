#include<bits/stdc++.h>

using namespace std;

int reverse(int x) {
    long long result=0;
    while(x) {
        result = result*10 + x%10;
        x /= 10;
    }
    return (result>INT_MAX || result<INT_MIN) ? 0 : result;
}

bool isPalindrome(int x) {
    return x<0 ? false : reverse(x) == x;
}



int main() {
    cout<<isPalindrome(121)<<"\n";
    return 0;
}