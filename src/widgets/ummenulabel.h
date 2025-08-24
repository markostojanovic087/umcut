#ifndef UMMENULABEL_H
#define UMMENULABEL_H

#include <QLabel>
#include <QEvent>
#include <QString>

class UMMenuLabel : public QLabel {
    static const QString normalStyle;
    static const QString hoverStyle;

    Q_OBJECT
public:
    explicit UMMenuLabel(const QString& text, QWidget* parent);

protected:
    void enterEvent(QEnterEvent*) override;
    void leaveEvent(QEvent*) override;
};

#endif // UMMENULABEL_H
