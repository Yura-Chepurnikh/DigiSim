#ifndef WORKING_SPACE_H
#define WORKING_SPACE_H

#include "logic_gate_symbol.h"
#include "and_logic_gate_symbol.h"
#include "or_logic_gate_symbol.h"
#include <QGraphicsView>
#include <QWheelEvent>


class WorkingSpace : public QGraphicsView {
public:
    WorkingSpace(QWidget* parent = nullptr);

    LogicGateSymbol* sym;

protected:
    void wheelEvent(QWheelEvent* event);
};

#endif // WORKING_SPACE_H
