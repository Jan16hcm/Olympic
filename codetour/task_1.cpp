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
const int MOD = 1e9 + 7;

struct Point
{
    int first, second;
};


void solve() {
    int n; cin >> n;
    vector<int> arr(n);

    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    ll res = 1;
    sort(arr.begin(), arr.end());

    for (int i = n; i >= 1; i--) {
        auto index = lower_bound(arr.begin(), arr.end(), i);

        int count = arr.end() - index;
        int already = n - i;
        if (count - already <= 0) {
            res = 0;
            break;
        }
        // 1 2 3
        res = (res * (count - already)) % MOD;
        
    }
    //     n!
    // / k!(n - k)!
    cout << res;
}

signed main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

    // int testcases; cin >> testcases;
    // while(testcases--) solve();

    solve();

}