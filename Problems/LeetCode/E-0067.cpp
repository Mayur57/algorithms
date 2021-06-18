#include<bits/stdc++.h>

using namespace std;

string addBinary(string a, string b) {
    int carry=0, sum;
    string result;

    int len_a = a.size()-1;
    int len_b = b.size()-1;

    while(len_a>=0 || len_b>=0) {
        sum = carry;
        if(len_a>=0) sum += a[len_a] - '0';
        if(len_b>=0) sum += b[len_b] - '0';
        result.insert(0, to_string(sum%2));

        carry = sum / 2;

        len_a--;
        len_b--;
    }


    if(carry != 0) result.insert(0, "1");

    return result;
}

int main() {
    string a = "101";
    string b = "1";

    cout<<addBinary(a, b);

    return 0;
}