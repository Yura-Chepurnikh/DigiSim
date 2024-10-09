#ifndef AND_LOGIC_GATE_SYMBOL_H
#define AND_LOGIC_GATE_SYMBOL_H

#include "logic_gate_symbol.h"

class AndLogicGateSymbol : public LogicGateSymbol {
public:
    AndLogicGateSymbol();

protected:
    void paint(QPainter* painter, const QStyleOptionGraphicsItem* option, QWidget* widget) override;
};

#endif // AND_LOGIC_GATE_SYMBOL_H
