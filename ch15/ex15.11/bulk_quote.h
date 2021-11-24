#ifndef BULK_QUOTE_H
#define BULK_QUOTE_H
#include "quote.h"

class Bulk_quote :public Quote {
public:
    Bulk_quote() = default;
    Bulk_quote(const std::string& b, double p, std::size_t q,
        double disc) :Quote(b, p), min_qty(q), discount(disc) {}
    double net_price(std::size_t n) const override;
    void debug() const override;

private:
    std::size_t min_qty = 0;
    double discount = 0.0;
};

double Bulk_quote::net_price(std::size_t n)const {
    return n * price * (n >= min_qty ? 1 - discount : 1);
}

void Bulk_quote::debug() const {
    std::cout << "Bulk_quote two members" << std::endl;
    std::cout << "min_qty: " << min_qty << std::endl;
    std::cout << "discount: " << discount << std::endl;
}

#endif