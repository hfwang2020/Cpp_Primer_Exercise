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



struct Sales_date {
    string isbn() const { return bookNo; }
    Sales_date& combine(const Sales_date&);


    string bookNo;
    unsigned units_sold = 0;
    double revenue = 0.0;
};



int q7_1() {
    Sales_date total;
    if (cin >> total.bookNo >> total.units_sold >> total.revenue) {
        Sales_date trans;
        while (cin >> trans.bookNo >> trans.units_sold >> trans.revenue) {
            if (total.bookNo == trans.bookNo) {
                total.units_sold += trans.units_sold;
                total.revenue += trans.revenue;
            } else {
                cout << total.bookNo << " " << total.units_sold << " " << total.revenue << endl;
                total = trans;
            }
        }
        cout << total.bookNo << " " << total.units_sold << " " << total.revenue << endl;
    }else{
        std::cerr << "No data?!" << endl;
        return -1;
    }
    return 0;
}



int main() {
    cout << "----------start----------" << endl;


    cout << endl;
    cout << "----------finish----------" << endl;
    return 0;
}
