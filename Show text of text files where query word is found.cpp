void MainWindow::on_listWidget_itemClicked(QListWidgetItem *item)
{  dir = files[0];
    string directory_uploaded_from = dir.substr(0,dir.find_last_of("\\"));
   if(item->checkState()==Qt::Checked){
      QString filename = QString::fromStdString(dir.substr(0,dir.find_last_of("\\")+1) + item->text().toStdString());
    QFile file(filename);
    if(!file.open(QFile::ReadOnly | QFile::Text)){
        QMessageBox::warning(this,"Error","file not open");
    }
    QTextStream in(&file);
    QString text = in.readAll();
    ui ->textEdit->setPlainText(text);
    file.close();
    ui->filetextname->setText("     "+item->text()+" "+":");
   }
   if(item->checkState()==Qt::Unchecked){
    ui ->textEdit->setPlainText(" ");
    ui->filetextname->setText("     ");
   }

}
