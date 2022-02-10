//:::: Alien :::://
// Muhammad Eid //
#include <bits/stdc++.h>
using namespace std;

void Mo35() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
}

int n;
vector<int> vc;

int solve(int idx, int pre) {
    if(idx == n) return 0;

    if(pre != -1 && vc[idx] <= vc[pre])
        return solve(idx + 1, pre);

    return max(1 + solve(idx + 1, idx), solve(idx + 1, pre));
}

int main() {  Mo35();

    cin >> n;
    vc = vector<int> (n + 5);
    for(int i = 0; i < n; ++i)
        cin >> vc[i];
    cout << solve(0, -1);

return 0;
}
