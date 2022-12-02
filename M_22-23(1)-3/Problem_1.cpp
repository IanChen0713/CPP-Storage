//
// Created by HaynesChen on 2022/12/2.
//
//质数数量和总和
#include <iostream>

using namespace std;
typedef long long int ll;


bool isprime(int num) {
    if (num == 2)
        return true;
    if (num % 2 == 0 || num < 2)
        return false;
    else {
        for (int i = 3; i * i <= num; i += 2)
            if (num % i == 0)
                return false;
        return true;
    }
}

void solve() {
    int m, ans = 0, sum = 0;
    cin >> m;
    for (int i = 2; i <= m; i++) {
        if (isprime(i)) ans += i, sum++;
    }
    cout << sum << " " << ans << endl;
}

int main() {
    int n;
    cin >> n;
    while (n--) {
        solve();
    }
    return 0;
}