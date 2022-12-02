//
// Created by HaynesChen on 2022/12/2.
//
//植树问题
#include<iostream>
#include<cmath>

using namespace std;
int main() {
    int T;
    cin >> T;
    while (T--) {
        int a, b, c;
        cin >> a >> b >> c;
        int d = c * 2 - 1;
        cout << int(ceil(1.0 * a / d)) * int(ceil(1.0 * b / d)) << endl;
    }
    return 0;
}