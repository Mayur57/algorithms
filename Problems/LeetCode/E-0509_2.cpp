#include <bits/stdc++.h>

using namespace std;

class Fibo
{
public:
    int fib(int n)
    {
        if (n == 0)
            return 0;
        if (n == 1)
            return 1;
        return fib(n - 1) + fib(n - 2);
    }
};

int main()
{
    Fibo f;
    cout << f.fibo(6) << "\n";
    return 0;
}