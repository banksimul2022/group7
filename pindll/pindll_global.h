#ifndef PINDLL_GLOBAL_H
#define PINDLL_GLOBAL_H

#include <QtCore/qglobal.h>

#if defined(PINDLL_LIBRARY)
#  define PINDLL_EXPORT Q_DECL_EXPORT
#else
#  define PINDLL_EXPORT Q_DECL_IMPORT
#endif

#endif // PINDLL_GLOBAL_H
