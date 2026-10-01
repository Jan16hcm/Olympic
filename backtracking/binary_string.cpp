#include <bits/stdc++.h>

using namespace std;

#define pb push_back

string str = "";
int n;

void backtrack(int pos) {
    if (pos > n) {
        cout << str << "\n";
        return;
    }

    for (char i = '0'; i <= '1'; i++) {
        str.pb(i);
        backtrack(pos + 1);
        str.pop_back();
    }
}

void solve() {

}

signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);

    cin >> n;
    backtrack(1);
}