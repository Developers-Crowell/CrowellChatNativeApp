//
// Created by Matthew Crowell on 3/27/2023.
//

#ifndef CROWELLCHATQTCLIENT_CONVERSATION_H
#define CROWELLCHATQTCLIENT_CONVERSATION_H

#include <QObject>

#include "src/app/models/impl/conversation_impl.h"

class Conversation : public QObject
{
    Q_OBJECT
public:
    explicit Conversation(QObject *parent = nullptr);

private:
    std::unique_ptr<ConversationImpl> m_impl;
};

#endif //CROWELLCHATQTCLIENT_CONVERSATION_H
