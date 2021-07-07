#include <bits/stdc++.h>

using namespace std;

int minSetSize(vector<int> &arr)
{
    unordered_map<int, int> maps;
    int countingInt = 0;
    int counter = 0;
    for (int i : arr)
        maps[i]++;

    // cout << "\n------------------------\n";

    // for (auto i = maps.begin(); i != maps.end(); ++i) {
    //     cout << i->first << "\t" << i->second << "\n";
    // }

    // cout << "\n------------------------\n";

    vector<int> freqs;
    for (auto i = maps.begin(); i != maps.end(); ++i)
        freqs.push_back(i->second);

    sort(freqs.begin(), freqs.end());

    // for (auto i : freqs)
    //     cout << i << "\n";

    int size = arr.size() / 2;
    int removed = 0;
    int result = 0;
    int i = freqs.size() - 1;

    while (removed < size) {
        result++;
        removed += freqs[i--];
    }

    // cout << "\n------------------------\n";
    // cout << result;
    
    return result;
}

int main()
{
    vector<int> nums{9, 77, 63, 22, 92, 9, 14, 54, 8, 38, 18, 19, 38, 68, 58, 19};
    cout << minSetSize(nums);
    return 0;
}