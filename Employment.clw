; CLW file contains information for the MFC ClassWizard

[General Info]
Version=1
LastClass=CEmplSheet
LastTemplate=CPropertySheet
NewFileInclude1=#include "stdafx.h"
NewFileInclude2=#include "Employment.h"

ClassCount=5
Class1=CEmploymentApp
Class2=CEmploymentDlg

ResourceCount=4
Resource2=IDD_EXPERIENCE_DLG
Resource1=IDR_MAINFRAME
Class3=CExperienceDlg
Resource3=IDD_EMPLOYMENT_DLG
Class4=CEducationDlg
Class5=CEmplSheet
Resource4=IDD_EDUCATION_DLG

[CLS:CEmploymentApp]
Type=0
HeaderFile=Employment.h
ImplementationFile=Employment.cpp
Filter=N

[CLS:CEmploymentDlg]
Type=0
HeaderFile=EmploymentDlg.h
ImplementationFile=EmploymentDlg.cpp
Filter=D
LastObject=CEmploymentDlg



[CLS:CExperienceDlg]
Type=0
HeaderFile=ExperienceDlg.h
ImplementationFile=ExperienceDlg.cpp
BaseClass=CPropertyPage
Filter=D
LastObject=CExperienceDlg

[DLG:IDD_EXPERIENCE_DLG]
Type=1
Class=CExperienceDlg
ControlCount=1
Control1=IDC_SLIDER1,msctls_trackbar32,1342242840

[DLG:IDD_EMPLOYMENT_DLG]
Type=1
Class=CEmploymentDlg
ControlCount=1
Control1=IDC_EDIT1,edit,1350631552

[DLG:IDD_EDUCATION_DLG]
Type=1
Class=CEducationDlg
ControlCount=1
Control1=IDC_CHECK1,button,1342242819

[CLS:CEducationDlg]
Type=0
HeaderFile=EducationDlg.h
ImplementationFile=EducationDlg.cpp
BaseClass=CPropertyPage
Filter=D
LastObject=CEducationDlg

[CLS:CEmplSheet]
Type=0
HeaderFile=EmplSheet.h
ImplementationFile=EmplSheet.cpp
BaseClass=CPropertySheet
Filter=W

