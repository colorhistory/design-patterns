#ifndef VMSBUILDER_HPP
#define VMSBUILDER_HPP

#include "Builder.hpp"

namespace DP {

    class VmsBuilder : public Builder {
      public:
        VmsBuilder();

        // ADT
        virtual void configureFile(std::string file) override;
        virtual void configureQueue(std::string queue) override;
        virtual void configurePathway(std::string pathway) override;
    };

}  // namespace DP

#endif  // VMSBUILDER_HPP
