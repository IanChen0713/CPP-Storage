//
// Created by HaynesChen on 2022/12/2.
//
//老人与海
#include <iostream>

using namespace std;

int main() {
    long long int a, level = 1;
    cin >> a;
    if (a <= 49) {
        level += a;
    } else {
        a -= 49;
        level = 50;
        for (int i = 2;; i++) {
            a -= i;
            if (a < 0) {
                break;
            }
            level++;
        }
    }
    cout << level;
    return 0;
}