#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QMessageBox>
#include <QSqlDatabase>
#include <QtSql>
#include <QDebug>
#include <QTableWidgetItem>
//#include "menucontext.h"
#include "dialog.h"
#include "dialog2.h"

namespace Ui {
    class MainWindow;
}

class MainWindow : public QMainWindow {
    Q_OBJECT
public:
    MainWindow(QWidget *parent = 0);
    ~MainWindow();
    void init(void);
    void init_pretsEnCours(void);
    void init_TousLesPrets(void);
    QString lookClientStr(QString);
    QString lookLivreStr(QString);

protected:
    void changeEvent(QEvent *e);

private:
    Ui::MainWindow *ui;
    QSqlDatabase  db;
    QMenu *m_ctx;
    QMenu *m_prets;
    bool flag_menu1;


private slots:
    void on_pushButton_9_clicked();
    void on_pushButton_8_clicked();
    void on_comboBox_currentIndexChanged(int index);
    void on_pushButton_7_clicked();
    void on_pushButton_6_clicked();
    void on_pushButton_2_clicked();
    void on_pushButton_5_clicked();
    void on_pushButton_clicked();
    void on_tabWidget_currentChanged(int index);
    void on_pushButton_3_clicked();
    void on_pushButton_4_clicked();
    void menu_ctx_h(QTableWidgetItem *);
    void menu_prets(QTableWidgetItem *);
    void diag(QAction *);
    void diag2(QAction *);
    void initSLOT();

};

#endif // MAINWINDOW_H
