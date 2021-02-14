//:::: Alien :::://
// Muhammad Eid //
#include <bits/stdc++.h>
using namespace std;

void Mo35() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
}

string s1, s2;
int sz1, sz2;
int mem[105][105];

int dp(int i1, int i2) {
    if(i1 == sz1 && i2 == sz2) return 0;
    if(i1 == sz1) return sz2 - i2;
    if(i2 == sz2) return sz1 - i1;

    int& ret = mem[i1][i2];
    if(~ret) return ret;

    if(s1[i1] == s2[i2]) return ret = dp(i1 + 1, i2 + 1);

    return ret = 1 + min(dp(i1 + 1, i2), dp(i1, i2 + 1));
}

void getPath(int i1, int i2) {
    if(i1 == sz1 && i2 == sz2) return;
    if(i1 == sz1) {
        while(i2 != sz2) cout << s2[i2++];
        return;
    }
    if(i2 == sz2) {
        while(i1 != sz1) cout << s1[i1++];
        return;
    }
    int& ret = mem[i1][i2];
    if(s1[i1] == s2[i2]) {
        cout << s1[i1];
        getPath(i1 + 1, i2 + 1);
    }
    else if(ret == 1 + dp(i1 + 1, i2)) {
        cout << s1[i1];
        getPath(i1 + 1, i2);
    }
    else if(ret == 1 + dp(i1, i2 + 1)) {
        cout << s2[i2];
        getPath(i1, i2 + 1);
    }
}

void test() {
    sz1 = s1.size();
    sz2 = s2.size();
    memset(mem, -1, sizeof(mem));
    int ret = dp(0, 0);
    getPath(0, 0);
    cout << '\n';
}

int main() {  Mo35();

    while(cin >> s1 >> s2) test();

return 0;
}
