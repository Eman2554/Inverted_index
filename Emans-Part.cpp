#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "iostream"
#include <string>
#include <fstream>
#include <stack>
#include <vector>
#include <algorithm>
#include <cstring>
#include <iterator>
#include <bits/stdc++.h>
#include "QFile"
#include "QTextStream"
#include "QTextStream"
#include "QGroupBox"
#include "QHBoxLayout"
#include "QDebug"
#include "QListWidgetItem"
#include "QMessageBox"
#include "QFileDialog"
#include "QDir"
using namespace std;
string replaceStrChar(string str, const string replace, const string ch)
{
    size_t found = str.find_first_of(replace);

    while (found != string::npos)
    {
        str.replace(found , 1, ch);
        found = str.find_first_of(replace, found + 1);
    }

    return str;
}

void MainWindow::on_pushButton_3_clicked()
{
    string direct , finalDir;
        direct = (ui ->lineEdit->text()).toStdString();
        QDir source (QString::fromStdString(direct));
        QStringList dirfiles;
        dirfiles = source.entryList(QStringList()<<"*.txt",QDir::Files);


        for(int i=0;i<dirfiles.size();i++){
            files.push_back(direct + "\\" + dirfiles[i].toStdString());
        }

}
