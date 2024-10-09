#include "or_logic_gate_symbol.h"

OrLogicGateSymbol::OrLogicGateSymbol() : LogicGateSymbol() { }

void OrLogicGateSymbol::paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget) {
    Q_UNUSED(option);
    Q_UNUSED(widget);

    QPainterPath orGatePath;
    orGatePath.moveTo(startPosition.x(), startPosition.y());
    orGatePath.arcTo(startPosition.x(), startPosition.y(), 100, 50, 90, -90);
    orGatePath.arcTo(startPosition.x(), startPosition.y(), -100, -50, -90, 90);

    painter->drawPath(orGatePath);
}
