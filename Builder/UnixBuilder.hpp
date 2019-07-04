#ifndef UNIXBUILDER_HPP
#define UNIXBUILDER_HPP

#include "Builder.hpp"

namespace DP {

    class UnixBuilder : public Builder {
      public:
        UnixBuilder();

        // ADT
        virtual void configureFile(std::string file) override;
        virtual void configureQueue(std::string queue) override;
        virtual void configurePathway(std::string pathway) override;
    };

}  // namespace DP

#endif  // UNIXBUILDER_HPP
