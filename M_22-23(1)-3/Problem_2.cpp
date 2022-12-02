//
// Created by HaynesChen on 2022/12/2.
//
//数列之和
#include <iostream>

using namespace std;
typedef long long int ll;

void solve() {
    int n;
    cin >> n;
    long long int x = 1, y = 1, k, ans = 0;
    if (n == 1) {
        ans = 1;
    } else if (n == 2) {
        ans = 2;
    } else {
        ans = 2;
        for (int i = 3; i <= n; i++) {
            k = (x + y) % 1000;
            x = y;
            y = k;
            if (i >= 1 && i <= n) {
                ans += k;
            }
        }
    }
    cout << ans % 1000 << endl;
}

int main() {
    int n;
    cin >> n;
    while (n--) {
        solve();
    }
    return 0;
}