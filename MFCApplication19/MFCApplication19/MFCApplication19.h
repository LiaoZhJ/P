
// MFCApplication19.h : MFCApplication19 Ӧ�ó������ͷ�ļ�
//
#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"       // ������


// CMFCApplication19App:
// �йش����ʵ�֣������ MFCApplication19.cpp
//

class CMFCApplication19App : public CWinApp
{
public:
	CMFCApplication19App();


// ��д
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// ʵ��
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CMFCApplication19App theApp;
