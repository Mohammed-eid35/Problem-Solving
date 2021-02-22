//:::: Alien :::://
// Muhammad Eid //
#include <bits/stdc++.h>
using namespace std;

void Mo35() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
}

string word;

bool isPrime(int n) {
    if (n < 3) return true;
    for (int i = 2; i * i <= n; ++i) {
        if(n % i == 0)
            return false;
    }
    return true;
}

bool isPrime() {
    int sum = 0;
    for (auto w : word) {
        if(w >= 'a' && w <= 'z')
            sum += (w - 'a' + 1);
        else
            sum += (w - 'A' + 27);
    }

    return isPrime(sum);
}

int main() {  Mo35();

    while (cin >> word) {
        cout << (isPrime() ? "It is a prime word.\n" : "It is not a prime word.\n");
    }

return 0;
}
