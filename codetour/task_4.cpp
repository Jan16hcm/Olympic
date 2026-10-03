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
    int n, target; cin >> n >> target;
    vector<ll> arr(n + 1, 1);
    vector<ll> len_index(n + 1, max_VAL);
    for(int i = 1; i <= n; i++) {
        cin >> arr[i];
    }

    for (int i = 1; i <= n; i++) {
        ll mul = arr[i], count = 1;
        for (int j = i + 1; j <= n; j++) {
            mul *= arr[j];
            count++;
            if (mul % target == 0) {
                // cout << mul << '\n';
                if (len_index[i] > count) {
                    len_index[i] = count;
                }
                if (len_index[j] > count) {
                    len_index[j] = count;
                }
            }
        }
    }

    for (int i = 1; i <= n; i++) {
        if (len_index[i] == max_VAL) {
            cout << -1 << ' ';
        } else {
            cout << len_index[i] << ' ';
        }
    }
}

signed main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

    // int testcases; cin >> testcases;
    // while(testcases--) solve();

    solve();

}