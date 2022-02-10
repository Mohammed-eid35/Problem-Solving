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

const int N = 1 << 18;
int ar[N], pre[N];
int n, q, sq;
struct BIT {
    int tree[N];
    void init() {
        memset(tree, 0, sizeof(tree));
    }
    void add(int pos, int val)
    {
        for (++pos ; pos <= N ; pos += (pos & (-pos))) {
            tree[pos - 1] += val;
        }
    }
    int get(int pos) {
        int ret = 0;
        for (++pos ; pos ; pos -= (pos & (-pos))) {
            ret += tree[pos - 1];
        }
        return ret;
    }
} bit;

int query(int st, int en, int x) {
    if (st > en) {
        return 0;
    }
    int stB = st / sq, enB = en / sq, ret = 0;
    if (stB == enB) {
        for (int i = st ; i <= en ; ++i) {
            ret += (ar[i] < x);
        }
        return ret;
    }
    for (int i = st ; i < (stB + 1) * sq ; ++i) {
        ret += (ar[i] < x);
    }
    for(int i = (enB * sq) ; i <= en ; ++i) {
        ret += (ar[i] < x);
    }
    for(int i = stB + 1 ; i < enB ; ++i) {
        ret += upper_bound(pre + (i * sq), pre + (i + 1) * sq, x-1) - (pre + (i * sq));
    }
    return ret;
}

void modify(int pos, int val) {
    int bId = pos / sq;
    int bSt = bId * sq;
    int bEn = min(n, bSt + sq);
    int idx = lower_bound(pre + bSt, pre + bEn, ar[pos]) - pre;
    ar[pos] = val;
    pre[idx] = val;
    while (idx > bSt && pre[idx - 1] > pre[idx]) {
        swap(pre[idx], pre[idx - 1]);
        idx--;
    }
    while(idx < bEn - 1 && pre[idx + 1] < pre[idx]) {
        swap(pre[idx], pre[idx + 1]);
        idx++;
    }
}

int main() {  Mo35();

    scanf("%d", &n);
    sq = ceil(sqrt(n));
    for (int i = 0, j = 0 ; i < n ; i += sq, ++j) {
        int k;
        for (k = 0 ; k < sq && k + i < n ; ++k) {
            scanf("%d", ar + i + k);
            pre[i + k] = ar[i + k];
        }
        sort(pre + sq * j, pre + sq * j + k);
    }
    long long inv = 0;
    for (int i = n-1; ~i; --i) {
        inv += bit.get(ar[i] - 1);
        bit.add(ar[i], 1);
    }
    scanf("%d", &q);
    while (q--) {
        int pos, val;
        scanf("%d%d", &pos, &val);
        pos--;
        inv -= query(pos + 1, n-1, ar[pos]);
        inv -= pos - query(0, pos-1, ar[pos]+1);

        modify(pos, val);
        ar[pos] = val;

        inv += query(pos + 1, n-1, ar[pos]);
        inv += pos - query(0, pos-1, ar[pos]+1);
        printf("%lld\n", inv);
    }

return 0;
}
