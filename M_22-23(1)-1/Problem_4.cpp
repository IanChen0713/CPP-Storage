//
// Created by HaynesChen on 2022/12/2.
//
//英文字母
#include <iostream>

using namespace std;

int main() {
    char eng;
    cin >> eng;
    if (eng >= 'a' && eng <= 'z') {
        char k = eng;
        int j = 26;
        while (j--) {
            cout << k;
            k++;
            if (k > 'z')
                k = 'a';
        }
    } else if (eng >= 'A' && eng <= 'Z') {
        char k = eng;
        int j = 26;
        while (j--) {
            cout << k;
            k++;
            if (k > 'Z')
                k = 'A';
        }
    }
    return 0;
}
