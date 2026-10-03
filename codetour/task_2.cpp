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

struct Rule
{
    int type;
    string str;
};


void solve() {
    int n; cin >> n;
    vector<Rule> arr(n);
    for (int i = 0; i < n; i++) {
        int type;
        string str;
        cin >> type >> str;

        if (type <= 6) {
            arr.pb({type, str});
        } else {
            bool valid = true;

            for (int j = arr.size() - 1; j >= 0; j--) {
                int t = arr[j].type;
                string p = arr[j].str;
                bool match = false;

                if (t == 1 || t == 2) {
                    if (p == str) match = true;
                } else if (t == 3 || t == 4) {
                    if (str.length() >= p.length() && str.substr(0, p.length()) == p) match = true;
                } else if (t == 5 || t == 6) {
                    if (str.length() >= p.length() && str.substr(str.length() - p.length()) == p) match = true;
                }

                if (match) {
                    valid = (t == 1 || t == 3 || t == 5);
                    break;
                }
            }

            if (valid) {
                cout << "Y\n"; 
            } else {
                cout << "N\n";
            }
        }
    }
}

signed main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

    // int testcases; cin >> testcases;
    // while(testcases--) solve();

    solve();

}