#include "and_logic_gate_symbol.h"

AndLogicGateSymbol::AndLogicGateSymbol() : LogicGateSymbol() { }

void AndLogicGateSymbol::paint(QPainter* painter, const QStyleOptionGraphicsItem* option, QWidget* widget) {
    Q_UNUSED(widget);
    Q_UNUSED(option);

    QPainterPath andGatePath;
    andGatePath.moveTo(startPosition.x(), startPosition.y());
    andGatePath.lineTo(startPosition.x() + 50,  startPosition.y());
    andGatePath.arcTo(startPosition.x() + 50,  startPosition.y(), width - startPosition.x() + 50, height - 50, 90, -180);
    andGatePath.lineTo(startPosition.x() - 50,  startPosition.y() + 50);
    andGatePath.closeSubpath();

    painter->setPen(Qt::black);
    painter->drawPath(andGatePath);
}
