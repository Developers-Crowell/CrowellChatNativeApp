//
// Created by Matthew Crowell on 3/27/2023.
//

#ifndef CROWELLCHATQTCLIENT_LOGIN_REQUEST_H
#define CROWELLCHATQTCLIENT_LOGIN_REQUEST_H

#include <QObject>

#include "src/app/models/impl/login_request_impl.h"

class LoginRequest : public QObject
{
    Q_OBJECT
public:
    explicit LoginRequest(QObject *parent = nullptr);

private:
    std::unique_ptr<LoginRequestImpl> m_impl;
};

#endif //CROWELLCHATQTCLIENT_LOGIN_REQUEST_H
