#include "menucontext.h"

menucontext::menucontext(QWidget *parent) :
        QHeaderView(Qt::Horizontal
                   ,parent)
{



}


void menucontext::contextMenuEvent( QContextMenuEvent *p_event )
{
emit signal_menu_ctx( this->logicalIndexAt( p_event->pos() ), p_event->globalPos() ) ;
}
