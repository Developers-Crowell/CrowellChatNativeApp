//
// Created by Matthew Crowell on 3/27/2023.
//

#ifndef CROWELLCHATQTCLIENT_EMAIL_ADDRESS_H
#define CROWELLCHATQTCLIENT_EMAIL_ADDRESS_H

#include <QObject>

#include "src/app/models/impl/email_address_impl.h"

class EmailAddress : public QObject
{
    Q_OBJECT

public:
    explicit EmailAddress(QObject *parent = nullptr);

private:
    std::unique_ptr<EmailAddressImpl> m_impl;
};

#endif //CROWELLCHATQTCLIENT_EMAIL_ADDRESS_H
