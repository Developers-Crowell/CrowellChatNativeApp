//
// Created by Matthew Crowell on 3/27/2023.
//

#ifndef CROWELLCHATQTCLIENT_PHONE_NUMBER_IMPL_H
#define CROWELLCHATQTCLIENT_PHONE_NUMBER_IMPL_H

#include <QObject>

class PhoneNumberImpl : public QObject
{
    Q_OBJECT
public:
    explicit PhoneNumberImpl(QObject *parent = nullptr);
};

#endif //CROWELLCHATQTCLIENT_PHONE_NUMBER_IMPL_H
