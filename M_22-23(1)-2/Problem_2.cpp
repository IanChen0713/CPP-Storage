//
// Created by HaynesChen on 2022/12/2.
//
//4的倍数
#include <bits/stdc++.h>

using namespace std;


int main() {
    int a[4] = {0};
    int T;
    cin >> T;
    while (T--) {
        int n, x;
        cin >> n;
        for (int i = 0; i < 4; i++)
            a[i] = 0;
        for (int i = 0; i < n; i++) {
            cin >> x;
            x = (x % 4 + 4) % 4;
            a[x]++;
        }
        // 000 013 022 112 332
        if (a[0] >= 3 || // 000
            a[0] >= 1 && a[1] >= 1 && a[3] >= 1 || // 013
            a[0] >= 1 && a[2] >= 2 || // 022
            a[3] >= 2 && a[2] >= 1 || // 332
            a[1] >= 2 && a[2] >= 1) // 112
        {
            puts("Yes");
        } else {
            puts("No");
        }
    }
    return 0;
}