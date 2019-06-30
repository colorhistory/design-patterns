#include "ConcreteFactory1.hpp"

#include "ProductA1.hpp"
#include "ProductB1.hpp"

DP::ConcreteFactory1::ConcreteFactory1() {
}

DP::ConcreteFactory1::~ConcreteFactory1() {
}

DP::AbstractProductA *DP::ConcreteFactory1::createProductA() {
    return new ProductA1;
}

DP::AbstractProductB *DP::ConcreteFactory1::createProductB() {
    return new ProductB1;
}
