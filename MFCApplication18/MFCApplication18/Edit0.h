#pragma once


// Edit0 �Ի���

class Edit0 : public CDialogEx
{
	DECLARE_DYNAMIC(Edit0)

public:
	Edit0(CWnd* pParent = NULL);   // ��׼���캯��
	virtual ~Edit0();

// �Ի�������
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_DIALOG1 };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV ֧��

	DECLARE_MESSAGE_MAP()
public:
	CString str;
	afx_msg void OnEnChangeEdit2();
	CString str2;
	afx_msg void OnBnClickedButton1();
};
