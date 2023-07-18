  #ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QtWidgets>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
      ~MainWindow();
public slots:
  /*  void un();
    void deux();
    void trois();
    void quatre();
    void cinq();
    void six();
    void sept();
    void huit();
    void neuf();
    void fois();
    void moins();
    void plus();
    void division();
   void egal();*/


private slots:
   void NombreTap();
   void MathButtonTap();
   void EgalButton();
  // void changerSigneNombre();

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
