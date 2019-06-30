#ifndef PRODUCTB2_HPP
#define PRODUCTB2_HPP

#include "AbstractProductB.hpp"

namespace DP {

    class ProductB2 : public AbstractProductB {
      public:
        ProductB2();
        virtual ~ProductB2();

        // ADT
        virtual void draw() override;
    };

}  // namespace DP

#endif  // PRODUCTB2_HPP
