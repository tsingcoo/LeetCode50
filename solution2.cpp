//
// Created by 王青龙 on 2017/2/12.
//

#include "solution2.h"

double Solution2::myPow(double x, int n) {
    double res = 1;
    unsigned int p;
    if (n < 0) {
        p = -n;
        x = 1 / x;
    } else {
        p = n;
    }

    while (p) {
        if (p & 1) {
            res *= x;
        }
        p >>= 1;
        x *= x;
    }
    return res;
}