
// MFCApplication19View.cpp : CMFCApplication19View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "MFCApplication19.h"
#endif

#include "MFCApplication19Doc.h"
#include "MFCApplication19View.h"
#include"MyD.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMFCApplication19View

IMPLEMENT_DYNCREATE(CMFCApplication19View, CView)

BEGIN_MESSAGE_MAP(CMFCApplication19View, CView)
	ON_WM_LBUTTONDBLCLK()
	ON_COMMAND(ID_32772, &CMFCApplication19View::On32772)
	ON_COMMAND(ID_32773, &CMFCApplication19View::On32773)
END_MESSAGE_MAP()

// CMFCApplication19View ����/����

CMFCApplication19View::CMFCApplication19View()
{
	// TODO: �ڴ˴���ӹ������

}

CMFCApplication19View::~CMFCApplication19View()
{
}

BOOL CMFCApplication19View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CMFCApplication19View ����

void CMFCApplication19View::OnDraw(CDC* /*pDC*/)
{
	CMFCApplication19Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// CMFCApplication19View ���

#ifdef _DEBUG
void CMFCApplication19View::AssertValid() const
{
	CView::AssertValid();
}

void CMFCApplication19View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMFCApplication19Doc* CMFCApplication19View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMFCApplication19Doc)));
	return (CMFCApplication19Doc*)m_pDocument;
}
#endif //_DEBUG


// CMFCApplication19View ��Ϣ�������


void CMFCApplication19View::OnLButtonDblClk(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	CMFCApplication19Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	CFileDialog dlgFile(TRUE);
	if (dlgFile.DoModal())
	{
		pDoc->filename=dlgFile.GetFileName();
		GetDC()->TextOutW(20,20, pDoc->filename);
	}
	
	CView::OnLButtonDblClk(nFlags, point);
}


void CMFCApplication19View::On32772()
{
	// TODO: �ڴ���������������
	CMFCApplication19Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	MyD dialog;
	dialog.fname = pDoc->filename;
	dialog.DoModal();
	
}


void CMFCApplication19View::On32773()
{
	// TODO: �ڴ���������������
}
