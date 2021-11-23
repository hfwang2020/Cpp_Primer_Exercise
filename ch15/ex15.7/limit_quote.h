#ifndef LIMIT_QUOTE_H
#define LIMIT_QUOTE_H

#include "quote.h"

class Limit_quote :public Quote {
public:
    Limit_quote() = default;
    Limit_quote(const std::string& b, double p, std::size_t max, double dis) :Quote(b, p), max_qty(max), discount(dis) {
    }
    double net_price(std::size_t n)const override;


private:
    std::size_t max_qty = 0;
    double discount = 0.0;
};


double Limit_quote::net_price(std::size_t n) const {
    if (n > max_qty)
        return max_qty * price * discount + (n - max_qty) * price;
    else
        return n * discount * price;
}

#endif