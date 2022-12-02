//
// Created by HaynesChen on 2022/12/2.
//
//总和最大
#include <iostream>

using namespace std;

int main() {
    int k, ans = 0;
    for (int i = 1; i <= 3; i++) {
        cin >> k;
        if (k > 0)
            ans += k;
    }
    cout << ans;
    return 0;
}