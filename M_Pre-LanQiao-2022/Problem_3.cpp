// Created by HaynesChen on 2022/12/3.
// 组个最大数
//2^(2^20)
#include <iostream>

using namespace std;
typedef long long ll;

ll mul(ll a, ll b, ll mod) {
    ll ans = 1;
    for (int i = 1; i <= b; i++)
        ans *= a, ans %= mod;
    return ans;
}

int main() {
    ll mod = 1000000007;
    cout << mul(2, mul(2, 20, mod), mod) << endl;
    return 0;
}