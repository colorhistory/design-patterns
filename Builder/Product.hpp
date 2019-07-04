#ifndef PRODUCT_HPP
#define PRODUCT_HPP

#include <string>

namespace DP {

    class Product {
      public:
        Product();
        virtual ~Product();

        void setA(std::string str);
        void setB(std::string str);
        void setC(std::string str);

        void show();

      private:
        std::string strA;
        std::string strB;
        std::string strC;
    };

}  // namespace DP

#endif  // PRODUCT_HPP
