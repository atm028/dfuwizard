// EmplSheet.cpp : implementation file
//

#include "stdafx.h"
#include "DFUWizardApp.h"
#include "DFUAppl.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// DFUAppl

IMPLEMENT_DYNAMIC(DFUAppl, CPropertySheet)

DFUAppl::DFUAppl(UINT nIDCaption, CWnd* pParentWnd, UINT iSelectPage)
	:CPropertySheet(nIDCaption, pParentWnd, iSelectPage)
{
}

DFUAppl::DFUAppl(LPCTSTR pszCaption, CWnd* pParentWnd, UINT iSelectPage)
	:CPropertySheet(pszCaption, pParentWnd, iSelectPage)
{
}

DFUAppl::~DFUAppl()
{
}


BEGIN_MESSAGE_MAP(DFUAppl, CPropertySheet)
	//{{AFX_MSG_MAP(DFUAppl)
		// NOTE - the ClassWizard will add and remove mapping macros here.
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// DFUAppl message handlers
