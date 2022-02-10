//:::: Alien :::://
// Muhammad Eid //
#include <bits/stdc++.h>
using namespace std;

void Mo35() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
}

const int MOD = 1e9 + 9;

struct Matrix {
    vector<vector<long long>> matrix;
    int rows = 0, cols = 0;

    Matrix (int _rows, int _cols) {
        rows = _rows;
        cols = _cols;
        matrix = vector<vector<long long>>(rows, vector<long long>(cols));
    }

    Matrix (vector<vector<long long>> _matrix) {
        matrix = _matrix;
        rows = matrix.size();
        cols = matrix[0].size();
    }

    void scanMatrix() {
        for (int i = 0; i < rows; ++i)
            for (int j = 0; j < cols; ++j)
                cin >> matrix[i][j];
    }

    void printMatrix() {
        for (int i = 0; i < rows; ++i) {
            for (int j = 0; j < cols; ++j)
                cout << matrix[i][j] << ' ';
            cout << '\n';
        }
    }

    void identityMatrix() {
        for (int i = 0; i < rows; ++i)
            matrix[i][i] = 1;
    }

    Matrix operator* (Matrix other) {
        Matrix ret(rows, other.cols);
        if (cols != other.rows) return ret;

        for (int i = 0; i < rows; ++i)
            for (int j = 0; j < other.cols; ++j)
                for (int k = 0; k < cols; ++k)
                    ret.matrix[i][j] = (ret.matrix[i][j] + matrix[i][k] * other.matrix[k][j]) % MOD;

        return ret;
    }
};

Matrix matrixPower(Matrix mat, long long p) {
    Matrix ret(mat.rows, mat.cols);
    ret.identityMatrix();
    while (p) {
        if (p & 1) ret = ret * mat;
        mat = mat * mat;
        p >>= 1;
    }
    return ret;
}

int main() {  Mo35();

    long long n;
    while (cin >> n && n) {
        Matrix mat({{0, 0, 1}, {1, 0, 1}, {0, 1, 1}});
        mat = matrixPower(mat, n - 1);
        cout << (mat.matrix[1][0] + 2 * mat.matrix[2][0]) % MOD << '\n';
    }

return 0;
}
