#include<bits/stdc++.h>

using namespace std;

void matrix(vector<vector<int>> &matrix) {
    int result = 0;
    int r = matrix.size();
    int c = matrix[0].size();
    vector<int> temp;
    for (int i = 0; i < r * c; i++)
    {
        temp[i] = matrix[i / c][i % c];
    }
    for (int i = 0; i < r * c; i++)
    {
        cout<<temp[i]<<"\n";
    }
}

int main() {
    vector<vector<int>> mat{{2, 5, 9}, {2, 4, 5}, {4, 5, 2}};
    matrix(mat);
    return 0;
}