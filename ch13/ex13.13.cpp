//
//  ex13_13.cpp
//  CP5
//
//  Created by pezy on 1/13/15.
//
//  A good way to understand copy-control members and constructors is to define a simple class with these members in which each member prints its name:
//  struct X {
//    X() { std::cout << "X()" << std::endl; }
//    X(const X&) { std::cout << "X(const X&)" << std::endl; }
//  };
//  Add the copy-assignment operator and destructor to X and write a program using X objects in various ways:
//  Pass them as nonreference and reference parameters;
//  dynamically allocate them;
//  put them in containers; and so forth.
//  Study the output until you are certain you understand when and why each copy-control member is used.
//  As you read the output, remember that the compiler can omit calls to the copy constructor.


#include <iostream>
#include <vector>
#include <initializer_list>


struct X {
    X() { std::cout << "X()" << std::endl; }
    X(const X&) { std::cout << "X(const X&)" << std::endl; }
    X& operator=(const X&) {
        std::cout << "X& operator=(const X&)" << std::endl;
        return *this;
    }
    ~X() { std::cout << "~X()" << std::endl; }
};


void f(const X& rx, X x) {
    std::vector<X> vec;
    vec.reserve(2);
    vec.push_back(rx);
    vec.push_back(x);
}

int* func()
{
    //利用new关键字，将数据开辟到堆区
    //指针本质也是局部变量，存放在栈上，指针保存的数据存放咋堆区
    int* p = new int(10);
    return p;
}

int main() {
    // X* px = new X();
    X x1 = X();
    X* x2 = new X();
    int* q = func();
    int x = 0;
    std::cout << &x1 << std::endl;
    std::cout << x2 << std::endl;
    std::cout << &x << std::endl;
    std::cout << q << std::endl;
    delete x2;
}
