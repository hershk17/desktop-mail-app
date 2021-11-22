#ifndef MAILBOX_H
#define MAILBOX_H

#include <QWidget>
#include <QListWidget>
#include <QJsonArray>
#include <QVBoxLayout>
#include <QGridLayout>
#include <QList>
#include <QLabel>

#include "mail.h"
#include "maildetails.h"
#include "composemail.h"
class MailBox : public QWidget
{
    Q_OBJECT

private:
    QJsonArray messages;
    MailDetails *mail;
    QGridLayout *mainlayout;
    QVBoxLayout *inboxlayout;
    ComposeMail *composeBox;
public:
    MailBox(QWidget *parent = nullptr);
    ~MailBox();

private slots:
    void onMailSelect(QString id);
    void onComposeClicked();
    //void onSentClicked();
};
#endif // MAILBOX_H
