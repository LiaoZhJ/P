
// MFCApplication15View.cpp : CMFCApplication15View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "MFCApplication15.h"
#endif

#include "MFCApplication15Doc.h"
#include "MFCApplication15View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMFCApplication15View

IMPLEMENT_DYNCREATE(CMFCApplication15View, CView)

BEGIN_MESSAGE_MAP(CMFCApplication15View, CView)
	ON_WM_CHAR()
//	ON_WM_LBUTTONDBLCLK()
	ON_WM_LBUTTONDOWN()
END_MESSAGE_MAP()

// CMFCApplication15View ����/����

CMFCApplication15View::CMFCApplication15View()
{
	// TODO: �ڴ˴���ӹ������

}

CMFCApplication15View::~CMFCApplication15View()
{
}

BOOL CMFCApplication15View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CMFCApplication15View ����

void CMFCApplication15View::OnDraw(CDC* pDC)
{
	CMFCApplication15Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
	pDC->Rectangle(pDoc->rect);
	pDC->TextOutW(pDoc->rect.left + 1, pDoc->rect.top + 1, pDoc->str);
	/*CSize textsize;
	textsize = pDC->GetTextExtent((LPCTSTR)pDoc->str);
	CString s;
	s.Format(L"%d", textsize.cx);
	pDC->TextOutW(200,200,s);*/
}


// CMFCApplication15View ���

#ifdef _DEBUG
void CMFCApplication15View::AssertValid() const
{
	CView::AssertValid();
}

void CMFCApplication15View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMFCApplication15Doc* CMFCApplication15View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMFCApplication15Doc)));
	return (CMFCApplication15Doc*)m_pDocument;
}
#endif //_DEBUG


// CMFCApplication15View ��Ϣ�������


void CMFCApplication15View::OnChar(UINT nChar, UINT nRepCnt, UINT nFlags)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	CMFCApplication15Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (pDoc->flag)
	{
		CString s1 = pDoc->str.Left(pDoc->index);
		CString s2 = pDoc->str.Mid(pDoc->index);
		pDoc->str = s1 + char(nChar) + s2;
	}
	else 
		pDoc->str += char(nChar);
	Invalidate();
	CView::OnChar(nChar, nRepCnt, nFlags);
}




void CMFCApplication15View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	CMFCApplication15Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc); 
	pDoc->flag = true;
	pDoc->index = (point.x - 20) / 10;
	CView::OnLButtonDown(nFlags, point);
}
