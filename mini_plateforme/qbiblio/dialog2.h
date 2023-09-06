#ifndef DIALOG2_H
#define DIALOG2_H

#include <QSqlDatabase>
#include <QtSql>
#include <QDebug>
#include <QTableWidgetItem>
#include <QMessageBox>
#include <QDialog>
#include <QFileDialog>

namespace Ui {
    class Dialog2;
}

class Dialog2 : public QDialog {
    Q_OBJECT
public:
    Dialog2(QWidget *parent = 0);
    ~Dialog2();

protected:
    void changeEvent(QEvent *e);

private:
    Ui::Dialog2 *ui;

private slots:
    void on_buttonBox_accepted();
    void on_pushButton_clicked();
};

#endif // DIALOG2_H
