#ifndef OR_LOGIC_GATE_SYMBOL_H
#define OR_LOGIC_GATE_SYMBOL_H

#include "logic_gate_symbol.h"

class OrLogicGateSymbol : public LogicGateSymbol {
public:
    OrLogicGateSymbol();

protected:
    void paint(QPainter* painter, const QStyleOptionGraphicsItem* option, QWidget* widget) override;
};

#endif // OR_LOGIC_GATE_SYMBOL_H
