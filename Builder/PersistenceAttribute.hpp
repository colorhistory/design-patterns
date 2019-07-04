#ifndef PERSISTENCEATTRIBUTE_HPP
#define PERSISTENCEATTRIBUTE_HPP

namespace DP {

    ////////////////////////////////////////////////////////////
    /// \brief The PersistenceType enum
    ///
    enum PersistenceType { File, Queue, Pathway };

    ////////////////////////////////////////////////////////////
    /// \brief The PersistenceAttribute struct
    ///
    struct PersistenceAttribute {
        PersistenceType type;
        char value[100];
    };

}  // namespace DP

#endif  // PERSISTENCEATTRIBUTE_HPP
