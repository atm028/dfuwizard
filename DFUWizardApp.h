// Employment.h : main header file for the EMPLOYMENT application
//

#if !defined(AFX_EMPLOYMENT_H__48F6D6A4_3860_4402_B1FB_151210E9BB74__INCLUDED_)
#define AFX_EMPLOYMENT_H__48F6D6A4_3860_4402_B1FB_151210E9BB74__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#ifndef __AFXWIN_H__
	#error include 'stdafx.h' before including this file for PCH
#endif

#include "resource.h"		// main symbols

/////////////////////////////////////////////////////////////////////////////
// DFUWizardApp:
// See Employment.cpp for the implementation of this class
//

class DFUWizardApp : public CWinApp
{
public:
	DFUWizardApp();

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(DFUWizardApp)
	public:
	virtual BOOL InitInstance();
	//}}AFX_VIRTUAL

// Implementation

	//{{AFX_MSG(DFUWizardApp)
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};


/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_EMPLOYMENT_H__48F6D6A4_3860_4402_B1FB_151210E9BB74__INCLUDED_)
