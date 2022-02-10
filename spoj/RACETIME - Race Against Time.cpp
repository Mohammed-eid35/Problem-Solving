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

const int N = 1e5 + 5;
int ar[N], pre[N];
int n, sq;

void modify(int pos, int val) {
    int bID = pos / sq;
    int bST = bID * sq, bEN = min(n, bST + sq);
    int idx = lower_bound(pre + bST, pre + bEN, ar[pos]) - pre;
    ar[pos] = pre[idx] = val;
    while (idx > bST && pre[idx] < pre[idx - 1]) {
        swap(pre[idx], pre[idx - 1]);
        idx--;
    }
    while (idx < bEN - 1 && pre[idx] > pre[idx + 1]) {
        swap(pre[idx], pre[idx+1]);
        idx++;
    }
}

int query(int st, int en, int x) {
    int stB = st / sq, enB = en / sq, ret = 0;
    if (stB == enB) {
        for (int i = st; i <= en; ++i) {
            ret += (x >= ar[i]);
        }
        return ret;
    }
    for (int i = st; i < (stB + 1) * sq; ++i) {
        ret += (x >= ar[i]);
    }
    for (int i = enB * sq; i <= en; ++i) {
        ret += (x >= ar[i]);
    }
    for (int i = stB + 1; i < enB; ++i) {
        ret += upper_bound(pre + i * sq, pre + (i+1) * sq, x) - (pre + i * sq);
    }
    return ret;
}

void init() {
    for (int i = 0, j = 0; i < n; i += sq, ++j) {
        int k;
        for (k = 0; k < sq && k + i < n; ++k) {
            scanf("%d", ar + k + i);
            pre[k + i] = ar[k + i];
        }
        sort(pre + sq * j, pre + sq * j + k);
    }
}

int main() {  Mo35();

    int q;
    scanf("%d%d", &n, &q);
    sq = ceil(sqrt(n));
    init();
    char c;
    int st, en, idx, x;
    while (q--) {
        scanf(" %c", &c);
        if (c == 'C') {
            scanf("%d%d%d", &st, &en, &x);
            printf("%d\n", query(--st, --en, x));
        }
        else {
            scanf("%d%d", &idx, &x);
            modify(--idx, x);
        }
    }

return 0;
}
