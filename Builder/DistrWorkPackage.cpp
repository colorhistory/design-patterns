#include <string>

#include "DistrWorkPackage.hpp"

////////////////////////////////////////////////////////////
/// \brief DP::DistrWorkPackage::DistrWorkPackage
/// \param type
///
DP::DistrWorkPackage::DistrWorkPackage(std::string type) {
    desc = std::string("Distributed Work Package for: ") + type;
}

////////////////////////////////////////////////////////////
/// \brief DP::DistrWorkPackage::setFile
/// \param f
/// \param v
///
void DP::DistrWorkPackage::setFile(std::string f, std::string v) {
    temp = std::string("\n File") + f + ": " + v;
    desc += temp;
}

////////////////////////////////////////////////////////////
/// \brief DP::DistrWorkPackage::setQueue
/// \param q
/// \param v
///
void DP::DistrWorkPackage::setQueue(std::string q, std::string v) {
    temp = std::string("\n Queue") + q + ": " + v;
    desc += temp;
}

////////////////////////////////////////////////////////////
/// \brief DP::DistrWorkPackage::setPathway
/// \param p
/// \param v
///
void DP::DistrWorkPackage::setPathway(std::string p, std::string v) {
    temp = std::string("\n Pathway") + p + ": " + v;
    desc += temp;
}

////////////////////////////////////////////////////////////
/// \brief DP::DistrWorkPackage::getState
/// \return
///
const std::string DP::DistrWorkPackage::getState() {
    return desc;
}
