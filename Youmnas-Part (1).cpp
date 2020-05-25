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
void MainWindow::on_pushButton_2_clicked()
{
    dir.clear();
    root=NULL;
    files.clear();
    ui ->textEdit->clear();
    ui ->listWidget->clear();
    ui ->filetextname->clear();
    ui ->enterwordsearch->clear();
    ui -> label_3 ->clear();
    ui ->lineEdit->clear();
    ui->statusbar->hide();

}
// Progress_bar in search
void MainWindow::on_SearchpushButton_clicked()
{   ui->statusbar->show();
    QProgressBar *from_directory = new QProgressBar(this);
    ui ->statusbar->addWidget(from_directory);
    from_directory->setFormat("%p% Searched");
    from_directory->setMinimum(0);
    from_directory->setMaximum(s1,size());
    //set value to progressbar in for loop }
    }


void MainWindow::on_UploadpushButton_clicked()
{
    QProgressDialog filesprogress("Building The Inverted Index", "Cancel", 0, files.size(), this);
    filesprogress.setWindowModality(Qt::WindowModal);
    filesprogress.setMinimum(0);
    filesprogress.setMaximum(files.size());
    filesprogress.show();
    //setting value and cancel condition in the for loop}


    bool isCHAR(char s) {
        if (s >= 'a' && s <= 'z' || s >= 'A' && s <= 'Z') return true;
        else return false;
    }


    string punctuation(string str) {
        size_t i = 0;
        size_t len = str.length();
        while (i < len) {
            if (!isCHAR(str[i])) {
                str.erase(i, 1);
                len--;
            }
            else
                i++;
        }
        return str;
    }