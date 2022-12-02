//
// Created by HaynesChen on 2022/12/2.
//
//比因子
#include <iostream>
#include <cmath>

using namespace std;
typedef long long int ll;

ll yinzi(ll d) {
    ll num = 0, s = sqrt(d);
    for (ll i = 1; i < sqrt(d); i++)
        if (d % i == 0)
            num++;
    num *= 2;
    if (d == s * s) num++;
    return num;
}

void slove() {
    ll a, b, c, d;
    cin >> a >> b;
    c = yinzi(a), d = yinzi(b);
    if (c > d)
        cout << "A" << endl;
    else if (c < d)
        cout << "B" << endl;
    else
        cout << "draw" << endl;
}

int main() {
    int T;
    cin >> T;
    while (T--) {
        slove();
    }
    return 0;
}