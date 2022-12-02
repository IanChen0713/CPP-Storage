//
// Created by HaynesChen on 2022/12/2.
//
//走法的数量
#include <iostream>

using namespace std;
typedef long long int ll;

int func(int a, int b) {
    if (a == 1 && b == 1) {
        return 1;
    } else if (a == 1 && b > 1) {
        return func(a, b - 1);
    } else if (a > 1 && b == 1) {
        return func(a - 1, b);
    }
    return func(a - 1, b) + func(a, b - 1) + func(a - 1, b - 1);
}

void solve() {
    int a, b;
    cin >> a >> b;
    cout << func(a, b) << endl;
}

int main() {
    int n;
    cin >> n;
    while (n--) {
        solve();
    }
    return 0;
}