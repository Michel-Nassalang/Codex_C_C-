#ifndef _MYWINAPP_H_
#define _MYWINAPP_H_

#include <afxwin.h>

// classe representant mon application principale
class CMyWinApp : public CWinApp
{
	// Methode virtuelle qui initialise mon application.
	// Appelée par le constructeur de la classe CWinApp
	virtual BOOL InitInstance();
};
#endif