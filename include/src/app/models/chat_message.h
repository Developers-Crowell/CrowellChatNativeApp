//
// Created by Matthew Crowell on 3/27/2023.
//

#ifndef CROWELLCHATQTCLIENT_CHAT_MESSAGE_H
#define CROWELLCHATQTCLIENT_CHAT_MESSAGE_H

#include <QObject>
#include <QDateTime>

#include "src/app/models/impl/chat_message_impl.h"

class ChatMessage : public QObject
{
Q_OBJECT

public:
    explicit ChatMessage(QObject* parent = nullptr);

    [[nodiscard]]
    quint64 id() const;
    void id(const quint64 &id);

    [[nodiscard]]
    quint64 conversationId() const;
    void conversationId(const quint64 &conversationId);

    [[nodiscard]]
    QString message() const;
    void message(const QString &message);

    [[nodiscard]]
    QString source() const;
    void source(const QString &sender);

    [[nodiscard]]
    QDateTime timestamp() const;
    void timestamp(const QDateTime &timestamp);

signals:
    void idChanged();
    void conversationIdChanged();
    void messageChanged();
    void sourceChanged();
    void timestampChanged();

private:
    std::unique_ptr<ChatMessageImpl> m_impl;
};
#endif //CROWELLCHATQTCLIENT_CHAT_MESSAGE_H
