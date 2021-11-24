#ifndef QUOTE_H
#define QUOTE_H

#include <string>
#include <iostream>

class Quote {
public:
    Quote() = default;
    Quote(const std::string& b, double p) :
        bookNo(b), price(p) {}

    std::string  isbn() const { return bookNo; }
    virtual double net_price(std::size_t n)const {
        return n * price;
    };
    virtual void debug() const;
    virtual ~Quote() = default;

private:
    std::string bookNo;

protected:
    double price = 0.0;

};

void Quote::debug() const {
    std::cout << "data member of Quote:" << std::endl;
    std::cout << "bookNo:" << bookNo << std::endl;
    std::cout << "price:" << price << std::endl;
}




#endif