//
// Created by 王青龙 on 08/02/2017.
//

#include "solution.h"

double Solution::myPow(double x, int n) {
    double res = 1;
    unsigned int p; //unsigned很重要
    if (n < 0) {
        x = 1 / x;
        p = -n;
    } else {
        p = n;
    }

    while (p) {
        if (p & 1) {
            res *= x;
        }
        x *= x;
        p >>= 1;
    }
    return res;
}