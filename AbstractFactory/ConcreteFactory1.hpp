#ifndef CONCRETEFACTORY1_HPP
#define CONCRETEFACTORY1_HPP

#include "AbstractFactory.hpp"

namespace DP {

    class ConcreteFactory1 : public AbstractFactory {
      public:
        ConcreteFactory1();
        virtual ~ConcreteFactory1();

        virtual AbstractProductA *createProductA() override;
        virtual AbstractProductB *createProductB() override;
    };

}  // namespace DP

#endif  // CONCRETEFACTORY1_HPP
