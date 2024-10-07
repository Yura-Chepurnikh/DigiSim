#ifndef LOGIC_GATE_SYMBOL_H
#define LOGIC_GATE_SYMBOL_H

#include <QtWidgets/QWidget>
#include <QMouseEvent>
#include <QtGui/QPainterPath>
#include <QtGui/QPainter>

class LogicGateSymbol : public QWidget {
public:
    LogicGateSymbol(QWidget* parent = nullptr);

    bool isDragging = false;
    QPoint startPosition;

protected:
    void mousePressEvent(QMouseEvent* event) override;
    void mouseMoveEvent(QMouseEvent* event) override;
    void mouseReleaseEvent(QMouseEvent* event) override;
};

#endif // LOGIC_GATE_SYMBOL_H
