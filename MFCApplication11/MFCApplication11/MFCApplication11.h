
// MFCApplication11.h : MFCApplication11 Ӧ�ó������ͷ�ļ�
//
#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"       // ������


// CMFCApplication11App:
// �йش����ʵ�֣������ MFCApplication11.cpp
//

class CMFCApplication11App : public CWinApp
{
public:
	CMFCApplication11App();


// ��д
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// ʵ��
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CMFCApplication11App theApp;
