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

    string expression; cin >> expression;
    int i, sz = expression.size();
    string num1 = "", num2 = "";
    char op;
    for(i=0; i<sz; ++i) {
        if(expression[i] >= '0' && expression[i] <= '9')
            num1 += expression[i];
        else {
            op = expression[i];
            i++;
            break;
        }
    }
    for(; i<sz; ++i)
        num2 += expression[i];

    if(op == '+') cout << stoi(num1) + stoi(num2);
    else if(op == '-') cout << stoi(num1) - stoi(num2);
    else if(op == '*') cout << stoi(num1) * stoi(num2);
    else cout << stoi(num1) / stoi(num2);

return 0;
}
