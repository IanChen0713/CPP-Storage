// Created by HaynesChen on 2022/12/3.
// 三十六进制
#include <iostream>

using namespace std;
typedef long long ll;
int main() {
    ll ans = 0;
    string num = "CST18057";
    for (int i = 0; i < num.length(); i++) {
        if (num[i] >= '0' && num[i] <= '9')
            ans = ans * 36 + num[i] - '0';
        else
            ans = ans * 36 + num[i] - 'A' + 10;
    }
    cout << ans << endl;
    return 0;
}