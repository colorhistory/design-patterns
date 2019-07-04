#include <iostream>

#include "Product.hpp"

DP::Product::Product() {
}

void DP::Product::setA(std::string str) {
    this->strA = str;
}

void DP::Product::setB(std::string str) {
    this->strB = str;
}

void DP::Product::setC(std::string str) {
    this->strC = str;
}

void DP::Product::show() {
    std::cout << "Product has " << strA << "   " << strB << "   " << strC << std::endl;
}
