#include "dialog2.h"
#include "ui_dialog2.h"

Dialog2::Dialog2(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog2)
{
    ui->setupUi(this);
}

Dialog2::~Dialog2()
{
    delete ui;
}

void Dialog2::changeEvent(QEvent *e)
{
    QDialog::changeEvent(e);
    switch (e->type()) {
    case QEvent::LanguageChange:
        ui->retranslateUi(this);
        break;
    default:
        break;
    }
}

void Dialog2::on_pushButton_clicked()
{
    QString fileName = QFileDialog::getOpenFileName(this,tr("CSV"), "", tr("Image Files (*.csv *.txt)"));
    ui->lineEdit->setText(fileName);
}

void Dialog2::on_buttonBox_accepted()
{

    QFile file(ui->lineEdit->text());
    if (!file.open(QIODevice::ReadOnly | QIODevice::Text))
            return;

    int i=1;
    //QStringList SL;
    while (!file.atEnd()) {
           QByteArray line = file.readLine();

           QString l(line);
           QStringList SL;
           SL << l.split('|',QString::SkipEmptyParts);

           QSqlQuery qry;



           QString titre=SL.at(0);
           QString auteur=SL.at(1);


           if(!(titre.isEmpty()&&(auteur.isEmpty()))){


               qDebug() << titre;
               qDebug() << auteur;

           QString sql="INSERT INTO livres (nom,auteur) VALUES (?,?)";

           qry.prepare(sql);
           qry.addBindValue(SL.at(0));
           qry.addBindValue(SL.at(1));


           if( !qry.exec() )    QMessageBox::information(0, tr("Button"),tr("Failed to select"));

           else {

           }
       }
           i++;
       }

    qDebug() << i;


}
