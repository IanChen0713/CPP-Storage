//
// Created by HaynesChen on 2022/12/2.
//
//等差三位数
#include <iostream>

using namespace std;
typedef long long int ll;


void solve() {
    int k;
    cin >> k;
    int a = k % 10, b = (k / 10) % 10, c = (k / 100) % 10;
    if ((a - b) == (b - c)) cout << "Yes" << endl;
    else cout << "No" << endl;
}

int main() {
    int n;
    cin >> n;
    while (n--) {
        solve();
    }
    return 0;
}