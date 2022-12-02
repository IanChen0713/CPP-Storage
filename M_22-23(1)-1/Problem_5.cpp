//
// Created by HaynesChen on 2022/12/2.
//
//年龄
#include <iostream>

using namespace std;

int main() {
    int y, m, d, yy, mm, dd;
    cin >> y >> m >> d >> yy >> mm >> dd;
    int age = yy - y;
    if (mm < m)
        age--;
    else if (mm == m) {
        if (mm == 2 && m == 2 && d == 29)
            if ((yy % 100 == 0 && yy % 400 == 0) || (yy % 100 != 0 && yy % 4 == 0)) {}
            else d = 28;
        if (dd < d) age--;
    }
    cout << age;
    return 0;
}