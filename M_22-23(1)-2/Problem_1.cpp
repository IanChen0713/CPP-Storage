//
// Created by HaynesChen on 2022/12/2.
//
//星号阵列-22
#include <iostream>

using namespace std;

int main() {
    int m, n, a;
    cin >> m >> n >> a;
    for (int i = 1; i <= m; i++) {
        for (int j = 1; j <= n; j++) {
            if (i == 1 || i == m || i < a + 1 || i > m - a) {
                cout << "*";
            } else if (i == a + 1 || i == m - a) {
                if (j <= a || j > n - a)cout << "*";
                else cout << " ";
            } else {
                if (j == a + 1 || j == n - a) cout << " ";
                else cout << "*";
            }
        }
        cout << endl;
    }
    return 0;
}