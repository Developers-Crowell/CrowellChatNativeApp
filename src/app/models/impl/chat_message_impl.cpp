//
// Created by Matthew Crowell on 3/27/2023.
//

#include "src/app/models/impl/chat_message_impl.h"

ChatMessageImpl::ChatMessageImpl(QObject *parent)
    : QObject(parent)
{

}

quint64 ChatMessageImpl::id() const {
    return m_id;
}

void ChatMessageImpl::id(const quint64 &id) {
    m_id = id;
    emit idChanged();
}

quint64 ChatMessageImpl::conversationId() const {
    return m_conversationId;
}

void ChatMessageImpl::conversationId(const quint64 &conversationId) {
    m_conversationId = conversationId;
    emit conversationIdChanged();
}

QString ChatMessageImpl::message() const {
    return m_message;
}

void ChatMessageImpl::message(const QString &message) {
    m_message = message;
    emit messageChanged();
}

QString ChatMessageImpl::source() const {
    return m_sender;
}

void ChatMessageImpl::source(const QString &sender) {
    m_sender = sender;
    emit sourceChanged();
}

QDateTime ChatMessageImpl::timestamp() const {
    return m_timestamp;
}

void ChatMessageImpl::timestamp(const QDateTime &timestamp) {
    m_timestamp = timestamp;
    emit timestampChanged();
}
