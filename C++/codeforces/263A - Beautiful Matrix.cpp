/// Link : https://codeforces.com/contest/263/problem/A
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

    int a;
    for(int r=0; r<5; ++r)
        for(int c=0; c<5; ++c){
            cin >> a;
            if(a) 
              cout<< abs(r - 2) + abs(c - 2);
        }

return 0;
}
