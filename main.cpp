#include "dialog.h"

#include <QApplication>
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//#include <unistd.h>
/*----------------------------------------------------------------------------------------------------------------------*/
#define SHELLSCRIPT "\
#/bin/bash \n\
echo -e \"\" \n\
    echo -e \"This is a test shell script inside C code!!\" \n\
    read -p \"press <enter> to continue\" \n\
    clear\
    "
/*----------------------------------------------------------------------------------------------------------------------*/
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Dialog w;
    w.show();
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    
//    const int len = 30, strings = 5;
//    const char ch = '\n';
//    char mass[len][strings];
    
//    ifstream fs("strings.txt", ios::in | ios::binary); 
    
//    if(!fs) return 1; //Если ошибка открытия файла, то завершаем программу
    
//    for(int r = 0; r<strings; r++)
//    {
//        fs.getline(mass[r], len-1,ch); //Считываем строки в массив
//        cout << "String " << r+1 << " = "<< mass[r] << endl; //Выводи строку из массива
//    }
//    fs.close(); //Закрываем файл
//    return 0;
/// 
/// 
/// 
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//  //  system(SHELLSCRIPT);
//    int nomer=0;
//    QString nomer_faila=QString::number(nomer);
//    QString comanda="magick -background white -fill  black -pointsize 72 -font Consolas -size 10  label:1  +antialias " ; //+"label_size_fit-2.bmp";
//    QString comanda1="magick -background white -fill  black -pointsize 72 -font ";
//    // название шрифта
//    QString comanda2=" -size 10  label:1  +antialias ";
//   // QString comanda2="label_size_fit-2.bmp";
//    QString comanda3=nomer_faila+".bmp";
//    QString comanda4=comanda+comanda3;
//    execl("/bin/sh", "/bin/sh", "-c", comanda4.toStdString().c_str() , 0);
//  //  return 0;      
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
///     
    
    
    return a.exec();
}
