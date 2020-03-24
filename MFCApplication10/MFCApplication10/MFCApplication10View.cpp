
// MFCApplication10View.cpp : CMFCApplication10View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "MFCApplication10.h"
#endif

#include "MFCApplication10Doc.h"
#include "MFCApplication10View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMFCApplication10View

IMPLEMENT_DYNCREATE(CMFCApplication10View, CView)

BEGIN_MESSAGE_MAP(CMFCApplication10View, CView)
END_MESSAGE_MAP()

// CMFCApplication10View ����/����

CMFCApplication10View::CMFCApplication10View()
{
	// TODO: �ڴ˴���ӹ������
	BITMAP BM;
	m_Bitmap.LoadBitmap(IDB_BITMAP1);
	m_Bitmap.GetBitmap(&BM);
	m_nWidth = BM.bmWidth;
	m_nHeight = BM.bmHeight;
}

CMFCApplication10View::~CMFCApplication10View()
{
}

BOOL CMFCApplication10View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CMFCApplication10View ����

void CMFCApplication10View::OnDraw(CDC* pDC)
{
	CMFCApplication10Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
	CDC MemDC;
	MemDC.CreateCompatibleDC(NULL);
	MemDC.SelectObject(m_Bitmap);
	pDC->BitBlt(0,0,	m_nWidth,m_nHeight,&MemDC,0,0,SRCCOPY);
}


// CMFCApplication10View ���

#ifdef _DEBUG
void CMFCApplication10View::AssertValid() const
{
	CView::AssertValid();
}

void CMFCApplication10View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMFCApplication10Doc* CMFCApplication10View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMFCApplication10Doc)));
	return (CMFCApplication10Doc*)m_pDocument;
}
#endif //_DEBUG


// CMFCApplication10View ��Ϣ�������
