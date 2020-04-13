
// MFCApplication14View.cpp : CMFCApplication14View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "MFCApplication14.h"
#endif

#include "MFCApplication14Doc.h"
#include "MFCApplication14View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMFCApplication14View

IMPLEMENT_DYNCREATE(CMFCApplication14View, CView)

BEGIN_MESSAGE_MAP(CMFCApplication14View, CView)
	// ��׼��ӡ����
	ON_COMMAND(ID_FILE_PRINT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, &CView::OnFilePrintPreview)
	ON_WM_CHAR()
END_MESSAGE_MAP()

// CMFCApplication14View ����/����

CMFCApplication14View::CMFCApplication14View()
{
	// TODO: �ڴ˴���ӹ������

}

CMFCApplication14View::~CMFCApplication14View()
{
}

BOOL CMFCApplication14View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CMFCApplication14View ����

void CMFCApplication14View::OnDraw(CDC* pDC)
{
	CMFCApplication14Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
	pDC->Rectangle(pDoc->rect);
	pDC->TextOutW(pDoc->rect.left+1, pDoc->rect.top+1,pDoc->str);
	
}


// CMFCApplication14View ��ӡ

BOOL CMFCApplication14View::OnPreparePrinting(CPrintInfo* pInfo)
{
	// Ĭ��׼��
	return DoPreparePrinting(pInfo);
}

void CMFCApplication14View::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: ��Ӷ���Ĵ�ӡǰ���еĳ�ʼ������
}

void CMFCApplication14View::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: ��Ӵ�ӡ����е��������
}


// CMFCApplication14View ���

#ifdef _DEBUG
void CMFCApplication14View::AssertValid() const
{
	CView::AssertValid();
}

void CMFCApplication14View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMFCApplication14Doc* CMFCApplication14View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMFCApplication14Doc)));
	return (CMFCApplication14Doc*)m_pDocument;
}
#endif //_DEBUG


// CMFCApplication14View ��Ϣ�������


void CMFCApplication14View::OnChar(UINT nChar, UINT nRepCnt, UINT nFlags)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	CMFCApplication14Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	pDoc->str+=char(nChar);
	Invalidate();
	CView::OnChar(nChar, nRepCnt, nFlags);
}
