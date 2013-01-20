// Employment.cpp : Defines the class behaviors for the application.
//

#include "stdafx.h"
#include "DFUWizardApp.h"
#include "IntroPage.h"

#include "DFUAppl.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// DFUWizardApp

BEGIN_MESSAGE_MAP(DFUWizardApp, CWinApp)
	//{{AFX_MSG_MAP(DFUWizardApp)
	//}}AFX_MSG
	ON_COMMAND(ID_HELP, CWinApp::OnHelp)
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// DFUWizardApp construction

DFUWizardApp::DFUWizardApp()
{
}

/////////////////////////////////////////////////////////////////////////////
// The one and only DFUWizardApp object

DFUWizardApp theApp;

/////////////////////////////////////////////////////////////////////////////
// DFUWizardApp initialization

BOOL DFUWizardApp::InitInstance()
{
	AfxEnableControlContainer();

	// Standard initialization

#ifdef _AFXDLL
	Enable3dControls();			// Call this when using MFC in a shared DLL
#else
	Enable3dControlsStatic();	// Call this when linking to MFC statically
#endif

	DFUAppl wizard("Employment Application");
	
	IntroPage pageIntro;

	wizard.AddPage(&pageIntro);

	m_pMainWnd = &wizard;

	int nResponse = wizard.DoModal();

	if (nResponse == IDOK)
	{
	}
	else if (nResponse == IDCANCEL)
	{
	}

	// Since the dialog has been closed, return FALSE so that we exit the
	//  application, rather than start the application's message pump.
	return FALSE;
}
