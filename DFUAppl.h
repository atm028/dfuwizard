#if !defined(AFX_EMPLSHEET_H__55A4AE23_1539_4457_9251_8612B2DA3EAA__INCLUDED_)
#define AFX_EMPLSHEET_H__55A4AE23_1539_4457_9251_8612B2DA3EAA__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// EmplSheet.h : header file
//

/////////////////////////////////////////////////////////////////////////////
// DFUAppl

class DFUAppl : public CPropertySheet
{
	DECLARE_DYNAMIC(DFUAppl)

// Construction
public:
	DFUAppl(UINT nIDCaption, CWnd* pParentWnd = NULL, UINT iSelectPage = 0);
	DFUAppl(LPCTSTR pszCaption, CWnd* pParentWnd = NULL, UINT iSelectPage = 0);

// Attributes
public:

// Operations
public:

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(DFUAppl)
	//}}AFX_VIRTUAL

// Implementation
public:
	virtual ~DFUAppl();

	// Generated message map functions
protected:
	//{{AFX_MSG(DFUAppl)
		// NOTE - the ClassWizard will add and remove member functions here.
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_EMPLSHEET_H__55A4AE23_1539_4457_9251_8612B2DA3EAA__INCLUDED_)
