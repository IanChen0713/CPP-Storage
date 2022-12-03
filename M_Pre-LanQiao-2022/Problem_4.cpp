// Created by HaynesChen on 2022/12/3.
// 数字工厂
#include <iostream>

using namespace std;
typedef long long ll;

bool isPrime(ll n) {
    if (n == 2) return true;
    if (n < 2 || n % 2 == 0) return false;
    for (ll i = 3; i * i <= n; i += 2)
        if (n % i == 0) return false;
    return true;
}

ll fun(ll n) {
    ll ans = 0;
    if (isPrime(n))
        while (n)
            ans *= 10, ans += n % 10, n /= 10;
    else
        while (n)
            ans += n % 10, n /= 10;
    return ans;
}

int main() {
    ll ans = 0;
    for (ll i = 1; i <= 2022; i++)
        ans += fun(i);
    cout << ans << endl;
    return 0;
}