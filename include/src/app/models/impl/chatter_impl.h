//
// Created by Matthew Crowell on 3/27/2023.
//

#ifndef CROWELLCHATQTCLIENT_CHATTER_IMPL_H
#define CROWELLCHATQTCLIENT_CHATTER_IMPL_H

#include <QObject>

class ChatterImpl : public QObject
{
    Q_OBJECT
public:
    explicit ChatterImpl(QObject *parent = nullptr);
};

#endif //CROWELLCHATQTCLIENT_CHATTER_IMPL_H
