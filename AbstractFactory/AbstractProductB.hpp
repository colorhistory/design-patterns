#ifndef ABSTRACTPRODUCTB_HPP
#define ABSTRACTPRODUCTB_HPP

namespace DP {

    class AbstractProductB {
      public:
        AbstractProductB();
        virtual ~AbstractProductB() = 0;

        // ADT
        virtual void draw() = 0;
    };

}  // namespace DP

#endif  // ABSTRACTPRODUCTB_HPP
