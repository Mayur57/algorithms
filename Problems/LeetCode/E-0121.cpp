#include <bits/stdc++.h>
#define pb push_back

using namespace std;

int main()
{
    vector<int> prices;
    prices.pb(7);
    prices.pb(1);
    prices.pb(5);
    prices.pb(3);
    prices.pb(6);
    prices.pb(4);

    int profit=0;
    int buy=INT_MAX;

    for(int i=0; i<prices.size(); i++) {
        if(prices[i] < buy) buy = prices[i];
        if(profit < prices[i] - buy) profit = prices[i] - buy;
    }

    cout<<"Profit:"<<profit<<"/n";

    // Expected answer is 5

    return 0;
}