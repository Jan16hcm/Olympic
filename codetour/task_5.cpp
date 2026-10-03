#include <bits/stdc++.h>
#include <iostream>
#include <climits>
#include <queue>

using namespace std;

#define ll long long
#define fi first
#define se second
#define pb push_back
const ll max_VAL = INT_MAX;
const ll min_VAL = INT_MIN;

struct Point
{
    int first, second;
};


void solve() {
    ll n;
    int k;
    cin >> n >> k;

    ll total = n * k;
    if (total % 2 != 0) {
        cout << 0;
        return;
    }
    
    ll count = 1, nk = 1;
    for (int i = 1; i <= 16; i++) {
        if (i <= 62) {
            nk *= i;
        }
        count *= i;
    }
    // 64! / 2! (62)!
    // (n!)
    // k!(n - k)!
    cout << 64 / (2*(nk));

}

signed main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

    // int testcases; cin >> testcases;
    // while(testcases--) solve();

    solve();

}