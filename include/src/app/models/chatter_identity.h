//
// Created by Matthew Crowell on 3/27/2023.
//

#ifndef CROWELLCHATQTCLIENT_CHATTER_IDENTITY_H
#define CROWELLCHATQTCLIENT_CHATTER_IDENTITY_H

#include <QObject>

#include "src/app/models/impl/chatter_identity_impl.h"

class ChatterIdentity : public QObject
{
    Q_OBJECT
public:
    explicit ChatterIdentity(QObject *parent = nullptr);

private:
    std::unique_ptr<ChatterIdentityImpl> m_impl;
};

#endif //CROWELLCHATQTCLIENT_CHATTER_IDENTITY_H
