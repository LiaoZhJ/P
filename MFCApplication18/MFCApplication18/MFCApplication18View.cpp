
// MFCApplication18View.cpp : CMFCApplication18View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "MFCApplication18.h"
#endif

#include "MFCApplication18Doc.h"
#include "MFCApplication18View.h"
#include"Edit0.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMFCApplication18View

IMPLEMENT_DYNCREATE(CMFCApplication18View, CView)

BEGIN_MESSAGE_MAP(CMFCApplication18View, CView)
	ON_WM_LBUTTONDOWN()
END_MESSAGE_MAP()

// CMFCApplication18View ����/����

CMFCApplication18View::CMFCApplication18View()
{
	// TODO: �ڴ˴���ӹ������

}

CMFCApplication18View::~CMFCApplication18View()
{
}

BOOL CMFCApplication18View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CMFCApplication18View ����

void CMFCApplication18View::OnDraw(CDC* /*pDC*/)
{
	CMFCApplication18Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// CMFCApplication18View ���

#ifdef _DEBUG
void CMFCApplication18View::AssertValid() const
{
	CView::AssertValid();
}

void CMFCApplication18View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMFCApplication18Doc* CMFCApplication18View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMFCApplication18Doc)));
	return (CMFCApplication18Doc*)m_pDocument;
}
#endif //_DEBUG


// CMFCApplication18View ��Ϣ�������


void CMFCApplication18View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	Edit0 dlg;
	dlg.DoModal();
	
	CView::OnLButtonDown(nFlags, point);
}
