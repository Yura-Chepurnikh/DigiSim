#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    workingSpace = new WorkingSpace();
    setCentralWidget(workingSpace);
}

MainWindow::~MainWindow()
{
    delete ui;
}
