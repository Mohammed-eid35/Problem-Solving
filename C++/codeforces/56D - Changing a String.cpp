//:::: Alien :::://
// Muhammad Eid //
#include <bits/stdc++.h>
using namespace std;

void Mo35() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
}

const int N = 1e3 + 5, OO = 2e9;
string s, t;
int dp[N][N], szS, szT;

int minChange(int idxS, int idxT) {
    if(idxS == szS && idxT == szT) return 0;
    if(idxS == szS) return szT - idxT;
    if(idxT == szT) return szS - idxS;

    int& ret = dp[idxS][idxT];
    if(~ret) return ret;

    ret = OO;
    if(s[idxS] == t[idxT]) ret = minChange(idxS+1, idxT+1);

    return ret = min(ret, 1+ min({minChange(idxS+1, idxT), minChange(idxS, idxT+1), minChange(idxS+1, idxT+1)}));
}

void printPath(int idxS, int idxT) {
    if(idxS == szS && idxT == szT) return;
    if(idxS == szS && idxT != szT) {
        cout << "INSERT " << idxT+1 << ' ' << t[idxT] << '\n';
        printPath(idxS, idxT+1);
        return;
    }
    if(idxT == szT && idxS != szS) {
        cout << "DELETE " << idxT+1 << '\n';
        printPath(idxS+1, idxT);
        return;
    }

    int& ret = dp[idxS][idxT];

    if(s[idxS] == t[idxT]) return printPath(idxS+1, idxT+1);

    if(ret == 1+ minChange(idxS, idxT+1)) {
        cout << "INSERT " << idxT+1 << ' ' <<  t[idxT] << '\n';
        printPath(idxS, idxT+1);
    }
    else if(ret == 1+ minChange(idxS+1, idxT+1)) {
        cout << "REPLACE " << idxT+1 << ' ' << t[idxT] << '\n';
        printPath(idxS+1, idxT+1);
    }
    else if(ret == 1+ minChange(idxS+1, idxT)) {
        cout << "DELETE " << idxT+1 << '\n';
        printPath(idxS+1, idxT);
    }
}

int main() { Mo35();

    cin >> s >> t;
    szS = s.size(); szT = t.size();
    memset(dp, -1, sizeof(dp));
    cout << minChange(0, 0) << '\n';
    printPath(0, 0);

return 0;
}
