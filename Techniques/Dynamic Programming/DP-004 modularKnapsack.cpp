#include <bits/stdc++.h>
#include <chrono>

using namespace std;
using std::chrono::duration_cast;
using std::chrono::high_resolution_clock;
using std::chrono::microseconds;

int cache[1000][1000];

void initCache() {
    memset(cache, -1, sizeof(cache));
}

int max(int a, int b) { return (a > b) ? a : b; }

int knapsackRecursive(vector<int> &values, vector<int> &weights, int capacity, int itemCount) {
    if (itemCount == 0 || capacity == 0)
        return 0;

    if (weights[itemCount - 1] <= capacity)
        return max(values[itemCount - 1] + knapsackRecursive(values, weights, capacity - weights[itemCount - 1], itemCount - 1), knapsackRecursive(values, weights, capacity, itemCount - 1));

    return knapsackRecursive(values, weights, capacity, itemCount - 1);
}

int knapsackMemoized(vector<int> &values, vector<int> &weights, int capacity, int itemCount) {
    if (itemCount == 0 || capacity == 0)
        return 0;

    if (cache[itemCount][capacity] != -1)
        return cache[itemCount][capacity];

    if (weights[itemCount - 1] <= capacity) {
        cache[itemCount][capacity] = max(values[itemCount - 1] + knapsackMemoized(values, weights, capacity - weights[itemCount - 1], itemCount - 1), knapsackMemoized(values, weights, capacity, itemCount - 1));
        return max(values[itemCount - 1] + knapsackMemoized(values, weights, capacity - weights[itemCount - 1], itemCount - 1), knapsackMemoized(values, weights, capacity, itemCount - 1));
    }
    else {
        cache[itemCount][capacity] = knapsackMemoized(values, weights, capacity, itemCount - 1);
        return knapsackMemoized(values, weights, capacity, itemCount - 1);
    }
}

int main() {
    // int cache[INT_MAX][INT_MAX];
    vector<int> weights{1, 3, 4, 5, 1, 3, 4, 5, 1, 3, 1, 3, 4, 5, 4, 5, 1, 3, 4, 5};
    vector<int> values{1, 4, 6, 7, 1, 3, 4, 5, 1, 3, 1, 3, 4, 5, 4, 5, 1, 3, 4, 5};
    int capacity = 40;
    int itemCount = weights.size();
    
    initCache();

    auto start1 = high_resolution_clock::now();
    cout << knapsackRecursive(values, weights, capacity, itemCount) << "\n"; // Expected ->
    auto stop1 = high_resolution_clock::now();

    auto start2 = high_resolution_clock::now();
    cout << knapsackMemoized(values, weights, capacity, itemCount) << "\n"; // Expected ->
    auto stop2 = high_resolution_clock::now();

    auto duration1 = duration_cast<microseconds>(stop1 - start1);
    auto duration2 = duration_cast<microseconds>(stop2 - start2);

    cout << "Recursive time: " << duration1.count() << " microseconds" << "\n";
    cout << "Dynamic time: " << duration2.count() << " microseconds" << "\n";

    return 0;
}