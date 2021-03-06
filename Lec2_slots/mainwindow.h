#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

#include <QPushButton>
#include <QMessageBox>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
signals:
    void signalFromButton(int buttonID);    // Сигнал для передачи номер нажатой кнопки

private:
    Ui::MainWindow *ui;
private slots:
    void slotButton1();     // Слоты-обработчики нажатий кнопок
    void slotButton2();
    void slotButton3();

    // Слоты вызывающий сообщение с номеро нажатой кнопки
    void slotMessage(int buttonID);
};
#endif // MAINWINDOW_H
