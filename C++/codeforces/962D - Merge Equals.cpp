//:::: Alien :::://
// Muhammad Eid //
#include <bits/stdc++.h>
using namespace std;

void Mo35() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
}

const int N = 150005;
long long ar[N];
map<long long, int> mp;

int main() {  Mo35();

    int n; cin >> n;
	int ans = n;
	for(int i = 1; i <= n; ++i){
        cin >> ar[i];
		while(mp[ar[i]]) {
			ar[mp[ar[i]]] = 0;
			mp[ar[i]] = 0;
			ar[i] <<= 1;
			ans--;
		}
		mp[ar[i]] = i;
	}
	cout << ans << '\n';
	for(int i = 1; i <= n; ++i)
	  if(ar[i])
            cout << ar[i] << ' ';

return 0;
}
