//
// Created by HaynesChen on 2022/12/2.
//
//迷之运算符
#include <iostream>

using namespace std;

int main() {
    double a, b, c;
    int ans = 0;
    char op[10];
    cin >> a >> b >> c;
    if (a + b == c) {
        ans++;
        op[ans] = '+';
    }
    if (a - b == c) {
        ans++;
        op[ans] = '-';
    }
    if (a * b == c) {
        ans++;
        op[ans] = '*';
    }
    if (b != 0) {
        if (a / b == c) {
            ans++;
            op[ans] = '/';
        }
        if (int(a) % int(b) == c) {
            ans++;
            op[ans] = '%';
        }
    }
    if (ans == 0) {
        cout << "None";
    } else {
        for (int i = 1; i <= ans; i++) {
            cout << op[i];
            if (i < ans) cout << " ";
        }
    }
    return 0;
}