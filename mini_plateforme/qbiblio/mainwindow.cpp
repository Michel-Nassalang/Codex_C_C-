#include "mainwindow.h"
#include "ui_mainwindow.h"


MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{

    ui->setupUi(this);
    db = QSqlDatabase::addDatabase( "QSQLITE" );
    db.setDatabaseName("biblio.sqlite" );
    if( !db.open() )
    QMessageBox::information(0, tr("Button"),tr("Failed to open database"));
    QStringList choixVuePretSL;
    choixVuePretSL << "Prêt en cours" << "Tous les prêts";
    ui->comboBox->addItems(choixVuePretSL);
    init();
    ui->tableWidget->setSelectionBehavior(QAbstractItemView::SelectRows);
    ui->tableWidget_2->setSelectionBehavior(QAbstractItemView::SelectRows);
    connect(ui->tableWidget,SIGNAL(itemClicked ( QTableWidgetItem *)),SLOT(menu_ctx_h(QTableWidgetItem *)));

    connect(ui->tableWidget_2,SIGNAL(itemClicked ( QTableWidgetItem *)),SLOT(menu_prets(QTableWidgetItem *)));

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::changeEvent(QEvent *e)
{
    QMainWindow::changeEvent(e);
    switch (e->type()) {
    case QEvent::LanguageChange:
        ui->retranslateUi(this);
        break;
    default:
        break;
    }
}

void MainWindow::on_pushButton_4_clicked()
{
    ui->tabWidget->setCurrentIndex(1);
}

void MainWindow::on_pushButton_3_clicked()
{
    ui->tabWidget->setCurrentIndex(0);
}

void MainWindow::on_tabWidget_currentChanged(int index)
{
    ui->lineEdit_10->clear();

    ui->tableWidget->clear();

    init();
}

void MainWindow::on_pushButton_clicked()
{

    if ((ui->lineEdit->text()!="")&&(ui->lineEdit_2->text()!=""))
    {
    db = QSqlDatabase::addDatabase( "QSQLITE" );

       db.setDatabaseName("biblio.sqlite" );
       if( !db.open() )
       QMessageBox::information(0, tr("Button"),tr("Failed to open database"));

       QSqlQuery qry;

       QString sql="INSERT INTO livres (nom,auteur) VALUES (?,?)";


       //INSERT INTO table_name (column1, column2, column3,...)
       //VALUES (value1, value2, value3,...)
       qry.prepare(sql);
       qry.addBindValue(ui->lineEdit->text());
       qry.addBindValue(ui->lineEdit_2->text());




       //QString val="val:"+dat+"/"+nom;

       if( !qry.exec() )    QMessageBox::information(0, tr("Button"),tr("Failed to insert"));
       {

          QMessageBox::information(0, tr("Button"),tr("Nouvelle entrée dans la base de données"));


          ui->lineEdit->setText("");
          ui->lineEdit_2->setText("");
      }




       //else QMessageBox::information(0, tr("Button"),val);
       //db.close();
     }

}

void MainWindow::init(void)  {

   // menucontext * mc1=new menucontext();

   // ui->tableWidget->setHorizontalHeader(mc1) ;

   /*
 this->connect( mc1, SIGNAL( signal_menu_ctx( int, const QPoint &) ),
               SLOT( menu_ctx_h( int, const QPoint & ) ) ) ;
  */


    //itemClicked (mc1, QTableWidgetItem * item )

    QStringList labelH;
    labelH << "Id" << "Nom du livre" << "Auteur"  << "Disponible";
    ui->tableWidget->setColumnWidth(0,30);
    ui->tableWidget->setColumnWidth(1,280);
    ui->tableWidget->setColumnWidth(2,200);
    ui->tableWidget->setColumnWidth(3,80);


    ui->tableWidget->setHorizontalHeaderLabels(labelH);

   int row=0;
/*
    db = QSqlDatabase::addDatabase( "QSQLITE" );

         db.setDatabaseName("biblio.sqlite" );
         if( !db.open() )
         QMessageBox::information(0, tr("Button"),tr("Failed to open database"));
*/
         QSqlQuery qry;

         QString sql="SELECT id,nom,auteur,dispo FROM livres";

         qry.prepare(sql);

         QString nom;
         QStringList nomSL,auteurSL,idSL,dispoSL;

         if( !qry.exec() )    QMessageBox::information(0, tr("Button"),tr("Failed to select"));

         else {






         while( qry.next() )
             {


             idSL << qry.value(0).toString();
             nomSL << qry.value(1).toString();
             auteurSL << qry.value(2).toString();
             
             if (qry.value(3).toString()=="") 
                 dispoSL << "Oui";
             else dispoSL << qry.value(3).toString();
             
             row++;
         }

         ui->tableWidget->setRowCount(row);


         for(int i=0;i<row;i++)
         {

         QTableWidgetItem *idTWI=new QTableWidgetItem(idSL.at(i));

         ui->tableWidget->setItem(i,0,idTWI);

         QTableWidgetItem *nomTWI=new QTableWidgetItem(nomSL.at(i));

         ui->tableWidget->setItem(i,1,nomTWI);

         QTableWidgetItem *auteurTWI=new QTableWidgetItem(auteurSL.at(i));

         ui->tableWidget->setItem(i,2,auteurTWI);


         QTableWidgetItem *dispoTWI=new QTableWidgetItem(dispoSL.at(i));

         ui->tableWidget->setItem(i,3,dispoTWI);



             }
     }

         init_pretsEnCours();

}

// a mettre à jour

void MainWindow::on_pushButton_5_clicked()
{


/*

    db = QSqlDatabase::addDatabase( "QSQLITE" );

         db.setDatabaseName("biblio.sqlite" );
         if( !db.open() )
         QMessageBox::information(0, tr("Button"),tr("Failed to open database"));
*/
    QStringList labelH;
    labelH << "Id" << "Nom du livre" << "Auteur"  << "Disponible";
    ui->tableWidget->setColumnWidth(0,30);
    ui->tableWidget->setColumnWidth(1,280);
    ui->tableWidget->setColumnWidth(2,200);
    ui->tableWidget->setColumnWidth(3,80);


    ui->tableWidget->setHorizontalHeaderLabels(labelH);

   int row=0;

         QSqlQuery qry;

         QString sql="SELECT id,nom,auteur,dispo FROM livres WHERE nom LIKE ?";

         qry.prepare(sql);
         qry.addBindValue(ui->lineEdit_10->text()+"%");

         QString nom;
         QStringList nomSL,auteurSL,idSL,dispoSL;

         if( !qry.exec() )    QMessageBox::information(0, tr("Button"),tr("Failed to select"));

         else {


         while( qry.next() )
             {


             idSL << qry.value(0).toString();
             nomSL << qry.value(1).toString();
             auteurSL << qry.value(2).toString();

             if (qry.value(3).toString()=="")
                 dispoSL << "Oui";
             else dispoSL << qry.value(3).toString();

             row++;
         }

         ui->tableWidget->setRowCount(row);


         for(int i=0;i<row;i++)
         {

         QTableWidgetItem *idTWI=new QTableWidgetItem(idSL.at(i));

         ui->tableWidget->setItem(i,0,idTWI);

         QTableWidgetItem *nomTWI=new QTableWidgetItem(nomSL.at(i));

         ui->tableWidget->setItem(i,1,nomTWI);

         QTableWidgetItem *auteurTWI=new QTableWidgetItem(auteurSL.at(i));

         ui->tableWidget->setItem(i,2,auteurTWI);


         QTableWidgetItem *dispoTWI=new QTableWidgetItem(dispoSL.at(i));

         ui->tableWidget->setItem(i,3,dispoTWI);



             }
     }





}

void MainWindow::menu_ctx_h(QTableWidgetItem * c )
{

//ui->tableWidget->selectRow(ui->tableWidget->currentRow());
QWidget *w=QApplication::widgetAt(QCursor::pos());
if (w==0) return;


m_ctx = new QMenu();


m_ctx->addAction("Preter le livre" ) ;
//m_ctx->addAction("Cacher" ) ;
connect(m_ctx,SIGNAL(triggered(QAction *)  ),this,SLOT(diag(QAction *)));



QAction *a=m_ctx->exec(QCursor::pos());
//if(a->text()=="Preter le livre") m_ctx->hide();

}

void MainWindow::diag(QAction * a)
{



    if (a->text()=="Cacher") {

        //ui->tableWidget->selectRow();
        //m_ctx->hide();


    }
   else  {
QString id,dispoSTR;
QTableWidgetItem *item;

    QList<QTableWidgetItem *>  selit=ui->tableWidget->selectedItems();
    //ui->tableWidget->itemAt();
    for(int i=0; i<selit.count();i++)
    {

        item=selit.at(i);
        if (item->column()==0) { id=item->text(); }
        if (item->column()==3) { dispoSTR=item->text(); }
    }

    //QMessageBox::information(0, tr("Button"),id);


    if (dispoSTR=="Non") { QMessageBox::information(0, tr("Button"),tr("Livre déjà en prêt")); }
    else  {
Dialog d1(0,id);
int ret=d1.exec();
if (ret) { QTimer::singleShot(60000, this, SLOT(initSLOT())); }
}

}
}

void MainWindow::on_pushButton_2_clicked()
{


    if ((ui->lineEdit_4->text()!="")&&(ui->lineEdit_3->text()!="")&&(ui->lineEdit_5->text()!="")&&(ui->lineEdit_6->text()!="")&&(ui->lineEdit_7->text()!="")&&(ui->lineEdit_8->text()!=""))
    {
        /*
    db = QSqlDatabase::addDatabase( "QSQLITE" );

       db.setDatabaseName("biblio.sqlite" );
       if( !db.open() )
       QMessageBox::information(0, tr("Button"),tr("Failed to open database"));
     */
       QSqlQuery qry;

       QString sql="INSERT INTO clients (nom,prenom,adresse,code_postal,ville,pays,tel) VALUES (?,?,?,?,?,?,?)";


       //INSERT INTO table_name (column1, column2, column3,...)
       //VALUES (value1, value2, value3,...)
       qry.prepare(sql);
       qry.addBindValue(ui->lineEdit_4->text());
       qry.addBindValue(ui->lineEdit_3->text());
       qry.addBindValue(ui->lineEdit_5->text());
       qry.addBindValue(ui->lineEdit_6->text());
       qry.addBindValue(ui->lineEdit_7->text());
       qry.addBindValue(ui->lineEdit_8->text());
       qry.addBindValue(ui->lineEdit_9->text());




       //QString val="val:"+dat+"/"+nom;

       if( !qry.exec() ) {   QMessageBox::information(0, tr("Button"),tr("Failed to insert")); }
      else  {

          QMessageBox::information(0, tr("Button"),tr("Nouvelle entrée dans la base de données"));


     ui->lineEdit_4->setText("");
     ui->lineEdit_3->setText("");
     ui->lineEdit_5->setText("");
     ui->lineEdit_6->setText("");
     ui->lineEdit_7->setText("");
     ui->lineEdit_8->setText("");
     ui->lineEdit_9->setText("");


      }





       //db.close();
     }  else   QMessageBox::information(0, tr("Button"),tr("Formulaire non complet"));
         //QMessageBox::information(0, tr("Formulaire non complet"),val);

}

void MainWindow::on_pushButton_6_clicked()
{
    ui->tabWidget->setCurrentIndex(2);
}

void MainWindow::on_pushButton_7_clicked()
{
    ui->tabWidget->setCurrentIndex(3);
    ui->comboBox->setCurrentIndex(0);
    init_pretsEnCours();
}

QString MainWindow::lookClientStr(QString id)  {
/*
    db = QSqlDatabase::addDatabase( "QSQLITE" );

         db.setDatabaseName("biblio.sqlite" );
         if( !db.open() )
         QMessageBox::information(0, tr("Button"),tr("Failed to open database"));
*/
         QSqlQuery qry;


             QString sql="SELECT id,nom,prenom FROM clients WHERE id=?";

             qry.prepare(sql);
             qry.addBindValue(id);





          QString nom;
          // QStringList nomSL;

          if( !qry.exec() )    { return "";}//QMessageBox::information(0, tr("Button"),tr("Failed to select"));

          else {






          while( qry.next() )
              {


              nom=qry.value(1).toString()+" "+qry.value(2).toString()+"//"+qry.value(0).toString();

          }


      }

return nom;


}








QString MainWindow::lookLivreStr(QString id)  {
/*
    db = QSqlDatabase::addDatabase( "QSQLITE" );

         db.setDatabaseName("biblio.sqlite" );
         if( !db.open() )
         QMessageBox::information(0, tr("Button"),tr("Failed to open database"));
*/
         QSqlQuery qry;


             QString sql="SELECT id,nom FROM livres WHERE id=?";

             qry.prepare(sql);
             qry.addBindValue(id);





          QString nom;
          // QStringList nomSL;

          if( !qry.exec() )    { return "";}//QMessageBox::information(0, tr("Button"),tr("Failed to select"));

          else {






          while( qry.next() )
              {


              nom=qry.value(1).toString();

          }


      }

return nom;



}

void MainWindow::menu_prets(QTableWidgetItem * c )
{

if (ui->comboBox->currentIndex()==1) return;
    QWidget *w=QApplication::widgetAt(QCursor::pos());
    if (w==0) return;


//ui->tableWidget_2->disconnect(this);
ui->tableWidget_2->selectRow(ui->tableWidget_2->currentRow());


//QMenu *m_prets;

m_prets = new QMenu ;


m_prets->addAction("Fin du prêt" ) ;
//m_prets->addAction("Cacher" ) ;

//m_ctx->addSeparator() ;
connect(m_prets,SIGNAL(triggered(QAction *)  ),this,SLOT(diag2(QAction *)));


//QPoint p=QCursor::pos();
//p /=2.0;
//m_ctx->exec(ui->tableWidget->mapToGlobal(p));

m_prets->exec(QCursor::pos());

}

void MainWindow::diag2(QAction * a)
{

    if (a->text()=="Cacher") { m_ctx->hide();  }
   else  {

QString id;
QTableWidgetItem *item;

    QList<QTableWidgetItem *>  selit=ui->tableWidget_2->selectedItems();
    //ui->tableWidget->itemAt();
    for(int i=0; i<selit.count();i++)
    {

        item=selit.at(i);
        if (item->column()==0) { id=item->text(); }

    }

    db = QSqlDatabase::addDatabase( "QSQLITE" );

         db.setDatabaseName("biblio.sqlite" );
         if( !db.open() )
         QMessageBox::information(0, tr("Button"),tr("Failed to open database"));

         QSqlQuery qry;
         QString sql="SELECT id,dat_deb_pret,id_livres FROM prets WHERE id=?";

             qry.prepare(sql);
             qry.addBindValue(id);





          QString nom,id_livres;
          // QStringList nomSL;

          if( !qry.exec() )    { QMessageBox::information(0, tr("Button"),tr("Failed to select")); }

          else {






          while( qry.next() )
              {


              nom=qry.value(1).toString();
              id_livres=qry.value(2).toString();
          }


      }


          QDate today,d;
          today=QDate::currentDate();
          d=QDate::fromString(nom,"dd.MM.yyyy");

          int n=d.daysTo(today);


          QString str;

          m_prets->hide();

          //QMessageBox::information(0, tr("Button"),"Jour(s) de location : "+str.setNum(n,10));
          QMessageBox msgBox;
          msgBox.setText("Jour(s) de location : "+str.setNum(n,10));
          msgBox.setInformativeText("Retour du livre à la date d'aujourd'hui ?");
          msgBox.setStandardButtons(QMessageBox::Ok | QMessageBox::Cancel);
          msgBox.setDefaultButton(QMessageBox::Ok);
          int ret = msgBox.exec();



          if(ret==QMessageBox::Ok) {

             QString todSTR=today.toString("dd.MM.yyyy");
             qDebug()<< todSTR;
                  QSqlQuery qry2;
                  QString sql2="UPDATE prets SET dat_fin_pret=? WHERE id=?";

                  qry2.prepare(sql2);
                  qry2.bindValue(0,todSTR);

                  qry2.bindValue(1,id);

                  if( !qry2.exec() )    { QMessageBox::information(0, tr("Button"),tr("Failed to update"));

                  //qDebug() << qry2.lastQuery();

                  //qDebug() << qry2.lastError().text();
                      
                  }


                  QSqlQuery qry3;
                  QString sql3="UPDATE livres SET dispo='' WHERE id=?";

                  qry3.prepare(sql3);
                  qry3.bindValue(0,id_livres);

                 // qry2.bindValue(1,id);

                  if( !qry3.exec() )    { QMessageBox::information(0, tr("Button"),tr("Failed to update"));

                  //qDebug() << qry2.lastQuery();

                  //qDebug() << qry2.lastError().text();

                  }



                  else { QMessageBox::information(0, tr("Button"),tr("Retour du livre enregistré"));
                      init(); }


                  }


    //Dialog d1(0,id);
    //d1.exec();
            init_pretsEnCours();
      }
}

void MainWindow::on_comboBox_currentIndexChanged(int index)
{


    if (index==0)

    {


init_pretsEnCours();



    }

    if (index==1)

    {


init_TousLesPrets();



    }
}

void MainWindow::init_pretsEnCours()
{


       QStringList labelH2;
       labelH2 << "Id" << "Nom du client" << "Livre" << "Depuis le";
       ui->tableWidget_2->setColumnWidth(0,30);
       ui->tableWidget_2->setColumnWidth(1,240);
       ui->tableWidget_2->setColumnWidth(2,180);
       ui->tableWidget_2->setColumnWidth(3,80);


       ui->tableWidget_2->setHorizontalHeaderLabels(labelH2);

      int row2=0;

            QSqlQuery qry2;

            QString sql2="SELECT id,id_clients,id_livres,dat_deb_pret FROM prets WHERE dat_fin_pret IS NULL";

            qry2.prepare(sql2);

            //QString nom;
            QStringList clientidSL,livreidSL,id2SL,retourSL;

            if( !qry2.exec() )    QMessageBox::information(0, tr("Button"),tr("Failed to select"));

            else {






            while( qry2.next() )
                {


                id2SL<< qry2.value(0).toString();
                clientidSL << qry2.value(1).toString();
                livreidSL << qry2.value(2).toString();

                if(qry2.value(3).toString().isEmpty()) retourSL << "En prêt";
                 else retourSL << qry2.value(3).toString();


                row2++;
            }

            ui->tableWidget_2->setRowCount(row2);


            for(int i=0;i<row2;i++)
            {

            QTableWidgetItem *id2TWI=new QTableWidgetItem(id2SL.at(i));

            ui->tableWidget_2->setItem(i,0,id2TWI);

            QTableWidgetItem *clientidTWI=new QTableWidgetItem(lookClientStr(clientidSL.at(i)));

            ui->tableWidget_2->setItem(i,1,clientidTWI);

            QTableWidgetItem *livreidTWI=new QTableWidgetItem(lookLivreStr(livreidSL.at(i)));

            ui->tableWidget_2->setItem(i,2,livreidTWI);

            QTableWidgetItem *retourTWI=new QTableWidgetItem(retourSL.at(i));

            ui->tableWidget_2->setItem(i,3,retourTWI);



                }
        }

}

void MainWindow::init_TousLesPrets()
{
   // connect(ui->tableWidget_2,SIGNAL(itemClicked ( QTableWidgetItem *)),SLOT(menu_prets(QTableWidgetItem *)));
       //ui->tableWidget_2->disconnect(ui->tableWidget_2,SIGNAL(itemClicked ( QTableWidgetItem *)),this,SLOT(menu_prets(QTableWidgetItem *)));
       QStringList labelH2;
       labelH2 << "Id" << "Nom du client" << "Livre" << "Retour";
       ui->tableWidget_2->setColumnWidth(0,30);
       ui->tableWidget_2->setColumnWidth(1,240);
       ui->tableWidget_2->setColumnWidth(2,180);
       ui->tableWidget_2->setColumnWidth(3,80);


       ui->tableWidget_2->setHorizontalHeaderLabels(labelH2);

      int row2=0;

            QSqlQuery qry2;

            QString sql2="SELECT id,id_clients,id_livres,dat_fin_pret FROM prets";

            qry2.prepare(sql2);

            //QString nom;
            QStringList clientidSL,livreidSL,id2SL,retourSL;

            if( !qry2.exec() )    QMessageBox::information(0, tr("Button"),tr("Failed to select"));

            else {






            while( qry2.next() )
                {


                id2SL<< qry2.value(0).toString();
                clientidSL << qry2.value(1).toString();
                livreidSL << qry2.value(2).toString();

                if(qry2.value(3).toString().isEmpty()) retourSL << "En prêt";
                 else retourSL << "OK";
                         //qry2.value(3).toString();


                row2++;
            }

            ui->tableWidget_2->setRowCount(row2);


            for(int i=0;i<row2;i++)
            {

            QTableWidgetItem *id2TWI=new QTableWidgetItem(id2SL.at(i));

            ui->tableWidget_2->setItem(i,0,id2TWI);

            QTableWidgetItem *clientidTWI=new QTableWidgetItem(lookClientStr(clientidSL.at(i)));

            ui->tableWidget_2->setItem(i,1,clientidTWI);

            QTableWidgetItem *livreidTWI=new QTableWidgetItem(lookLivreStr(livreidSL.at(i)));

            ui->tableWidget_2->setItem(i,2,livreidTWI);

            QTableWidgetItem *retourTWI=new QTableWidgetItem(retourSL.at(i));

            ui->tableWidget_2->setItem(i,3,retourTWI);



                }
        }
}

void MainWindow::on_pushButton_8_clicked()
{
Dialog2 d;

int r=d.exec();
if(r) init();
}

void MainWindow::initSLOT(){

init();

}

void MainWindow::on_pushButton_9_clicked()
{
    QStringList labelH;
    labelH << "Id" << "Nom du livre" << "Auteur"  << "Disponible";
    ui->tableWidget->setColumnWidth(0,30);
    ui->tableWidget->setColumnWidth(1,280);
    ui->tableWidget->setColumnWidth(2,200);
    ui->tableWidget->setColumnWidth(3,80);


    ui->tableWidget->setHorizontalHeaderLabels(labelH);

   int row=0;

         QSqlQuery qry;

         QString sql="SELECT id,nom,auteur,dispo FROM livres WHERE auteur LIKE ?";

         qry.prepare(sql);
         qry.addBindValue(ui->lineEdit_10->text()+"%");

         QString nom;
         QStringList nomSL,auteurSL,idSL,dispoSL;

         if( !qry.exec() )    QMessageBox::information(0, tr("Button"),tr("Failed to select"));

         else {


         while( qry.next() )
             {


             idSL << qry.value(0).toString();
             nomSL << qry.value(1).toString();
             auteurSL << qry.value(2).toString();

             if (qry.value(3).toString()=="")
                 dispoSL << "Oui";
             else dispoSL << qry.value(3).toString();

             row++;
         }

         ui->tableWidget->setRowCount(row);


         for(int i=0;i<row;i++)
         {

         QTableWidgetItem *idTWI=new QTableWidgetItem(idSL.at(i));

         ui->tableWidget->setItem(i,0,idTWI);

         QTableWidgetItem *nomTWI=new QTableWidgetItem(nomSL.at(i));

         ui->tableWidget->setItem(i,1,nomTWI);

         QTableWidgetItem *auteurTWI=new QTableWidgetItem(auteurSL.at(i));

         ui->tableWidget->setItem(i,2,auteurTWI);


         QTableWidgetItem *dispoTWI=new QTableWidgetItem(dispoSL.at(i));

         ui->tableWidget->setItem(i,3,dispoTWI);



            }
     }
}
