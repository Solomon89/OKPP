#include <QLabel>
#include <QFrame>
#include <QStatusBar>
#include <QHBoxLayout>
#include "statusbar.h"

Statusbar::Statusbar(QWidget *parent)
    : QMainWindow(parent) {

  QFrame *frame = new QFrame(this);
  setCentralWidget(frame);

  QHBoxLayout *hbox = new QHBoxLayout(frame);

  okBtn = new QPushButton("OK", frame);
  hbox->addWidget(okBtn, 0, Qt::AlignLeft | Qt::AlignTop);

  aplBtn = new QPushButton("Apply", frame);
  hbox->addWidget(aplBtn, 1, Qt::AlignLeft | Qt::AlignTop);

  cnlBtn = new QPushButton("Отмена", frame);
  hbox->addWidget(cnlBtn, 2, Qt::AlignLeft | Qt::AlignTop);

  statusBar();

  connect(okBtn, &QPushButton::clicked, this, &Statusbar::OnOkPressed);
  connect(aplBtn, &QPushButton::clicked, this, &Statusbar::OnApplyPressed);
  connect(cnlBtn, &QPushButton::clicked, this, &Statusbar::OncnlBtnPressed);

}
 void Statusbar::OncnlBtnPressed()
 {
     statusBar()->showMessage("Кнопка отмены", 2000);
 }
void Statusbar::OnOkPressed() {
  statusBar()->showMessage("OK button pressed", 2000);
}

void Statusbar::OnApplyPressed() {
 statusBar()->showMessage("Apply button pressed", 2000);
}
