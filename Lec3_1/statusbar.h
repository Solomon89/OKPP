#pragma once

#include <QMainWindow>
#include <QPushButton>

class Statusbar : public QMainWindow {

  Q_OBJECT

  public:
    Statusbar(QWidget *parent = 0);

  private slots:
    void OnOkPressed();
    void OnApplyPressed();
    void OncnlBtnPressed();

  private:
    QPushButton *okBtn;
    QPushButton *aplBtn;
    QPushButton *cnlBtn;
};
