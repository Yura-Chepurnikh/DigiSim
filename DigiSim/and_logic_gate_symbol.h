#ifndef AND_LOGIC_GATE_SYMBOL_H
#define AND_LOGIC_GATE_SYMBOL_H

#include "logic_gate_symbol.h"

class AndLogicGateSymbol : public LogicGateSymbol {
public:
    AndLogicGateSymbol(QWidget* parent = nullptr);

protected:
    void paintEvent(QPaintEvent* event) override;
};

#endif // AND_LOGIC_GATE_SYMBOL_H
