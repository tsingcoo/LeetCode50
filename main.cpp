#include <iostream>
#include "solution.h"
#include "solution2.h"

int main() {

    Solution s;
    std::cout<<s.myPow(1, -2147483648)<<std::endl;

    Solution2 s2;
    std::cout<<s2.myPow(5, -214748364800)<<std::endl;
    return 0;
}