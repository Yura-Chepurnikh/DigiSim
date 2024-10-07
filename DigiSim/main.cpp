#include "mainwindow.h"
#include "and_logic_gate_symbol.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;

    AndLogicGateSymbol* andGateSym = new AndLogicGateSymbol();
    w.setCentralWidget(andGateSym);


    w.show();
    return a.exec();
}
