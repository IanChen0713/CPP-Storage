//
// Created by HaynesChen on 2022/12/2.
//
//曼城球童
#include <iostream>

using namespace std;
typedef long long int ll;

ll jc(ll n) {
    ll ans = 1;
    while (n > 0)
        ans *= n, n--;
    return ans;
}

void solve() {
    ll ans = 39916800, n;
    cin >> n;
    cout << jc(11) / (jc(n) * jc(11 - n)) * jc(n) * ans << endl;
}

int main() {
    int n;
    cin >> n;
    while (n--) {
        solve();
    }
    return 0;
}