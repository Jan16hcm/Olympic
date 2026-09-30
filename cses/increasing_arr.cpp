#include <bits/stdc++.h>
#include <algorithm>
#include <climits>

using namespace std;

#define int long long

void solve()
{
    int n; cin >> n;
    vector<int> a(n);
    vector<int> neg_arr(n - 1, 0);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    int sum = 0;
    for (int i = 1; i < n; i++) {
        neg_arr[i - 1] += a[i] - a[i - 1];

        if(neg_arr[i - 1] < 0) {
            sum += abs(neg_arr[i - 1]);

            if (i < n - 1) {
                neg_arr[i] -= abs(neg_arr[i - 1]);
            }
        }
    }

    cout << sum;

}

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();
}
