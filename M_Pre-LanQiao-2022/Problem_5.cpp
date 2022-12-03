// Created by HaynesChen on 2022/12/3.
// 蛇形填数
#include <iostream>

using namespace std;

int main() {
    int n, x = 1, y = 1, num = 1, map[10010][10010];
    cin >> n;
    for (int i = 1; num <= n; i++) {
        for (int j = 1; j <= i; j++) {
            map[x][y] = num, num++;
            if (i % 2) x--, y++;
            else x++, y--;
            if (x == 0) x++;
            if (y == 0) y++;
        }
    }
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            if (map[i][j] == 0 || map[i][j] > n) continue;
            if (i != 1 && j == 1) cout << endl;
            if (j != 1) cout << " " << map[i][j] % 10;
            else cout << map[i][j] % 10;
        }
    }
    cout << endl;
    return 0;
}