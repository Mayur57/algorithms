#include<bits/stdc++.h>

using namespace std;

vector<vector<int>> matrixReshape(vector<vector<int>> &mat, int r, int c) {
    int n = mat.size();
    int m = mat[0].size();

    if (n*m != r*c)
        return mat;

    vector<vector<int>> result(r, vector<int>(c, 0));

    for (int i = 0; i < r * c; i++) {
        result[i / c][i % c] = mat[i / m][i % m];
    }

    for (auto oyoy : result)
    {
        for(auto heh : oyoy) {
            cout << oyoy[heh] << "\t";
        }
        cout << "\n";
    }

    return result;
}

int main() {
    vector<vector<int>> input{{1,0}, {0,4}};
    // int n = input.size(), m = input[0].size();
    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 0; j < m; j++)
    //     {
    //         cout << input[i][j]<<"\n";
    //     }
    // }
    matrixReshape(input, 1, 4);
    return 0;
}
