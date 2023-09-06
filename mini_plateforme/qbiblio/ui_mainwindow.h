/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created: Thu May 13 14:40:16 2010
**      by: Qt User Interface Compiler version 4.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QComboBox>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QMainWindow>
#include <QtGui/QMenuBar>
#include <QtGui/QPushButton>
#include <QtGui/QStatusBar>
#include <QtGui/QTabWidget>
#include <QtGui/QTableWidget>
#include <QtGui/QToolBar>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QTabWidget *tabWidget;
    QWidget *tab_2;
    QLabel *label;
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_2;
    QLabel *label_2;
    QPushButton *pushButton;
    QWidget *tab;
    QLineEdit *lineEdit_3;
    QLabel *label_3;
    QLineEdit *lineEdit_4;
    QLabel *label_4;
    QLabel *label_5;
    QLineEdit *lineEdit_5;
    QLineEdit *lineEdit_6;
    QLabel *label_6;
    QLabel *label_7;
    QLineEdit *lineEdit_7;
    QLabel *label_8;
    QLineEdit *lineEdit_8;
    QLabel *label_9;
    QLineEdit *lineEdit_9;
    QPushButton *pushButton_2;
    QWidget *tab_3;
    QTableWidget *tableWidget;
    QLineEdit *lineEdit_10;
    QPushButton *pushButton_5;
    QPushButton *pushButton_9;
    QWidget *tab_4;
    QTableWidget *tableWidget_2;
    QComboBox *comboBox;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QPushButton *pushButton_6;
    QPushButton *pushButton_7;
    QPushButton *pushButton_8;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(837, 575);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        tabWidget = new QTabWidget(centralWidget);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabWidget->setGeometry(QRect(10, 10, 671, 461));
        tabWidget->setAutoFillBackground(false);
        tabWidget->setStyleSheet(QString::fromUtf8("background-color: rgba(170, 255, 127, 25);\n"
"color: rgb(0, 85, 127);\n"
""));
        tabWidget->setTabPosition(QTabWidget::West);
        tabWidget->setTabShape(QTabWidget::Rounded);
        tab_2 = new QWidget();
        tab_2->setObjectName(QString::fromUtf8("tab_2"));
        tab_2->setStyleSheet(QString::fromUtf8(""));
        label = new QLabel(tab_2);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(20, 20, 111, 21));
        lineEdit = new QLineEdit(tab_2);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(130, 20, 421, 25));
        lineEdit_2 = new QLineEdit(tab_2);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(130, 50, 421, 25));
        label_2 = new QLabel(tab_2);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(20, 50, 111, 21));
        pushButton = new QPushButton(tab_2);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(20, 330, 131, 26));
        tabWidget->addTab(tab_2, QString());
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        tab->setStyleSheet(QString::fromUtf8(""));
        lineEdit_3 = new QLineEdit(tab);
        lineEdit_3->setObjectName(QString::fromUtf8("lineEdit_3"));
        lineEdit_3->setGeometry(QRect(130, 20, 421, 25));
        label_3 = new QLabel(tab);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(20, 50, 111, 21));
        lineEdit_4 = new QLineEdit(tab);
        lineEdit_4->setObjectName(QString::fromUtf8("lineEdit_4"));
        lineEdit_4->setGeometry(QRect(130, 50, 421, 25));
        label_4 = new QLabel(tab);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(20, 20, 111, 21));
        label_5 = new QLabel(tab);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(20, 80, 111, 21));
        lineEdit_5 = new QLineEdit(tab);
        lineEdit_5->setObjectName(QString::fromUtf8("lineEdit_5"));
        lineEdit_5->setGeometry(QRect(130, 80, 421, 25));
        lineEdit_6 = new QLineEdit(tab);
        lineEdit_6->setObjectName(QString::fromUtf8("lineEdit_6"));
        lineEdit_6->setGeometry(QRect(130, 110, 141, 25));
        label_6 = new QLabel(tab);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(20, 110, 111, 21));
        label_7 = new QLabel(tab);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(300, 110, 111, 21));
        lineEdit_7 = new QLineEdit(tab);
        lineEdit_7->setObjectName(QString::fromUtf8("lineEdit_7"));
        lineEdit_7->setGeometry(QRect(360, 110, 191, 25));
        label_8 = new QLabel(tab);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(20, 140, 111, 21));
        lineEdit_8 = new QLineEdit(tab);
        lineEdit_8->setObjectName(QString::fromUtf8("lineEdit_8"));
        lineEdit_8->setGeometry(QRect(130, 140, 141, 25));
        label_9 = new QLabel(tab);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setGeometry(QRect(20, 170, 111, 21));
        lineEdit_9 = new QLineEdit(tab);
        lineEdit_9->setObjectName(QString::fromUtf8("lineEdit_9"));
        lineEdit_9->setGeometry(QRect(130, 170, 141, 25));
        pushButton_2 = new QPushButton(tab);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(20, 330, 131, 26));
        tabWidget->addTab(tab, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName(QString::fromUtf8("tab_3"));
        tableWidget = new QTableWidget(tab_3);
        if (tableWidget->columnCount() < 4)
            tableWidget->setColumnCount(4);
        tableWidget->setObjectName(QString::fromUtf8("tableWidget"));
        tableWidget->setGeometry(QRect(20, 91, 611, 341));
        tableWidget->setAutoFillBackground(false);
        tableWidget->setStyleSheet(QString::fromUtf8("alternate-background-color: rgba(74, 200, 211,20);\n"
"background-color: rgba(255, 232, 55,20);"));
        tableWidget->setAlternatingRowColors(true);
        tableWidget->setSortingEnabled(true);
        tableWidget->setColumnCount(4);
        lineEdit_10 = new QLineEdit(tab_3);
        lineEdit_10->setObjectName(QString::fromUtf8("lineEdit_10"));
        lineEdit_10->setGeometry(QRect(30, 30, 241, 25));
        lineEdit_10->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        pushButton_5 = new QPushButton(tab_3);
        pushButton_5->setObjectName(QString::fromUtf8("pushButton_5"));
        pushButton_5->setGeometry(QRect(310, 10, 151, 26));
        pushButton_9 = new QPushButton(tab_3);
        pushButton_9->setObjectName(QString::fromUtf8("pushButton_9"));
        pushButton_9->setGeometry(QRect(310, 50, 151, 26));
        tabWidget->addTab(tab_3, QString());
        tab_4 = new QWidget();
        tab_4->setObjectName(QString::fromUtf8("tab_4"));
        tableWidget_2 = new QTableWidget(tab_4);
        if (tableWidget_2->columnCount() < 4)
            tableWidget_2->setColumnCount(4);
        tableWidget_2->setObjectName(QString::fromUtf8("tableWidget_2"));
        tableWidget_2->setGeometry(QRect(30, 90, 601, 351));
        tableWidget_2->setStyleSheet(QString::fromUtf8("\n"
"alternate-background-color: rgba(74, 200, 211,20);\n"
"background-color: rgba(255, 232, 55,20);"));
        tableWidget_2->setAlternatingRowColors(true);
        tableWidget_2->setSortingEnabled(true);
        tableWidget_2->setColumnCount(4);
        comboBox = new QComboBox(tab_4);
        comboBox->setObjectName(QString::fromUtf8("comboBox"));
        comboBox->setGeometry(QRect(30, 30, 201, 25));
        comboBox->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        tabWidget->addTab(tab_4, QString());
        pushButton_3 = new QPushButton(centralWidget);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setGeometry(QRect(720, 20, 101, 101));
        pushButton_3->setStyleSheet(QString::fromUtf8("background-image: url(:/rub/book_add.jpg);\n"
"\n"
""));
        pushButton_4 = new QPushButton(centralWidget);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));
        pushButton_4->setGeometry(QRect(720, 130, 101, 101));
        pushButton_4->setStyleSheet(QString::fromUtf8("background-image: url(:/rub/customer_add.jpg);\n"
"\n"
""));
        pushButton_6 = new QPushButton(centralWidget);
        pushButton_6->setObjectName(QString::fromUtf8("pushButton_6"));
        pushButton_6->setGeometry(QRect(720, 240, 101, 101));
        pushButton_6->setStyleSheet(QString::fromUtf8("background-image: url(:/rub/pret.jpg);\n"
"color: rgb(255, 255, 255);\n"
"\n"
""));
        pushButton_7 = new QPushButton(centralWidget);
        pushButton_7->setObjectName(QString::fromUtf8("pushButton_7"));
        pushButton_7->setGeometry(QRect(720, 350, 101, 101));
        pushButton_7->setStyleSheet(QString::fromUtf8("background-image: url(:/rub/pret.jpg);\n"
"color: rgb(255, 255, 255);\n"
"\n"
""));
        pushButton_8 = new QPushButton(centralWidget);
        pushButton_8->setObjectName(QString::fromUtf8("pushButton_8"));
        pushButton_8->setGeometry(QRect(50, 480, 151, 26));
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 837, 23));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        tabWidget->setCurrentIndex(2);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("MainWindow", "Nom du livre :", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("MainWindow", "Auteur :", 0, QApplication::UnicodeUTF8));
        pushButton->setText(QApplication::translate("MainWindow", "Ajouter un livre", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("MainWindow", "Ajouter un livre", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("MainWindow", "Pr\303\251nom :", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("MainWindow", "Nom du client :", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("MainWindow", "Adresse :", 0, QApplication::UnicodeUTF8));
        lineEdit_5->setText(QString());
        lineEdit_6->setText(QString());
        label_6->setText(QApplication::translate("MainWindow", "Code postal :", 0, QApplication::UnicodeUTF8));
        label_7->setText(QApplication::translate("MainWindow", "Ville :", 0, QApplication::UnicodeUTF8));
        lineEdit_7->setText(QString());
        label_8->setText(QApplication::translate("MainWindow", "Pays :", 0, QApplication::UnicodeUTF8));
        lineEdit_8->setText(QApplication::translate("MainWindow", "Belgique", 0, QApplication::UnicodeUTF8));
        label_9->setText(QApplication::translate("MainWindow", "T\303\251l\303\251phone :", 0, QApplication::UnicodeUTF8));
        lineEdit_9->setText(QString());
        pushButton_2->setText(QApplication::translate("MainWindow", "Ajouter un client", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("MainWindow", "Ajouter un client", 0, QApplication::UnicodeUTF8));
        pushButton_5->setText(QApplication::translate("MainWindow", "Filtrer par titre", 0, QApplication::UnicodeUTF8));
        pushButton_9->setText(QApplication::translate("MainWindow", "Filtrer par auteur", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(tab_3), QApplication::translate("MainWindow", "Voir les livres", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(tab_4), QApplication::translate("MainWindow", "Voir les prets en cours", 0, QApplication::UnicodeUTF8));
        pushButton_3->setText(QString());
        pushButton_4->setText(QString());
        pushButton_6->setText(QApplication::translate("MainWindow", "Voir\n"
"les livres", 0, QApplication::UnicodeUTF8));
        pushButton_7->setText(QApplication::translate("MainWindow", "Voir\n"
"les pr\303\252ts", 0, QApplication::UnicodeUTF8));
        pushButton_8->setText(QApplication::translate("MainWindow", "Importer", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
