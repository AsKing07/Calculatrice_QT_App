#include "mainwindow.h"
#include "ui_mainwindow.h"

double calcVal=0.0;
bool divTrigger=false;
bool addTrigger=false;
bool sousTrigger=false;
bool mulTrigger=false;

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    ui->ecran->setText(QString::number(calcVal));
    QPushButton *numButtons[10];
    for(int i = 0;i<10;i++){
      QString butName = "Button" + QString::number(i);
      numButtons[i] =MainWindow::findChild<QPushButton *>(butName);
      connect(numButtons[i], SIGNAL(released()),this,SLOT(NombreTap()));


    }
    connect(ui->plus, SIGNAL(released()),this,SLOT(MathButtonTap()));

    connect(ui->fois, SIGNAL(released()),this,SLOT(MathButtonTap()));

    connect(ui->moins, SIGNAL(released()),this,SLOT(MathButtonTap()));

    connect(ui->division, SIGNAL(released()),this,SLOT(MathButtonTap()));
    connect(ui->egale, SIGNAL(released()),this,SLOT(EgalButton()));



}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::NombreTap(){
    QPushButton *button = (QPushButton *)sender();
    QString butval = button->text();
    QString ecranVal = ui->ecran->text();
    if((ecranVal.toDouble()==0)|| (ecranVal.toDouble()==0.0))
    {
        ui->ecran->setText(butval);}
    else{
        QString newVal = ecranVal + butval;
        double dblNewVal = newVal.toDouble();
        ui->ecran->setText((QString::number(dblNewVal, 'g', 16)));

    }

}

void MainWindow::MathButtonTap(){
    divTrigger =false;
    mulTrigger = false;
    addTrigger = false;
    sousTrigger = false;

    QString ecranVal = ui->ecran->text();
    calcVal=ecranVal.toDouble();
    QPushButton *button = (QPushButton *)sender();
    QString butVal = button->text();
    if(QString::compare(butVal,"/",Qt::CaseInsensitive) == 0){
    divTrigger =true;
    }else if(QString::compare(butVal,"*",Qt::CaseInsensitive) == 0){
        mulTrigger =true;
        }
    else if(QString::compare(butVal,"+",Qt::CaseInsensitive) == 0){
            addTrigger =true;
            }
    else
        {
          sousTrigger =true;
        }

    ui->ecran->setText("");


}

void MainWindow::EgalButton()
{
    double solution = 0.0;
    QString ecranVal = ui->ecran->text();
    double dblecran =ecranVal.toDouble();
    if(addTrigger||sousTrigger||mulTrigger||divTrigger)
    {
        if(addTrigger){
          solution = calcVal +dblecran;
        }else if(sousTrigger){
            solution = calcVal - dblecran;
          }
        else if(mulTrigger){
                    solution = calcVal *dblecran;
                  }
        else {
            solution = calcVal /dblecran;
          }
        ui->ecran->setText(QString::number(solution));
    }
}
