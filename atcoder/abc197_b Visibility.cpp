//:::: Alien :::://
// Muhammad Eid //
#include <bits/stdc++.h>
using namespace std;

void Mo35() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
}

int main() {  Mo35();

    int h, w, x, y;
    cin >> h >> w >> x >> y;
    string s[h];
    for (int i = 0; i < h; ++i)
        cin >> s[i];
    int dx = x - 1, dy = y - 1;
    int ans = (s[dx][dy] == '.');
    while (++dx < h && s[dx][dy] == '.')
        ans++;
    dx = x - 1, dy = y - 1;
    while (--dx >= 0 && s[dx][dy] == '.')
        ans++;
    dx = x - 1, dy = y - 1;
    while (++dy < w && s[dx][dy] == '.')
        ans++;
    dx = x - 1, dy = y - 1;
    while (--dy >= 0 && s[dx][dy] == '.')
        ans++;
    cout << ans;

return 0;
}
