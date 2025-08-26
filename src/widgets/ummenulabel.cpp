#include "ummenulabel.h"
#include "ummenulabelstyle.h"

#include <QLabel>
#include <QEvent>
#include <QString>

const QString UMMenuLabel::normalStyle = UMMenuLabelStyle::getStyle("#9a722d", "none", "24px", "4px", "4px");
const QString UMMenuLabel::hoverStyle = UMMenuLabelStyle::getStyle("#fffbe6", "#9a722d", "24px", "4px", "4px");

UMMenuLabel::UMMenuLabel(const QString& text, QWidget* parent = nullptr)
    : QLabel(text, parent) {
    setMouseTracking(true);
    setStyleSheet(UMMenuLabel::normalStyle);
}

void UMMenuLabel::enterEvent(QEnterEvent*) {
    setStyleSheet(UMMenuLabel::hoverStyle);
}

void UMMenuLabel::leaveEvent(QEvent*) {
    setStyleSheet(UMMenuLabel::normalStyle);
}