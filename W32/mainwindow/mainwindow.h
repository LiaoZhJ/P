
// mainwindow.h : mainwindow Ӧ�ó������ͷ�ļ�
//
#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"       // ������


// CmainwindowApp:
// �йش����ʵ�֣������ mainwindow.cpp
//

class CmainwindowApp : public CWinApp
{
public:
	CmainwindowApp();


// ��д
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// ʵ��
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CmainwindowApp theApp;
