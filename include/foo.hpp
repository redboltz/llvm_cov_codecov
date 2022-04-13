#if !defined(FOO_HPP)
#define FOO_HPP

#include <iostream>

inline int foo(int a, int b) {
    if (a > b) {
        std::cout << a - b << std::endl;
        return a - b;
    }
    else if (b > a) {
        std::cout << b - a << std::endl;
        return b - a;
    }
    else {
        std::cout << "same" << std::endl;
        return 0;
    }
}

#endif // FOO_HPP
