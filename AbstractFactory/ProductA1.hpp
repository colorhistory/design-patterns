#ifndef PRODUCTA1_HPP
#define PRODUCTA1_HPP

#include "AbstractProductA.hpp"

namespace DP {

    class ProductA1 : public AbstractProductA {
      public:
        ProductA1();
        virtual ~ProductA1();

        // ADT
        virtual void use() override;
    };

}  // namespace DP
#endif  // PRODUCTA1_HPP
