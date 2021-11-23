#include <iostream>
#include <string>
#include <cctype>
#include <vector>
#include <cstring>
#include <stdexcept>


using std::vector;
using std::string;
using std::cin;
using std::cout;
using std::endl;
using std::getline;
using std::pair;
using std::runtime_error;

int q5_5() {
    vector <string> scores = {"F", "D", "C", "B", "A", "A++"};
    for (int g; cin >> g;) {
        string letter;
        if (g < 60) {
            letter = scores[0];
        } else {
            letter = scores[(g - 50) / 10];
            if (g != 100) {
                letter += g % 10 > 7 ? "+" : g % 10 < 3 ? "-" : "";
            }
        }
        cout << letter << endl;
    }
    return 0;
}

//int q5_10() {
//    unsigned aCnt = 0, eCnt = 0, iCnt = 0, oCnt = 0, uCnt = 0;
//    char ch;
//    while (cin >> ch) {
//        switch (ch) {
//            case 'a':
//            case 'A':
//                ++aCnt;
//                break;
//        }
//    }
//    return 0;
//}

int q5_14() {
    pair<string, int> max_duplicated;
    int count = 0;
    for (string str, prestr; cin >> str; prestr = str) {
        if (str == prestr) {
            ++count;
        } else {
            count = 0;
        }
        if (count > max_duplicated.second) {
            max_duplicated = {prestr, count};
        }
    }
    if (max_duplicated.first.empty()) {
        cout << "there is no duplicated string." << endl;
    } else {
        cout << "the word" << max_duplicated.first << "occurred" << max_duplicated.second + 1 << "times" << endl;

    }
    return 0;
}

//bool is_prefix(vector<int>const& lhs, vector<int> const &rhs){
//    if (lhs.size()>rhs.size()){
//       return is_prefix(rhs , lhs);
//    }
//    for(unsigned i = 0;i != lhs.size();++i){
//        if(lhs[i]!=rhs[i]){
//            return false;
//        }
//        return true;
//    }
//}

int q5_24() {
    int i, j;
    std::cin >> i >> j;
    if (j == 0) {
        throw std::runtime_error("divisor is 0");
    }
    std::cout << i / j << std::endl;
    return 0;
}

int q5_25() {
    for (int i, j; cout << "input two integers:\n", cin >> i >> j;) {
        try {
            if (j == 0) {
                throw runtime_error("divisor is 0");
            }
            cout << i / j << endl;
        }
        catch (runtime_error err) {
            cout << err.what() << "\n Try again ? enter y or n" << endl;
            char c;
            cin >> c;
            if (!cin || c == 'n'){
                break;
            }
        }
    }
    return 0;
}


int main() {

//    q5_24();
    q5_25();
    cout << "----------finish----------" << endl;
    return 0;

}


