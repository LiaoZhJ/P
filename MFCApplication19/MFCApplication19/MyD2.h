#pragma once


// MyD2 �Ի���

class MyD2 : public CDialogEx
{
	DECLARE_DYNAMIC(MyD2)

public:
	MyD2(CWnd* pParent = NULL);   // ��׼���캯��
	virtual ~MyD2();

// �Ի�������
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_DIALOG2 };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV ֧��

	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnLbnSelchangeList1();
};
