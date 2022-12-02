//
// Created by HaynesChen on 2022/12/2.
//
//末三位数
#include <iostream>

using namespace std;

void func() {
    int a, b;
    cin >> a >> b;
    long long int x = 1, y = 1, k, ans = 0;
    if (b == 1) {
        ans = 1;
    } else if (b == 2) {
        if (a == 1) ans = 2;
        else ans = 1;
    } else {
        if (a == 1) ans = 2;
        else if (a == 2) ans = 1;
        for (int i = 3; i <= b; i++) {
            k = (x + y) % 1000;
            x = y;
            y = k;
            if (i >= a && i <= b) {
                ans += k;
            }
        }
    }

    cout << ans << endl;
}

int main() {
    int n;
    cin >> n;
    while (n--) {
        func();
    }
    return 0;
}