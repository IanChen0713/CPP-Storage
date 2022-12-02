//
// Created by HaynesChen on 2022/12/2.
//
//强质数
#include <iostream>

using namespace std;

bool isprime(int num) {
    if (num == 2) return true;
    if (num % 2 == 0 || num < 2) return false;
    else {
        for (int i = 3; i * i <= num; i += 2)
            if (num % i == 0) return false;
        return true;
    }
}

int cal_len(int num) {
    int len = 0;
    do {
        len++;
        num /= 10;
    } while (num);
    return len;
}

void func() {
    bool is_true = true;
    int x, y, ans = 0, num = 0;
    cin >> x >> y;
    for (int i = x; i <= y; i++) {
        is_true = true;
        if (isprime(i)) {
            int k;
            for (int j = 1; j <= cal_len(i); j++) {
                int c = 10;
                for (int ii = 1; ii < j; ii++) c *= 10;
                k = i % c;
//                cout << i << " " << k << endl;
                if (!isprime(k)) {
                    is_true = false;
                    break;
                }
            }
            if (is_true) {
                ans += i;
                num++;
            }
        }
    }
    cout << num << " " << ans << endl;
}

int main() {
    int n;
    cin >> n;
    while (n--) {
        func();
    }
    return 0;
}