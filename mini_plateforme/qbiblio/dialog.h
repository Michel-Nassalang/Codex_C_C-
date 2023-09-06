#ifndef DIALOG_H
#define DIALOG_H

#include <QDialog>
#include <QSqlDatabase>
#include <QtSql>
#include <QDebug>
#include <QTableWidgetItem>
#include <QMessageBox>
#include <QTimer>

namespace Ui {
    class Dialog;
}

class Dialog : public QDialog {
    Q_OBJECT
public:
    Dialog(QWidget *parent = 0, QString i="");
    ~Dialog();
    void setId(QString i);

protected:
    void changeEvent(QEvent *e);

private:
    Ui::Dialog *ui;
    QString id;
    void init(void);
   // QSqlDatabase  db;
    QString lookLivreStr(QString);

private slots:
    void on_comboBox_currentIndexChanged(QString);
    void on_buttonBox_accepted();
};

#endif // DIALOG_H
