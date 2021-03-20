#include <QCoreApplication>
#include <QIODevice>
#include <QString>
#include <QTextStream>
#include <iostream>

using namespace std;

int main()
{
    QTextStream out(stdout);
      // Создаем строку типа QString
      QString a = "love";
      // Добавляем текст в конец строки
      a.append(" chess");

      // Добавляем текст в начало строки
      a.prepend("I ");
      // Выводим строку
      out << a ;

      // Выводим количество символов строки
      out << "The a string has " << a.count() << " characters\n";
      // Выводим всю строку в верхнем регистре
      out << a.toUpper()  << std::endl;
      // Выводим всю строку в нижнем регистре
      out << a.toLower() ;
      return 0;


}
