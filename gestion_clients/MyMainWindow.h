#ifndef _MYMAINWINDOW_H_
#define _MYMAINWINDOW_H_

#include <afxwin.h>
#include <afxcmn.h> 

// classe representant la fenetre de l'application
// derive de la classe CFrameWnd
class CMyMainWindow : public CFrameWnd
{
private:

	// groupe de boutons d'otions
	CButton  btnGrpFrequency;
	CButton  btnGrpBiAnnual;
	CButton  btnGrpQuaterly;
	CButton  btnGrpMonthly;
	// controles static
	CStatic  stcAmount;
	CStatic  stcAnnualRate;
	// controles edit
	CEdit    edtAmount;
	CEdit    edtAnnualRate;
	// boutons
	CButton  btnComputeInterest;
	CButton  btnClearList;
	// list box
	CListBox lsbResults;
	// bar de status
	CStatusBarCtrl statusbar;

public:
	// constructeur
	CMyMainWindow();
	// fonction appelée quand la taille
	// de la fenetre est modifiee.
	afx_msg void OnPaint();
	// fonction appelée quand le controle
	// edtAmount obtient le focus
	afx_msg void OnAmountFocus();
	// fonction appelée quand le controle
	// edtAnnualRate obtient le focus
	afx_msg void OnRateFocus();
	// fonction appelée quand le controle
	// edtAnnualRate perd le focus
	afx_msg void OnRateKillFocus();
	// fonction appelée quand le controle
	// edtAmount perd le focus
	afx_msg void OnAmountKillFocus();
	// fonction appelée quand l'utilisateur
	// clique sur le bouton btnClearList
	afx_msg void OnClickClear();
	// fonction appelée quand l'utilisateur
	// clique sur le bouton btnComputeInterest
	afx_msg void OnClickCompute();
	// fonction appelée quand l'utilisateur
	// double-clique sur une ligne dans la liste
	afx_msg void OnDblClickResults();

	DECLARE_MESSAGE_MAP()
};
#endif