// EmploymentDlg.h : header file
//

#if !defined(AFX_EMPLOYMENTDLG_H__21E7956A_C6DB_4A23_94DD_DA42F6859198__INCLUDED_)
#define AFX_EMPLOYMENTDLG_H__21E7956A_C6DB_4A23_94DD_DA42F6859198__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

/////////////////////////////////////////////////////////////////////////////
// IntroPage dialog

class IntroPage : public CPropertyPage
{
// Construction
public:
	IntroPage(CWnd* pParent = NULL);	// standard constructor
	
// Dialog Data
	//{{AFX_DATA(IntroPage)
	enum { IDD = IDD_EMPLOYMENT_DLG };
		// NOTE: the ClassWizard will add data members here
	//}}AFX_DATA

	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(IntroPage)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:
	HICON m_hIcon;

	// Generated message map functions
	//{{AFX_MSG(IntroPage)
	virtual BOOL OnInitDialog();
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_EMPLOYMENTDLG_H__21E7956A_C6DB_4A23_94DD_DA42F6859198__INCLUDED_)
