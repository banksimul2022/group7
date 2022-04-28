#include "pindll.h"

Pindll::Pindll()
{
    plogindialog = new loginDialog;
}

Pindll::~Pindll()
{
    delete plogindialog;
}

void Pindll::login()
{
    plogindialog->show();
}
