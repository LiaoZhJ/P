
// Mainmfc.h : Mainmfc Ӧ�ó������ͷ�ļ�
//
#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"       // ������


// CMainmfcApp:
// �йش����ʵ�֣������ Mainmfc.cpp
//

class CMainmfcApp : public CWinApp
{
public:
	CMainmfcApp();


// ��д
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// ʵ��
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CMainmfcApp theApp;
