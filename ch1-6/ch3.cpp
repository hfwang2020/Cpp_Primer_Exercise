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


int q3_2_1() {
    string s;
    while (getline(cin, s)) {
        cout << s << endl;
    }
    return 0;
}

int q3_2_2() {
    string s;
    while (cin >> s) {
        cout << s << endl;
    }
    return 0;
}

int q3_5() {
    string result, s;
    while (cin >> s) {
        result += s;
    }
    cout << result << endl;
    return 0;
}

int q3_8() {
    string s = "this is a string";
    decltype(s.size()) i = 0;
    while (i != s.size()) {
        s[i] = 'X';
        ++i;
    }
    cout << s << endl;
    return 0;
}

int q3_10() {
    string s = "this , is , a : string!";
    string result;
    for (auto x:s) {
        if (!ispunct(x)) {
            result += x;
        }
    }
    cout << result << endl;
    return 0;
}

int q3_14() {
    vector<int> v;
    int i;
    while (cin >> i) {
        v.push_back(i);
    }
    return 0;
}

int q3_16() {
    vector<int> v1;
    vector<int> v2(10);

    cout << "v1 size :" << v1.size() << endl;
    cout << "v2 size :" << v2.size() << endl;

    cout << "v1 content: ";
    for (auto i : v1) {
        cout << i << ",";
    }

    cout << "v2 content: ";
    for (auto i : v2) {
        cout << i << ",";
    }
    return 0;
}

int q3_20() {
    vector<int> ivec;
    int i;
    while (cin >> i) {
        ivec.push_back(i);
    }
    for (int i = 0; i < ivec.size() - 1; ++i) {
        cout << ivec[i] + ivec[i + 1] << endl;
    }

    cout << "=================================" << endl;

    int m = 0;
    int n = ivec.size() - 1;
    while (m < n) {
        cout << ivec[m] + ivec[n] << endl;
        m++;
        n--;
    }
    return 0;
}

int q3_23() {
    vector<int> v(10, 1);
    for (auto it = v.begin(); it != v.end(); it++) {
        *it *= 2;
    }
    for (auto one: v) {
        cout << one << endl;
    }

    return 0;
}

int q3_25() {
    vector<unsigned> scores(11, 0);
    unsigned grade;
    while (cin >> grade) {
        if (grade <= 100)
            ++*(scores.begin() + grade / 10);
    }

    for (auto s: scores)
        cout << s << " ";
    cout << endl;
    return 0;
}

int q3_31() {
    int arr[10];
    for (auto i = 0; i < 10; ++i) {
        arr[i] = i;
    }
    for (auto i :arr) {
        cout << i << " ";
    }
    cout << endl;
    return 0;
}

int q3_32() {
    int arr[10];
    for (int i = 0; i < 10; ++i) {
        arr[i] = i;
    }
    int arr2[10];
    for (int i = 0; i < 10; i++) {
        arr2[i] = arr[i];
    }
    vector<int> v(10);
    for (auto i :arr) {
        v[i] = arr[i];
    }
    for (auto i :v) {
        cout << i << " ";
    }

    return 0;
}


bool compare(int *const pb1, int *const pe1, int *const pb2, int *const pe2) {
    if ((pe1 - pb1) != (pe2 - pb2)) {
        return false;
    } else {
        for (int *i = pb1, *j = pb2; (i != pe1) && (j != pe2); ++i, ++j) {
            if (*i != *j) {
                return false;
            }
        }
    }
    return true;
}

const char cstr1[] = "hello";
const char cstr2[] = "world!";

int q3_40() {
    size_t new_size = strlen(cstr1) + strlen(" ") + strlen(cstr2) + 1;
    char cstr3[new_size];
    strcpy(cstr3, cstr1);
    strcat(cstr3, " ");
    strcat(cstr3, cstr2);

    cout << cstr3 << endl;
    return 0;
}

int q3_43() {
    int arr[3][4] = {
            {0, 1, 2,  3},
            {4, 5, 6,  7},
            {8, 9, 10, 11}
    };
    for (const int(&row)[4]:arr) {
        for (int col:row) {
            cout << col << " ";
        }
        cout << endl;
    }
    for (size_t i = 0; i != 3; ++i) {
        for (size_t j = 0; j != 4; ++j) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    for (int(*row)[4] = arr; row != arr + 3; ++row) {
        for (int *col = *row; col != *row + 4; ++col) {
            cout << *col << " ";
        }
        cout << endl;
    }
    return 0;
}




int main() {
//    q3_2_1();
//    q3_10();
//    q3_14();
//    q3_16();
//    q3_23();
//    q3_25();
//    q3_31();
//    q3_32();
    q3_40();
    return 0;


}

