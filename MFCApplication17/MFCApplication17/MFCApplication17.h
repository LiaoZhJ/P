
// MFCApplication17.h : MFCApplication17 Ӧ�ó������ͷ�ļ�
//
#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"       // ������


// CMFCApplication17App:
// �йش����ʵ�֣������ MFCApplication17.cpp
//

class CMFCApplication17App : public CWinApp
{
public:
	CMFCApplication17App();


// ��д
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// ʵ��
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CMFCApplication17App theApp;
