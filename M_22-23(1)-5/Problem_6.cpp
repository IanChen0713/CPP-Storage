//
// Created by HaynesChen on 2022/12/1.
//
//浮点数的2倍
#include <iostream>
#include <algorithm>

using namespace std;
typedef long long ll;

void slove() {
    string num, ans;
    cin >> num;
    ans = num;
    bool isOver = false;
    for (int i = num.length() - 1; i >= 0; i--) {
        if (num[i] == '.') {
            ans[i] = '.';
        } else {
            int k = num[i] + num[i] - '0' - '0';
            if (isOver) k++, isOver = false;
            if (k >= 10) {
                isOver = true;
                k -= 10;
            }
            ans[i] = k + '0';
        }
    }
    while (ans[ans.length() - 1] == '0') ans = ans.substr(0, ans.length() - 1);
    if (ans.length() == 2) ans = ans.substr(0, ans.length() - 1);

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