#include "./working_space.h"

WorkingSpace::WorkingSpace(QWidget *parent) : QGraphicsView(parent)
{
    QGraphicsScene* scene = new QGraphicsScene(this);
    setScene(scene);

    sym = new AndLogicGateSymbol(parent);

    scene->addWidget(sym);
}

void WorkingSpace::wheelEvent(QWheelEvent *event) {
    int delta = event->angleDelta().y();
    int scaleFactor = 1.1;

    if (delta > 0) {
        scale(scaleFactor, scaleFactor);
    } else {
        scale(scaleFactor / 1.1, scaleFactor / 1.1);
    }

    event->accept();
}
