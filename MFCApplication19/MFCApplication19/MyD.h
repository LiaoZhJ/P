#pragma once


// MyD �Ի���

class MyD : public CDialogEx
{
	DECLARE_DYNAMIC(MyD)

public:
	MyD(CWnd* pParent = NULL);   // ��׼���캯��
	virtual ~MyD();

// �Ի�������
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_DIALOG1 };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV ֧��

	DECLARE_MESSAGE_MAP()
public:
	afx_msg void On32771();
	afx_msg void OnEnChangeEdit1();
	CString fname;
};
