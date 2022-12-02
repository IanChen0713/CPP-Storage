//
// Created by HaynesChen on 2022/12/1.
//
//几个6
#include <iostream>

using namespace std;
typedef long long ll;
void slove() {
    ll m, n, ans = 0, sum;
    cin >> m >> n;
    sum = m + n;
    if (sum % 6 == 0) ans++;
    while (sum) {
        if (sum % 10 == 6)
            ans++;
        sum /= 10;
    }
    cout << ans << endl;
}

int main() {
    int T;
    cin >> T;
    while (T--) {
        slove();
    }
}