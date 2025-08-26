#include "ummenulabelstyle.h"

#include <QString>

QString UMMenuLabelStyle::getStyle(const QString& color, const QString& background, const QString& paddingLeft, const QString& paddingTop, const QString& paddingBottom) {
    return QString("color: %1; background: %2; padding-left: %3; padding-top: %4; padding-bottom: %5;")
        .arg(color)
        .arg(background)
        .arg(paddingLeft)
        .arg(paddingTop)
        .arg(paddingBottom);
}