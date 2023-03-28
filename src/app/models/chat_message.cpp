//
// Created by Matthew Crowell on 3/27/2023.
//

#include "src/app/models/chat_message.h"
#include "src/app/models/impl/chat_message_impl.h"


ChatMessage::ChatMessage(QObject* parent)
    : QObject(parent)
    , m_impl(std::make_unique<ChatMessageImpl>(nullptr))
{
    connect(m_impl.get(), &ChatMessageImpl::idChanged, this, &ChatMessage::idChanged);
    connect(m_impl.get(), &ChatMessageImpl::conversationIdChanged, this, &ChatMessage::conversationIdChanged);
    connect(m_impl.get(), &ChatMessageImpl::messageChanged, this, &ChatMessage::messageChanged);
    connect(m_impl.get(), &ChatMessageImpl::sourceChanged, this, &ChatMessage::sourceChanged);
    connect(m_impl.get(), &ChatMessageImpl::timestampChanged, this, &ChatMessage::timestampChanged);
}

quint64 ChatMessage::id() const {
    return m_impl->id();
}

void ChatMessage::id(const quint64 &id) {
    m_impl->id(id);
}

quint64 ChatMessage::conversationId() const {
    return m_impl->conversationId();
}

void ChatMessage::conversationId(const quint64 &conversationId) {
    m_impl->conversationId(conversationId);
}

QString ChatMessage::message() const {
    return m_impl->message();
}

void ChatMessage::message(const QString &message) {
    m_impl->message(message);
}

QString ChatMessage::source() const {
    return m_impl->source();
}

void ChatMessage::source(const QString &sender) {
    m_impl->source(sender);
}

QDateTime ChatMessage::timestamp() const {
    return m_impl->timestamp();
}

void ChatMessage::timestamp(const QDateTime &timestamp) {
    m_impl->timestamp(timestamp);
}