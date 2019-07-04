#ifndef READER_HPP
#define READER_HPP

#include "DistrWorkPackage.hpp"
#include "UnixBuilder.hpp"
#include "VmsBuilder.hpp"

namespace DP {

    class Reader {
      public:
        Reader();

        // ADT
        void setBuilder(Builder *b);
        void construct(PersistenceAttribute[], int);

      private:
        Builder *builder;
    };

}  // namespace DP

#endif  // READER_HPP
