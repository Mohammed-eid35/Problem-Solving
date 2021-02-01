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

    int days; cin >> days;
    int years = days / 365;
    days -= years * 365;
    int months = days / 30;
    days -= months * 30;
    cout << years << " years\n";
    cout << months << " months\n";
    cout << days << " days";

return 0;
}
