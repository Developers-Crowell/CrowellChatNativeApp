//
// Created by Matthew Crowell on 3/27/2023.
//

#ifndef CROWELLCHATQTCLIENT_PRAENOMEN_H
#define CROWELLCHATQTCLIENT_PRAENOMEN_H

#include <QObject>

#include "src/app/models/impl/praenomen_impl.h"

class Praenomen : public QObject
{
    Q_OBJECT
public:
    explicit Praenomen(QObject *parent = nullptr);

private:
    std::unique_ptr<PraenomenImpl> m_impl;
};

#endif //CROWELLCHATQTCLIENT_PRAENOMEN_H
