#include <bits/stdc++.h>

using namespace std;
#define int long long
#define no "NO SOLUTION"

void solve() {
    int n; cin >> n;

    if (n == 2 || n == 3) {
        cout << no;
        return;
    }

    for (int i = 2; i <= n; i += 2) {
        cout << i << " ";
    }
    for (int i = 1; i <= n; i += 2) {
        cout << i << " ";
    }
}

signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    
    solve();

}