
// MFCApplication20.h : MFCApplication20 Ӧ�ó������ͷ�ļ�
//
#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"       // ������


// CMFCApplication20App:
// �йش����ʵ�֣������ MFCApplication20.cpp
//

class CMFCApplication20App : public CWinApp
{
public:
	CMFCApplication20App();


// ��д
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// ʵ��
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CMFCApplication20App theApp;
