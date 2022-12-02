//
// Created by HaynesChen on 2022/12/1.
//
//伪素数-2
#include <iostream>
#include <algorithm>
#include <cmath>

using namespace std;
typedef long long ll;

ll StringToNum(string s) {
    ll ans = 0;
    for (ll i = 0; i < s.size(); i++)
        ans = ans * 10 + s[i] - '0';
    return ans;
}

bool isprime(ll num) {
    if (num == 1)
        return false;
    if (num == 2 || num == 3)
        return true;
    if (num % 6 != 1 && num % 6 != 5)
        return false;
    int tmp = sqrt(num);
    for (int i = 5; i <= tmp; i += 6)
        if (num % i == 0 || num % (i + 2) == 0)
            return false;
    return true;
}

int main() {
    string num;
    cin >> num;
    if (!isprime(StringToNum(num))) {
        sort(num.begin(), num.end());
        do {
//            cout << StringToNum(num) << endl;
            if (isprime(StringToNum(num))) {
                cout << "YES" << endl;
                return 0;
            }
        } while (next_permutation(num.begin(), num.end()));
    }
    cout << "NO" << endl;
    return 0;
}