
// MFCApplication14.h : MFCApplication14 Ӧ�ó������ͷ�ļ�
//
#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"       // ������


// CMFCApplication14App:
// �йش����ʵ�֣������ MFCApplication14.cpp
//

class CMFCApplication14App : public CWinAppEx
{
public:
	CMFCApplication14App();


// ��д
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// ʵ��
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CMFCApplication14App theApp;
