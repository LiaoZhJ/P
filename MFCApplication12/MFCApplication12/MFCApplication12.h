
// MFCApplication12.h : MFCApplication12 Ӧ�ó������ͷ�ļ�
//
#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"       // ������


// CMFCApplication12App:
// �йش����ʵ�֣������ MFCApplication12.cpp
//

class CMFCApplication12App : public CWinApp
{
public:
	CMFCApplication12App();


// ��д
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// ʵ��
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CMFCApplication12App theApp;
