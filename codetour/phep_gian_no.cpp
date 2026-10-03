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

int m,n,k;
const int dr[] = {-1, -1, -1,  0, 0,  1, 1, 1};
const int dc[] = {-1,  0,  1, -1, 1, -1, 0, 1};
void solve() {
    cin >> m >> n >> k;
    vector<vector<int>> arr(m, vector<int>(n));
    vector<vector<int>> dis(m, vector<int>(n, -1));
    queue<pair<int,int>> qe;

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cin >> arr[i][j];
            if(arr[i][j] == 1) {
                qe.push(make_pair(i, j));
                dis[i][j] = 0;
            }
        }
    }

    while(!qe.empty()) {
        pair<int,int> p = qe.front();
        qe.pop();
        int dx = p.fi, dy = p.se;

        if(dis[dx][dy] == k) {
            continue;
        }

        for (int i = 0; i < 8; i++) {
            int newx = dx + dr[i];
            int newy = dy + dc[i];

            if (newx >= 0 && newx < m && newy >= 0 && newy < n) {
                if (dis[newx][newy] == -1) {
                    dis[newx][newy] = dis[dx][dy] + 1;
                    qe.push(make_pair(newx, newy));
                }
            }
        }
    }

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            if (dis[i][j] != -1) {
                cout << 1 << ' ';
            } else {
                cout << 0 << ' ';
            }
        }
        cout << '\n';
    }

}

signed main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

    // int testcases; cin >> testcases;
    // while(testcases--) solve();

    solve();

}