#ifndef PINDLL_H
#define PINDLL_H

#include "pindll_global.h"
#include "logindialog.h"

class PINDLL_EXPORT Pindll
{
public:
    Pindll();
    ~Pindll();
    loginDialog * plogindialog;
    void login();

};

#endif // PINDLL_H
