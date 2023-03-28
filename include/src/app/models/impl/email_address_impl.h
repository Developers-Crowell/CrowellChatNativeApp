//
// Created by Matthew Crowell on 3/27/2023.
//

#ifndef CROWELLCHATQTCLIENT_EMAIL_ADDRESS_IMPL_H
#define CROWELLCHATQTCLIENT_EMAIL_ADDRESS_IMPL_H

#include <QObject>

class EmailAddressImpl : public QObject
{
    Q_OBJECT
public:
    explicit EmailAddressImpl(QObject *parent = nullptr);
};

#endif //CROWELLCHATQTCLIENT_EMAIL_ADDRESS_IMPL_H
