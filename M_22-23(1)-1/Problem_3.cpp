//
// Created by HaynesChen on 2022/12/2.
//
//优秀的成绩
#include <iostream>

using namespace std;

int main() {
    double a, b, c;
    cin >> a >> b >> c;
    if (a >= 85 && b >= 85 && c >= 85 && (a + b + c) / 3 >= 90) {
        cout << "Excellent";
    } else {
        cout << "Not Excellent";
    }
    return 0;
}