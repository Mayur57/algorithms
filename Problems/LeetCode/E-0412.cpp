#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n = 16;
    vector<string> result(n);
    for (int i = 0; i < n; i++)
    {
        result[i] = to_string(i+1);
    }
    for (int i = 2; i <= n; i+=3)
    {
        result[i] = "Fizz";
    }
    for (int i = 4; i <= n; i+=5)
    {
        result[i] = "Buzz";
    }
    for (int i = 14; i <= n; i+=15)
    {
        result[i] = "FizzBuzz";
    }


    for (int i = 0; i < result.size(); i++)
    {
        cout <<i+1<<"  -->  " <<result[i] << "\n";
    }

    return 0;
}