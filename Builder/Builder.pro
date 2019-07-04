TEMPLATE = app
TARGET = builder

HEADERS += \
    PersistenceAttribute.hpp \
    DistrWorkPackage.hpp \
    Builder.hpp \
    UnixBuilder.hpp \
    VmsBuilder.hpp \
    Reader.hpp

SOURCES += \
    DistrWorkPackage.cpp \
    Builder.cpp \
    UnixBuilder.cpp \
    VmsBuilder.cpp \
    Reader.cpp \
    main.cpp

