#include<bits/stdc++.h>

using namespace std;

class Fibo{
public:
    unordered_map<int, int> cache;
    int fibo(int i)
    {
        if(cache.find(i) != cache.end()) {
            auto itr = cache.find(i);
            return itr->second;
        }
        if(i == 0)
            return 0;
        if (i <= 2)
            return 1;
        cache[i] = fibo(i - 1) + fibo(i - 2);
        return fibo(i - 1) + fibo(i - 2);
    }
};

int main() {
    Fibo f;
    cout << f.fibo(6) << "\n";
    return 0;
}