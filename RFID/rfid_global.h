#ifndef RFID_GLOBAL_H
#define RFID_GLOBAL_H

#include <QtCore/qglobal.h>

#if defined(RFID_LIBRARY)
#  define RFID_EXPORT Q_DECL_EXPORT
#else
#  define RFID_EXPORT Q_DECL_IMPORT
#endif

#endif // RFID_GLOBAL_H
