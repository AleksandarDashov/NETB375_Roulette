#include "mainwindow.h"
#include <QApplication>
#include <QDebug>

int n;// random generated number
char color; //player chosen color
int arr_rulett[37];//definirano za da se runva!!
char arr_rulettc[37];//definirano za da se runva!!

bool check_num()//checks for 1 in the array of bets on the random generated number's position
{
    if(1==arr_rulett[n])
    {
        return true;
    }
    else
    {
        return false;
    }
    return false;
}

bool check_color()//checks for the color of the random generated number
{
    if(arr_rulettc[n]==color)
    {
        return true;
    }
    else
    {
        return false;
    }
    return false;
}


int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();

    return a.exec();
}
