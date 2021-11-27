#include <iostream>

class numbered {
public:
    numbered() {
        std::cout << "number()" << std::endl;
        mysn = unique++;
    }

    int mysn;
    static int unique;
};

int numbered::unique = 10;

void f(numbered s) {
    std::cout << s.mysn << std::endl;
    
}

int main() {
    numbered a, b = a, c = b;
    f(a);
    f(b);
    f(c);
}