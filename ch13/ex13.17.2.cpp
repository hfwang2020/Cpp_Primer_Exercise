//
//  ex13_17.cpp
//  Exercise 13.17
//
//  Created by pezy on 1/15/15.
//  Refactoed by acgtyrant Aug 2015
//
//  Write versions of numbered and f corresponding to the previous three exercises
//  and check whether you correctly predicted the output.
//
//  For 13.15

#include <iostream>

class numbered {
public:
    numbered() {
        mysn = unique++;
        std::cout << "number()" << std::endl;
    }

    numbered(const numbered& n) {
        mysn = unique++;
        std::cout << "numbered(const numbered& n)" << std::endl;
    }
    numbered(const int i) {
        mysn = i;
    }
    
    int mysn;
    static int unique;
};

int numbered::unique = 1;

void f1(numbered s) {
    std::cout << s.mysn << std::endl;
}

void f(numbered& s) {
    std::cout << s.mysn << std::endl;
}

int main()
{
    numbered a;
    // f(a);
    numbered b = a, c = b;
    f1(b);
    f(a);
    f(b);
    f(c);
}
