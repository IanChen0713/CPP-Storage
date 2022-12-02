//
// Created by HaynesChen on 2022/12/2.
//
//强质数-2
#include <iostream>

using namespace std;
typedef long long ll;
#define MAX 50000000
ll T, a, b, x, y, len;
ll num[6000], sum[6000]; //强质数与前缀和
bool prime[MAX + 5];

int func(ll x) {
    ll mid, left = 1, right = 5987;
    while (left <= right) {
        mid = (left + right) / 2;
        if (num[mid] == x) return mid;
        else if (num[mid] < x) left = mid + 1;
        else right = mid - 1;
    }
    return left;
}

bool flag(ll i) {
    x = 10; //模数
    while (i % x != i) {
        if (prime[i % x])
            return false;
        x *= 10;
    }
    return true;
}

int main() {
    prime[0] = true;
    prime[1] = true;
    for (ll i = 2; i <= MAX; i++) {
        if (prime[i]) continue;
        for (ll j = i * i; j <= MAX; j += i) prime[j] = true;
        if (flag(i)) {
            len++;
            num[len] = i; //保存强质数
            sum[len] = sum[len - 1] + i; //前缀和
        }
    }
    //在50000000中有5987个强质数
    for (ll i = 5988; i < 6000; i++) {
        num[i] = 100000000;
        sum[i] = sum[i - 1];
    }
    cin >> T;
    while (T--) {
        scanf("%lld %lld", &a, &b);
        x = func(a);
        y = func(b);
        while (num[x] > a) x--;
        if (num[x] < a) x++;
        while (num[y] < b) y++;
        if (num[y] > b) y--;
        printf("%lld %lld\n", (y - x + 1), (sum[y] - sum[x - 1]));
    }
    return 0;
}