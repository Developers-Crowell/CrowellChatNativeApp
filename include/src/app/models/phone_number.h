//
// Created by Matthew Crowell on 3/27/2023.
//

#ifndef CROWELLCHATQTCLIENT_PHONE_NUMBER_H
#define CROWELLCHATQTCLIENT_PHONE_NUMBER_H

#include <QObject>

#include "src/app/models/impl/phone_number_impl.h"

class PhoneNumber : public QObject
{
    Q_OBJECT
public:
    explicit PhoneNumber(QObject *parent = nullptr);

private:
    std::unique_ptr<PhoneNumberImpl> m_impl;
};

#endif //CROWELLCHATQTCLIENT_PHONE_NUMBER_H
