#include <bits/stdc++.h>

using namespace std;

int n;
int ans = 0;
const int len = 26;
vector<vector<bool>> arr;

void backtrack(int i, vector<bool> current) {
    if (i == n) {
        bool enough = true;

        for (int j = 0; j < len; j++) {
            if(current[j] == false) {
                enough = false;
                break;
            }
        }
        if( enough) {
            ans++;
        }
        return;
    }

    backtrack(i + 1, current);

    vector<bool> next(len, false);
    for (int j = 0; j < len; j++) {
        next[j] = current[j] || arr[i][j];
    }

    backtrack(i + 1, next);

}

void solve() {
    arr.assign(n, vector<bool>(len, false));
    vector<int> arr_count(n, 0);
    vector<string> str(n);
    for (int i = 0; i < n; i++) {
        cin >> str[i];
    }

    for (int i = 0; i < n; i++) {
        int count = 0;

        for (int j = 0; j < str[i].length(); j++) {

            int index = int(str[i].at(j)) - 97;

            if(arr[i][index] != true) {
                count++;
            }
            arr[i][index] = true;
            
        }
        arr_count[i] = count;
    }

    // for (int i = 0; i < n; i++) {
    //     cout << str[i] << ": " << arr_count[i] << '\n';
    // }
    vector<bool> curr_char(len, false);
    backtrack(0, curr_char);

    cout << ans;


}

signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);

    // int testcases; cin >> testcases;
    // while(testcases--) solve();
    cin >> n;

    solve();
}