#include "ConcreteFactory2.hpp"

#include "ProductA2.hpp"
#include "ProductB2.hpp"

DP::ConcreteFactory2::ConcreteFactory2() {
}

DP::ConcreteFactory2::~ConcreteFactory2() {
}

DP::AbstractProductA *DP::ConcreteFactory2::createProductA() {
    return new ProductA2;
}

DP::AbstractProductB *DP::ConcreteFactory2::createProductB() {
    return new ProductB2;
}
