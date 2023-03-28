//
// Created by Matthew Crowell on 3/27/2023.
//

#ifndef CROWELLCHATQTCLIENT_CONTACT_INFORMATION_H
#define CROWELLCHATQTCLIENT_CONTACT_INFORMATION_H

#include <QObject>

#include "src/app/models/impl/contact_information_impl.h"

class ContactInformation : public QObject
{
    Q_OBJECT
public:
    explicit ContactInformation(QObject *parent = nullptr);

private:
    std::unique_ptr<ContactInformationImpl> m_impl;
};

#endif //CROWELLCHATQTCLIENT_CONTACT_INFORMATION_H
