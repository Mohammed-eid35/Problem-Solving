//:::: Alien :::://
// Muhammad Eid //
#include <bits/stdc++.h>
using namespace std;

void Mo35() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
}

string s;
int sz;
long long mem[105][5][5][5];

bool isVowel(char c) {
    for (auto ch : "AEIOU") if (ch == c) {
        return true;
    }
    return false;
}

long long dp(int idx, int c, int v, bool l) {
    if (c > 2 || v > 2) return 0;
    if (idx == sz) return l;

    long long &ret = mem[idx][c][v][l];
    if (~ret) return ret;

    if (s[idx] != '_') {
        bool L = (l | (s[idx] == 'L')), V = isVowel(s[idx]);
        return ret = dp(idx + 1, !V * c + !V, V * v + V, L);
    }

    ret = 0;
    for (char ch = 'A'; ch <= 'Z'; ++ch) {
        bool L = (l | (ch == 'L')), V = isVowel(ch);
        ret += dp(idx + 1, !V * c + !V, V * v + V, L);
    }

    return ret;
}

void init() {
    sz = s.size();
    memset(mem, -1, sizeof(mem));
}

int main() {  Mo35();

    cin >> s;
    init();
    cout << dp(0, 0, 0, false);

return 0;
}
