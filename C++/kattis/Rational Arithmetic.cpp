//:::: Alien :::://
// Muhammad Eid //
#include <bits/stdc++.h>

long long int GCD(long long int x, long long int y);

using namespace std;

void Mo35() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
}

long long GCD(long long a, long long b) {
    return b ? GCD(b, a % b) : a;
}

void test() {
    long long x1, x2, y1, y2;
    char op;
    cin >> x1 >> y1 >> op >> x2 >> y2;
    long long x, y;
    switch (op) {
        case '+':
            x = x1 * y2 + x2 * y1;
            y = y1 * y2;
            break;
        case '-':
            x = x1 * y2 - x2 * y1;
            y = y1 * y2;
            break;
        case '*':
            x = x1 * x2;
            y = y1 * y2;
            break;
        case '/':
            x = x1 * y2;
            y = y1 * x2;
            break;
    }
    long long g = GCD(x, y);
    x /= g;
    y /= g;
    if (y < 0) {
        x *= -1;
        y *= -1;
    }
    cout << x << " / " << y << '\n';
}

int main() {  Mo35();

    int t; cin >> t;
    while (t--) {
        test();
    }

return 0;
}
