#include <iostream>
#include <string>
#include <cctype>
#include <vector>
#include <cstring>

using std::vector;
using std::string;
using std::cin;
using std::cout;
using std::endl;
using std::getline;


int q4_21() {
    vector<int> ivec{1, 2, 3, 4, 5, 6, 7, 8, 9};
    for (auto i : ivec) {
        cout << ((i & 0x1) ? i * 2 : i) << " ";
    }
    cout << endl;
    return 0;
}

int q4_28() {
    cout << "bool:\t\t" << sizeof(bool) << "bytes" << endl ;
    cout << "char:\t\t" << sizeof(char) << "bytes" << endl ;
    cout << "wchar_t:\t" << sizeof(wchar_t ) << "bytes" << endl ;
    cout << "char16_t:\t" << sizeof(char16_t ) << "bytes" << endl;
    cout << "char32_t:\t" << sizeof(char32_t ) << "bytes" << endl;

    cout << "short:\t\t" << sizeof(short ) << "bytes"  << endl;
    cout << "int:\t\t" << sizeof(int) << "bytes"  << endl;
    cout << "long:\t\t" << sizeof(long) << "bytes" << endl;
    cout << "long long:\t" << sizeof(long long) << "bytes" << endl;

    cout << "float:\t\t" << sizeof(float ) << "bytes" << endl;
    cout << "double:\t\t" << sizeof(double ) << "bytes" << endl;
    cout << "long double:\t" << sizeof(long double) << "bytes" << endl;
    cout << "unsigned:\t" << sizeof(unsigned ) << "bytes" << endl;
    return 0;
}


int main() {
//    q4_21();
    q4_28();
    cout << "----------finish----------" << endl;
    return 0;

}


