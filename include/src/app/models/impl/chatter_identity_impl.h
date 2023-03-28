//
// Created by Matthew Crowell on 3/27/2023.
//

#ifndef CROWELLCHATQTCLIENT_CHATTER_IDENTITY_IMPL_H
#define CROWELLCHATQTCLIENT_CHATTER_IDENTITY_IMPL_H

#include <QObject>

class ChatterIdentityImpl : public QObject
{
    Q_OBJECT

public:
    explicit ChatterIdentityImpl(QObject *parent = nullptr);
};

#endif //CROWELLCHATQTCLIENT_CHATTER_IDENTITY_IMPL_H
