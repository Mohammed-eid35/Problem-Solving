//:::: Alien :::://
// Muhammad Eid //
#include <bits/stdc++.h>
using namespace std;

void Mo35() {
//    ios_base::sync_with_stdio(false);
//    cin.tie(nullptr);
//    cout.tie(nullptr);

#ifndef ONLINE_JUDGE
    freopen("input.txt", "rt", stdin);
    freopen("output.txt", "wt", stdout);
#endif
}

const int N = 3e4 + 5, SQ = 317;
int bit[N];
int n;
char str[N][25];

int get(int pos) {
    int ret = 0;
    for (++pos; pos > 0; pos -= pos & (-pos)) {
        ret += bit[pos];
    }
    return ret;
}

void update(int pos) {
    for (++pos; pos <= N; pos += pos & (-pos)) {
        bit[pos]++;
    }
}

void test() {
    scanf("%d", &n);
    map<string, int> mp;
    for (int i = 0; i < n; ++i) {
        scanf(" %s", str[i]);
    }
    char tmp[25];
    for (int i = 0; i < n; ++i) {
        scanf(" %s", tmp);
        mp[tmp] = i;
    }
    memset(bit, 0, sizeof(bit));
    int res = 0, x;
    for (int i = n-1 ; i >= 0 ; --i) {
        x = mp[str[i]];
        res += get(x);
        update(x);
    }
    printf("%d\n", res);
}

int main() {  Mo35();

    int t;
    scanf("%d", &t);
    while (t--) {
        test();
    }

return 0;
}
