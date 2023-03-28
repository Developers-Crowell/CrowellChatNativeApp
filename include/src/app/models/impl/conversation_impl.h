//
// Created by Matthew Crowell on 3/27/2023.
//

#ifndef CROWELLCHATQTCLIENT_CONVERSATION_IMPL_H
#define CROWELLCHATQTCLIENT_CONVERSATION_IMPL_H

#include <QObject>

class ConversationImpl : public QObject
{
    Q_OBJECT
public:
    explicit ConversationImpl(QObject *parent = nullptr);
};

#endif //CROWELLCHATQTCLIENT_CONVERSATION_IMPL_H
