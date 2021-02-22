//:::: Alien :::://
// Muhammad Eid //
#include <bits/stdc++.h>
using namespace std;

void Mo35() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
}

bool isPrime(int n) {
    if (n < 2) return false;
    for (int i = 2; i * i <= n; ++i) {
        if (n % i == 0)
            return false;
    }
    return true;
}

int revN(int n) {
    int m = 0;
    while (n) {
        m = (m * 10) + (n % 10);
        n /= 10;
    }
    return m;
}

bool isEmirp(int n) {
    int rev = revN(n);
    return (rev != n && isPrime(rev));
}

int main() {  Mo35();

    int n;
    while (cin >> n) {
        if (isPrime(n)) {
            if (isEmirp(n))
                cout << n << " is emirp.";
            else
                cout << n << " is prime.";
        }
        else {
            cout << n << " is not prime.";
        }
        cout << '\n';
    }

return 0;
}
