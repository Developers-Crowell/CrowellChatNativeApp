//
// Created by Matthew Crowell on 3/27/2023.
//

#ifndef CROWELLCHATQTCLIENT_CHATTER_H
#define CROWELLCHATQTCLIENT_CHATTER_H

#include <QObject>

#include "src/app/models/impl/chatter_impl.h"

class Chatter : public QObject
{
    Q_OBJECT
public:
    explicit Chatter(QObject *parent = nullptr);

private:
    std::unique_ptr<ChatterImpl> m_impl;
};

#endif //CROWELLCHATQTCLIENT_CHATTER_H
