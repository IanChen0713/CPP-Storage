//
// Created by HaynesChen on 2022/12/2.
//
//与众不同的数
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
    bool isFind = false;
    ll n, a, b, k, kk, kkk, y;
    cin >> n >> k >> kk;
    n -= 2;
    a = yinzi(k), b = yinzi(kk);
    if (a == b) y = b;
    else {
        n--;
        cin >> kkk;
        y = yinzi(kkk);
        if (a == y && y != b) {
            cout << kk << endl;
            isFind = true;
        } else if (b == y && y != a) {
            cout << k << endl;
            isFind = true;
        }
    }
    while (n--) {
        cin >> k;
        if (!isFind)
            if (yinzi(k) != y) {
                isFind = true;
                cout << k << endl;
            }
    }
}

int main() {
    int T;
    cin >> T;
    while (T--) {
        slove();
    }
    return 0;
}