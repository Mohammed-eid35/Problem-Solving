// Author : Belal Moawad

#include<bits/stdc++.h>
#include<ext/numeric>

#define FAST ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0);
using namespace std;
using namespace __gnu_cxx;
#define int long long
#define double long double
#define F first
#define S second
typedef vector<int> vi;
typedef vector<vi> vvi;
typedef pair<int, int> pii;
typedef bitset<70> MASK;
const int N = 1ll << 60, OO = 1e10;
//\\//\\//\\//\\//\\//\\//\\//\\//\\//\\//\\//\\//\\//\\//|

void doWork() {
    int n; cin >> n;
    vi v(n);
    for (int i = 0; i < n; ++i) cin >> v[i];
    sort(v.begin(), v.end());
    int ans = 0;
    for (int i = 0; i < n; i++) {
        if(i + 5 < n && v[i + 5] - v[i] <= 1000) ans++, i += 5;
    }
    cout << ans << '\n';
}

int32_t main() {
    freopen("overcode.in", "r", stdin);
    FAST
    int tc = 1;
    cin >> tc;
    while (tc--) doWork();
}