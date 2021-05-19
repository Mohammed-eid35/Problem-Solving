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

const int N = (1 << 18), OO = 1e9;
int ar[N];
int n;
struct SegmentTree {
    struct Node {
        int fmx = -OO, smx = -OO;

        void set(int x0, int x1, int x2, int x3) {
            int ar[] = {x0, x1, x2, x3};
            sort(ar, ar+4);
            fmx = ar[3];
            smx = ar[2]; 
        }
    } tree[N];

    void build(int ni = 0, int ns = 0, int ne = n-1) {
        if (ns == ne) {
            tree[ni].fmx = ar[ns];
            return;
        }
        int lf = ni * 2 + 1, rt = lf + 1, mid = ns + (ne - ns) / 2;
        build(lf, ns, mid);
        build(rt, mid+1, ne);
        tree[ni].set(tree[lf].fmx, tree[rt].fmx, tree[lf].smx, tree[rt].smx);
    }

    void update(int pos, int val, int ni = 0, int ns = 0, int ne = n-1) {
        if (ne < pos || ns > pos) {
            return;
        }
        if (ns == ne) {
            tree[ni].fmx = val;
            return;
        }
        int lf = ni * 2 + 1, rt = lf + 1, mid = ns + (ne - ns) / 2;
        update(pos, val, lf, ns, mid);
        update(pos, val, rt, mid+1, ne);
        tree[ni].set(tree[lf].fmx, tree[rt].fmx, tree[lf].smx, tree[rt].smx);
    }

    Node query(int qs, int qe, int ni, int ns, int ne) {
        if (ns > qe || ne < qs) {
            return {-OO, -OO};
        }
        if (ns >= qs && ne <= qe) {
            return tree[ni];
        }
        int lf = ni * 2 + 1, rt = lf + 1, mid = ns + (ne - ns) / 2;
        Node L = query(qs, qe, lf, ns, mid);
        Node R = query(qs, qe, rt, mid+1, ne);
        if (L.fmx != -OO && R.fmx != -OO) {
            Node ret;
            ret.set(L.fmx, R.fmx, L.smx, R.smx);
            return ret;
        }
        else if (L.fmx != -OO) {
            return L;
        }
        else {
            return R;
        }
    }
    int query(int qs, int qe) {
        Node ret = query(qs, qe, 0, 0, n-1);
        return ret.fmx + ret.smx;
    }
} segTree;

int main() {  Mo35();
    
    scanf("%d", &n);
    for (int i = 0; i < n; ++i) {
        scanf("%d", ar + i);
    }
    segTree.build();
    int q;
    scanf("%d", &q);
    char typ;
    int x, y;
    while (q--) {
        scanf(" %c%d%d", &typ, &x, &y);
        if (typ == 'Q') {
            printf("%d\n", segTree.query(--x, --y));
        }
        else {
            segTree.update(--x, y);
        }
    }
 
return 0;
}
