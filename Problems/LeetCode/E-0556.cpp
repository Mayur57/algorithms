#include<bits/stdc++.h>

using namespace std;

vector<vector<int>> matrixReshape(vector<vector<int>> &mat, int r, int c) {
    int n = mat.size();
    int m = mat[0].size();

    if (n * m != r * c)
        return mat;

    vector<vector<int>> result(r, vector<int>(c, 0));

    for (int i = 0; i < r * c; i++) {
        result[i / c][i % c] = mat[i / m][i % m];
    }

    return result;
}