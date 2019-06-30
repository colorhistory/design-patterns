#ifndef PRODUCTB1_HPP
#define PRODUCTB1_HPP

#include "AbstractProductB.hpp"

namespace DP {

    class ProductB1 : public AbstractProductB {
      public:
        ProductB1();
        virtual ~ProductB1();

        // ADT
        virtual void draw() override;
    };

}  // namespace DP

#endif  // PRODUCTB1_HPP
