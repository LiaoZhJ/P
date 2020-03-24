
// MFCApplication8View.cpp : CMFCApplication8View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "MFCApplication8.h"
#endif

#include "MFCApplication8Doc.h"
#include "MFCApplication8View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMFCApplication8View

IMPLEMENT_DYNCREATE(CMFCApplication8View, CView)

BEGIN_MESSAGE_MAP(CMFCApplication8View, CView)
	ON_COMMAND(ID_drawcircle, &CMFCApplication8View::Ondrawcircle)
END_MESSAGE_MAP()

// CMFCApplication8View ����/����

CMFCApplication8View::CMFCApplication8View()
{
	// TODO: �ڴ˴���ӹ������

}

CMFCApplication8View::~CMFCApplication8View()
{
}

BOOL CMFCApplication8View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CMFCApplication8View ����

void CMFCApplication8View::OnDraw(CDC* pDC)
{
	CMFCApplication8Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;
	CRect Clientrect;
	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
	if (pDoc->flag) {
		GetClientRect(&Clientrect);
		pDoc->C.bottom = (Clientrect.bottom + Clientrect.top) / 2 + 50;
		pDoc->C.top = (Clientrect.bottom + Clientrect.top) / 2 - 50;
		pDoc->C.right = (Clientrect.right+ Clientrect.left) / 2 + 50;
		pDoc->C.left = (Clientrect.right + Clientrect.left) / 2 - 50;
		pDoc->flag = false;
	}
	else if ((pDoc->C.left > 20) &(pDoc->C.top > 20)) {
		pDoc->C.bottom = pDoc->C.bottom + 20;
		pDoc->C.top = pDoc->C.top - 20;
		pDoc->C.right = pDoc->C.right + 20;
		pDoc->C.left = pDoc->C.left - 20;
		/*CBrush brush, *oldbrush;
		brush.CreateSolidBrush(RGB(0, 0, 0));
		oldbrush = pDC->SelectObject(&brush);*/
		pDC->Ellipse(pDoc->C.left, pDoc->C.top, pDoc->C.right, pDoc->C.bottom);
		//pDC->SelectObject(oldbrush);
	}
	else
		pDC->Ellipse(pDoc->C.left, pDoc->C.top, pDoc->C.right, pDoc->C.bottom);
}


// CMFCApplication8View ���

#ifdef _DEBUG
void CMFCApplication8View::AssertValid() const
{
	CView::AssertValid();
}

void CMFCApplication8View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMFCApplication8Doc* CMFCApplication8View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMFCApplication8Doc)));
	return (CMFCApplication8Doc*)m_pDocument;
}
#endif //_DEBUG


// CMFCApplication8View ��Ϣ�������


void CMFCApplication8View::Ondrawcircle()
{
	// TODO: �ڴ���������������
	Invalidate();
}
