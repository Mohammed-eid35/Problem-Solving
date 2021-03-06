//:::: Alien :::://
// Muhammad Eid //
#include <bits/stdc++.h>
using namespace std;

void Mo35() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
}

typedef long long LL;
typedef vector<vector<LL>> VVI;
const LL MOD = 1000000007;

VVI matrixMultiply(VVI &M1, VVI &M2) {
    int r1 = M1.size(), c1 = M1[0].size();
    int r2 = M2.size(), c2 = M2[0].size();
    VVI ret(r1, vector<LL>(c2));
    if (c1 != r2) { return ret; }
    for (int i = 0; i < r1; ++i) {
        for (int j = 0; j < c2; ++j) {
            for (int k = 0; k < c1; ++k) {
                ret[i][j] = (ret[i][j] + M1[i][k] * M2[k][j]) % MOD;
            }
        }
    }
    return ret;
}

VVI identityMatrix(int sz) {
    VVI ret(sz, vector<LL>(sz));
    for (int i = 0; i < sz; ++i) {
        ret[i][i] = 1;
    }
    return ret;
}

VVI matrixPower(VVI M, LL p) {
    VVI ret = identityMatrix(M.size());
    while (p) {
        if (p & 1) { ret = matrixMultiply(ret, M); }
        M = matrixMultiply(M, M);
        p >>= 1;
    }
    return ret;
}

int main() {  Mo35();

    LL n; cin >> n;
    VVI A = matrixPower({{0, 1}, {1, 1}}, n), B = {{0}, {1}};
    cout << matrixMultiply(A, B)[0][0];

return 0;
}
