
// mainwindowView.cpp : CmainwindowView ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "mainwindow.h"
#endif

#include "mainwindowDoc.h"
#include "mainwindowView.h"



#ifdef _DEBUG
#define new DEBUG_NEW
#endif
#include "lib0.h"
#include"W32D.h"


// CmainwindowView

IMPLEMENT_DYNCREATE(CmainwindowView, CView)

BEGIN_MESSAGE_MAP(CmainwindowView, CView)
END_MESSAGE_MAP()

// CmainwindowView ����/����

CmainwindowView::CmainwindowView()
{
	// TODO: �ڴ˴���ӹ������

}

CmainwindowView::~CmainwindowView()
{
}

BOOL CmainwindowView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CmainwindowView ����

void CmainwindowView::OnDraw(CDC* pDC)
{
	CmainwindowDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
	CString s;
	s = pchar();
	pDC->TextOutW(20,20,s);

	CString ss;
	ss.Format(_T("%d,��̬�ⷵ��ֵ"), Getint());
	pDC->TextOutW(20, 70, ss);
}


// CmainwindowView ���

#ifdef _DEBUG
void CmainwindowView::AssertValid() const
{
	CView::AssertValid();
}

void CmainwindowView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CmainwindowDoc* CmainwindowView::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CmainwindowDoc)));
	return (CmainwindowDoc*)m_pDocument;
}
#endif //_DEBUG


// CmainwindowView ��Ϣ�������
