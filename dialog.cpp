#include "dialog.h"
#include "ui_dialog.h"
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
#include <iostream>
#include <fstream>
using namespace std;
#include <algorithm>
#include <iterator>
#include <vector>
#include <unistd.h>
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/// \brief Dialog::Dialog
/// \param parent
//QString massiv[]={};
    std::vector<QString>MyVector;
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
///  
Dialog::Dialog(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Dialog)
{
    ui->setupUi(this);
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/// 
///
//    int n;    
//  //  std::vector<int>MyVector;
//    ifstream file("/mnt/247E7EDA7E7EA3E8/книги/загрузки_Яндекс_браузера/единицы/new/список.txt"); 
//    while (!file.eof()) 
//    {        file >> n;        MyVector.push_back(n);       // cout << n << endl;           } 
//        file.close();
//        std::cout << MyVector[1] << std::endl;
    
//    std::fstream input("/mnt/247E7EDA7E7EA3E8/книги/загрузки_Яндекс_браузера/единицы/new/список.txt");
//    std::vector<QString> vec;
//    std::copy(std::istream_iterator<QString> (input), std::istream_iterator<QString> (), std::back_inserter(vec) );
//    std::copy(vec.begin(), vec.end(), std::ostream_iterator<QString> (std::cout, "\n") );
    
    
    const int len = 2832, strings =2832;
    const char ch = '\n';
    char mass[len][strings];
    
    ifstream fs("/mnt/247E7EDA7E7EA3E8/книги/загрузки_Яндекс_браузера/единицы/new/список.txt", ios::in | ios::binary);
    
    if(!fs){;;}
        //return 1; //Если ошибка открытия файла, то завершаем программу
    QString myString;
   // QString myString("This is a string");
    QString subString ;
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
///
    ///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    //  system(SHELLSCRIPT);
    int nomer=0;
    QString font;
   // QString nomer_faila=QString::number(nomer);
   // QString comanda="magick -background white -fill  black -pointsize 72 -font Consolas -size 10  label:1  +antialias " ; //+"label_size_fit-2.bmp";
    QString comanda1="magick -background white -fill  black -pointsize 72 -font ";
    // название шрифта
    QString comanda2=" -size 10  label:1  +antialias ";
    // QString comanda2="label_size_fit-2.bmp";
    QString comanda3=font+".bmp ;";
    QString comanda4=comanda1+font+comanda2+comanda3;
  //  execl("/bin/sh", "/bin/sh", "-c", comanda4.toStdString().c_str() , 0);
    //  return 0;      
    //////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////// 
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
///      
    
    for(int r = 0; r<strings; r++)
    {
        fs.getline(mass[r], len-1,ch); //Считываем строки в массив
//        cout <<// "String " << r+1 << " = "<<
//            mass[r] << endl; //Выводи строку из массива
        //  mass[r]  это название шрифта
        myString=mass[r];
        subString = myString.mid(7,myString.size() - 1); 
       // ui->textEdit->append (subString);
        // myString=mass[0];
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        font= subString;
         comanda3=font+".bmp";
         comanda4=comanda1+font+comanda2+comanda3;
        //  execl("/bin/sh", "/bin/sh", "-c", comanda4.toStdString().c_str() , 0);
          system (comanda4.toStdString().c_str() );
/// 
/// 
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
///         
    }
  //  cout << myString;
    fs.close(); //Закрываем файл
 //   return 0;    
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
///      
}

Dialog::~Dialog()
{
    delete ui;
}

