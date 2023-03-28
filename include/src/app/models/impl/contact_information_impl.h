//
// Created by Matthew Crowell on 3/27/2023.
//

#ifndef CROWELLCHATQTCLIENT_CONTACT_INFORMATION_IMPL_H
#define CROWELLCHATQTCLIENT_CONTACT_INFORMATION_IMPL_H

#include <QObject>

class ContactInformationImpl : public QObject
{
Q_OBJECT

public:
    explicit ContactInformationImpl(QObject *parent = nullptr);
};

#endif //CROWELLCHATQTCLIENT_CONTACT_INFORMATION_IMPL_H
