#include "WindowStats.h"
#include "ui_WindowStats.h"

WindowStats::WindowStats(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::WindowStats)
{
    ui->setupUi(this);
}

WindowStats::~WindowStats()
{
    delete ui;
}

void WindowStats::on_ButtonGeneratePDF_clicked()
{
    system("gnome-terminal -x sh -c 'cd ../; cd Software; pdflatex latex.tex; exec bash'");
}
