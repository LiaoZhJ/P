
// MFCApplication11View.cpp : CMFCApplication11View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "MFCApplication11.h"
#endif

#include "MFCApplication11Doc.h"
#include "MFCApplication11View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMFCApplication11View

IMPLEMENT_DYNCREATE(CMFCApplication11View, CView)

BEGIN_MESSAGE_MAP(CMFCApplication11View, CView)
	ON_COMMAND(ID_drawLine, &CMFCApplication11View::Ondrawline)
	ON_COMMAND(ID_drawRect, &CMFCApplication11View::Ondrawrect)
	ON_COMMAND(ID_drawEllipse, &CMFCApplication11View::Ondrawellipse)
	ON_WM_LBUTTONDOWN()
	ON_WM_LBUTTONUP()
END_MESSAGE_MAP()

// CMFCApplication11View ����/����

CMFCApplication11View::CMFCApplication11View()
{
	// TODO: �ڴ˴���ӹ������

}

CMFCApplication11View::~CMFCApplication11View()
{
}

BOOL CMFCApplication11View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CMFCApplication11View ����

void CMFCApplication11View::OnDraw(CDC* pDC)
{
	CMFCApplication11Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
	switch (pDoc->flag)
	{
	case 0:
		break;
	case 1:
		pDC->MoveTo(pDoc->rect.left, pDoc->rect.top);
		pDC->LineTo(pDoc->rect.right, pDoc->rect.bottom);
		break;
	case 2:
		pDC->Rectangle(pDoc->rect);
		break;
	case 3:
		pDC->Ellipse(pDoc->rect);
		break;
	default:
		break;
	}
}


// CMFCApplication11View ���

#ifdef _DEBUG
void CMFCApplication11View::AssertValid() const
{
	CView::AssertValid();
}

void CMFCApplication11View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMFCApplication11Doc* CMFCApplication11View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMFCApplication11Doc)));
	return (CMFCApplication11Doc*)m_pDocument;
}
#endif //_DEBUG


// CMFCApplication11View ��Ϣ�������


void CMFCApplication11View::Ondrawline()
{
	// TODO: �ڴ���������������
	CMFCApplication11Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	pDoc->flag = 1;

}


void CMFCApplication11View::Ondrawrect()
{
	// TODO: �ڴ���������������
	CMFCApplication11Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	pDoc->flag = 2;
}


void CMFCApplication11View::Ondrawellipse()
{
	// TODO: �ڴ���������������
	CMFCApplication11Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	pDoc->flag = 3;
}


void CMFCApplication11View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	CMFCApplication11Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	pDoc->rect.left = point.x;
	pDoc->rect.top = point.y;
	CView::OnLButtonDown(nFlags, point);
}


void CMFCApplication11View::OnLButtonUp(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	CMFCApplication11Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	pDoc ->rect.right= point.x;
	pDoc->rect.bottom = point.y;
	Invalidate();
	CView::OnLButtonUp(nFlags, point);
}
