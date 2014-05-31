#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    QHBoxLayout* row = new QHBoxLayout();
    row->addWidget(new MyWidget);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
    MyWidget *widget = new MyWidget;
    ui->verticalLayout->addWidget(widget);
    this->widget=widget;
}

void MainWindow::on_pushButton_2_clicked()
{
    if (widget)
    ui->verticalLayout->removeWidget(widget);

    if (widget)
    delete widget;

    ui->verticalLayout->update();

    //widget=0;
}
