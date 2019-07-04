#ifndef DISTRWORKPACKAGE_HPP
#define DISTRWORKPACKAGE_HPP

#include <string>

#include "PersistenceAttribute.hpp"

namespace DP {

    ////////////////////////////////////////////////////////////
    /// \brief The DistrWorkPackage class is the product.
    ///
    class DistrWorkPackage {
      public:
        DistrWorkPackage(std::string type);

        // ADT
        void setFile(std::string f, std::string v);
        void setQueue(std::string q, std::string v);
        void setPathway(std::string p, std::string v);

        const std::string getState();

      private:
        std::string desc;
        std::string temp;
    };

}  // namespace DP

#endif  // DISTRWORKPACKAGE_HPP
