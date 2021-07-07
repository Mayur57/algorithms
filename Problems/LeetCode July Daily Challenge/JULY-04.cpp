#include<bits/stdc++.h>
#define ui unsigned int

using namespace std;

  int countVowelPermutation(int n) {
    unsigned int a = 1, e = 1, i = 1, o = 1, u = 1, mod = 1000000007;
    while(--n){
      ui new_a = (e)%mod;
      ui new_e = (a + i)%mod;
      ui new_i = (a+e+o+u)%mod;
      ui new_o = (i+u)%mod;
      ui new_u = (a)%mod;
      a = new_a, e = new_e, o = new_o, i = new_i, u = new_u;
    }
    
    return (a + e + i + o + u)%mod;
  }

int main() {
    cout<<countVowelPermutation(5)<<"\n";
    return 0;
}