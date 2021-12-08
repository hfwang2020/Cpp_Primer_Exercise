#include <iostream>


int* begin_def(int(&arr)[5]) {
    return arr;
}

int main() {
    int a[5] = {};
    int* p = begin_def(a);
    std::cout << p << std::endl;
}