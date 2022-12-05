#include "mainwindow.h"
#include "./ui_mainwindow.h"
//This is going to define all the functionality
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    this->setCentralWidget(ui->textEdit);

}

MainWindow::~MainWindow()
{
    delete ui;
}

