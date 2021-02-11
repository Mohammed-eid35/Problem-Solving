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

    string s;
    priority_queue<int> pq;
    vector<string> ans;
    int x, n; cin >> n;
    for(int i = 0; i < n; ++i) {
        cin >> s;
        if(s == "insert") {
            cin >> x;
            pq.push(x * -1);
            ans.push_back(s + " " + to_string(x));
        }
        else if(s == "removeMin") {
            if(!pq.empty())
                pq.pop();
            else
                ans.push_back("insert 1");
            ans.push_back(s);
        }
        else {
            cin >> x;
            while(!pq.empty() && (-1 * pq.top()) < x) {
                pq.pop();
                ans.push_back("removeMin");
            }
            if(pq.empty() || (-1 * pq.top()) > x) {
                ans.push_back("insert " + to_string(x));
				pq.push(-1 * x);
            }
            ans.push_back("getMin " + to_string(x));
        }
    }
    cout << ans.size() << '\n';
    for(auto a : ans)
        cout << a << '\n';

return 0;
}
