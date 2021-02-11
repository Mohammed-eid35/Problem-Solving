//:::: Alien :::://
// Muhammad Eid //
#include <bits/stdc++.h>
using namespace std;

void Mo35() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
}

void test(int n) {
    stack<int> st;
    queue<int> qu;
    priority_queue<int> pq;
    bool fst = true, fqu = true, fpq = true;
    int x, y;
    while(n--) {
        cin >> x >>  y;
        if(x == 1) {
            if(fst) st.push(y);
            if(fqu) qu.push(y);
            if(fpq) pq.push(y);
        }
        else {
            if(fst) {
                if(st.empty() || st.top() != y)
                    fst = false;
                else
                    st.pop();
            }
            if(fqu) {
                if(qu.empty() || qu.front() != y)
                    fqu = false;
                else
                    qu.pop();
            }
            if(fpq) {
                if(pq.empty() || pq.top() != y)
                    fpq = false;
                else
                    pq.pop();
            }
        }
    }
    if((fst && fqu && fpq) || (fst && fqu) || (fst && fpq) || (fqu && fpq))
        cout << "not sure";
    else if(fst)
        cout << "stack";
    else if(fqu)
        cout << "queue";
    else if(fpq)
        cout << "priority queue";
    else
        cout << "impossible";
    cout << '\n';
}

int main() {  Mo35();

    int n;
    while(cin >> n)
        test(n);

return 0;
}
