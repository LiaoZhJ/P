#pragma once


// Myd �Ի���

class Myd : public CDialogEx
{
	DECLARE_DYNAMIC(Myd)

public:
	Myd(CWnd* pParent = NULL);   // ��׼���캯��
	virtual ~Myd();

// �Ի�������
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_DIALOG1 };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV ֧��

	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnBnClickedOk();
};
