//
// Created by HaynesChen on 2022/12/1.
//
//毕业答辩
#include <iostream>

using namespace std;
typedef long long ll;

void slove() {
    int a, b, c;
    cin >> a >> b >> c;
    if ((a < 60 && b < 60) || (a < 60 && c < 60) || (b < 60 && c < 60) || (a < 60 && b < 60 && c < 60)) {
        cout << "No" << endl;
        return;
    }
    if ((a + b + c) / 3 >= 60) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
}

int main() {
    int T;
    cin >> T;
    while (T--) {
        slove();
    }
}