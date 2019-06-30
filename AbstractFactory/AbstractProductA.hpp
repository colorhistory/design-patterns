#ifndef ABSTRACTPRODUCTA_HPP
#define ABSTRACTPRODUCTA_HPP

namespace DP {

    class AbstractProductA {
      public:
        AbstractProductA();
        virtual ~AbstractProductA() = 0;

        // ADT
        virtual void use() = 0;
    };

}  // namespace DP
#endif  // ABSTRACTPRODUCTA_HPP
