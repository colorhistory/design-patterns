#ifndef CONCRETEFACTORY2_HPP
#define CONCRETEFACTORY2_HPP

#include <AbstractFactory.hpp>

namespace DP {

    class ConcreteFactory2 : public AbstractFactory {
      public:
        ConcreteFactory2();
        virtual ~ConcreteFactory2();

        // ADT
        virtual AbstractProductA *createProductA() override;
        virtual AbstractProductB *createProductB() override;
    };

}  // namespace DP

#endif  // CONCRETEFACTORY2_HPP
