// Created by HaynesChen on 2022/12/3.
// 时间问题
#include <iostream>

using namespace std;
long long int sec = 9876543210, add_sec, add_min, add_hour, add_day, yy = 2022, mm = 12, dd = 11, hh = 21, mi = 22, ss = 2;
int mo[13][2] = {{0,  0},
                 {31, 31},
                 {28, 29},
                 {31, 31},
                 {30, 30},
                 {31, 31},
                 {30, 30},
                 {31, 31},
                 {31, 31},
                 {30, 30},
                 {31, 31},
                 {30, 30},
                 {31, 31}};

int isLeapYear(int year) {
    //四年一闰 百年不闰 四百年又闰
    if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
        return 1;
    else
        return 0;
}

int main() {
    add_day = sec / (60 * 60 * 24);
    add_hour = (sec - add_day * 3600 * 24) / (60 * 60);
    add_min = (sec - add_day * 3600 * 24 - add_hour * 3600) / 60;
    add_sec = (sec - add_day * 3600 * 24 - add_hour * 3600 - add_min * 60);
//    cout << add_day << " " << add_hour << " " << add_min << " " << add_sec << endl;
    ss += add_sec;
    if (ss >= 60) ss -= 60, mi++;
    mi += add_min;
    if (mi >= 60) mi -= 60, hh++;
    hh += add_hour;
    if (hh >= 24) hh -= 24, dd++;
    int isLeap = isLeapYear(yy);
//    cout << isLeapYear(2024) << " " << isLeapYear(2022) << endl;
    for (int i = 1; i <= add_day; i++) {
        dd++;
        if (dd == mo[mm][isLeap] + 1) {
            mm++, dd = 1;
            if (mm == 13) mm = 1, yy++;
            isLeap = isLeapYear(yy);
        }
    }
    //填空题偷个懒,直接补前导零
    cout << yy << "-" << mm << "-0" << dd << " " << hh << ":" << mi << ":" << ss << endl;
    return 0;
}