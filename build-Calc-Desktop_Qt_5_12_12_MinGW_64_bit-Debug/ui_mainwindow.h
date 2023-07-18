/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.12
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QGroupBox *groupBox;
    QLabel *ecran;
    QPushButton *Button1;
    QPushButton *Button2;
    QPushButton *Button3;
    QPushButton *Button4;
    QPushButton *Button5;
    QPushButton *Button6;
    QPushButton *plus;
    QPushButton *moins;
    QPushButton *Button7;
    QPushButton *Button8;
    QPushButton *Button9;
    QPushButton *fois;
    QPushButton *Button0;
    QPushButton *reinitialiser;
    QPushButton *egale;
    QPushButton *division;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1303, 600);
        MainWindow->setAutoFillBackground(false);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        groupBox = new QGroupBox(centralwidget);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(280, 60, 571, 391));
        groupBox->setAutoFillBackground(false);
        groupBox->setStyleSheet(QString::fromUtf8("background-color:cyan;"));
        ecran = new QLabel(groupBox);
        ecran->setObjectName(QString::fromUtf8("ecran"));
        ecran->setGeometry(QRect(70, 40, 431, 81));
        QFont font;
        font.setPointSize(18);
        font.setBold(true);
        font.setWeight(75);
        ecran->setFont(font);
        ecran->setStyleSheet(QString::fromUtf8("background-color:gray;\n"
"border:2px solid,gray;\n"
""));
        ecran->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        Button1 = new QPushButton(groupBox);
        Button1->setObjectName(QString::fromUtf8("Button1"));
        Button1->setGeometry(QRect(60, 160, 93, 28));
        Button2 = new QPushButton(groupBox);
        Button2->setObjectName(QString::fromUtf8("Button2"));
        Button2->setGeometry(QRect(180, 160, 93, 28));
        Button3 = new QPushButton(groupBox);
        Button3->setObjectName(QString::fromUtf8("Button3"));
        Button3->setGeometry(QRect(300, 160, 93, 28));
        Button4 = new QPushButton(groupBox);
        Button4->setObjectName(QString::fromUtf8("Button4"));
        Button4->setGeometry(QRect(60, 220, 93, 28));
        Button5 = new QPushButton(groupBox);
        Button5->setObjectName(QString::fromUtf8("Button5"));
        Button5->setGeometry(QRect(180, 220, 93, 28));
        Button6 = new QPushButton(groupBox);
        Button6->setObjectName(QString::fromUtf8("Button6"));
        Button6->setGeometry(QRect(300, 220, 93, 28));
        plus = new QPushButton(groupBox);
        plus->setObjectName(QString::fromUtf8("plus"));
        plus->setGeometry(QRect(410, 160, 93, 28));
        plus->setAutoFillBackground(false);
        plus->setStyleSheet(QString::fromUtf8("color:red;\n"
""));
        moins = new QPushButton(groupBox);
        moins->setObjectName(QString::fromUtf8("moins"));
        moins->setGeometry(QRect(410, 220, 93, 28));
        moins->setAutoFillBackground(false);
        moins->setStyleSheet(QString::fromUtf8("color:red;"));
        Button7 = new QPushButton(groupBox);
        Button7->setObjectName(QString::fromUtf8("Button7"));
        Button7->setGeometry(QRect(60, 270, 93, 28));
        Button8 = new QPushButton(groupBox);
        Button8->setObjectName(QString::fromUtf8("Button8"));
        Button8->setGeometry(QRect(180, 270, 93, 28));
        Button9 = new QPushButton(groupBox);
        Button9->setObjectName(QString::fromUtf8("Button9"));
        Button9->setGeometry(QRect(300, 270, 93, 28));
        fois = new QPushButton(groupBox);
        fois->setObjectName(QString::fromUtf8("fois"));
        fois->setGeometry(QRect(410, 270, 93, 28));
        fois->setAutoFillBackground(false);
        fois->setStyleSheet(QString::fromUtf8("color:red;"));
        Button0 = new QPushButton(groupBox);
        Button0->setObjectName(QString::fromUtf8("Button0"));
        Button0->setGeometry(QRect(180, 320, 93, 28));
        Button0->setStyleSheet(QString::fromUtf8(""));
        reinitialiser = new QPushButton(groupBox);
        reinitialiser->setObjectName(QString::fromUtf8("reinitialiser"));
        reinitialiser->setGeometry(QRect(60, 320, 93, 28));
        reinitialiser->setAutoFillBackground(false);
        reinitialiser->setStyleSheet(QString::fromUtf8("color:red;"));
        egale = new QPushButton(groupBox);
        egale->setObjectName(QString::fromUtf8("egale"));
        egale->setGeometry(QRect(410, 320, 93, 28));
        egale->setAutoFillBackground(false);
        egale->setStyleSheet(QString::fromUtf8("color:red;"));
        division = new QPushButton(groupBox);
        division->setObjectName(QString::fromUtf8("division"));
        division->setGeometry(QRect(300, 320, 93, 28));
        division->setAutoFillBackground(false);
        division->setStyleSheet(QString::fromUtf8("color:red;"));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 1303, 26));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", nullptr));
        groupBox->setTitle(QApplication::translate("MainWindow", "Calculatrice", nullptr));
        ecran->setText(QApplication::translate("MainWindow", "0.0", nullptr));
        Button1->setText(QApplication::translate("MainWindow", "1", nullptr));
        Button2->setText(QApplication::translate("MainWindow", "2", nullptr));
        Button3->setText(QApplication::translate("MainWindow", "3", nullptr));
        Button4->setText(QApplication::translate("MainWindow", "4", nullptr));
        Button5->setText(QApplication::translate("MainWindow", "5", nullptr));
        Button6->setText(QApplication::translate("MainWindow", "6", nullptr));
        plus->setText(QApplication::translate("MainWindow", "+", nullptr));
        moins->setText(QApplication::translate("MainWindow", "-", nullptr));
        Button7->setText(QApplication::translate("MainWindow", "7", nullptr));
        Button8->setText(QApplication::translate("MainWindow", "8", nullptr));
        Button9->setText(QApplication::translate("MainWindow", "9", nullptr));
        fois->setText(QApplication::translate("MainWindow", "*", nullptr));
        Button0->setText(QApplication::translate("MainWindow", "0", nullptr));
        reinitialiser->setText(QApplication::translate("MainWindow", "r\303\251initialiser", nullptr));
        egale->setText(QApplication::translate("MainWindow", "=", nullptr));
        division->setText(QApplication::translate("MainWindow", "/", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
