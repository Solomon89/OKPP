#include <QTextStream>
#include <QFile>
QString endl()
{
    return "\n";
}
int main() {

    QTextStream out(stdout);

    QFile file("N:\\Users\\solom\\Documents\\QT\\OKKP\\Lec4\\build-Lac4_13-Desktop_x86_windows_msys_pe_64bit-Debug\\debug\\cprog.c");

    if (!file.open(QIODevice::ReadOnly)) {

        qWarning("Cannot open file for reading");
        return 1;
    }

    QTextStream in(&file);

    QString allText = in.readAll();
    out << allText << endl();
    out << allText.toHtmlEscaped() << endl();

    file.close();

    return 0;
}
