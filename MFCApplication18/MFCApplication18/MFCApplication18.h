
// MFCApplication18.h : MFCApplication18 Ӧ�ó������ͷ�ļ�
//
#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"       // ������


// CMFCApplication18App:
// �йش����ʵ�֣������ MFCApplication18.cpp
//

class CMFCApplication18App : public CWinApp
{
public:
	CMFCApplication18App();


// ��д
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// ʵ��
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CMFCApplication18App theApp;
