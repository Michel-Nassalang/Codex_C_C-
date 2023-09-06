/********************************************************************************
** Form generated from reading UI file 'tekkifi.ui'
**
** Created by: Qt User Interface Compiler version 6.4.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TEKKIFI_H
#define UI_TEKKIFI_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLayout>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolBox>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_TekkiFi
{
public:
    QWidget *centralwidget;
    QPushButton *pushButtonV;
    QPushButton *pushButtonC;
    QPushButton *pushButtonF;
    QPushButton *pushButtonD;
    QTabWidget *page;
    QWidget *vitrinepage;
    QFrame *frame;
    QLabel *label_17;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QWidget *widget;
    QLabel *label_18;
    QTextBrowser *textBrowser;
    QWidget *bonspage;
    QTabWidget *tabWidget;
    QWidget *bonfab;
    QTableWidget *tableWidget_4;
    QLabel *label_12;
    QTableWidget *tableWidgetdevid_3;
    QTableWidget *tableWidgetdevprod_3;
    QPushButton *pushBonFab;
    QPushButton *pushButton_9;
    QWidget *bonliv;
    QLabel *label_13;
    QTableWidget *tableWidgetdevid_4;
    QTableWidget *tableWidget_5;
    QFrame *frame_2;
    QTextEdit *textEdit;
    QPushButton *pushBonLib;
    QPushButton *pushButton_8;
    QWidget *devispage;
    QLabel *label_10;
    QTableWidget *tableWidgetdevid;
    QTableWidget *tableWidgetdevprod;
    QTableWidget *tableWidget_2;
    QPushButton *pushDevis;
    QWidget *facturepage;
    QTableWidget *tableWidgetdevid_2;
    QTableWidget *tableWidget_3;
    QTableWidget *tableWidgetdevprod_2;
    QLabel *label_11;
    QPushButton *pushFacture;
    QListWidget *listWidget;
    QWidget *clientpage;
    QLineEdit *lineEdit_20;
    QPushButton *pushSearchNom;
    QPushButton *pushSearchTel;
    QTableWidget *tableWidget;
    QWidget *adminpage;
    QToolBox *toolBox;
    QWidget *creaUser;
    QLabel *label_2;
    QLineEdit *lineEdit;
    QLabel *label_3;
    QLineEdit *lineEdit_2;
    QLabel *label_4;
    QLineEdit *lineEdit_3;
    QLabel *label_5;
    QLineEdit *lineEdit_4;
    QLabel *label_6;
    QLineEdit *lineEdit_5;
    QPushButton *pushAddClient;
    QWidget *modifUser;
    QLineEdit *lineEdit_6;
    QLineEdit *lineEdit_7;
    QLineEdit *lineEdit_8;
    QLabel *label_7;
    QLineEdit *lineEdit_9;
    QLabel *label_8;
    QLabel *label_9;
    QLabel *label_19;
    QLineEdit *lineEdit_10;
    QLabel *label_20;
    QPushButton *pushModClient;
    QWidget *suppUser;
    QLabel *label_21;
    QLineEdit *lineEdit_21;
    QPushButton *pushSuppClient;
    QLineEdit *lineEdit_22;
    QLabel *label_22;
    QLabel *label;
    QWidget *imppage;
    QFrame *frame_3;
    QLabel *label_14;
    QComboBox *comboBox;
    QLabel *label_15;
    QTextEdit *textEdit_2;
    QLabel *label_16;
    QPushButton *pushImp;
    QLabel *labeltitle;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *TekkiFi)
    {
        if (TekkiFi->objectName().isEmpty())
            TekkiFi->setObjectName("TekkiFi");
        TekkiFi->resize(800, 600);
        centralwidget = new QWidget(TekkiFi);
        centralwidget->setObjectName("centralwidget");
        pushButtonV = new QPushButton(centralwidget);
        pushButtonV->setObjectName("pushButtonV");
        pushButtonV->setGeometry(QRect(690, 50, 101, 101));
        pushButtonV->setStyleSheet(QString::fromUtf8("border-image: url(:/images/images/cap.png);\n"
"font: 700 italic 10pt \"Segoe UI\";"));
        pushButtonC = new QPushButton(centralwidget);
        pushButtonC->setObjectName("pushButtonC");
        pushButtonC->setGeometry(QRect(690, 160, 101, 101));
        pushButtonC->setStyleSheet(QString::fromUtf8("font: 700 italic 10pt \"Segoe UI\";\n"
"color: rgb(0, 0, 0);\n"
"border-image: url(:/images/images/profil.png);"));
        pushButtonF = new QPushButton(centralwidget);
        pushButtonF->setObjectName("pushButtonF");
        pushButtonF->setGeometry(QRect(690, 380, 101, 101));
        pushButtonF->setStyleSheet(QString::fromUtf8("color: rgb(16, 119, 138);\n"
"font: 700 italic 10pt \"Segoe UI\";\n"
"border-image: url(:/images/images/capfact.png);\n"
"\n"
""));
        pushButtonD = new QPushButton(centralwidget);
        pushButtonD->setObjectName("pushButtonD");
        pushButtonD->setGeometry(QRect(690, 270, 101, 101));
        pushButtonD->setStyleSheet(QString::fromUtf8("font: 700 italic 10pt \"Segoe UI\";\n"
"color: rgb(111, 162, 42);\n"
"border-image: url(:/images/images/capdevis.png);\n"
"\n"
""));
        page = new QTabWidget(centralwidget);
        page->setObjectName("page");
        page->setGeometry(QRect(0, 40, 681, 531));
        page->setAutoFillBackground(false);
        page->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"background-color: rgb(230, 233, 226);\n"
""));
        page->setTabPosition(QTabWidget::West);
        page->setTabShape(QTabWidget::Rounded);
        vitrinepage = new QWidget();
        vitrinepage->setObjectName("vitrinepage");
        frame = new QFrame(vitrinepage);
        frame->setObjectName("frame");
        frame->setGeometry(QRect(-20, -10, 671, 311));
        frame->setStyleSheet(QString::fromUtf8("border-image: url(:/images/images/kev.jpg);\n"
"background-color: qlineargradient(spread:pad, x1:0, y1:1, x2:0, y2:0, stop:0 rgba(0, 0, 0, 255), stop:0.05 rgba(14, 8, 73, 255), stop:0.36 rgba(28, 17, 145, 255), stop:0.6 rgba(126, 14, 81, 255), stop:0.75 rgba(234, 11, 11, 255), stop:0.79 rgba(244, 70, 5, 255), stop:0.86 rgba(255, 136, 0, 255), stop:0.935 rgba(239, 236, 55, 255));"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        frame->setLineWidth(0);
        label_17 = new QLabel(frame);
        label_17->setObjectName("label_17");
        label_17->setGeometry(QRect(20, 50, 241, 161));
        label_17->setStyleSheet(QString::fromUtf8("\n"
"font: 900 italic 18pt \"Segoe UI\";"));
        scrollArea = new QScrollArea(vitrinepage);
        scrollArea->setObjectName("scrollArea");
        scrollArea->setGeometry(QRect(-1, 299, 661, 231));
        scrollArea->setStyleSheet(QString::fromUtf8("background-color: rgb(11, 42, 24);"));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName("scrollAreaWidgetContents");
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 659, 229));
        widget = new QWidget(scrollAreaWidgetContents);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(-1, -1, 661, 231));
        widget->setStyleSheet(QString::fromUtf8("background-color: rgb(231, 231, 225);"));
        label_18 = new QLabel(widget);
        label_18->setObjectName("label_18");
        label_18->setGeometry(QRect(30, 10, 151, 41));
        label_18->setStyleSheet(QString::fromUtf8("font: 900 italic 18pt \"Segoe UI\";\n"
"color: rgb(255, 255, 255);"));
        textBrowser = new QTextBrowser(widget);
        textBrowser->setObjectName("textBrowser");
        textBrowser->setGeometry(QRect(30, 60, 591, 141));
        scrollArea->setWidget(scrollAreaWidgetContents);
        page->addTab(vitrinepage, QString());
        bonspage = new QWidget();
        bonspage->setObjectName("bonspage");
        bonspage->setEnabled(true);
        tabWidget = new QTabWidget(bonspage);
        tabWidget->setObjectName("tabWidget");
        tabWidget->setGeometry(QRect(30, 10, 601, 491));
        tabWidget->setLayoutDirection(Qt::LeftToRight);
        bonfab = new QWidget();
        bonfab->setObjectName("bonfab");
        tableWidget_4 = new QTableWidget(bonfab);
        if (tableWidget_4->columnCount() < 1)
            tableWidget_4->setColumnCount(1);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableWidget_4->setHorizontalHeaderItem(0, __qtablewidgetitem);
        if (tableWidget_4->rowCount() < 3)
            tableWidget_4->setRowCount(3);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableWidget_4->setVerticalHeaderItem(0, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tableWidget_4->setVerticalHeaderItem(1, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        tableWidget_4->setVerticalHeaderItem(2, __qtablewidgetitem3);
        tableWidget_4->setObjectName("tableWidget_4");
        tableWidget_4->setGeometry(QRect(380, 10, 201, 121));
        tableWidget_4->setStyleSheet(QString::fromUtf8("background-color: rgb(190, 190, 190);"));
        label_12 = new QLabel(bonfab);
        label_12->setObjectName("label_12");
        label_12->setGeometry(QRect(0, 0, 241, 31));
        label_12->setStyleSheet(QString::fromUtf8("text-decoration: underline;\n"
"font: 900 18pt \"Segoe UI Black\";\n"
"color: rgb(255, 255, 255);"));
        tableWidgetdevid_3 = new QTableWidget(bonfab);
        if (tableWidgetdevid_3->columnCount() < 3)
            tableWidgetdevid_3->setColumnCount(3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        tableWidgetdevid_3->setHorizontalHeaderItem(0, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        tableWidgetdevid_3->setHorizontalHeaderItem(1, __qtablewidgetitem5);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        tableWidgetdevid_3->setHorizontalHeaderItem(2, __qtablewidgetitem6);
        if (tableWidgetdevid_3->rowCount() < 1)
            tableWidgetdevid_3->setRowCount(1);
        QTableWidgetItem *__qtablewidgetitem7 = new QTableWidgetItem();
        tableWidgetdevid_3->setVerticalHeaderItem(0, __qtablewidgetitem7);
        QTableWidgetItem *__qtablewidgetitem8 = new QTableWidgetItem();
        tableWidgetdevid_3->setItem(0, 0, __qtablewidgetitem8);
        tableWidgetdevid_3->setObjectName("tableWidgetdevid_3");
        tableWidgetdevid_3->setGeometry(QRect(0, 70, 311, 51));
        tableWidgetdevid_3->setStyleSheet(QString::fromUtf8("background-color: rgb(190, 190, 190);"));
        tableWidgetdevprod_3 = new QTableWidget(bonfab);
        if (tableWidgetdevprod_3->columnCount() < 4)
            tableWidgetdevprod_3->setColumnCount(4);
        QTableWidgetItem *__qtablewidgetitem9 = new QTableWidgetItem();
        tableWidgetdevprod_3->setHorizontalHeaderItem(0, __qtablewidgetitem9);
        QTableWidgetItem *__qtablewidgetitem10 = new QTableWidgetItem();
        tableWidgetdevprod_3->setHorizontalHeaderItem(1, __qtablewidgetitem10);
        QTableWidgetItem *__qtablewidgetitem11 = new QTableWidgetItem();
        tableWidgetdevprod_3->setHorizontalHeaderItem(2, __qtablewidgetitem11);
        QTableWidgetItem *__qtablewidgetitem12 = new QTableWidgetItem();
        tableWidgetdevprod_3->setHorizontalHeaderItem(3, __qtablewidgetitem12);
        if (tableWidgetdevprod_3->rowCount() < 20)
            tableWidgetdevprod_3->setRowCount(20);
        QTableWidgetItem *__qtablewidgetitem13 = new QTableWidgetItem();
        tableWidgetdevprod_3->setVerticalHeaderItem(0, __qtablewidgetitem13);
        QTableWidgetItem *__qtablewidgetitem14 = new QTableWidgetItem();
        tableWidgetdevprod_3->setVerticalHeaderItem(1, __qtablewidgetitem14);
        QTableWidgetItem *__qtablewidgetitem15 = new QTableWidgetItem();
        tableWidgetdevprod_3->setVerticalHeaderItem(2, __qtablewidgetitem15);
        QTableWidgetItem *__qtablewidgetitem16 = new QTableWidgetItem();
        tableWidgetdevprod_3->setVerticalHeaderItem(3, __qtablewidgetitem16);
        QTableWidgetItem *__qtablewidgetitem17 = new QTableWidgetItem();
        tableWidgetdevprod_3->setVerticalHeaderItem(4, __qtablewidgetitem17);
        QTableWidgetItem *__qtablewidgetitem18 = new QTableWidgetItem();
        tableWidgetdevprod_3->setVerticalHeaderItem(5, __qtablewidgetitem18);
        QTableWidgetItem *__qtablewidgetitem19 = new QTableWidgetItem();
        tableWidgetdevprod_3->setVerticalHeaderItem(6, __qtablewidgetitem19);
        QTableWidgetItem *__qtablewidgetitem20 = new QTableWidgetItem();
        tableWidgetdevprod_3->setVerticalHeaderItem(7, __qtablewidgetitem20);
        QTableWidgetItem *__qtablewidgetitem21 = new QTableWidgetItem();
        tableWidgetdevprod_3->setVerticalHeaderItem(8, __qtablewidgetitem21);
        QTableWidgetItem *__qtablewidgetitem22 = new QTableWidgetItem();
        tableWidgetdevprod_3->setVerticalHeaderItem(9, __qtablewidgetitem22);
        QTableWidgetItem *__qtablewidgetitem23 = new QTableWidgetItem();
        tableWidgetdevprod_3->setVerticalHeaderItem(10, __qtablewidgetitem23);
        QTableWidgetItem *__qtablewidgetitem24 = new QTableWidgetItem();
        tableWidgetdevprod_3->setVerticalHeaderItem(11, __qtablewidgetitem24);
        QTableWidgetItem *__qtablewidgetitem25 = new QTableWidgetItem();
        tableWidgetdevprod_3->setVerticalHeaderItem(12, __qtablewidgetitem25);
        QTableWidgetItem *__qtablewidgetitem26 = new QTableWidgetItem();
        tableWidgetdevprod_3->setVerticalHeaderItem(13, __qtablewidgetitem26);
        QTableWidgetItem *__qtablewidgetitem27 = new QTableWidgetItem();
        tableWidgetdevprod_3->setVerticalHeaderItem(14, __qtablewidgetitem27);
        QTableWidgetItem *__qtablewidgetitem28 = new QTableWidgetItem();
        tableWidgetdevprod_3->setVerticalHeaderItem(15, __qtablewidgetitem28);
        QTableWidgetItem *__qtablewidgetitem29 = new QTableWidgetItem();
        tableWidgetdevprod_3->setVerticalHeaderItem(16, __qtablewidgetitem29);
        QTableWidgetItem *__qtablewidgetitem30 = new QTableWidgetItem();
        tableWidgetdevprod_3->setVerticalHeaderItem(17, __qtablewidgetitem30);
        QTableWidgetItem *__qtablewidgetitem31 = new QTableWidgetItem();
        tableWidgetdevprod_3->setVerticalHeaderItem(18, __qtablewidgetitem31);
        QTableWidgetItem *__qtablewidgetitem32 = new QTableWidgetItem();
        tableWidgetdevprod_3->setVerticalHeaderItem(19, __qtablewidgetitem32);
        tableWidgetdevprod_3->setObjectName("tableWidgetdevprod_3");
        tableWidgetdevprod_3->setGeometry(QRect(0, 140, 431, 321));
        tableWidgetdevprod_3->setMaximumSize(QSize(16777215, 16777215));
        tableWidgetdevprod_3->setStyleSheet(QString::fromUtf8("background-color: rgb(220, 220, 220);"));
        tableWidgetdevprod_3->setAutoScrollMargin(20);
        tableWidgetdevprod_3->setShowGrid(true);
        tableWidgetdevprod_3->setGridStyle(Qt::CustomDashLine);
        tableWidgetdevprod_3->setRowCount(20);
        tableWidgetdevprod_3->setColumnCount(4);
        tableWidgetdevprod_3->horizontalHeader()->setCascadingSectionResizes(false);
        pushBonFab = new QPushButton(bonfab);
        pushBonFab->setObjectName("pushBonFab");
        pushBonFab->setGeometry(QRect(440, 250, 141, 24));
        pushButton_9 = new QPushButton(bonfab);
        pushButton_9->setObjectName("pushButton_9");
        pushButton_9->setGeometry(QRect(440, 310, 141, 24));
        tabWidget->addTab(bonfab, QString());
        bonliv = new QWidget();
        bonliv->setObjectName("bonliv");
        label_13 = new QLabel(bonliv);
        label_13->setObjectName("label_13");
        label_13->setGeometry(QRect(0, 0, 241, 31));
        label_13->setStyleSheet(QString::fromUtf8("text-decoration: underline;\n"
"font: 900 18pt \"Segoe UI Black\";\n"
"color: rgb(255, 255, 255);"));
        tableWidgetdevid_4 = new QTableWidget(bonliv);
        if (tableWidgetdevid_4->columnCount() < 3)
            tableWidgetdevid_4->setColumnCount(3);
        QTableWidgetItem *__qtablewidgetitem33 = new QTableWidgetItem();
        tableWidgetdevid_4->setHorizontalHeaderItem(0, __qtablewidgetitem33);
        QTableWidgetItem *__qtablewidgetitem34 = new QTableWidgetItem();
        tableWidgetdevid_4->setHorizontalHeaderItem(1, __qtablewidgetitem34);
        QTableWidgetItem *__qtablewidgetitem35 = new QTableWidgetItem();
        tableWidgetdevid_4->setHorizontalHeaderItem(2, __qtablewidgetitem35);
        if (tableWidgetdevid_4->rowCount() < 1)
            tableWidgetdevid_4->setRowCount(1);
        QTableWidgetItem *__qtablewidgetitem36 = new QTableWidgetItem();
        tableWidgetdevid_4->setVerticalHeaderItem(0, __qtablewidgetitem36);
        QTableWidgetItem *__qtablewidgetitem37 = new QTableWidgetItem();
        tableWidgetdevid_4->setItem(0, 0, __qtablewidgetitem37);
        tableWidgetdevid_4->setObjectName("tableWidgetdevid_4");
        tableWidgetdevid_4->setGeometry(QRect(270, 40, 311, 51));
        tableWidgetdevid_4->setStyleSheet(QString::fromUtf8("background-color: rgb(190, 190, 190);"));
        tableWidget_5 = new QTableWidget(bonliv);
        if (tableWidget_5->columnCount() < 2)
            tableWidget_5->setColumnCount(2);
        QFont font;
        font.setFamilies({QString::fromUtf8("Segoe UI Black")});
        font.setPointSize(11);
        QTableWidgetItem *__qtablewidgetitem38 = new QTableWidgetItem();
        __qtablewidgetitem38->setFont(font);
        tableWidget_5->setHorizontalHeaderItem(0, __qtablewidgetitem38);
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Segoe UI Black")});
        font1.setPointSize(12);
        QTableWidgetItem *__qtablewidgetitem39 = new QTableWidgetItem();
        __qtablewidgetitem39->setFont(font1);
        tableWidget_5->setHorizontalHeaderItem(1, __qtablewidgetitem39);
        if (tableWidget_5->rowCount() < 13)
            tableWidget_5->setRowCount(13);
        QTableWidgetItem *__qtablewidgetitem40 = new QTableWidgetItem();
        tableWidget_5->setVerticalHeaderItem(0, __qtablewidgetitem40);
        QTableWidgetItem *__qtablewidgetitem41 = new QTableWidgetItem();
        tableWidget_5->setVerticalHeaderItem(1, __qtablewidgetitem41);
        QTableWidgetItem *__qtablewidgetitem42 = new QTableWidgetItem();
        tableWidget_5->setVerticalHeaderItem(2, __qtablewidgetitem42);
        QTableWidgetItem *__qtablewidgetitem43 = new QTableWidgetItem();
        tableWidget_5->setVerticalHeaderItem(3, __qtablewidgetitem43);
        QTableWidgetItem *__qtablewidgetitem44 = new QTableWidgetItem();
        tableWidget_5->setVerticalHeaderItem(4, __qtablewidgetitem44);
        QTableWidgetItem *__qtablewidgetitem45 = new QTableWidgetItem();
        tableWidget_5->setVerticalHeaderItem(5, __qtablewidgetitem45);
        QTableWidgetItem *__qtablewidgetitem46 = new QTableWidgetItem();
        tableWidget_5->setVerticalHeaderItem(6, __qtablewidgetitem46);
        QTableWidgetItem *__qtablewidgetitem47 = new QTableWidgetItem();
        tableWidget_5->setVerticalHeaderItem(7, __qtablewidgetitem47);
        QTableWidgetItem *__qtablewidgetitem48 = new QTableWidgetItem();
        tableWidget_5->setVerticalHeaderItem(8, __qtablewidgetitem48);
        QTableWidgetItem *__qtablewidgetitem49 = new QTableWidgetItem();
        tableWidget_5->setVerticalHeaderItem(9, __qtablewidgetitem49);
        QTableWidgetItem *__qtablewidgetitem50 = new QTableWidgetItem();
        tableWidget_5->setVerticalHeaderItem(10, __qtablewidgetitem50);
        QTableWidgetItem *__qtablewidgetitem51 = new QTableWidgetItem();
        tableWidget_5->setVerticalHeaderItem(11, __qtablewidgetitem51);
        QTableWidgetItem *__qtablewidgetitem52 = new QTableWidgetItem();
        tableWidget_5->setVerticalHeaderItem(12, __qtablewidgetitem52);
        tableWidget_5->setObjectName("tableWidget_5");
        tableWidget_5->setGeometry(QRect(15, 121, 561, 221));
        frame_2 = new QFrame(bonliv);
        frame_2->setObjectName("frame_2");
        frame_2->setGeometry(QRect(20, 350, 221, 91));
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Plain);
        frame_2->setLineWidth(8);
        textEdit = new QTextEdit(frame_2);
        textEdit->setObjectName("textEdit");
        textEdit->setGeometry(QRect(0, 0, 221, 91));
        pushBonLib = new QPushButton(bonliv);
        pushBonLib->setObjectName("pushBonLib");
        pushBonLib->setGeometry(QRect(390, 420, 75, 24));
        pushButton_8 = new QPushButton(bonliv);
        pushButton_8->setObjectName("pushButton_8");
        pushButton_8->setGeometry(QRect(500, 420, 75, 24));
        tabWidget->addTab(bonliv, QString());
        page->addTab(bonspage, QString());
        devispage = new QWidget();
        devispage->setObjectName("devispage");
        label_10 = new QLabel(devispage);
        label_10->setObjectName("label_10");
        label_10->setGeometry(QRect(10, 0, 71, 31));
        label_10->setStyleSheet(QString::fromUtf8("text-decoration: underline;\n"
"font: 900 18pt \"Segoe UI Black\";\n"
"color: rgb(255, 255, 255);"));
        tableWidgetdevid = new QTableWidget(devispage);
        if (tableWidgetdevid->columnCount() < 3)
            tableWidgetdevid->setColumnCount(3);
        QTableWidgetItem *__qtablewidgetitem53 = new QTableWidgetItem();
        tableWidgetdevid->setHorizontalHeaderItem(0, __qtablewidgetitem53);
        QTableWidgetItem *__qtablewidgetitem54 = new QTableWidgetItem();
        tableWidgetdevid->setHorizontalHeaderItem(1, __qtablewidgetitem54);
        QTableWidgetItem *__qtablewidgetitem55 = new QTableWidgetItem();
        tableWidgetdevid->setHorizontalHeaderItem(2, __qtablewidgetitem55);
        if (tableWidgetdevid->rowCount() < 1)
            tableWidgetdevid->setRowCount(1);
        QTableWidgetItem *__qtablewidgetitem56 = new QTableWidgetItem();
        tableWidgetdevid->setVerticalHeaderItem(0, __qtablewidgetitem56);
        QTableWidgetItem *__qtablewidgetitem57 = new QTableWidgetItem();
        tableWidgetdevid->setItem(0, 0, __qtablewidgetitem57);
        tableWidgetdevid->setObjectName("tableWidgetdevid");
        tableWidgetdevid->setGeometry(QRect(305, 10, 311, 51));
        tableWidgetdevid->setStyleSheet(QString::fromUtf8("background-color: rgb(190, 190, 190);"));
        tableWidgetdevprod = new QTableWidget(devispage);
        if (tableWidgetdevprod->columnCount() < 4)
            tableWidgetdevprod->setColumnCount(4);
        QTableWidgetItem *__qtablewidgetitem58 = new QTableWidgetItem();
        tableWidgetdevprod->setHorizontalHeaderItem(0, __qtablewidgetitem58);
        QTableWidgetItem *__qtablewidgetitem59 = new QTableWidgetItem();
        tableWidgetdevprod->setHorizontalHeaderItem(1, __qtablewidgetitem59);
        QTableWidgetItem *__qtablewidgetitem60 = new QTableWidgetItem();
        tableWidgetdevprod->setHorizontalHeaderItem(2, __qtablewidgetitem60);
        QTableWidgetItem *__qtablewidgetitem61 = new QTableWidgetItem();
        tableWidgetdevprod->setHorizontalHeaderItem(3, __qtablewidgetitem61);
        if (tableWidgetdevprod->rowCount() < 20)
            tableWidgetdevprod->setRowCount(20);
        QTableWidgetItem *__qtablewidgetitem62 = new QTableWidgetItem();
        tableWidgetdevprod->setVerticalHeaderItem(0, __qtablewidgetitem62);
        QTableWidgetItem *__qtablewidgetitem63 = new QTableWidgetItem();
        tableWidgetdevprod->setVerticalHeaderItem(1, __qtablewidgetitem63);
        QTableWidgetItem *__qtablewidgetitem64 = new QTableWidgetItem();
        tableWidgetdevprod->setVerticalHeaderItem(2, __qtablewidgetitem64);
        QTableWidgetItem *__qtablewidgetitem65 = new QTableWidgetItem();
        tableWidgetdevprod->setVerticalHeaderItem(3, __qtablewidgetitem65);
        QTableWidgetItem *__qtablewidgetitem66 = new QTableWidgetItem();
        tableWidgetdevprod->setVerticalHeaderItem(4, __qtablewidgetitem66);
        QTableWidgetItem *__qtablewidgetitem67 = new QTableWidgetItem();
        tableWidgetdevprod->setVerticalHeaderItem(5, __qtablewidgetitem67);
        QTableWidgetItem *__qtablewidgetitem68 = new QTableWidgetItem();
        tableWidgetdevprod->setVerticalHeaderItem(6, __qtablewidgetitem68);
        QTableWidgetItem *__qtablewidgetitem69 = new QTableWidgetItem();
        tableWidgetdevprod->setVerticalHeaderItem(7, __qtablewidgetitem69);
        QTableWidgetItem *__qtablewidgetitem70 = new QTableWidgetItem();
        tableWidgetdevprod->setVerticalHeaderItem(8, __qtablewidgetitem70);
        QTableWidgetItem *__qtablewidgetitem71 = new QTableWidgetItem();
        tableWidgetdevprod->setVerticalHeaderItem(9, __qtablewidgetitem71);
        QTableWidgetItem *__qtablewidgetitem72 = new QTableWidgetItem();
        tableWidgetdevprod->setVerticalHeaderItem(10, __qtablewidgetitem72);
        QTableWidgetItem *__qtablewidgetitem73 = new QTableWidgetItem();
        tableWidgetdevprod->setVerticalHeaderItem(11, __qtablewidgetitem73);
        QTableWidgetItem *__qtablewidgetitem74 = new QTableWidgetItem();
        tableWidgetdevprod->setVerticalHeaderItem(12, __qtablewidgetitem74);
        QTableWidgetItem *__qtablewidgetitem75 = new QTableWidgetItem();
        tableWidgetdevprod->setVerticalHeaderItem(13, __qtablewidgetitem75);
        QTableWidgetItem *__qtablewidgetitem76 = new QTableWidgetItem();
        tableWidgetdevprod->setVerticalHeaderItem(14, __qtablewidgetitem76);
        QTableWidgetItem *__qtablewidgetitem77 = new QTableWidgetItem();
        tableWidgetdevprod->setVerticalHeaderItem(15, __qtablewidgetitem77);
        QTableWidgetItem *__qtablewidgetitem78 = new QTableWidgetItem();
        tableWidgetdevprod->setVerticalHeaderItem(16, __qtablewidgetitem78);
        QTableWidgetItem *__qtablewidgetitem79 = new QTableWidgetItem();
        tableWidgetdevprod->setVerticalHeaderItem(17, __qtablewidgetitem79);
        QTableWidgetItem *__qtablewidgetitem80 = new QTableWidgetItem();
        tableWidgetdevprod->setVerticalHeaderItem(18, __qtablewidgetitem80);
        QTableWidgetItem *__qtablewidgetitem81 = new QTableWidgetItem();
        tableWidgetdevprod->setVerticalHeaderItem(19, __qtablewidgetitem81);
        tableWidgetdevprod->setObjectName("tableWidgetdevprod");
        tableWidgetdevprod->setGeometry(QRect(10, 80, 431, 381));
        tableWidgetdevprod->setMaximumSize(QSize(16777215, 16777215));
        tableWidgetdevprod->setStyleSheet(QString::fromUtf8("background-color: rgb(220, 220, 220);"));
        tableWidgetdevprod->setAutoScrollMargin(20);
        tableWidgetdevprod->setShowGrid(true);
        tableWidgetdevprod->setGridStyle(Qt::CustomDashLine);
        tableWidgetdevprod->setRowCount(20);
        tableWidgetdevprod->setColumnCount(4);
        tableWidgetdevprod->horizontalHeader()->setCascadingSectionResizes(false);
        tableWidget_2 = new QTableWidget(devispage);
        if (tableWidget_2->columnCount() < 1)
            tableWidget_2->setColumnCount(1);
        QTableWidgetItem *__qtablewidgetitem82 = new QTableWidgetItem();
        tableWidget_2->setHorizontalHeaderItem(0, __qtablewidgetitem82);
        if (tableWidget_2->rowCount() < 3)
            tableWidget_2->setRowCount(3);
        QTableWidgetItem *__qtablewidgetitem83 = new QTableWidgetItem();
        tableWidget_2->setVerticalHeaderItem(0, __qtablewidgetitem83);
        QTableWidgetItem *__qtablewidgetitem84 = new QTableWidgetItem();
        tableWidget_2->setVerticalHeaderItem(1, __qtablewidgetitem84);
        QTableWidgetItem *__qtablewidgetitem85 = new QTableWidgetItem();
        tableWidget_2->setVerticalHeaderItem(2, __qtablewidgetitem85);
        tableWidget_2->setObjectName("tableWidget_2");
        tableWidget_2->setGeometry(QRect(440, 80, 201, 121));
        tableWidget_2->setStyleSheet(QString::fromUtf8("background-color: rgb(190, 190, 190);"));
        pushDevis = new QPushButton(devispage);
        pushDevis->setObjectName("pushDevis");
        pushDevis->setGeometry(QRect(10, 480, 141, 24));
        page->addTab(devispage, QString());
        facturepage = new QWidget();
        facturepage->setObjectName("facturepage");
        tableWidgetdevid_2 = new QTableWidget(facturepage);
        if (tableWidgetdevid_2->columnCount() < 5)
            tableWidgetdevid_2->setColumnCount(5);
        QTableWidgetItem *__qtablewidgetitem86 = new QTableWidgetItem();
        tableWidgetdevid_2->setHorizontalHeaderItem(0, __qtablewidgetitem86);
        QTableWidgetItem *__qtablewidgetitem87 = new QTableWidgetItem();
        tableWidgetdevid_2->setHorizontalHeaderItem(1, __qtablewidgetitem87);
        QTableWidgetItem *__qtablewidgetitem88 = new QTableWidgetItem();
        tableWidgetdevid_2->setHorizontalHeaderItem(2, __qtablewidgetitem88);
        QTableWidgetItem *__qtablewidgetitem89 = new QTableWidgetItem();
        tableWidgetdevid_2->setHorizontalHeaderItem(3, __qtablewidgetitem89);
        QTableWidgetItem *__qtablewidgetitem90 = new QTableWidgetItem();
        tableWidgetdevid_2->setHorizontalHeaderItem(4, __qtablewidgetitem90);
        if (tableWidgetdevid_2->rowCount() < 1)
            tableWidgetdevid_2->setRowCount(1);
        QTableWidgetItem *__qtablewidgetitem91 = new QTableWidgetItem();
        tableWidgetdevid_2->setVerticalHeaderItem(0, __qtablewidgetitem91);
        QTableWidgetItem *__qtablewidgetitem92 = new QTableWidgetItem();
        tableWidgetdevid_2->setItem(0, 0, __qtablewidgetitem92);
        tableWidgetdevid_2->setObjectName("tableWidgetdevid_2");
        tableWidgetdevid_2->setGeometry(QRect(140, 10, 511, 51));
        tableWidgetdevid_2->setStyleSheet(QString::fromUtf8("background-color: rgb(190, 190, 190);"));
        tableWidget_3 = new QTableWidget(facturepage);
        if (tableWidget_3->columnCount() < 1)
            tableWidget_3->setColumnCount(1);
        QTableWidgetItem *__qtablewidgetitem93 = new QTableWidgetItem();
        tableWidget_3->setHorizontalHeaderItem(0, __qtablewidgetitem93);
        if (tableWidget_3->rowCount() < 3)
            tableWidget_3->setRowCount(3);
        QTableWidgetItem *__qtablewidgetitem94 = new QTableWidgetItem();
        tableWidget_3->setVerticalHeaderItem(0, __qtablewidgetitem94);
        QTableWidgetItem *__qtablewidgetitem95 = new QTableWidgetItem();
        tableWidget_3->setVerticalHeaderItem(1, __qtablewidgetitem95);
        QTableWidgetItem *__qtablewidgetitem96 = new QTableWidgetItem();
        tableWidget_3->setVerticalHeaderItem(2, __qtablewidgetitem96);
        tableWidget_3->setObjectName("tableWidget_3");
        tableWidget_3->setGeometry(QRect(440, 90, 201, 121));
        tableWidget_3->setStyleSheet(QString::fromUtf8("background-color: rgb(190, 190, 190);"));
        tableWidgetdevprod_2 = new QTableWidget(facturepage);
        if (tableWidgetdevprod_2->columnCount() < 4)
            tableWidgetdevprod_2->setColumnCount(4);
        QTableWidgetItem *__qtablewidgetitem97 = new QTableWidgetItem();
        tableWidgetdevprod_2->setHorizontalHeaderItem(0, __qtablewidgetitem97);
        QTableWidgetItem *__qtablewidgetitem98 = new QTableWidgetItem();
        tableWidgetdevprod_2->setHorizontalHeaderItem(1, __qtablewidgetitem98);
        QTableWidgetItem *__qtablewidgetitem99 = new QTableWidgetItem();
        tableWidgetdevprod_2->setHorizontalHeaderItem(2, __qtablewidgetitem99);
        QTableWidgetItem *__qtablewidgetitem100 = new QTableWidgetItem();
        tableWidgetdevprod_2->setHorizontalHeaderItem(3, __qtablewidgetitem100);
        if (tableWidgetdevprod_2->rowCount() < 20)
            tableWidgetdevprod_2->setRowCount(20);
        QTableWidgetItem *__qtablewidgetitem101 = new QTableWidgetItem();
        tableWidgetdevprod_2->setVerticalHeaderItem(0, __qtablewidgetitem101);
        QTableWidgetItem *__qtablewidgetitem102 = new QTableWidgetItem();
        tableWidgetdevprod_2->setVerticalHeaderItem(1, __qtablewidgetitem102);
        QTableWidgetItem *__qtablewidgetitem103 = new QTableWidgetItem();
        tableWidgetdevprod_2->setVerticalHeaderItem(2, __qtablewidgetitem103);
        QTableWidgetItem *__qtablewidgetitem104 = new QTableWidgetItem();
        tableWidgetdevprod_2->setVerticalHeaderItem(3, __qtablewidgetitem104);
        QTableWidgetItem *__qtablewidgetitem105 = new QTableWidgetItem();
        tableWidgetdevprod_2->setVerticalHeaderItem(4, __qtablewidgetitem105);
        QTableWidgetItem *__qtablewidgetitem106 = new QTableWidgetItem();
        tableWidgetdevprod_2->setVerticalHeaderItem(5, __qtablewidgetitem106);
        QTableWidgetItem *__qtablewidgetitem107 = new QTableWidgetItem();
        tableWidgetdevprod_2->setVerticalHeaderItem(6, __qtablewidgetitem107);
        QTableWidgetItem *__qtablewidgetitem108 = new QTableWidgetItem();
        tableWidgetdevprod_2->setVerticalHeaderItem(7, __qtablewidgetitem108);
        QTableWidgetItem *__qtablewidgetitem109 = new QTableWidgetItem();
        tableWidgetdevprod_2->setVerticalHeaderItem(8, __qtablewidgetitem109);
        QTableWidgetItem *__qtablewidgetitem110 = new QTableWidgetItem();
        tableWidgetdevprod_2->setVerticalHeaderItem(9, __qtablewidgetitem110);
        QTableWidgetItem *__qtablewidgetitem111 = new QTableWidgetItem();
        tableWidgetdevprod_2->setVerticalHeaderItem(10, __qtablewidgetitem111);
        QTableWidgetItem *__qtablewidgetitem112 = new QTableWidgetItem();
        tableWidgetdevprod_2->setVerticalHeaderItem(11, __qtablewidgetitem112);
        QTableWidgetItem *__qtablewidgetitem113 = new QTableWidgetItem();
        tableWidgetdevprod_2->setVerticalHeaderItem(12, __qtablewidgetitem113);
        QTableWidgetItem *__qtablewidgetitem114 = new QTableWidgetItem();
        tableWidgetdevprod_2->setVerticalHeaderItem(13, __qtablewidgetitem114);
        QTableWidgetItem *__qtablewidgetitem115 = new QTableWidgetItem();
        tableWidgetdevprod_2->setVerticalHeaderItem(14, __qtablewidgetitem115);
        QTableWidgetItem *__qtablewidgetitem116 = new QTableWidgetItem();
        tableWidgetdevprod_2->setVerticalHeaderItem(15, __qtablewidgetitem116);
        QTableWidgetItem *__qtablewidgetitem117 = new QTableWidgetItem();
        tableWidgetdevprod_2->setVerticalHeaderItem(16, __qtablewidgetitem117);
        QTableWidgetItem *__qtablewidgetitem118 = new QTableWidgetItem();
        tableWidgetdevprod_2->setVerticalHeaderItem(17, __qtablewidgetitem118);
        QTableWidgetItem *__qtablewidgetitem119 = new QTableWidgetItem();
        tableWidgetdevprod_2->setVerticalHeaderItem(18, __qtablewidgetitem119);
        QTableWidgetItem *__qtablewidgetitem120 = new QTableWidgetItem();
        tableWidgetdevprod_2->setVerticalHeaderItem(19, __qtablewidgetitem120);
        tableWidgetdevprod_2->setObjectName("tableWidgetdevprod_2");
        tableWidgetdevprod_2->setGeometry(QRect(10, 90, 431, 351));
        tableWidgetdevprod_2->setMaximumSize(QSize(16777215, 16777215));
        tableWidgetdevprod_2->setStyleSheet(QString::fromUtf8("background-color: rgb(220, 220, 220);"));
        tableWidgetdevprod_2->setAutoScrollMargin(20);
        tableWidgetdevprod_2->setShowGrid(true);
        tableWidgetdevprod_2->setGridStyle(Qt::CustomDashLine);
        tableWidgetdevprod_2->setRowCount(20);
        tableWidgetdevprod_2->setColumnCount(4);
        tableWidgetdevprod_2->horizontalHeader()->setCascadingSectionResizes(false);
        label_11 = new QLabel(facturepage);
        label_11->setObjectName("label_11");
        label_11->setGeometry(QRect(10, 10, 91, 31));
        label_11->setStyleSheet(QString::fromUtf8("text-decoration: underline;\n"
"font: 900 18pt \"Segoe UI Black\";\n"
"color: rgb(255, 255, 255);"));
        pushFacture = new QPushButton(facturepage);
        pushFacture->setObjectName("pushFacture");
        pushFacture->setGeometry(QRect(300, 480, 141, 24));
        listWidget = new QListWidget(facturepage);
        QBrush brush(QColor(255, 255, 255, 255));
        brush.setStyle(Qt::HorPattern);
        QBrush brush1(QColor(190, 190, 190, 255));
        brush1.setStyle(Qt::NoBrush);
        QFont font2;
        font2.setFamilies({QString::fromUtf8("Segoe UI Light")});
        font2.setPointSize(14);
        QListWidgetItem *__qlistwidgetitem = new QListWidgetItem(listWidget);
        __qlistwidgetitem->setFont(font2);
        __qlistwidgetitem->setBackground(brush1);
        __qlistwidgetitem->setForeground(brush);
        new QListWidgetItem(listWidget);
        listWidget->setObjectName("listWidget");
        listWidget->setGeometry(QRect(10, 450, 221, 61));
        page->addTab(facturepage, QString());
        clientpage = new QWidget();
        clientpage->setObjectName("clientpage");
        lineEdit_20 = new QLineEdit(clientpage);
        lineEdit_20->setObjectName("lineEdit_20");
        lineEdit_20->setGeometry(QRect(30, 30, 241, 25));
        lineEdit_20->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        pushSearchNom = new QPushButton(clientpage);
        pushSearchNom->setObjectName("pushSearchNom");
        pushSearchNom->setGeometry(QRect(310, 10, 151, 26));
        pushSearchTel = new QPushButton(clientpage);
        pushSearchTel->setObjectName("pushSearchTel");
        pushSearchTel->setGeometry(QRect(310, 50, 151, 26));
        tableWidget = new QTableWidget(clientpage);
        if (tableWidget->columnCount() < 5)
            tableWidget->setColumnCount(5);
        QTableWidgetItem *__qtablewidgetitem121 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem121);
        QTableWidgetItem *__qtablewidgetitem122 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(1, __qtablewidgetitem122);
        QTableWidgetItem *__qtablewidgetitem123 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(2, __qtablewidgetitem123);
        QTableWidgetItem *__qtablewidgetitem124 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(3, __qtablewidgetitem124);
        QTableWidgetItem *__qtablewidgetitem125 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(4, __qtablewidgetitem125);
        if (tableWidget->rowCount() < 19)
            tableWidget->setRowCount(19);
        QTableWidgetItem *__qtablewidgetitem126 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(0, __qtablewidgetitem126);
        QTableWidgetItem *__qtablewidgetitem127 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(1, __qtablewidgetitem127);
        QTableWidgetItem *__qtablewidgetitem128 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(2, __qtablewidgetitem128);
        QTableWidgetItem *__qtablewidgetitem129 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(3, __qtablewidgetitem129);
        QTableWidgetItem *__qtablewidgetitem130 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(4, __qtablewidgetitem130);
        QTableWidgetItem *__qtablewidgetitem131 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(5, __qtablewidgetitem131);
        QTableWidgetItem *__qtablewidgetitem132 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(6, __qtablewidgetitem132);
        QTableWidgetItem *__qtablewidgetitem133 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(7, __qtablewidgetitem133);
        QTableWidgetItem *__qtablewidgetitem134 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(8, __qtablewidgetitem134);
        QTableWidgetItem *__qtablewidgetitem135 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(9, __qtablewidgetitem135);
        QTableWidgetItem *__qtablewidgetitem136 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(10, __qtablewidgetitem136);
        QTableWidgetItem *__qtablewidgetitem137 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(11, __qtablewidgetitem137);
        QTableWidgetItem *__qtablewidgetitem138 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(12, __qtablewidgetitem138);
        QTableWidgetItem *__qtablewidgetitem139 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(13, __qtablewidgetitem139);
        QTableWidgetItem *__qtablewidgetitem140 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(14, __qtablewidgetitem140);
        QTableWidgetItem *__qtablewidgetitem141 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(15, __qtablewidgetitem141);
        QTableWidgetItem *__qtablewidgetitem142 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(16, __qtablewidgetitem142);
        QTableWidgetItem *__qtablewidgetitem143 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(17, __qtablewidgetitem143);
        QTableWidgetItem *__qtablewidgetitem144 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(18, __qtablewidgetitem144);
        QTableWidgetItem *__qtablewidgetitem145 = new QTableWidgetItem();
        tableWidget->setItem(0, 0, __qtablewidgetitem145);
        QTableWidgetItem *__qtablewidgetitem146 = new QTableWidgetItem();
        tableWidget->setItem(0, 1, __qtablewidgetitem146);
        QTableWidgetItem *__qtablewidgetitem147 = new QTableWidgetItem();
        tableWidget->setItem(0, 2, __qtablewidgetitem147);
        QTableWidgetItem *__qtablewidgetitem148 = new QTableWidgetItem();
        tableWidget->setItem(0, 3, __qtablewidgetitem148);
        QTableWidgetItem *__qtablewidgetitem149 = new QTableWidgetItem();
        tableWidget->setItem(0, 4, __qtablewidgetitem149);
        QTableWidgetItem *__qtablewidgetitem150 = new QTableWidgetItem();
        tableWidget->setItem(1, 0, __qtablewidgetitem150);
        QTableWidgetItem *__qtablewidgetitem151 = new QTableWidgetItem();
        tableWidget->setItem(1, 1, __qtablewidgetitem151);
        QTableWidgetItem *__qtablewidgetitem152 = new QTableWidgetItem();
        tableWidget->setItem(1, 2, __qtablewidgetitem152);
        QTableWidgetItem *__qtablewidgetitem153 = new QTableWidgetItem();
        tableWidget->setItem(1, 3, __qtablewidgetitem153);
        QTableWidgetItem *__qtablewidgetitem154 = new QTableWidgetItem();
        tableWidget->setItem(1, 4, __qtablewidgetitem154);
        QTableWidgetItem *__qtablewidgetitem155 = new QTableWidgetItem();
        tableWidget->setItem(2, 0, __qtablewidgetitem155);
        QTableWidgetItem *__qtablewidgetitem156 = new QTableWidgetItem();
        tableWidget->setItem(2, 1, __qtablewidgetitem156);
        QTableWidgetItem *__qtablewidgetitem157 = new QTableWidgetItem();
        tableWidget->setItem(2, 2, __qtablewidgetitem157);
        QTableWidgetItem *__qtablewidgetitem158 = new QTableWidgetItem();
        tableWidget->setItem(2, 3, __qtablewidgetitem158);
        QTableWidgetItem *__qtablewidgetitem159 = new QTableWidgetItem();
        tableWidget->setItem(2, 4, __qtablewidgetitem159);
        QTableWidgetItem *__qtablewidgetitem160 = new QTableWidgetItem();
        tableWidget->setItem(3, 0, __qtablewidgetitem160);
        QTableWidgetItem *__qtablewidgetitem161 = new QTableWidgetItem();
        tableWidget->setItem(3, 1, __qtablewidgetitem161);
        QTableWidgetItem *__qtablewidgetitem162 = new QTableWidgetItem();
        tableWidget->setItem(3, 2, __qtablewidgetitem162);
        QTableWidgetItem *__qtablewidgetitem163 = new QTableWidgetItem();
        tableWidget->setItem(3, 3, __qtablewidgetitem163);
        QTableWidgetItem *__qtablewidgetitem164 = new QTableWidgetItem();
        tableWidget->setItem(3, 4, __qtablewidgetitem164);
        QTableWidgetItem *__qtablewidgetitem165 = new QTableWidgetItem();
        tableWidget->setItem(4, 0, __qtablewidgetitem165);
        QTableWidgetItem *__qtablewidgetitem166 = new QTableWidgetItem();
        tableWidget->setItem(4, 1, __qtablewidgetitem166);
        QTableWidgetItem *__qtablewidgetitem167 = new QTableWidgetItem();
        tableWidget->setItem(4, 2, __qtablewidgetitem167);
        QTableWidgetItem *__qtablewidgetitem168 = new QTableWidgetItem();
        tableWidget->setItem(4, 3, __qtablewidgetitem168);
        QTableWidgetItem *__qtablewidgetitem169 = new QTableWidgetItem();
        tableWidget->setItem(4, 4, __qtablewidgetitem169);
        QTableWidgetItem *__qtablewidgetitem170 = new QTableWidgetItem();
        tableWidget->setItem(5, 0, __qtablewidgetitem170);
        QTableWidgetItem *__qtablewidgetitem171 = new QTableWidgetItem();
        tableWidget->setItem(5, 1, __qtablewidgetitem171);
        QTableWidgetItem *__qtablewidgetitem172 = new QTableWidgetItem();
        tableWidget->setItem(5, 2, __qtablewidgetitem172);
        QTableWidgetItem *__qtablewidgetitem173 = new QTableWidgetItem();
        tableWidget->setItem(5, 3, __qtablewidgetitem173);
        QTableWidgetItem *__qtablewidgetitem174 = new QTableWidgetItem();
        tableWidget->setItem(5, 4, __qtablewidgetitem174);
        QTableWidgetItem *__qtablewidgetitem175 = new QTableWidgetItem();
        tableWidget->setItem(6, 0, __qtablewidgetitem175);
        QTableWidgetItem *__qtablewidgetitem176 = new QTableWidgetItem();
        tableWidget->setItem(6, 1, __qtablewidgetitem176);
        QTableWidgetItem *__qtablewidgetitem177 = new QTableWidgetItem();
        tableWidget->setItem(6, 2, __qtablewidgetitem177);
        QTableWidgetItem *__qtablewidgetitem178 = new QTableWidgetItem();
        tableWidget->setItem(6, 3, __qtablewidgetitem178);
        QTableWidgetItem *__qtablewidgetitem179 = new QTableWidgetItem();
        tableWidget->setItem(6, 4, __qtablewidgetitem179);
        QTableWidgetItem *__qtablewidgetitem180 = new QTableWidgetItem();
        tableWidget->setItem(7, 0, __qtablewidgetitem180);
        QTableWidgetItem *__qtablewidgetitem181 = new QTableWidgetItem();
        tableWidget->setItem(7, 1, __qtablewidgetitem181);
        QTableWidgetItem *__qtablewidgetitem182 = new QTableWidgetItem();
        tableWidget->setItem(7, 2, __qtablewidgetitem182);
        QTableWidgetItem *__qtablewidgetitem183 = new QTableWidgetItem();
        tableWidget->setItem(7, 3, __qtablewidgetitem183);
        QTableWidgetItem *__qtablewidgetitem184 = new QTableWidgetItem();
        tableWidget->setItem(7, 4, __qtablewidgetitem184);
        QTableWidgetItem *__qtablewidgetitem185 = new QTableWidgetItem();
        tableWidget->setItem(8, 0, __qtablewidgetitem185);
        QTableWidgetItem *__qtablewidgetitem186 = new QTableWidgetItem();
        tableWidget->setItem(8, 1, __qtablewidgetitem186);
        QTableWidgetItem *__qtablewidgetitem187 = new QTableWidgetItem();
        tableWidget->setItem(8, 2, __qtablewidgetitem187);
        QTableWidgetItem *__qtablewidgetitem188 = new QTableWidgetItem();
        tableWidget->setItem(8, 3, __qtablewidgetitem188);
        QTableWidgetItem *__qtablewidgetitem189 = new QTableWidgetItem();
        tableWidget->setItem(8, 4, __qtablewidgetitem189);
        QTableWidgetItem *__qtablewidgetitem190 = new QTableWidgetItem();
        tableWidget->setItem(9, 0, __qtablewidgetitem190);
        QTableWidgetItem *__qtablewidgetitem191 = new QTableWidgetItem();
        tableWidget->setItem(9, 1, __qtablewidgetitem191);
        QTableWidgetItem *__qtablewidgetitem192 = new QTableWidgetItem();
        tableWidget->setItem(9, 2, __qtablewidgetitem192);
        QTableWidgetItem *__qtablewidgetitem193 = new QTableWidgetItem();
        tableWidget->setItem(9, 3, __qtablewidgetitem193);
        QTableWidgetItem *__qtablewidgetitem194 = new QTableWidgetItem();
        tableWidget->setItem(9, 4, __qtablewidgetitem194);
        QTableWidgetItem *__qtablewidgetitem195 = new QTableWidgetItem();
        tableWidget->setItem(10, 0, __qtablewidgetitem195);
        QTableWidgetItem *__qtablewidgetitem196 = new QTableWidgetItem();
        tableWidget->setItem(10, 1, __qtablewidgetitem196);
        QTableWidgetItem *__qtablewidgetitem197 = new QTableWidgetItem();
        tableWidget->setItem(10, 2, __qtablewidgetitem197);
        QTableWidgetItem *__qtablewidgetitem198 = new QTableWidgetItem();
        tableWidget->setItem(10, 3, __qtablewidgetitem198);
        QTableWidgetItem *__qtablewidgetitem199 = new QTableWidgetItem();
        tableWidget->setItem(10, 4, __qtablewidgetitem199);
        tableWidget->setObjectName("tableWidget");
        tableWidget->setGeometry(QRect(60, 100, 541, 381));
        page->addTab(clientpage, QString());
        adminpage = new QWidget();
        adminpage->setObjectName("adminpage");
        toolBox = new QToolBox(adminpage);
        toolBox->setObjectName("toolBox");
        toolBox->setGeometry(QRect(40, 68, 571, 421));
        toolBox->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        creaUser = new QWidget();
        creaUser->setObjectName("creaUser");
        creaUser->setGeometry(QRect(0, 0, 100, 30));
        label_2 = new QLabel(creaUser);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(60, 30, 49, 16));
        lineEdit = new QLineEdit(creaUser);
        lineEdit->setObjectName("lineEdit");
        lineEdit->setGeometry(QRect(130, 30, 221, 22));
        label_3 = new QLabel(creaUser);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(60, 70, 49, 16));
        lineEdit_2 = new QLineEdit(creaUser);
        lineEdit_2->setObjectName("lineEdit_2");
        lineEdit_2->setGeometry(QRect(130, 70, 221, 22));
        label_4 = new QLabel(creaUser);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(60, 110, 49, 16));
        lineEdit_3 = new QLineEdit(creaUser);
        lineEdit_3->setObjectName("lineEdit_3");
        lineEdit_3->setGeometry(QRect(130, 110, 221, 22));
        label_5 = new QLabel(creaUser);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(60, 150, 61, 16));
        lineEdit_4 = new QLineEdit(creaUser);
        lineEdit_4->setObjectName("lineEdit_4");
        lineEdit_4->setGeometry(QRect(130, 150, 221, 22));
        label_6 = new QLabel(creaUser);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(60, 190, 71, 16));
        lineEdit_5 = new QLineEdit(creaUser);
        lineEdit_5->setObjectName("lineEdit_5");
        lineEdit_5->setGeometry(QRect(130, 190, 221, 22));
        pushAddClient = new QPushButton(creaUser);
        pushAddClient->setObjectName("pushAddClient");
        pushAddClient->setGeometry(QRect(130, 250, 91, 24));
        pushAddClient->setStyleSheet(QString::fromUtf8("background-color: rgb(225, 225, 225);"));
        toolBox->addItem(creaUser, QString::fromUtf8("Cr\303\251ation Client"));
        modifUser = new QWidget();
        modifUser->setObjectName("modifUser");
        modifUser->setGeometry(QRect(0, 0, 100, 30));
        lineEdit_6 = new QLineEdit(modifUser);
        lineEdit_6->setObjectName("lineEdit_6");
        lineEdit_6->setGeometry(QRect(150, 100, 221, 22));
        lineEdit_7 = new QLineEdit(modifUser);
        lineEdit_7->setObjectName("lineEdit_7");
        lineEdit_7->setGeometry(QRect(150, 20, 221, 22));
        lineEdit_8 = new QLineEdit(modifUser);
        lineEdit_8->setObjectName("lineEdit_8");
        lineEdit_8->setGeometry(QRect(150, 180, 221, 22));
        label_7 = new QLabel(modifUser);
        label_7->setObjectName("label_7");
        label_7->setGeometry(QRect(80, 20, 49, 16));
        lineEdit_9 = new QLineEdit(modifUser);
        lineEdit_9->setObjectName("lineEdit_9");
        lineEdit_9->setGeometry(QRect(150, 60, 221, 22));
        label_8 = new QLabel(modifUser);
        label_8->setObjectName("label_8");
        label_8->setGeometry(QRect(80, 100, 49, 16));
        label_9 = new QLabel(modifUser);
        label_9->setObjectName("label_9");
        label_9->setGeometry(QRect(80, 140, 61, 16));
        label_19 = new QLabel(modifUser);
        label_19->setObjectName("label_19");
        label_19->setGeometry(QRect(80, 60, 49, 16));
        lineEdit_10 = new QLineEdit(modifUser);
        lineEdit_10->setObjectName("lineEdit_10");
        lineEdit_10->setGeometry(QRect(150, 140, 221, 22));
        label_20 = new QLabel(modifUser);
        label_20->setObjectName("label_20");
        label_20->setGeometry(QRect(80, 180, 71, 16));
        pushModClient = new QPushButton(modifUser);
        pushModClient->setObjectName("pushModClient");
        pushModClient->setGeometry(QRect(150, 230, 91, 24));
        pushModClient->setStyleSheet(QString::fromUtf8("background-color: rgb(225, 225, 225);"));
        toolBox->addItem(modifUser, QString::fromUtf8("Modification Client"));
        suppUser = new QWidget();
        suppUser->setObjectName("suppUser");
        suppUser->setGeometry(QRect(0, 0, 100, 30));
        label_21 = new QLabel(suppUser);
        label_21->setObjectName("label_21");
        label_21->setGeometry(QRect(80, 20, 49, 16));
        lineEdit_21 = new QLineEdit(suppUser);
        lineEdit_21->setObjectName("lineEdit_21");
        lineEdit_21->setGeometry(QRect(150, 60, 221, 22));
        pushSuppClient = new QPushButton(suppUser);
        pushSuppClient->setObjectName("pushSuppClient");
        pushSuppClient->setGeometry(QRect(150, 110, 101, 24));
        pushSuppClient->setStyleSheet(QString::fromUtf8("background-color: rgb(225, 225, 225);"));
        lineEdit_22 = new QLineEdit(suppUser);
        lineEdit_22->setObjectName("lineEdit_22");
        lineEdit_22->setGeometry(QRect(150, 20, 221, 22));
        label_22 = new QLabel(suppUser);
        label_22->setObjectName("label_22");
        label_22->setGeometry(QRect(80, 60, 49, 16));
        toolBox->addItem(suppUser, QString::fromUtf8("Suppression Client"));
        label = new QLabel(adminpage);
        label->setObjectName("label");
        label->setGeometry(QRect(170, 20, 321, 31));
        label->setStyleSheet(QString::fromUtf8("font: 900 18pt \"Segoe UI Black\";\n"
"color: rgb(255, 255, 255);\n"
"font: 900 italic 20pt \"Segoe UI\";\n"
"text-decoration: underline;"));
        label->setAlignment(Qt::AlignHCenter|Qt::AlignTop);
        page->addTab(adminpage, QString());
        imppage = new QWidget();
        imppage->setObjectName("imppage");
        frame_3 = new QFrame(imppage);
        frame_3->setObjectName("frame_3");
        frame_3->setGeometry(QRect(20, 20, 611, 471));
        frame_3->setStyleSheet(QString::fromUtf8("background-color: rgb(200, 200, 200);"));
        frame_3->setFrameShape(QFrame::StyledPanel);
        frame_3->setFrameShadow(QFrame::Plain);
        frame_3->setLineWidth(25);
        label_14 = new QLabel(frame_3);
        label_14->setObjectName("label_14");
        label_14->setGeometry(QRect(40, 30, 161, 41));
        label_14->setStyleSheet(QString::fromUtf8("text-decoration: underline;\n"
"font: 900 italic 18pt \"Segoe UI\";\n"
"color: rgb(255, 255, 255);"));
        comboBox = new QComboBox(frame_3);
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->setObjectName("comboBox");
        comboBox->setGeometry(QRect(240, 100, 201, 31));
        comboBox->setStyleSheet(QString::fromUtf8("font: italic 14pt \"Segoe UI\";\n"
"background-color: rgb(255, 255, 255);"));
        label_15 = new QLabel(frame_3);
        label_15->setObjectName("label_15");
        label_15->setGeometry(QRect(40, 110, 151, 21));
        label_15->setStyleSheet(QString::fromUtf8("font: italic 14pt \"Segoe UI\";\n"
"font: 700 italic 14pt \"Segoe UI\";"));
        textEdit_2 = new QTextEdit(frame_3);
        textEdit_2->setObjectName("textEdit_2");
        textEdit_2->setGeometry(QRect(240, 160, 271, 31));
        textEdit_2->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        label_16 = new QLabel(frame_3);
        label_16->setObjectName("label_16");
        label_16->setGeometry(QRect(40, 160, 191, 41));
        label_16->setStyleSheet(QString::fromUtf8("font: 700 italic 14pt \"Segoe UI\";"));
        pushImp = new QPushButton(frame_3);
        pushImp->setObjectName("pushImp");
        pushImp->setGeometry(QRect(240, 263, 111, 31));
        pushImp->setStyleSheet(QString::fromUtf8("font: 700 italic 10pt \"Segoe UI\";"));
        page->addTab(imppage, QString());
        labeltitle = new QLabel(centralwidget);
        labeltitle->setObjectName("labeltitle");
        labeltitle->setGeometry(QRect(0, 0, 801, 41));
        labeltitle->setStyleSheet(QString::fromUtf8("background-color: rgb(93, 179, 255);\n"
"color: rgb(255, 255, 255);\n"
"font: 900 18pt \"Segoe UI Black\";"));
        labeltitle->setAlignment(Qt::AlignCenter);
        TekkiFi->setCentralWidget(centralwidget);
        menubar = new QMenuBar(TekkiFi);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 22));
        TekkiFi->setMenuBar(menubar);
        statusbar = new QStatusBar(TekkiFi);
        statusbar->setObjectName("statusbar");
        TekkiFi->setStatusBar(statusbar);

        retranslateUi(TekkiFi);

        page->setCurrentIndex(1);
        tabWidget->setCurrentIndex(1);
        toolBox->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(TekkiFi);
    } // setupUi

    void retranslateUi(QMainWindow *TekkiFi)
    {
        TekkiFi->setWindowTitle(QCoreApplication::translate("TekkiFi", "Tekki Fi", nullptr));
        pushButtonV->setText(QCoreApplication::translate("TekkiFi", "Vitrine", nullptr));
        pushButtonC->setText(QCoreApplication::translate("TekkiFi", "Clients", nullptr));
        pushButtonF->setText(QCoreApplication::translate("TekkiFi", "Factures", nullptr));
        pushButtonD->setText(QCoreApplication::translate("TekkiFi", "Devis", nullptr));
#if QT_CONFIG(tooltip)
        page->setToolTip(QCoreApplication::translate("TekkiFi", "<html><head/><body><p>Vitrine</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        label_17->setText(QCoreApplication::translate("TekkiFi", "Tekki Fii", nullptr));
        label_18->setText(QCoreApplication::translate("TekkiFi", "Tekki Fii", nullptr));
        textBrowser->setHtml(QCoreApplication::translate("TekkiFi", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Segoe UI'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"justify\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:12pt;\">Tekki Fii est une structure sp\303\251cialis\303\251 dans la r\303\251alisation de devis, dans la facturation et l'imposition de plaques pour les petites entreprises.</span></p>\n"
"<p align=\"justify\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:12pt;\""
                        ">Nous r\303\251alisons des effets sp\303\251ciaux dans nos conceptions et nous apportons une clart\303\251 dans votre travail.</span></p></body></html>", nullptr));
        page->setTabText(page->indexOf(vitrinepage), QCoreApplication::translate("TekkiFi", "Vitrine", nullptr));
        QTableWidgetItem *___qtablewidgetitem = tableWidget_4->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("TekkiFi", "Montant", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget_4->verticalHeaderItem(0);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("TekkiFi", "TauxTVA", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidget_4->verticalHeaderItem(1);
        ___qtablewidgetitem2->setText(QCoreApplication::translate("TekkiFi", "Taux HT", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = tableWidget_4->verticalHeaderItem(2);
        ___qtablewidgetitem3->setText(QCoreApplication::translate("TekkiFi", "Montant \303\240 payer", nullptr));
        label_12->setText(QCoreApplication::translate("TekkiFi", "Bons de fabrication", nullptr));
        QTableWidgetItem *___qtablewidgetitem4 = tableWidgetdevid_3->horizontalHeaderItem(0);
        ___qtablewidgetitem4->setText(QCoreApplication::translate("TekkiFi", "Date", nullptr));
        QTableWidgetItem *___qtablewidgetitem5 = tableWidgetdevid_3->horizontalHeaderItem(1);
        ___qtablewidgetitem5->setText(QCoreApplication::translate("TekkiFi", "Num\303\251ro Bons", nullptr));
        QTableWidgetItem *___qtablewidgetitem6 = tableWidgetdevid_3->horizontalHeaderItem(2);
        ___qtablewidgetitem6->setText(QCoreApplication::translate("TekkiFi", "ID client", nullptr));

        const bool __sortingEnabled = tableWidgetdevid_3->isSortingEnabled();
        tableWidgetdevid_3->setSortingEnabled(false);
        tableWidgetdevid_3->setSortingEnabled(__sortingEnabled);

        QTableWidgetItem *___qtablewidgetitem7 = tableWidgetdevprod_3->horizontalHeaderItem(0);
        ___qtablewidgetitem7->setText(QCoreApplication::translate("TekkiFi", "Produit", nullptr));
        QTableWidgetItem *___qtablewidgetitem8 = tableWidgetdevprod_3->horizontalHeaderItem(1);
        ___qtablewidgetitem8->setText(QCoreApplication::translate("TekkiFi", "Prix unitaire", nullptr));
        QTableWidgetItem *___qtablewidgetitem9 = tableWidgetdevprod_3->horizontalHeaderItem(2);
        ___qtablewidgetitem9->setText(QCoreApplication::translate("TekkiFi", "Quantit\303\251", nullptr));
        QTableWidgetItem *___qtablewidgetitem10 = tableWidgetdevprod_3->horizontalHeaderItem(3);
        ___qtablewidgetitem10->setText(QCoreApplication::translate("TekkiFi", "Montant total", nullptr));
        pushBonFab->setText(QCoreApplication::translate("TekkiFi", "D\303\251livrer", nullptr));
        pushButton_9->setText(QCoreApplication::translate("TekkiFi", "Imprimer", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(bonfab), QCoreApplication::translate("TekkiFi", "Bons de fabrication", nullptr));
        label_13->setText(QCoreApplication::translate("TekkiFi", "Bons de livraison", nullptr));
        QTableWidgetItem *___qtablewidgetitem11 = tableWidgetdevid_4->horizontalHeaderItem(0);
        ___qtablewidgetitem11->setText(QCoreApplication::translate("TekkiFi", "Date", nullptr));
        QTableWidgetItem *___qtablewidgetitem12 = tableWidgetdevid_4->horizontalHeaderItem(1);
        ___qtablewidgetitem12->setText(QCoreApplication::translate("TekkiFi", "Num\303\251ro Livraison", nullptr));
        QTableWidgetItem *___qtablewidgetitem13 = tableWidgetdevid_4->horizontalHeaderItem(2);
        ___qtablewidgetitem13->setText(QCoreApplication::translate("TekkiFi", "ID client", nullptr));

        const bool __sortingEnabled1 = tableWidgetdevid_4->isSortingEnabled();
        tableWidgetdevid_4->setSortingEnabled(false);
        tableWidgetdevid_4->setSortingEnabled(__sortingEnabled1);

        QTableWidgetItem *___qtablewidgetitem14 = tableWidget_5->horizontalHeaderItem(0);
        ___qtablewidgetitem14->setText(QCoreApplication::translate("TekkiFi", "Produit", nullptr));
        QTableWidgetItem *___qtablewidgetitem15 = tableWidget_5->horizontalHeaderItem(1);
        ___qtablewidgetitem15->setText(QCoreApplication::translate("TekkiFi", "D\303\251tails", nullptr));
        textEdit->setHtml(QCoreApplication::translate("TekkiFi", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Segoe UI'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:12pt;\">Signature</span></p></body></html>", nullptr));
        pushBonLib->setText(QCoreApplication::translate("TekkiFi", "Valider", nullptr));
        pushButton_8->setText(QCoreApplication::translate("TekkiFi", "Imprimer", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(bonliv), QCoreApplication::translate("TekkiFi", "Bons de livraison", nullptr));
        page->setTabText(page->indexOf(bonspage), QCoreApplication::translate("TekkiFi", "Bons", nullptr));
        label_10->setText(QCoreApplication::translate("TekkiFi", "Devis", nullptr));
        QTableWidgetItem *___qtablewidgetitem16 = tableWidgetdevid->horizontalHeaderItem(0);
        ___qtablewidgetitem16->setText(QCoreApplication::translate("TekkiFi", "Date", nullptr));
        QTableWidgetItem *___qtablewidgetitem17 = tableWidgetdevid->horizontalHeaderItem(1);
        ___qtablewidgetitem17->setText(QCoreApplication::translate("TekkiFi", "Num\303\251ro Devis", nullptr));
        QTableWidgetItem *___qtablewidgetitem18 = tableWidgetdevid->horizontalHeaderItem(2);
        ___qtablewidgetitem18->setText(QCoreApplication::translate("TekkiFi", "ID client", nullptr));

        const bool __sortingEnabled2 = tableWidgetdevid->isSortingEnabled();
        tableWidgetdevid->setSortingEnabled(false);
        tableWidgetdevid->setSortingEnabled(__sortingEnabled2);

        QTableWidgetItem *___qtablewidgetitem19 = tableWidgetdevprod->horizontalHeaderItem(0);
        ___qtablewidgetitem19->setText(QCoreApplication::translate("TekkiFi", "Produit", nullptr));
        QTableWidgetItem *___qtablewidgetitem20 = tableWidgetdevprod->horizontalHeaderItem(1);
        ___qtablewidgetitem20->setText(QCoreApplication::translate("TekkiFi", "Prix unitaire", nullptr));
        QTableWidgetItem *___qtablewidgetitem21 = tableWidgetdevprod->horizontalHeaderItem(2);
        ___qtablewidgetitem21->setText(QCoreApplication::translate("TekkiFi", "Quantit\303\251", nullptr));
        QTableWidgetItem *___qtablewidgetitem22 = tableWidgetdevprod->horizontalHeaderItem(3);
        ___qtablewidgetitem22->setText(QCoreApplication::translate("TekkiFi", "Montant total", nullptr));
        QTableWidgetItem *___qtablewidgetitem23 = tableWidget_2->horizontalHeaderItem(0);
        ___qtablewidgetitem23->setText(QCoreApplication::translate("TekkiFi", "Montant", nullptr));
        QTableWidgetItem *___qtablewidgetitem24 = tableWidget_2->verticalHeaderItem(0);
        ___qtablewidgetitem24->setText(QCoreApplication::translate("TekkiFi", "TauxTVA", nullptr));
        QTableWidgetItem *___qtablewidgetitem25 = tableWidget_2->verticalHeaderItem(1);
        ___qtablewidgetitem25->setText(QCoreApplication::translate("TekkiFi", "Taux HT", nullptr));
        QTableWidgetItem *___qtablewidgetitem26 = tableWidget_2->verticalHeaderItem(2);
        ___qtablewidgetitem26->setText(QCoreApplication::translate("TekkiFi", "Montant \303\240 payer", nullptr));
        pushDevis->setText(QCoreApplication::translate("TekkiFi", " Demande", nullptr));
        page->setTabText(page->indexOf(devispage), QCoreApplication::translate("TekkiFi", "Devis", nullptr));
        QTableWidgetItem *___qtablewidgetitem27 = tableWidgetdevid_2->horizontalHeaderItem(0);
        ___qtablewidgetitem27->setText(QCoreApplication::translate("TekkiFi", "Date", nullptr));
        QTableWidgetItem *___qtablewidgetitem28 = tableWidgetdevid_2->horizontalHeaderItem(1);
        ___qtablewidgetitem28->setText(QCoreApplication::translate("TekkiFi", "Num\303\251ro Facture", nullptr));
        QTableWidgetItem *___qtablewidgetitem29 = tableWidgetdevid_2->horizontalHeaderItem(2);
        ___qtablewidgetitem29->setText(QCoreApplication::translate("TekkiFi", "ID client", nullptr));
        QTableWidgetItem *___qtablewidgetitem30 = tableWidgetdevid_2->horizontalHeaderItem(3);
        ___qtablewidgetitem30->setText(QCoreApplication::translate("TekkiFi", "Pr\303\251nom", nullptr));
        QTableWidgetItem *___qtablewidgetitem31 = tableWidgetdevid_2->horizontalHeaderItem(4);
        ___qtablewidgetitem31->setText(QCoreApplication::translate("TekkiFi", "Nom", nullptr));

        const bool __sortingEnabled3 = tableWidgetdevid_2->isSortingEnabled();
        tableWidgetdevid_2->setSortingEnabled(false);
        tableWidgetdevid_2->setSortingEnabled(__sortingEnabled3);

        QTableWidgetItem *___qtablewidgetitem32 = tableWidget_3->horizontalHeaderItem(0);
        ___qtablewidgetitem32->setText(QCoreApplication::translate("TekkiFi", "Montant", nullptr));
        QTableWidgetItem *___qtablewidgetitem33 = tableWidget_3->verticalHeaderItem(0);
        ___qtablewidgetitem33->setText(QCoreApplication::translate("TekkiFi", "TauxTVA", nullptr));
        QTableWidgetItem *___qtablewidgetitem34 = tableWidget_3->verticalHeaderItem(1);
        ___qtablewidgetitem34->setText(QCoreApplication::translate("TekkiFi", "Taux HT", nullptr));
        QTableWidgetItem *___qtablewidgetitem35 = tableWidget_3->verticalHeaderItem(2);
        ___qtablewidgetitem35->setText(QCoreApplication::translate("TekkiFi", "Montant \303\240 payer", nullptr));
        QTableWidgetItem *___qtablewidgetitem36 = tableWidgetdevprod_2->horizontalHeaderItem(0);
        ___qtablewidgetitem36->setText(QCoreApplication::translate("TekkiFi", "Produit", nullptr));
        QTableWidgetItem *___qtablewidgetitem37 = tableWidgetdevprod_2->horizontalHeaderItem(1);
        ___qtablewidgetitem37->setText(QCoreApplication::translate("TekkiFi", "Prix unitaire", nullptr));
        QTableWidgetItem *___qtablewidgetitem38 = tableWidgetdevprod_2->horizontalHeaderItem(2);
        ___qtablewidgetitem38->setText(QCoreApplication::translate("TekkiFi", "Quantit\303\251", nullptr));
        QTableWidgetItem *___qtablewidgetitem39 = tableWidgetdevprod_2->horizontalHeaderItem(3);
        ___qtablewidgetitem39->setText(QCoreApplication::translate("TekkiFi", "Montant total", nullptr));
        label_11->setText(QCoreApplication::translate("TekkiFi", "Facture", nullptr));
        pushFacture->setText(QCoreApplication::translate("TekkiFi", "D\303\251livrer", nullptr));

        const bool __sortingEnabled4 = listWidget->isSortingEnabled();
        listWidget->setSortingEnabled(false);
        QListWidgetItem *___qlistwidgetitem = listWidget->item(0);
        ___qlistwidgetitem->setText(QCoreApplication::translate("TekkiFi", "Conditions de r\303\251glements", nullptr));
        QListWidgetItem *___qlistwidgetitem1 = listWidget->item(1);
        ___qlistwidgetitem1->setText(QCoreApplication::translate("TekkiFi", "Payement en 30 jours", nullptr));
        listWidget->setSortingEnabled(__sortingEnabled4);

        page->setTabText(page->indexOf(facturepage), QCoreApplication::translate("TekkiFi", "Factures", nullptr));
        lineEdit_20->setText(QString());
        pushSearchNom->setText(QCoreApplication::translate("TekkiFi", "Recherche par Nom", nullptr));
        pushSearchTel->setText(QCoreApplication::translate("TekkiFi", "Recherche par t\303\251lephone", nullptr));
        QTableWidgetItem *___qtablewidgetitem40 = tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem40->setText(QCoreApplication::translate("TekkiFi", "Pr\303\251nom", nullptr));
        QTableWidgetItem *___qtablewidgetitem41 = tableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem41->setText(QCoreApplication::translate("TekkiFi", "Nom", nullptr));
        QTableWidgetItem *___qtablewidgetitem42 = tableWidget->horizontalHeaderItem(2);
        ___qtablewidgetitem42->setText(QCoreApplication::translate("TekkiFi", "Adresse", nullptr));
        QTableWidgetItem *___qtablewidgetitem43 = tableWidget->horizontalHeaderItem(3);
        ___qtablewidgetitem43->setText(QCoreApplication::translate("TekkiFi", "T\303\251lephone", nullptr));
        QTableWidgetItem *___qtablewidgetitem44 = tableWidget->horizontalHeaderItem(4);
        ___qtablewidgetitem44->setText(QCoreApplication::translate("TekkiFi", "Portefeuille", nullptr));
        QTableWidgetItem *___qtablewidgetitem45 = tableWidget->verticalHeaderItem(0);
        ___qtablewidgetitem45->setText(QCoreApplication::translate("TekkiFi", "1", nullptr));
        QTableWidgetItem *___qtablewidgetitem46 = tableWidget->verticalHeaderItem(1);
        ___qtablewidgetitem46->setText(QCoreApplication::translate("TekkiFi", "2", nullptr));
        QTableWidgetItem *___qtablewidgetitem47 = tableWidget->verticalHeaderItem(2);
        ___qtablewidgetitem47->setText(QCoreApplication::translate("TekkiFi", "3", nullptr));
        QTableWidgetItem *___qtablewidgetitem48 = tableWidget->verticalHeaderItem(3);
        ___qtablewidgetitem48->setText(QCoreApplication::translate("TekkiFi", "4", nullptr));
        QTableWidgetItem *___qtablewidgetitem49 = tableWidget->verticalHeaderItem(4);
        ___qtablewidgetitem49->setText(QCoreApplication::translate("TekkiFi", "5", nullptr));
        QTableWidgetItem *___qtablewidgetitem50 = tableWidget->verticalHeaderItem(5);
        ___qtablewidgetitem50->setText(QCoreApplication::translate("TekkiFi", "6", nullptr));
        QTableWidgetItem *___qtablewidgetitem51 = tableWidget->verticalHeaderItem(6);
        ___qtablewidgetitem51->setText(QCoreApplication::translate("TekkiFi", "7", nullptr));
        QTableWidgetItem *___qtablewidgetitem52 = tableWidget->verticalHeaderItem(7);
        ___qtablewidgetitem52->setText(QCoreApplication::translate("TekkiFi", "8", nullptr));
        QTableWidgetItem *___qtablewidgetitem53 = tableWidget->verticalHeaderItem(8);
        ___qtablewidgetitem53->setText(QCoreApplication::translate("TekkiFi", "9", nullptr));
        QTableWidgetItem *___qtablewidgetitem54 = tableWidget->verticalHeaderItem(9);
        ___qtablewidgetitem54->setText(QCoreApplication::translate("TekkiFi", "10", nullptr));
        QTableWidgetItem *___qtablewidgetitem55 = tableWidget->verticalHeaderItem(10);
        ___qtablewidgetitem55->setText(QCoreApplication::translate("TekkiFi", "11", nullptr));
        QTableWidgetItem *___qtablewidgetitem56 = tableWidget->verticalHeaderItem(11);
        ___qtablewidgetitem56->setText(QCoreApplication::translate("TekkiFi", "12", nullptr));
        QTableWidgetItem *___qtablewidgetitem57 = tableWidget->verticalHeaderItem(12);
        ___qtablewidgetitem57->setText(QCoreApplication::translate("TekkiFi", "13", nullptr));
        QTableWidgetItem *___qtablewidgetitem58 = tableWidget->verticalHeaderItem(13);
        ___qtablewidgetitem58->setText(QCoreApplication::translate("TekkiFi", "14", nullptr));
        QTableWidgetItem *___qtablewidgetitem59 = tableWidget->verticalHeaderItem(14);
        ___qtablewidgetitem59->setText(QCoreApplication::translate("TekkiFi", "15", nullptr));
        QTableWidgetItem *___qtablewidgetitem60 = tableWidget->verticalHeaderItem(15);
        ___qtablewidgetitem60->setText(QCoreApplication::translate("TekkiFi", "16", nullptr));
        QTableWidgetItem *___qtablewidgetitem61 = tableWidget->verticalHeaderItem(16);
        ___qtablewidgetitem61->setText(QCoreApplication::translate("TekkiFi", "17", nullptr));
        QTableWidgetItem *___qtablewidgetitem62 = tableWidget->verticalHeaderItem(17);
        ___qtablewidgetitem62->setText(QCoreApplication::translate("TekkiFi", "18", nullptr));
        QTableWidgetItem *___qtablewidgetitem63 = tableWidget->verticalHeaderItem(18);
        ___qtablewidgetitem63->setText(QCoreApplication::translate("TekkiFi", "20", nullptr));

        const bool __sortingEnabled5 = tableWidget->isSortingEnabled();
        tableWidget->setSortingEnabled(false);
        QTableWidgetItem *___qtablewidgetitem64 = tableWidget->item(0, 0);
        ___qtablewidgetitem64->setText(QCoreApplication::translate("TekkiFi", "Mouhamed", nullptr));
        QTableWidgetItem *___qtablewidgetitem65 = tableWidget->item(0, 1);
        ___qtablewidgetitem65->setText(QCoreApplication::translate("TekkiFi", "Gueye", nullptr));
        QTableWidgetItem *___qtablewidgetitem66 = tableWidget->item(0, 2);
        ___qtablewidgetitem66->setText(QCoreApplication::translate("TekkiFi", "Saly Carrefour extension", nullptr));
        QTableWidgetItem *___qtablewidgetitem67 = tableWidget->item(0, 3);
        ___qtablewidgetitem67->setText(QCoreApplication::translate("TekkiFi", "775436782", nullptr));
        QTableWidgetItem *___qtablewidgetitem68 = tableWidget->item(0, 4);
        ___qtablewidgetitem68->setText(QCoreApplication::translate("TekkiFi", "12500F", nullptr));
        QTableWidgetItem *___qtablewidgetitem69 = tableWidget->item(1, 0);
        ___qtablewidgetitem69->setText(QCoreApplication::translate("TekkiFi", "Moise", nullptr));
        QTableWidgetItem *___qtablewidgetitem70 = tableWidget->item(1, 1);
        ___qtablewidgetitem70->setText(QCoreApplication::translate("TekkiFi", "Faye", nullptr));
        QTableWidgetItem *___qtablewidgetitem71 = tableWidget->item(1, 2);
        ___qtablewidgetitem71->setText(QCoreApplication::translate("TekkiFi", "Grand Mbour", nullptr));
        QTableWidgetItem *___qtablewidgetitem72 = tableWidget->item(1, 3);
        ___qtablewidgetitem72->setText(QCoreApplication::translate("TekkiFi", "763437894", nullptr));
        QTableWidgetItem *___qtablewidgetitem73 = tableWidget->item(1, 4);
        ___qtablewidgetitem73->setText(QCoreApplication::translate("TekkiFi", "6700F", nullptr));
        QTableWidgetItem *___qtablewidgetitem74 = tableWidget->item(2, 0);
        ___qtablewidgetitem74->setText(QCoreApplication::translate("TekkiFi", "B\303\251atrice", nullptr));
        QTableWidgetItem *___qtablewidgetitem75 = tableWidget->item(2, 1);
        ___qtablewidgetitem75->setText(QCoreApplication::translate("TekkiFi", "Diouf", nullptr));
        QTableWidgetItem *___qtablewidgetitem76 = tableWidget->item(2, 2);
        ___qtablewidgetitem76->setText(QCoreApplication::translate("TekkiFi", "Saly Carrefour", nullptr));
        QTableWidgetItem *___qtablewidgetitem77 = tableWidget->item(2, 3);
        ___qtablewidgetitem77->setText(QCoreApplication::translate("TekkiFi", "783421456", nullptr));
        QTableWidgetItem *___qtablewidgetitem78 = tableWidget->item(2, 4);
        ___qtablewidgetitem78->setText(QCoreApplication::translate("TekkiFi", "9800F", nullptr));
        QTableWidgetItem *___qtablewidgetitem79 = tableWidget->item(3, 0);
        ___qtablewidgetitem79->setText(QCoreApplication::translate("TekkiFi", "Abdallah", nullptr));
        QTableWidgetItem *___qtablewidgetitem80 = tableWidget->item(3, 1);
        ___qtablewidgetitem80->setText(QCoreApplication::translate("TekkiFi", "Sylla", nullptr));
        QTableWidgetItem *___qtablewidgetitem81 = tableWidget->item(3, 2);
        ___qtablewidgetitem81->setText(QCoreApplication::translate("TekkiFi", "Medine", nullptr));
        QTableWidgetItem *___qtablewidgetitem82 = tableWidget->item(3, 3);
        ___qtablewidgetitem82->setText(QCoreApplication::translate("TekkiFi", "772314623", nullptr));
        QTableWidgetItem *___qtablewidgetitem83 = tableWidget->item(3, 4);
        ___qtablewidgetitem83->setText(QCoreApplication::translate("TekkiFi", "23000F", nullptr));
        QTableWidgetItem *___qtablewidgetitem84 = tableWidget->item(4, 0);
        ___qtablewidgetitem84->setText(QCoreApplication::translate("TekkiFi", "Fanta", nullptr));
        QTableWidgetItem *___qtablewidgetitem85 = tableWidget->item(4, 1);
        ___qtablewidgetitem85->setText(QCoreApplication::translate("TekkiFi", "Ciss\303\251", nullptr));
        QTableWidgetItem *___qtablewidgetitem86 = tableWidget->item(4, 2);
        ___qtablewidgetitem86->setText(QCoreApplication::translate("TekkiFi", "Tefess", nullptr));
        QTableWidgetItem *___qtablewidgetitem87 = tableWidget->item(4, 3);
        ___qtablewidgetitem87->setText(QCoreApplication::translate("TekkiFi", "784563234", nullptr));
        QTableWidgetItem *___qtablewidgetitem88 = tableWidget->item(4, 4);
        ___qtablewidgetitem88->setText(QCoreApplication::translate("TekkiFi", "17600F", nullptr));
        QTableWidgetItem *___qtablewidgetitem89 = tableWidget->item(5, 0);
        ___qtablewidgetitem89->setText(QCoreApplication::translate("TekkiFi", "Abdou", nullptr));
        QTableWidgetItem *___qtablewidgetitem90 = tableWidget->item(5, 1);
        ___qtablewidgetitem90->setText(QCoreApplication::translate("TekkiFi", "Seck", nullptr));
        QTableWidgetItem *___qtablewidgetitem91 = tableWidget->item(5, 2);
        ___qtablewidgetitem91->setText(QCoreApplication::translate("TekkiFi", "Grand Mbao", nullptr));
        QTableWidgetItem *___qtablewidgetitem92 = tableWidget->item(5, 3);
        ___qtablewidgetitem92->setText(QCoreApplication::translate("TekkiFi", "779563245", nullptr));
        QTableWidgetItem *___qtablewidgetitem93 = tableWidget->item(5, 4);
        ___qtablewidgetitem93->setText(QCoreApplication::translate("TekkiFi", "43700F", nullptr));
        QTableWidgetItem *___qtablewidgetitem94 = tableWidget->item(6, 0);
        ___qtablewidgetitem94->setText(QCoreApplication::translate("TekkiFi", "Ali Mbaye", nullptr));
        QTableWidgetItem *___qtablewidgetitem95 = tableWidget->item(6, 1);
        ___qtablewidgetitem95->setText(QCoreApplication::translate("TekkiFi", "Salem", nullptr));
        QTableWidgetItem *___qtablewidgetitem96 = tableWidget->item(6, 2);
        ___qtablewidgetitem96->setText(QCoreApplication::translate("TekkiFi", "Saly Portudal", nullptr));
        QTableWidgetItem *___qtablewidgetitem97 = tableWidget->item(6, 3);
        ___qtablewidgetitem97->setText(QCoreApplication::translate("TekkiFi", "762341456", nullptr));
        QTableWidgetItem *___qtablewidgetitem98 = tableWidget->item(6, 4);
        ___qtablewidgetitem98->setText(QCoreApplication::translate("TekkiFi", "67000F", nullptr));
        QTableWidgetItem *___qtablewidgetitem99 = tableWidget->item(7, 0);
        ___qtablewidgetitem99->setText(QCoreApplication::translate("TekkiFi", "Ngon\303\251 ", nullptr));
        QTableWidgetItem *___qtablewidgetitem100 = tableWidget->item(7, 1);
        ___qtablewidgetitem100->setText(QCoreApplication::translate("TekkiFi", "Dieng", nullptr));
        QTableWidgetItem *___qtablewidgetitem101 = tableWidget->item(7, 2);
        ___qtablewidgetitem101->setText(QCoreApplication::translate("TekkiFi", "Pikine", nullptr));
        QTableWidgetItem *___qtablewidgetitem102 = tableWidget->item(7, 3);
        ___qtablewidgetitem102->setText(QCoreApplication::translate("TekkiFi", "783245612", nullptr));
        QTableWidgetItem *___qtablewidgetitem103 = tableWidget->item(7, 4);
        ___qtablewidgetitem103->setText(QCoreApplication::translate("TekkiFi", "9800F", nullptr));
        QTableWidgetItem *___qtablewidgetitem104 = tableWidget->item(8, 0);
        ___qtablewidgetitem104->setText(QCoreApplication::translate("TekkiFi", "Adama", nullptr));
        QTableWidgetItem *___qtablewidgetitem105 = tableWidget->item(8, 1);
        ___qtablewidgetitem105->setText(QCoreApplication::translate("TekkiFi", "Samb", nullptr));
        QTableWidgetItem *___qtablewidgetitem106 = tableWidget->item(8, 2);
        ___qtablewidgetitem106->setText(QCoreApplication::translate("TekkiFi", "Grand Mbour 2", nullptr));
        QTableWidgetItem *___qtablewidgetitem107 = tableWidget->item(8, 3);
        ___qtablewidgetitem107->setText(QCoreApplication::translate("TekkiFi", "763452134", nullptr));
        QTableWidgetItem *___qtablewidgetitem108 = tableWidget->item(8, 4);
        ___qtablewidgetitem108->setText(QCoreApplication::translate("TekkiFi", "15500F", nullptr));
        QTableWidgetItem *___qtablewidgetitem109 = tableWidget->item(9, 0);
        ___qtablewidgetitem109->setText(QCoreApplication::translate("TekkiFi", "Fatoumata", nullptr));
        QTableWidgetItem *___qtablewidgetitem110 = tableWidget->item(9, 1);
        ___qtablewidgetitem110->setText(QCoreApplication::translate("TekkiFi", "Diallo", nullptr));
        QTableWidgetItem *___qtablewidgetitem111 = tableWidget->item(9, 2);
        ___qtablewidgetitem111->setText(QCoreApplication::translate("TekkiFi", "M\303\251dine", nullptr));
        QTableWidgetItem *___qtablewidgetitem112 = tableWidget->item(9, 3);
        ___qtablewidgetitem112->setText(QCoreApplication::translate("TekkiFi", "778906653", nullptr));
        QTableWidgetItem *___qtablewidgetitem113 = tableWidget->item(9, 4);
        ___qtablewidgetitem113->setText(QCoreApplication::translate("TekkiFi", "21350F", nullptr));
        QTableWidgetItem *___qtablewidgetitem114 = tableWidget->item(10, 0);
        ___qtablewidgetitem114->setText(QCoreApplication::translate("TekkiFi", "Ad\303\251line", nullptr));
        QTableWidgetItem *___qtablewidgetitem115 = tableWidget->item(10, 1);
        ___qtablewidgetitem115->setText(QCoreApplication::translate("TekkiFi", "Kabou", nullptr));
        QTableWidgetItem *___qtablewidgetitem116 = tableWidget->item(10, 2);
        ___qtablewidgetitem116->setText(QCoreApplication::translate("TekkiFi", "Saly Niakh Niakhal", nullptr));
        QTableWidgetItem *___qtablewidgetitem117 = tableWidget->item(10, 3);
        ___qtablewidgetitem117->setText(QCoreApplication::translate("TekkiFi", "783456576", nullptr));
        QTableWidgetItem *___qtablewidgetitem118 = tableWidget->item(10, 4);
        ___qtablewidgetitem118->setText(QCoreApplication::translate("TekkiFi", "9600F", nullptr));
        tableWidget->setSortingEnabled(__sortingEnabled5);

        page->setTabText(page->indexOf(clientpage), QCoreApplication::translate("TekkiFi", "Clients", nullptr));
        label_2->setText(QCoreApplication::translate("TekkiFi", "Pr\303\251nom", nullptr));
        label_3->setText(QCoreApplication::translate("TekkiFi", "Nom", nullptr));
        label_4->setText(QCoreApplication::translate("TekkiFi", "Adresse", nullptr));
        label_5->setText(QCoreApplication::translate("TekkiFi", "T\303\251lephone", nullptr));
        label_6->setText(QCoreApplication::translate("TekkiFi", "Portefeuille", nullptr));
        pushAddClient->setText(QCoreApplication::translate("TekkiFi", "Ajouter client", nullptr));
        toolBox->setItemText(toolBox->indexOf(creaUser), QCoreApplication::translate("TekkiFi", "Cr\303\251ation Client", nullptr));
        label_7->setText(QCoreApplication::translate("TekkiFi", "Pr\303\251nom", nullptr));
        label_8->setText(QCoreApplication::translate("TekkiFi", "Adresse", nullptr));
        label_9->setText(QCoreApplication::translate("TekkiFi", "T\303\251lephone", nullptr));
        label_19->setText(QCoreApplication::translate("TekkiFi", "Nom", nullptr));
        label_20->setText(QCoreApplication::translate("TekkiFi", "Portefeuille", nullptr));
        pushModClient->setText(QCoreApplication::translate("TekkiFi", "Modifier Client", nullptr));
        toolBox->setItemText(toolBox->indexOf(modifUser), QCoreApplication::translate("TekkiFi", "Modification Client", nullptr));
        label_21->setText(QCoreApplication::translate("TekkiFi", "Pr\303\251nom", nullptr));
        pushSuppClient->setText(QCoreApplication::translate("TekkiFi", "Supprimer Client", nullptr));
        label_22->setText(QCoreApplication::translate("TekkiFi", "Nom", nullptr));
        toolBox->setItemText(toolBox->indexOf(suppUser), QCoreApplication::translate("TekkiFi", "Suppression Client", nullptr));
        label->setText(QCoreApplication::translate("TekkiFi", "Administration Clients", nullptr));
        page->setTabText(page->indexOf(adminpage), QCoreApplication::translate("TekkiFi", "Admin", nullptr));
        label_14->setText(QCoreApplication::translate("TekkiFi", "Imprimerie", nullptr));
        comboBox->setItemText(0, QCoreApplication::translate("TekkiFi", "Bons de fabrication", nullptr));
        comboBox->setItemText(1, QCoreApplication::translate("TekkiFi", "Bons de livraison", nullptr));
        comboBox->setItemText(2, QCoreApplication::translate("TekkiFi", "Devis", nullptr));
        comboBox->setItemText(3, QCoreApplication::translate("TekkiFi", "Factures", nullptr));
        comboBox->setItemText(4, QCoreApplication::translate("TekkiFi", "Liste Clients", nullptr));

        label_15->setText(QCoreApplication::translate("TekkiFi", "Type de papier :", nullptr));
        label_16->setText(QCoreApplication::translate("TekkiFi", "Num\303\251ro du papier :", nullptr));
        pushImp->setText(QCoreApplication::translate("TekkiFi", "Imprimer", nullptr));
        page->setTabText(page->indexOf(imppage), QCoreApplication::translate("TekkiFi", "Impression", nullptr));
        labeltitle->setText(QCoreApplication::translate("TekkiFi", "<html><head/><body><p><span style=\" font-size:18pt; font-weight:700; font-style:italic;\">Tekki Fii</span></p></body></html>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class TekkiFi: public Ui_TekkiFi {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TEKKIFI_H
