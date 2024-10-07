#include "and_logic_gate_symbol.h"

AndLogicGateSymbol::AndLogicGateSymbol(QWidget* parent) : LogicGateSymbol(parent)
{
}

void AndLogicGateSymbol::paintEvent(QPaintEvent *event) {
    QPainter painter(this);

    QPainterPath andGatePath;
    andGatePath.moveTo(50, 50);
    andGatePath.lineTo(100, 100);
    andGatePath.closeSubpath();

    painter.setPen(Qt::black);
    painter.drawPath(andGatePath);
}
