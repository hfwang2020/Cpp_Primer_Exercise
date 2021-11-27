#include <iostream>
using namespace std;
class A
{
public:
    A()
    {
        cout << "默认构造函数A()" << endl;
    }
    A(int a)
    {
        value = a;
        cout << "A(int " << value << ")" << endl;
    }
    A(const A& a)
    {
        value = a.value;
        cout << "拷贝构造函数 A(A& a):  "<<value << endl;
    }
    A& operator=(const A& a) {
        value = a.value;
        cout << "拷贝赋值函数A& operator=(const A& a) "<< value << endl;
        return *this;
    }

    int value;
};

class B
{
public:
    B() : a(1)
    {
        A c = A(2);
        // A c;
        // b = A(2);
        // A b = c;
    }
    A a;
    A b;
};
int main()
{
    B b;
}

// A(int 1)
// 默认构造函数A()
// A(int 2)
// 拷贝赋值函数A& operator=(const A& a) 2