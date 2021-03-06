#include "mainwindow.h"
#include "label.h"
#include <QApplication>
#include "slider.h"
#include "combobox.h"
#include "spinbox.h"
#include "ledit.h"
#include "statusbar.h"


int main(int argc, char *argv[])
{
    QApplication app(argc, argv);

     Statusbar window;

     window.resize(300, 200);
     window.setWindowTitle("QStatusBar");
     window.show();

     return app.exec();
}
/*
      QApplication app(argc, argv);

      Label window;
      window.setWindowTitle("QLabel");
      window.show();
      return app.exec();


*/

/*
        QApplication app(argc, argv);

      Slider window;

      window.setWindowTitle("QSlider");
      window.show();

      return app.exec();

*/

/*
    QApplication app(argc, argv);

      ComboBoxEx window;

      window.resize(300, 150);
      window.setWindowTitle("QComboBox");
      window.show();

      return app.exec();
*/
/*
    QApplication app(argc, argv);

      SpinBox window;

      window.resize(300, 150);
      window.setWindowTitle("SpinBox");
      window.show();

      return app.exec();

*/
/*
    QApplication app(argc, argv);

      Ledit window;

      window.resize(300, 150);
      window.setWindowTitle("Ledit");
      window.show();

      return app.exec();
*/
