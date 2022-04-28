#ifndef REST_APIDLL_GLOBAL_H
#define REST_APIDLL_GLOBAL_H

#include <QtCore/qglobal.h>

#if defined(REST_APIDLL_LIBRARY)
#  define REST_APIDLL_EXPORT Q_DECL_EXPORT
#else
#  define REST_APIDLL_EXPORT Q_DECL_IMPORT
#endif

#endif // REST_APIDLL_GLOBAL_H
