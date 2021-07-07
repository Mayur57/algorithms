#include<bits/stdc++.h>

using namespace std;

int countVowelPermutation(int n) {
    unsigned int a = 1, e = 1, i = 1, o = 1, u = 1, mod = 1000000007;
    while (--n) {
        unsigned int new_a = (e) % mod;
        unsigned int new_e = (a + i) % mod;
        unsigned int new_i = (a + e + o + u) % mod;
        unsigned int new_o = (i + u) % mod;
        unsigned int new_u = (a) % mod;
        a = new_a, e = new_e, o = new_o, i = new_i, u = new_u;
    }

    return (a + e + i + o + u) % mod;
}

int main() {
    cout << countVowelPermutation(44);
    return 0;
}