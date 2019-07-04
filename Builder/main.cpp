/****************************************************************************
**
** Copyright (C) 2019 Xiaohai <xiaohaidotpro@outlook.com>.
** Contact: http://xiaohai.pro
**
** This file is part of design-patterns
**
**
****************************************************************************/

#include "bits/stdc++.h"

#include "DistrWorkPackage.hpp"
#include "Reader.hpp"
#include "UnixBuilder.hpp"
#include "VmsBuilder.hpp"

using namespace DP;

int main(int /* argc */, char** /* argv */) {
    const int NUMENTRIES = 6;
    PersistenceAttribute input[NUMENTRIES] = {{File, "state.dat"}, {File, "config.sys"},        {Queue, "conpute"},
                                              {Queue, "log"},      {Pathway, "authentication"}, {Pathway, "error processing"}};

    UnixBuilder unixBuilder;
    VmsBuilder vmsBuilder;
    Reader reader;

    reader.setBuilder(&unixBuilder);
    reader.construct(input, NUMENTRIES);
    std::cout << unixBuilder.getResult()->getState() << std::endl;

    reader.setBuilder(&vmsBuilder);
    reader.construct(input, NUMENTRIES);
    std::cout << vmsBuilder.getResult()->getState() << std::endl;

    return 0;
}
