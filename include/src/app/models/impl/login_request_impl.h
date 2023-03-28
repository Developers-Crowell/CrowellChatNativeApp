//
// Created by Matthew Crowell on 3/27/2023.
//

#ifndef CROWELLCHATQTCLIENT_LOGIN_REQUEST_IMPL_H
#define CROWELLCHATQTCLIENT_LOGIN_REQUEST_IMPL_H

#include <QObject>

class LoginRequestImpl : public QObject
{
    Q_OBJECT
public:
    explicit LoginRequestImpl(QObject *parent = nullptr);
};

#endif //CROWELLCHATQTCLIENT_LOGIN_REQUEST_IMPL_H
