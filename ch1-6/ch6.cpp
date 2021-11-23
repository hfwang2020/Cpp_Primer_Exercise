#include <iostream>
#include <string>
#include <cctype>
#include <vector>
#include <cstring>
#include <stdexcept>
#include <initializer_list>

using std::vector;
using std::string;
using std::cin;
using std::cout;
using std::endl;
using std::getline;
using std::pair;
using std::runtime_error;
using Iter = vector<int>::const_iterator;

// mark @ exercise 6.8
void swap(int *lhs, int *rhs) {
    int tmp;
    tmp = *lhs;
    *lhs = *rhs;
    *rhs = tmp;
}


int q6_10() {
    for (int lft, rht; std::cout << "plesase enter:\n", std::cin >> lft >> rht;) {
        swap(&lft, &rht);
        std::cout << lft << " " << rht << std::endl;
    }
    return 0;
}

void reset(int &i) {
    i = 0;
}

int q6_11() {
    int i = 42;
    reset(i);
    std::cout << i << std::endl;
    return 0;
}

void swap1(int &lhs, int &rhs) {
    int temp = lhs;
    lhs = rhs;
    rhs = temp;
}

int q6_12() {
    int left, right;
    cin >> left >> right;
    swap1(left, right);
    cout << left << " " << right << endl;
    return 0;
}

int larger_one(const int i, const int *const p) {
    return (i > *p) ? i : *p;
}

int q6_21() {
    int i = 6;
    cout << larger_one(7, &i);
    return 0;
}

void swap2(int *&lft, int *&rht) {
    auto tmp = lft;
    lft = rht;
    rht = tmp;
}

int q6_22() {
    int i = 43, j = 99;
    auto lft = &i;
    auto rht = &j;
    swap(lft, rht);
    return 0;
}


int q6_25(int argc, char **argv) {
    string str;
    for (int i = 1; i != argc; ++i) {
        str += string(argv[i]) + " ";
    }
    cout << str << endl;
    return 0;
}

//int sum(initializer_list<int> il) {
//    int sum = 0;
//    for (auto i :il) {
//        sum + = i;
//    }
//    return sum;
//}

//int q6_27() {
//    auto il = {1, 2, 3, 4, 5, 6, 7, 8, 9};
//    cout << sum(il) << endl;
//}

void print(Iter first, Iter last) {
    if (first != last) {
        cout << *first << " ";
        print(++first, last);
    }
}

int q6_33() {
    vector<int> vec{1,2,3,4,5,6,7,8,9};
    print(vec.cbegin(),vec.cend());
    return 0;
}

int main() {
    cout << "----------start----------" << endl;
//    q5_24();
//    q5_25();
//    q6_10();
//    q6_11();
//    q6_12();
//    q6_21();
//    q6_27();
    q6_33();
    cout << endl;
    cout << "----------finish----------" << endl;
    return 0;
}