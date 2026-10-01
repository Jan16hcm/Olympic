#include <bits/stdc++.h>

using namespace std;

vector<int> arr(4);
int n = 4;
vector<bool> check(n);
void backtrack(int step) {

    if(step > n) {
        for (int i = 0; i < n; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
        return;
    }

    for (int i = 0; i < n; i++) {

        if(check[i] == false) {
            arr[i] = step;
            check[i] = true;
            backtrack(step + 1);
            check[i] = false;
        }
    }

}

int main() {

    backtrack(1);

    return 0;
}