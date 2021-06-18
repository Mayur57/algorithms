#include<bits/stdc++.h>
#include<unordered_map>

using namespace std;

int romanToInt(string s) {

    // Map romans to int
    unordered_map<char, int> values;
    values.insert(make_pair('I' , 1));
    values.insert(make_pair('V' , 5));
    values.insert(make_pair('X' , 10));
    values.insert(make_pair('L' , 50));
    values.insert(make_pair('C' , 100));
    values.insert(make_pair('D' , 500));
    values.insert(make_pair('M' , 1000));

    int sum = values[s.back()];

    for(int i=s.length()-2; i>=0; i--) {
        if(values[s[i]] < values[s[i+1]]) {
            sum -= values[s[i]];
        }
        else {
            sum += values[s[i]];
        }
    }
                                   
    return sum;
}

int main() {
    string s = "";
    cout<<romanToInt(s);
    return 0;
}


// I SPENT WAY TOO MUCH TIME ON THIS
// QUESTION GODDAMNIT HOW IS THIS EASY???
