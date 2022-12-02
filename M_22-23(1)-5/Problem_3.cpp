//
// Created by HaynesChen on 2022/12/1.
//
//姓名顺序
#include <iostream>

using namespace std;
typedef long long ll;

int main() {
    string name[10];
    string a[10], b[10];
    int T = 10;
    while (T--) {
        cin >> a[T] >> b[T];
        name[T] = a[T] + " " + b[T];
    }
    for (int i = 0; i < 10; i++) {
        for (int j = i; j < 10; j++) {
            if (b[i].compare(b[j]) == 1) {
                swap(name[i], name[j]);
                swap(a[i], a[j]);
                swap(b[i], b[j]);
            }
        }
    }
    for (int i = 0; i < 10; i++) {
        cout << name[i] << endl;
    }
}