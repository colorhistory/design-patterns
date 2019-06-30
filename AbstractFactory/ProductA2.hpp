#ifndef PRODUCTA2_HPP
#define PRODUCTA2_HPP

#include "AbstractProductA.hpp"

namespace DP {

    class ProductA2 : public AbstractProductA {
      public:
        ProductA2();
        virtual ~ProductA2();

        // ADT
        virtual void use() override;
    };

}  // namespace DP
#endif  // PRODUCTA2_HPP
