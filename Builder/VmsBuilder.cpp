#include "VmsBuilder.hpp"

////////////////////////////////////////////////////////////
/// \brief DP::VmsBuilder::VmsBuilder
///
DP::VmsBuilder::VmsBuilder() {
    result = new DistrWorkPackage("Vms");
}

////////////////////////////////////////////////////////////
/// \brief DP::VmsBuilder::configureFile
/// \param file
///
void DP::VmsBuilder::configureFile(std::string file) {
    result->setFile("ISAM", file);
}

////////////////////////////////////////////////////////////
/// \brief DP::VmsBuilder::configureQueue
/// \param queue
///
void DP::VmsBuilder::configureQueue(std::string queue) {
    result->setQueue("prioprity", queue);
}

////////////////////////////////////////////////////////////
/// \brief DP::VmsBuilder::configurePathway
/// \param pathway
///
void DP::VmsBuilder::configurePathway(std::string pathway) {
    result->setPathway("LWP", pathway);
}
