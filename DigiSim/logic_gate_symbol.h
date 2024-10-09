#ifndef LOGIC_GATE_SYMBOL_H
#define LOGIC_GATE_SYMBOL_H

#include <QtWidgets/QWidget>
#include <QMouseEvent>
#include <QtGui/QPainterPath>
#include <QtGui/QPainter>
#include <QGraphicsView>
#include <QGraphicsItem>
#include <QGraphicsSceneMouseEvent>

class LogicGateSymbol : public QGraphicsItem {
public:
    LogicGateSymbol();

    bool isDragging = false;
    QPointF startPosition;

    int width = 100;
    int height = 100;

protected:
    void mousePressEvent(QGraphicsSceneMouseEvent* event) override;
    void mouseMoveEvent(QGraphicsSceneMouseEvent* event) override;
    void mouseReleaseEvent(QGraphicsSceneMouseEvent* event) override;

    QRectF boundingRect() const override;
};

#endif // LOGIC_GATE_SYMBOL_H
