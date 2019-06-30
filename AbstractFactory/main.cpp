/****************************************************************************
**
** Copyright (C) 2019 Xiaohai <xiaohaidotpro@outlook.com>.
** Contact: http://xiaohai.pro
**
** This file is part of AbstractFactory
**
**
****************************************************************************/

#include "bits/stdc++.h"

#include "ConcreteFactory1.hpp"
#include "ConcreteFactory2.hpp"

#include "ProductA1.hpp"
#include "ProductA2.hpp"
#include "ProductB1.hpp"
#include "ProductB2.hpp"

using namespace DP;

int main(int /* argc */, char ** /* argv */) {
    AbstractFactory *af = new ConcreteFactory1;
    AbstractProductA *ptrA = af->createProductA();
    AbstractProductB *ptrB = af->createProductB();
    ptrA->use();
    ptrB->draw();

    AbstractFactory *af2 = new ConcreteFactory2;
    AbstractProductA *ptr2A = af2->createProductA();
    AbstractProductB *ptr2B = af2->createProductB();
    ptr2A->use();
    ptr2B->draw();

    delete af;
    delete af2;
    delete ptrA;
    delete ptr2A;
    delete ptrB;
    delete ptr2B;

    return 0;
}
