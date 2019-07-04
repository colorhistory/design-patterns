#ifndef BUILDER_HPP
#define BUILDER_HPP

#include "DistrWorkPackage.hpp"

namespace DP {

    ////////////////////////////////////////////////////////////
    /// \brief The Builder class
    ///
    class Builder {
      public:
        Builder();
        virtual ~Builder() = 0;

        // ADT
        virtual void configureFile(std::string file) = 0;
        virtual void configureQueue(std::string queue) = 0;
        virtual void configurePathway(std::string pathway) = 0;

        DistrWorkPackage *getResult();

      protected:
        DistrWorkPackage *result;
    };

}  // namespace DP

#endif  // BUILDER_HPP
