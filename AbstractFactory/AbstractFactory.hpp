#ifndef ABSTRACTFACTORY_HPP
#define ABSTRACTFACTORY_HPP

namespace DP {

    class AbstractProductA;
    class AbstractProductB;

    class AbstractFactory {
      public:
        AbstractFactory();
        virtual ~AbstractFactory() = 0;

        virtual AbstractProductA *createProductA() = 0;
        virtual AbstractProductB *createProductB() = 0;
    };

}  // namespace DP

#endif  // ABSTRACTFACTORY_HPP
