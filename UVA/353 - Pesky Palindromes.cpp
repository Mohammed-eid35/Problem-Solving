//:::: Alien :::://
// Muhammad Eid //
#include <bits/stdc++.h>
using namespace std;

char s[85];

bool palindrome(string st) {
    int sz = st.size();

    for(int i = 0; i < sz / 2; ++i)
        if(st[i] != st[sz-i-1])
            return false;

    return true;
}

void test() {
    int sz = strlen(s);
    set<string> st;
    for(int i = 0; i < sz; ++i) {
        string sub = "";
        for(int j = i; j < sz; ++j) {
            sub += s[j];
            if(palindrome(sub)) st.insert(sub);
        }
    }
    printf("The string \'%s\' contains %d palindromes.\n", s, st.size());
}

int main() {

    while(~scanf("%s", &s)) test();

return 0;
}
