//
// Created by Matthew Crowell on 3/27/2023.
//

#ifndef CROWELLCHATQTCLIENT_PRAENOMEN_IMPL_H
#define CROWELLCHATQTCLIENT_PRAENOMEN_IMPL_H

#include <QObject>

class PraenomenImpl : public QObject
{
    Q_OBJECT
public:
    explicit PraenomenImpl(QObject *parent = nullptr);
};

#endif //CROWELLCHATQTCLIENT_PRAENOMEN_IMPL_H
