//:::: Alien :::://
// Muhammad Eid //
#include <bits/stdc++.h>
using namespace std;

void Mo35() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
}

string grid[] = {"123", "456", "789", ".0."};
set<int> nums;

bool valid(int x, int y) {
    return x >= 0 && x < 4 && y >= 0 && y < 3;
}

void can(int x, int y, int num) {
    if(num > 300)
        return;

    nums.insert(num);

    can(x, y, (num * 10) + (grid[x][y] - '0'));

    if(valid(x + 1, y) && grid[x+1][y] != '.') {
        can(x + 1, y, (num * 10) + (grid[x+1][y] - '0'));
        can(x + 1, y, num);
    }
    if(valid(x, y + 1) && grid[x][y+1] != '.') {
        can(x, y + 1, (num * 10) + (grid[x][y+1] - '0'));
        can(x, y + 1, num);
    }
}

void test() {
    int k; cin >> k;
    int mn = 2e9, val = -1;
    for(auto num : nums) {
        if(mn > abs(num - k)) {
            val = num;
            mn = abs(num - k);
        }
    }
    cout << val << '\n';
}

int main() {  Mo35();

    for(int i = 0; i < 3; ++i)
        for(int j = 0; j < 3; ++j)
            can(i, j, grid[i][j] - '0');

    int t; cin >> t;
    while(t--) test();

return 0;
}
