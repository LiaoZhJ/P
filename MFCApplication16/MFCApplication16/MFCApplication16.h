
// MFCApplication16.h : MFCApplication16 Ӧ�ó������ͷ�ļ�
//
#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"       // ������


// CMFCApplication16App:
// �йش����ʵ�֣������ MFCApplication16.cpp
//

class CMFCApplication16App : public CWinApp
{
public:
	CMFCApplication16App();


// ��д
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// ʵ��
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CMFCApplication16App theApp;
