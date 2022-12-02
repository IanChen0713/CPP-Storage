//
// Created by HaynesChen on 2022/12/2.
//
//最高位最大的数
#include <iostream>

using namespace std;
typedef long long int ll;

void slove() {
    string s, max;
    int n;
    cin >> n >> max;
    for (int i = 1; i < n; i++) {
        cin >> s;
        if (s[0] > max[0]) max = s;
        else if (s[0] == max[0]) {
            if (s.length() > max.length()) max = s;
            else if (s.length() == max.length()) {
                for (int j = 1; j < s.length(); j++)
                    if (s[j] > max[j]) {
                        max = s;
                        break;
                    } else if (s[j] < max[j])
                        break;
            }
        }
    }
    cout << max << endl;
}

int main() {
    int T;
    cin >> T;
    while (T--) {
        slove();
    }
    return 0;
}
