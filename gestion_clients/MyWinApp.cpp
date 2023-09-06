#include "MyWinApp.h"
#include "MyMainWindow.h"

// Implementation de la methode InitInstance
BOOL CMyWinApp::InitInstance()
{
	// definition du pointeur permettant 
	// d'acceder a la fenetre de l'application
	CMyMainWindow* pWindow = new CMyMainWindow;
	m_pMainWnd = pWindow;
	// rends la fenetre de l'application visible
	pWindow->ShowWindow(SW_SHOW);
	// permets le rafraichissement la fenetre de l'application
	pWindow->UpdateWindow();
	return TRUE;
}