#include "logic_gate_symbol.h"

LogicGateSymbol::LogicGateSymbol() : QGraphicsItem()
{
    setFlag(QGraphicsItem::ItemIsMovable);
    setFlag(QGraphicsItem::ItemIsSelectable);
}

void LogicGateSymbol::mousePressEvent(QGraphicsSceneMouseEvent *event) {
    if (event->button() == Qt::LeftButton) {
        startPosition = event->pos();
        isDragging = true;
    }
    QGraphicsItem::mousePressEvent(event);
}

void LogicGateSymbol::mouseMoveEvent(QGraphicsSceneMouseEvent *event) {
    if (isDragging && event->buttons() & Qt::LeftButton) {
        QPointF newPosition = event->scenePos() - startPosition;
        setPos(newPosition);
    }
    QGraphicsItem::mouseMoveEvent(event);
}

void LogicGateSymbol::mouseReleaseEvent(QGraphicsSceneMouseEvent *event) {
    if (event->button() == Qt::LeftButton) {
        isDragging = false;
    }
    QGraphicsItem::mouseReleaseEvent(event);
}

QRectF LogicGateSymbol::boundingRect() const {
    return QRectF(0, 0, 10000, 10000);
}
