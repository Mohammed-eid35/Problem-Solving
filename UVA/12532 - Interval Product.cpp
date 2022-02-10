/// Link : https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=3977
//:::: Alien :::://
// Muhammad Eid //
#include <bits/stdc++.h>
using namespace std;

void Mo35() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
}

int n, k;
vector<int> ar;

class SegmentTree {
private:
    vector<int> tree;

public:
    SegmentTree(int sz) {
        tree = vector<int> (sz * 4);
        Build(1, 1, n);
    }

    void Build(int node, int l, int r) {
        if(l == r) {
            tree[node] = ar[l];
            return;
        }

        int mid = (l + r) >> 1;
        int leftChild = node << 1;
        int rightChild = leftChild | 1;

        Build(leftChild, l, mid);
        Build(rightChild, mid+1, r);

        tree[node] = tree[leftChild] * tree[rightChild];
    }

    void Update(int idx, int val) {
        if(val > 0)
            val = 1;
        if(val < 0)
            val = -1;
        return Update(1, 1, n, idx, val);
    }
    void Update(int node, int l, int r, int idx, int val) {
        if(l == r) {
            tree[node] = val;
            return;
        }

        int mid = (l + r) >> 1;
        int leftChild = node << 1;
        int rightChild = leftChild | 1;

        if(idx <= mid)
            Update(leftChild, l, mid, idx, val);
        else
            Update(rightChild, mid+1, r, idx, val);

        tree[node] = tree[leftChild] * tree[rightChild];
    }

    char Query(int s, int e) {
        int q = Query(1, 1, n, s, e);

        if(q != 0)
            return (q > 0 ? '+' : '-');
        return '0';
    }
    int Query(int node, int l, int r, int s, int e) {
        if(s <= l && e >= r)
            return tree[node];

        if(l > e || s > r)
            return 1;

        int mid = (l + r) >> 1;
        int leftChild = node << 1;
        int rightChild = leftChild | 1;

        return Query(leftChild, l, mid, s, e) * Query(rightChild, mid+1, r, s, e);
    }
};

void test() {
    ar = vector<int> (n + 5);
    for(int i=1; i<=n; ++i) {
        cin >> ar[i];
        if(ar[i] > 0)
            ar[i] = 1;
        if(ar[i] < 0)
            ar[i] = -1;
    }

    SegmentTree sTree(n + 5);

    char c; int x, y;
    while(k--) {
        cin >> c >> x >> y;
        if(c == 'C')
            sTree.Update(x, y);
        else
            cout << sTree.Query(x, y);
    }
    cout << '\n';
}

int main() {  Mo35();

    while(cin >> n >> k)
        test();

return 0;
}
