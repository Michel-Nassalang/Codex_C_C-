#ifndef MENUCONTEXT_H
#define MENUCONTEXT_H

//#include <QtGui>
#include <QHeaderView>
#include <QDebug>
#include <QContextMenuEvent>

namespace Ui {
    class menucontext;
}


class menucontext :  public QHeaderView {
    Q_OBJECT

public:
    menucontext(QWidget * parent=0);
    //menucontext(QWidget *parent = 0) : QHeaderView(Qt::Orientation,QWidget * parent);
    //~menucontext();
protected :
virtual void contextMenuEvent( QContextMenuEvent * ) ;

signals :
void signal_menu_ctx( int, const QPoint & ) ;



};

#endif // MENUCONTEXT_H
