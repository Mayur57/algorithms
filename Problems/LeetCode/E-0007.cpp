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

int main() {
    cout<<reverse(1534236469)<<"\n";
    return 0;
}