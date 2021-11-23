//
// Exercise 15.7:
// Define a class that implements a limited discount strategy, which applies
// a discount to books purchased up to a given limit. If the number of copies
// exceeds that limit, the normal price applies to those purchased beyond the
// limit.
//

#include <iostream>
#include <string>

#include "quote.h"
#include "bulk_quote.h"
#include "limit_quote.h"

double print_total(std::ostream& os, const Quote& item, size_t n);

int main() {
    // Quote q("textbook", 10.6);
    Bulk_quote bq("textbook", 10.6, 10, 0.3);
    Limit_quote lq("textbook", 10.6, 100, 0.9);
    // print_total(std::cout, q, 12);
    print_total(std::cout, lq, 12);
    return 0;
}


double print_total(std::ostream& os, const Quote& item, size_t n) {
    double ret = item.net_price(n);
    os << "ISBN:" << item.isbn()
        << "# sold: " << n << " total due: " << ret << std::endl;

    return ret;
}


