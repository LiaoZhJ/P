
// MFCApplication10.h : MFCApplication10 Ӧ�ó������ͷ�ļ�
//
#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"       // ������


// CMFCApplication10App:
// �йش����ʵ�֣������ MFCApplication10.cpp
//

class CMFCApplication10App : public CWinApp
{
public:
	CMFCApplication10App();


// ��д
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// ʵ��
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CMFCApplication10App theApp;
