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

    deque<char> s1, s2;
    char c;
    while(cin.get(c) && c != '\n')
        s1.push_back(c);
    while(cin.get(c) && c != '\n')
        s2.push_back(c);
    while(!s1.empty() && !s2.empty() && s1.front() == s2.front())
        s1.pop_front(), s2.pop_front();
    while(!s1.empty() && !s2.empty() && s1.back() == s2.back())
        s1.pop_back(), s2.pop_back();
    cout << s2.size();

return 0;
}
