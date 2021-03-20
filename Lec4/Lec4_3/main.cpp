#include <QTextStream>
QString endl()
{
    return "\n";
}
int main() {

   QTextStream out(stdout);

   // Исходная строка
   QString a = "Eagle";

   // Выводим первый символ строки
   out << a[0] << endl();

   // Выводим пятый символ строки
   out << a[4] << endl();

   // Выводим первый символ строки с помощью метода at()
   int index = 2;
   out << a.at(index) << endl();

   return 0;
}
