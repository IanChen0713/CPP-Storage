//
// Created by HaynesChen on 2022/12/2.
//
//成绩排名
#include <iostream>
#include <algorithm>

using namespace std;
typedef long long int ll;

void slove() {
    int n, k;
    cin >> n;
    int *sc = new int[n], *ss = new int[n];
    for (int i = 0; i < n; i++)
        cin >> sc[i], ss[i] = sc[i];
    cin >> k;
    sort(sc, sc + n);
    if (ss[k - 1] == -1) cout << "N/A" << endl;
    else
        for (int i = n - 1; i >= 0; i--)
            if (ss[k - 1] == sc[i]) {
                cout << n - i << endl;
                break;
            }
//    for (int i = 0; i < n; i++)
//        cout << sc[i] << endl;
}

int main() {
    int T;
    cin >> T;
    while (T--) {
        slove();
    }
    return 0;
}