#include <QTextStream> // подключаем необходимый заголовочный файл

int main() {

   QTextStream out(stdout);

   // Создаем строку типа QString
   QString line = "love";

   // Добавляем текст в конец строки
   line.append(" chess\n");

   // Добавляем текст в начало строки
   line.prepend("I ");

   // Выводим строку
   out << line ;

   // Выводим количество символов строки
   out << "The a string has " << line.count() << " characters\n" ;

   // Выводим всю строку в верхнем регистре
   out << line.toUpper()  ;

   // Выводим всю строку в нижнем регистре
   out << line.toLower() ;

   return 0;
}
