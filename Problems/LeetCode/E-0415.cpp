#include<bits/stdc++.h>

using namespace std;

int main(){
    string num1 = "1000";
    string num2 = "1";
    string result = "";

    int i = num1.length() - 1;
    int j = num2.length() - 1;

    int carry=0;

    while(i>=0 || j>=0 || carry){
        int digit = 0;

        //Add digit from first num
        if(i>=0) {
            int val1 = num1[i] - '0';
            i--;
            digit += val1;
        }

        // Add digit from second num
        if(j>=0) {
            int val2 = num2[j] - '0';
            j--;
            digit += val2;
        }

        // Add carry
        digit += carry;

        //Generate next carry
        carry = digit / 10;

        digit = digit % 10;

        // Append to result
        result += digit + '0';
    }

    cout<<"\n===========> "<<result;
}