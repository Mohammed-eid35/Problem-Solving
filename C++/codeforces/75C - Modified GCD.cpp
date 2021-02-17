//:::: Alien :::://
// Muhammad Eid //
#include <bits/stdc++.h>
using namespace std;

int GCD(int a, int b) {
    return b ? GCD(b, a % b) : a;
}

int main() {

    set<int> st;
    st.insert(0);
    int a, b; scanf("%d %d", &a, &b);
    int G = GCD(a, b);
    for(int i = 1; i * i <= G; ++i) if(G % i == 0) {
        st.insert(i);
        st.insert(G / i);
    }
    int t; scanf("%d", &t);
    while(t--) {
        scanf("%d %d", &a, &b);
        int ans = *--st.upper_bound(b);
        printf("%d\n", a > ans ? -1 : ans);
    }

return 0;
}
