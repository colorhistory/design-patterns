#include "DistrWorkPackage.hpp"

#include "UnixBuilder.hpp"

////////////////////////////////////////////////////////////
/// \brief DP::UnixBuilder::UnixBuilder
///
DP::UnixBuilder::UnixBuilder() {
    result = new DistrWorkPackage("Unix");
}

////////////////////////////////////////////////////////////
/// \brief DP::UnixBuilder::configureFile
/// \param file
///
void DP::UnixBuilder::configureFile(std::string file) {
    result->setFile("flatFile", file);
}

////////////////////////////////////////////////////////////
/// \brief DP::UnixBuilder::configureQueue
/// \param queue
///
void DP::UnixBuilder::configureQueue(std::string queue) {
    result->setQueue("FIFO", queue);
}

////////////////////////////////////////////////////////////
/// \brief DP::UnixBuilder::configurePathway
/// \param pathway
///
void DP::UnixBuilder::configurePathway(std::string pathway) {
    result->setPathway("thread", pathway);
}
