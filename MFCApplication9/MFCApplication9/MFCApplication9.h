
// MFCApplication9.h : MFCApplication9 Ӧ�ó������ͷ�ļ�
//
#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"       // ������


// CMFCApplication9App:
// �йش����ʵ�֣������ MFCApplication9.cpp
//

class CMFCApplication9App : public CWinApp
{
public:
	CMFCApplication9App();


// ��д
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// ʵ��
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CMFCApplication9App theApp;
