//
// Created by HaynesChen on 2022/12/2.
//
//缝合怪
#include <iostream>

using namespace std;

void func() {
    string s;
    cin >> s;
    swap(s[0], s[s.length() - 2]);
    swap(s[1], s[s.length() - 1]);
    int star = 0;
    while (s[star] == '0') star++;
    for (int i = star; i < s.length(); i++) cout << s[i];
    cout << endl;
}

int main() {
    int n;
    cin >> n;
    while (n--) {
        func();
    }
    return 0;
}