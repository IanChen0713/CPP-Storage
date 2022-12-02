//
// Created by HaynesChen on 2022/12/2.
//
//保护伞
#include <iostream>
#include <cstring>

using namespace std;
typedef long long int ll;

void slove() {
    int a, b, c, d, ans = 0;
    cin >> a >> b;
    bool *is = new bool[a + 10];
    memset(is, false, a + 10);
    while (b--) {
        cin >> c >> d;
//        cout << c << " " << d << endl;
        for (int i = c + 1; i <= d; i++) is[i] = true;
    }
    for (int i = 0; i <= a; i++)
        if (is[i]) ans++;
    cout << ans << endl;
}

int main() {
    int T;
    cin >> T;
    while (T--) {
        slove();
    }
    return 0;
}