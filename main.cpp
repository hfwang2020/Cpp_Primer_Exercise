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




int main() {
    q4_21();
    cout << "hello world!" << endl;
    return 0;

}


