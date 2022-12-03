// Created by HaynesChen on 2022/12/3.
// 排列环
#include <iostream>

using namespace std;
int main() {
    int T, num[200020], ans[200020][2];
    cin >> T;
    for (int i = 1; i <= T; i++) {
        cin >> num[i];
        if (i >= 3) ans[num[i - 1]][0] = num[i - 2], ans[num[i - 1]][1] = num[i];
    }
    ans[num[1]][0] = num[T], ans[num[1]][1] = num[2];
    ans[num[T]][0] = num[T - 1], ans[num[T]][1] = num[1];
    for (int i = 1; i <= T; i++)
        cout << ans[i][0] << " " << ans[i][1] << endl;
    return 0;
}