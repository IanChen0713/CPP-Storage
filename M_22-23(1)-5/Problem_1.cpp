//
// Created by HaynesChen on 2022/12/1.
//
//日期格式转换
#include <iostream>

using namespace std;
typedef long long ll;

string mon(string k) {
    if (k == "Jan.") return "1";
    if (k == "Feb.") return "2";
    if (k == "Mar.") return "3";
    if (k == "Apr.") return "4";
    if (k == "May") return "5";
    if (k == "Jun.") return "6";
    if (k == "Jul.") return "7";
    if (k == "Aug.") return "8";
    if (k == "Sept.") return "9";
    if (k == "Oct.") return "10";
    if (k == "Nov.") return "11";
    if (k == "Dec.") return "12";
    return "unkonwn";
}

void slove() {
    string a, b, c, date = "";
    cin >> a >> b >> c;
    b = b.substr(0, b.length() - 1);
    if (a[0] >= '0' && a[0] <= '9') {
        //UK 26 Nov., 2022
        cout << c + "." + mon(b) + "." + a << endl;
    } else {
        //US May 7, 2022
        cout << c + "." + mon(a) + "." + b << endl;
    }

}

int main() {
    int T;
    cin >> T;
    while (T--) {
        slove();
    }
}