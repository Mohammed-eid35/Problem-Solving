//:::: Alien :::://
// Muhammad Eid //
#include <bits/stdc++.h>
using namespace std;

void Mo35() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
}

typedef long long ll;

const int N = 3e1 + 5;
int n;
ll mem[N];

ll dp(int x) {
    if(x < 0) return 0;
    if(!x) return 1;

    ll &ret = mem[x];
    if(~ret) return ret;

    ret = dp(x - 2);
    for(int i = 2; i <= x; i += 2) {
        ret += (dp(x - i) << 1);
    }

    return ret;
}

void test() {
    memset(mem, -1, sizeof(mem));
    cout << dp(n)  << '\n';
}

int main() {  Mo35();

    while(cin >> n && (~n)) {
        test();
    }

return 0;
}
