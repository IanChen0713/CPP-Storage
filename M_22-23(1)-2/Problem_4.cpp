//
// Created by HaynesChen on 2022/12/2.
//
//谁是大佬
#include <iostream>

using namespace std;

void func() {
    int k;
    cin >> k;
    int max = -1, num;
    for (int i = 1; i <= k; i++) {
        int score;
        cin >> score;
        if (score >= max) {
            max = score;
            num = i;
        }
    }
    cout << num << endl;
}

int main() {
    int n;
    cin >> n;
    while (n--) {
        func();
    }
    return 0;
}