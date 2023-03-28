//
// Created by Matthew Crowell on 3/27/2023.
//

#ifndef CROWELLCHATQTCLIENT_COGNOMEN_IMPL_H
#define CROWELLCHATQTCLIENT_COGNOMEN_IMPL_H

#include <QObject>

class CognomenImpl : public QObject
{
    Q_OBJECT

public:
    explicit CognomenImpl(QObject *parent = nullptr);
};

#endif //CROWELLCHATQTCLIENT_COGNOMEN_IMPL_H
