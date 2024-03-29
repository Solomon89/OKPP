#include <QCoreApplication>
#include <QTextStream>
#include <QTextCodec>


QString endl()
{
    return "\n";
}

int main() {
   QTextStream out(stdout);
    QTextCodec *utfcodec = QTextCodec::codecForName("UTF-8");
    QTextCodec::setCodecForTr(utfcodec);
    QTextCodec::setCodecForCStrings(utfcodec);
   // Используем маркер %1 для вставки значения
   QString s1 = "There are %1 white roses";
   // Наш маркер будет заменяться этим целочисленным значением
   int n = 12;
   // Выполняем операцию вставки значения
   out << s1.arg(n) << endl();
   // Используем маркер %1 для вставки значения
   QString s2 = "The tree is %1 m high";
   // Наш маркер будет заменяться этим значением типа с плавающей точкой
   double h = 5.65;
   // Выполняем операцию вставки значения
   out << s2.arg(h) << endl();
   // Используем 2 маркера для вставки 2-х значений
   QString s3 = "We have %1 lemons and %2 oranges";
   // Наши маркеры будут заменяться следующими значениями
   int ln = 12;
   int on = 4;
   // Выполняем операцию вставки
   out << s3.arg(ln).arg(on) << endl();
   QString s4 = "Создали %2 проектов в лекции %1";
   out << s4.arg(4).arg(5) << endl();
   return 0;
}
