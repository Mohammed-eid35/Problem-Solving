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

    double x, y; cin >> x >> y;
    if(x == 0 && y != 0) cout << "Eixo Y";
	else if(y == 0 && x != 0) cout << "Eixo X";
	else if(x > 0 && y > 0) cout << "Q1";
	else if(x < 0 && y > 0) cout << "Q2";
	else if(x < 0 && y < 0) cout << "Q3";
	else if(x > 0 && y < 0) cout << "Q4";
	else cout << "Origem";

return 0;
}
