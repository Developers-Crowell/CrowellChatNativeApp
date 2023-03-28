//
// Created by Matthew Crowell on 3/27/2023.
//

#ifndef CROWELLCHATQTCLIENT_CHAT_MESSAGE_IMPL_H
#define CROWELLCHATQTCLIENT_CHAT_MESSAGE_IMPL_H
#include <QObject>
#include <QDateTime>

class ChatMessageImpl : public QObject {
    Q_OBJECT

    Q_PROPERTY(quint64 id READ id WRITE id NOTIFY idChanged)
    Q_PROPERTY(quint64 conversationId READ conversationId WRITE conversationId NOTIFY conversationIdChanged)
    Q_PROPERTY(QString message READ message WRITE message NOTIFY messageChanged)
    Q_PROPERTY(QString source READ source WRITE source NOTIFY sourceChanged)
    Q_PROPERTY(QDateTime timestamp READ timestamp WRITE timestamp NOTIFY timestampChanged)

public:
    explicit ChatMessageImpl(QObject *parent = nullptr);

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
    quint64 m_id{};
    quint64 m_conversationId{};
    QString m_message{};
    QString m_sender{};
    QDateTime m_timestamp{};
};
#endif //CROWELLCHATQTCLIENT_CHAT_MESSAGE_IMPL_H
