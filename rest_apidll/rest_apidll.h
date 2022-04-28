#ifndef REST_APIDLL_H
#define REST_APIDLL_H

#include "rest_apidll_global.h"
#include <QtNetwork>
#include <QNetworkAccessManager>
#include <QJsonDocument>
#include "rest_apidll_global.h"
#include <QObject>


class REST_APIDLL_EXPORT Rest_apidll : public QObject
{
    Q_OBJECT
public:
    Rest_apidll(QObject *parent);
    ~Rest_apidll();
    void getAsiakasKortti (QString korttiId, QString pinkoodi);
    void setWebToken(QString w);

    QNetworkAccessManager *getManager;
    QNetworkReply *reply;

private:
    QByteArray webtoken;

};

#endif // REST_APIDLL_H
