#include "MyMainWindow.h"

// identification des controles et boutons
#define IDC_BTNGRP_FREQUENCY 100
#define IDC_BTNOPT_BIANNUAL 101
#define IDC_BTNOPT_QUATERLY 102
#define IDC_BTNOPT_MONTHLY 103

#define IDC_STC_AMOUNT 200
#define IDC_EDT_AMOUNT 201
#define IDC_STC_RATE 210
#define IDC_EDT_RATE 211

#define IDC_BTN_COMPUTE 300
#define IDC_BTN_CLEAR 310

#define IDC_LSB_RESULTS 400
#define IDC_SB  410

// gestionnaire des messages
BEGIN_MESSAGE_MAP(CMyMainWindow, CFrameWnd)
	ON_WM_PAINT()
	ON_EN_SETFOCUS(IDC_EDT_AMOUNT, OnAmountFocus)
	ON_EN_SETFOCUS(IDC_EDT_RATE, OnRateFocus)
	ON_EN_KILLFOCUS(IDC_EDT_RATE, OnRateKillFocus)
	ON_EN_KILLFOCUS(IDC_EDT_AMOUNT, OnAmountKillFocus)
	ON_BN_CLICKED(IDC_BTN_CLEAR, OnClickClear)
	ON_BN_CLICKED(IDC_BTN_COMPUTE, OnClickCompute)
	ON_LBN_DBLCLK(IDC_LSB_RESULTS, OnDblClickResults)
END_MESSAGE_MAP()


CMyMainWindow::CMyMainWindow()
{
	// cree la fenetre principale
	Create(NULL, _T("My WinApp"), WS_OVERLAPPEDWINDOW,
		     CRect(0, 0, 450, 450));
	
	// cree les boutons,controles,bars de status et la list box
	btnGrpFrequency.Create(_T("FREQUENCY"), WS_CHILD|WS_VISIBLE|BS_GROUPBOX|WS_GROUP,
		                     CRect(CPoint(10,10), CSize(100,120)),
												 this, IDC_BTNGRP_FREQUENCY);

	btnGrpBiAnnual.Create(_T("Bi Annual"), WS_CHILD|WS_VISIBLE|BS_AUTORADIOBUTTON,
		                     CRect(CPoint(15,35), CSize(90,25)),
												 this, IDC_BTNOPT_BIANNUAL);

	btnGrpQuaterly.Create(_T("Quaterly"), WS_CHILD|WS_VISIBLE|BS_AUTORADIOBUTTON,
		                     CRect(CPoint(15,60), CSize(90,25)),
												 this, IDC_BTNOPT_QUATERLY);

	btnGrpMonthly.Create(_T("Monthly"), WS_CHILD|WS_VISIBLE|BS_AUTORADIOBUTTON,
		                     CRect(CPoint(15,85), CSize(90,25)),
												 this, IDC_BTNOPT_MONTHLY);

	stcAmount.Create(_T("Amount"), WS_CHILD|WS_VISIBLE|SS_RIGHT,
		               CRect(CPoint(120,40),CSize(100,25)),
									 this, IDC_STC_AMOUNT);

	edtAmount.Create(WS_CHILD|WS_VISIBLE|WS_BORDER,
		               CRect(CPoint(230,40),CSize(75,25)),
									 this, IDC_EDT_AMOUNT);

	stcAnnualRate.Create(_T("Annual rate"), WS_CHILD|WS_VISIBLE|SS_RIGHT,
		               CRect(CPoint(120,85),CSize(100,25)),
									 this, IDC_STC_RATE);

	edtAnnualRate.Create(WS_CHILD|WS_VISIBLE|WS_BORDER,
		               CRect(CPoint(230,85),CSize(75,25)),
									 this, IDC_EDT_RATE);

	btnComputeInterest.Create(_T("Compute"), WS_CHILD|WS_VISIBLE|BS_DEFPUSHBUTTON,
		                        CRect(CPoint(60,150),CSize(100,25)),
														this, IDC_BTN_COMPUTE);

	btnClearList.Create(_T("Clear list"), WS_CHILD|WS_VISIBLE|BS_PUSHBUTTON,
		                        CRect(CPoint(170,150),CSize(100,25)),
														this, IDC_BTN_CLEAR);

	lsbResults.Create(WS_CHILD|WS_VISIBLE|WS_BORDER|LBS_NOTIFY|WS_VSCROLL,
		                CRect(CPoint(10,205),CSize(300,120)),
										this, IDC_LSB_RESULTS);

	statusbar.Create(WS_CHILD|WS_VISIBLE,
		               CRect(1,2,3,4), this, IDC_SB);
	int RtEdges[] = {350};
	statusbar.SetParts(1,RtEdges);
}

void CMyMainWindow::OnPaint()
{
	CPaintDC dc(this);
	dc.TextOut(10, 185,_T("settlement                  Interest                 capital"));
}

void CMyMainWindow::OnRateFocus()
{
	edtAnnualRate.SetWindowText(_T(""));
}

void CMyMainWindow::OnAmountFocus()
{
	edtAmount.SetWindowText(_T(""));
}

void CMyMainWindow::OnRateKillFocus()
{
	CString str;
	// quand le control perd le focus, on verifie que
	// la valeur rentree est bien > 0.
	// un message est affiche sinon
	edtAnnualRate.GetWindowText(str);
	if ( _wtof(str) < 0 )
	{
		MessageBox(_T("Invalide Interest Rate. Should be positive"));
		edtAnnualRate.SetFocus();
	}
}

void CMyMainWindow::OnClickClear()
{
	// vide la list box
	lsbResults.ResetContent();
}

void CMyMainWindow::OnAmountKillFocus()
{
	CString str;
	// quand le control pred le focus, on verifie que
	// la valeur rentrée est un nombre et est > 0
	// un message est affiché sinon
	edtAmount.GetWindowText(str);
	if ( !(_wtof(str) != 0.0 && _wtof(str) > 0) )
	{
		MessageBox(_T("Invalide Amount. Should be a positive number"));
		edtAmount.SetFocus();
	}
}

void CMyMainWindow::OnClickCompute()
{
	lsbResults.ResetContent();

	CString str;
	
	edtAnnualRate.GetWindowText(str);
	double rate = _wtof(str);

	switch ( GetCheckedRadioButton(IDC_BTNOPT_BIANNUAL, IDC_BTNOPT_MONTHLY) )
	{
	case IDC_BTNOPT_BIANNUAL:
		rate = rate / 2;
		break;
	case IDC_BTNOPT_QUATERLY:
		rate = rate / 3;
		break;
	case IDC_BTNOPT_MONTHLY:
		rate = rate / 12;
		break;
	default:
		break;
	}

	edtAmount.GetWindowText(str);
	double amount = _wtof(str);
	double interest;
	for (int i = 1; i <= 100; ++i)
	{
		interest = rate*amount;
		amount = amount + interest;
		str.Format(_T(" %5d   %24.3f  %24.3f"), 
			         i, interest, amount);
		// on ajoute une ligne a la list box
		lsbResults.AddString(str);
	}
}

// quand l'utilisateur double-clique sur une ligne
// dans la liste, la ligne s'affiche dans la
// bar de status
void CMyMainWindow::OnDblClickResults()
{
	int index;
	CString s, SelStr;

	index = lsbResults.GetCurSel();
	lsbResults.GetText(index,SelStr);
	
	SelStr.TrimLeft();
	s.Format(_T("pos: %d, entry: %s"), index + 1, SelStr);
	statusbar.SetText(s,0,0);
}