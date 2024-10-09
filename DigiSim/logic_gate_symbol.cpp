#include "logic_gate_symbol.h"

LogicGateSymbol::LogicGateSymbol(QWidget* parent) : QGraphicsView(parent)
{
}

void LogicGateSymbol::mousePressEvent(QMouseEvent *event) {
    if (event->button() == Qt::LeftButton) {
        startPosition = event->pos();
        isDragging = true;
    }
}

void LogicGateSymbol::mouseMoveEvent(QMouseEvent *event) {
    if (isDragging && event->buttons() & Qt::LeftButton) {
        QPoint newPosition = event->globalPos() - startPosition;
        move(newPosition);
    }
}

void LogicGateSymbol::mouseReleaseEvent(QMouseEvent *event) {
    if (event->button() == Qt::LeftButton) {
        isDragging = false;
    }
}
