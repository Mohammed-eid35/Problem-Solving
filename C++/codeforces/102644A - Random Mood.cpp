//:::: Alien :::://
// Muhammad Eid //
#include <bits/stdc++.h>
using namespace std;

void Mo35() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
}

typedef vector<vector<double>> Matrix;
typedef vector<double> Row;

Matrix matrixMultiply(Matrix &M1, Matrix &M2) {
    int r1 = M1.size(), c1 = M1[0].size();
    int r2 = M2.size(), c2 = M2[0].size();
    Matrix ret(r1, Row(c2));
    if (c1 != r2) { return ret; }
    for (int i = 0; i < r1; ++i) {
        for (int j = 0; j < c2; ++j) {
            for (int k = 0; k < c1; ++k) {
                ret[i][j] = (ret[i][j] + M1[i][k] * M2[k][j]);
            }
        }
    }
    return ret;
}

Matrix identityMatrix(int sz) {
    Matrix ret(sz, Row(sz));
    for (int i = 0; i < sz; ++i) {
        ret[i][i] = 1;
    }
    return ret;
}

Matrix matrixPower(Matrix M, int p) {
    Matrix ret = identityMatrix(M.size());
    while (p) {
        if (p & 1) { ret = matrixMultiply(ret, M); }
        M = matrixMultiply(M, M);
        p >>= 1;
    }
    return ret;
}

int main() {  Mo35();

    int n; double p;
    cin >> n >> p;
    cout << fixed << setprecision(10) << matrixPower({{1-p, p}, {p, 1-p}}, n)[0][0];

return 0;
}
