/// Link : https://onlinejudge.org/index.php?option=onlinejudge&page=show_problem&problem=3238
//:::: Alien :::://
// Muhammad Eid //
#include <bits/stdc++.h>
using namespace std;

void Mo35() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
}

const int N = 2e5 + 5;
int n;
int ar[N], tree[N << 1];

void buildTree(int node, int l, int r) {
    if(l == r) {
        tree[node] = ar[l];
        return;
    }

    int mid = (l + r) >> 1;
    int leftChild = node << 1;
    int rightChild = leftChild + 1;

    buildTree(leftChild, l, mid);
    buildTree(rightChild, mid + 1, r);

    tree[node] = tree[leftChild] + tree[rightChild];
}

void updateTree(int node, int l, int r, int idx, int val) {
    if(l == r) {
        tree[node] = val;
        return;
    }

    int mid = (l + r) >> 1;
    int leftChild = node << 1;
    int rightChild = leftChild + 1;

    if(idx <= mid)
        updateTree(leftChild, l, mid, idx, val);
    else
        updateTree(rightChild, mid+1, r, idx, val);

    tree[node] = tree[leftChild] + tree[rightChild];
}

int getValue(int node, int l, int r, int s, int e) {
    if(l >= s && e >= r)
        return tree[node];

    if(l > e || r < s)
        return 0;

    int mid = (l + r) >> 1;
    int leftChild = node << 1;
    int rightChild = leftChild | 1;

    return getValue(leftChild, l, mid, s, e) + getValue(rightChild, mid+1, r, s, e);
}

void test() {
    for(int i=1; i<=n; ++i)
        cin >> ar[i];

    buildTree(1, 1, n);
    string q; int a, b;
    while(cin >> q) {
        if(q[0] == 'E')
            return;

        cin >> a >> b;
        if(q[0] == 'M')
            cout << getValue(1, 1, n, a, b) << '\n';
        else
            updateTree(1, 1, n, a, b);
    }
}

int main() {  Mo35();

    int caseNumber = 0;
    while(cin >> n && n) {
        if(caseNumber)
            cout << '\n';
        cout << "Case " << ++caseNumber << ":\n";
        test();
    }

return 0;
}
