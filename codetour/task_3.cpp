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
int max_team = 0;

void solve() {
    ll n, total_strong, max_diff; cin >> n >> total_strong >> max_diff;
    multiset<ll> ms;
    

    for (int i = 0; i < n; i++) {
        ll num; cin >> num;
        ms.insert(num);
    }

    while(ms.size() >= 2) {
        auto x = ms.begin();
        ll strong = *x;
        ms.erase(x);

        ll need = total_strong - strong;

        auto need_per = ms.lower_bound(need);

        if (need_per != ms.end() && *need_per - strong <= max_diff) {
            max_team++;
            ms.erase(need_per);
        }
    }

    cout << max_team;
}

signed main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

    // int testcases; cin >> testcases;
    // while(testcases--) solve();

    solve();

}