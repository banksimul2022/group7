#include "rest_apidll.h"
#include <qdebug.h>

Rest_apidll::Rest_apidll(QObject *parent) :
    QObject(parent)
{
    getManager = new QNetworkAccessManager(this);
}

Rest_apidll::~Rest_apidll()
{
    delete getManager;
}

void Rest_apidll::getAsiakasKortti(QString korttiId, QString pinkoodi)
{
    QString site_url="http://localhost:3000/kortti" + korttiId + "/";
    qDebug() << "URL = " + site_url;

    //WEBTOKEN TÄHÄN ALLE
    QNetworkRequest request((site_url));
    request.setHeader(QNetworkRequest::ContentTypeHeader, "application/json");
    QByteArray token = "Bearer" + webtoken;
    request.setRawHeader(QByteArray("Authoorization"),(token));

    reply = getManager->get(request);
}

void Rest_apidll::setWebToken(QString w)
{
    webtoken = w;
}

