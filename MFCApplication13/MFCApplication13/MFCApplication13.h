
// MFCApplication13.h : MFCApplication13 Ӧ�ó������ͷ�ļ�
//
#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"       // ������


// CMFCApplication13App:
// �йش����ʵ�֣������ MFCApplication13.cpp
//

class CMFCApplication13App : public CWinApp
{
public:
	CMFCApplication13App();


// ��д
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// ʵ��
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CMFCApplication13App theApp;
