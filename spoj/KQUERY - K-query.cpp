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

typedef vector<int> Node;
const int N = (1 << 16);
int ar[N];
int n;
struct segTree {
    Node tree[N];

    void build(int ni = 0, int ns = 0, int ne = n-1) {
        if (ns == ne) {
            tree[ni].push_back(ar[ns]);
            return;
        }
        int lf = ni * 2 + 1, rt = lf + 1, mid = ns + (ne - ns) / 2;
        build(lf , ns, mid);
        build(rt, mid+1, ne);
        tree[ni] = merge(tree[lf],  tree[rt]);
    }
    Node merge(const Node &lf, const Node &rt) {
        int i = 0, j = 0, k = 0, lfs = lf.size(), rts = rt.size();
        Node ret(lfs + rts);
        while (i < lfs && j < rts) {
            if (lf[i] < rt[j]) {
                ret[k++] = lf[i++];
            }
            else {
                ret[k++] = rt[j++];
            }
        }
        while (i < lfs) {
            ret[k++] = lf[i++];
        }
        while (j < rts) {
            ret[k++] = rt[j++];
        }
        return ret;
    }
    int get(int qs, int qe, int k, int ni = 0, int ns = 0, int ne = n-1) {
        if (ns > qe || ne < qs) {
            return 0;
        }
        if (ns >= qs && ne <= qe) {
            return tree[ni].end() - upper_bound(tree[ni].begin(), tree[ni].end(), k);
        }
        int lf = ni * 2 + 1, rt = lf + 1, mid = ns + (ne - ns) / 2;
        return get(qs, qe, k, lf, ns, mid) + get(qs, qe, k, rt, mid+1, ne);
    }
} tree;


int main() {  Mo35();

    scanf("%d", &n);
    for (int i = 0; i < n; ++i) {
        scanf("%d", ar + i);
    }
    tree.build();
    int q, l, r, k;
    scanf("%d", &q);
    while (q--) {
        scanf("%d %d %d", &l, &r, &k);
        printf("%d\n", tree.get(--l, --r, k));
    }

return 0;
}
