#ifndef UMMENULABELSTYLE_H
#define UMMENULABELSTYLE_H

#include <QString>

struct UMMenuLabelStyle {
    static const QString color;
    static const QString background;
    static const QString paddingLeft;
    static const QString paddingTop;
    static const QString paddingBottom;

    static QString getStyle(const QString& color, const QString& background, const QString& paddingLeft, const QString& paddingTop, const QString& paddingBottom);
};

#endif // UMMENULABELSTYLE_H