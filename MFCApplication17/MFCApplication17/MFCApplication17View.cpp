
// MFCApplication17View.cpp : CMFCApplication17View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "MFCApplication17.h"
#endif

#include "MFCApplication17Doc.h"
#include "MFCApplication17View.h"
#include"Myd.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMFCApplication17View

IMPLEMENT_DYNCREATE(CMFCApplication17View, CView)

BEGIN_MESSAGE_MAP(CMFCApplication17View, CView)
	ON_WM_LBUTTONDOWN()
END_MESSAGE_MAP()

// CMFCApplication17View ����/����

CMFCApplication17View::CMFCApplication17View()
{
	// TODO: �ڴ˴���ӹ������

}

CMFCApplication17View::~CMFCApplication17View()
{
}

BOOL CMFCApplication17View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CMFCApplication17View ����

void CMFCApplication17View::OnDraw(CDC* /*pDC*/)
{
	CMFCApplication17Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// CMFCApplication17View ���

#ifdef _DEBUG
void CMFCApplication17View::AssertValid() const
{
	CView::AssertValid();
}

void CMFCApplication17View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMFCApplication17Doc* CMFCApplication17View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMFCApplication17Doc)));
	return (CMFCApplication17Doc*)m_pDocument;
}
#endif //_DEBUG


// CMFCApplication17View ��Ϣ�������


void CMFCApplication17View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	Myd dlg;
	int r = dlg.DoModal();
	if (r == IDOK) {
		GetDC()->TextOutW(20,20,L"�����˳��Ի���");
	}
	CView::OnLButtonDown(nFlags, point);
}
