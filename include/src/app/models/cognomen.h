//
// Created by Matthew Crowell on 3/27/2023.
//

#ifndef CROWELLCHATQTCLIENT_COGNOMEN_H
#define CROWELLCHATQTCLIENT_COGNOMEN_H

#include <QObject>

#include "src/app/models/impl/cognomen_impl.h"

class Cognomen : public QObject
{
    Q_OBJECT
public:
    explicit Cognomen(QObject *parent = nullptr);

private:
    std::unique_ptr<CognomenImpl> m_impl;
};
#endif //CROWELLCHATQTCLIENT_COGNOMEN_H
