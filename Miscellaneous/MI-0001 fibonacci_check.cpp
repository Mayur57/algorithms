/// For a given input positive integer
/// Check whether the number appears in
/// the Fibonacci series.


#include<bits/stdc++.h>

using namespace std;

int fibonaki(int n) {
    if (n==0)
        return 0;
    if(n==1)
        return 1;
    return fibonaki(n - 1) + fibonaki(n - 2);
}

bool isFibo(int input) {
    int n = 0;
    vector<int> arrayFibo;

    while (fibonaki(n) <= input) {
        arrayFibo.push_back(fibonaki(n));
        n++;
    }

    return arrayFibo[arrayFibo.size() - 1] == input;
}

int main() {
    isFibo(5) ? cout << "IS FIBO\n" : cout << "IS NOT FIBO\n";
    return 0;
}