void MainWindow::on_pushButton_clicked()
{
    QFileDialog dialog(this);
    dialog.setFileMode(QFileDialog::ExistingFiles);
    QStringList fileNames;
    if (dialog.exec())
         fileNames = dialog.selectedFiles();
    QString mine = fileNames.join(" ");
    QProgressBar *from_directory = new QProgressBar(this);
      ui ->statusbar->addWidget(from_directory);
      from_directory->setFormat("%p% Uploaded");
    from_directory->setMaximum(fileNames.size());
    from_directory->setMinimum(0);
for(int i=0;i<fileNames.size();i++){
    files.push_back(fileNames[i].toStdString());
        from_directory->setValue(i+1);

}
