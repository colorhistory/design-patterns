#include "Reader.hpp"

////////////////////////////////////////////////////////////
/// \brief DP::Reader::Reader
///
DP::Reader::Reader() {
}

////////////////////////////////////////////////////////////
/// \brief DP::Reader::setBuilder
/// \param b
///
void DP::Reader::setBuilder(DP::Builder *b) {
    builder = b;
}

////////////////////////////////////////////////////////////
/// \brief DP::Reader::construct
/// \param list
/// \param num
///
void DP::Reader::construct(DP::PersistenceAttribute list[], int num) {
    for (int i = 0; i != num; ++i) {
        if (list[i].type == File) {
            builder->configureFile(list[i].value);
        } else if (list[i].type == Queue) {
            builder->configureQueue(list[i].value);
        } else if (list[i].type == Pathway) {
            builder->configurePathway(list[i].value);
        }
    }
}
