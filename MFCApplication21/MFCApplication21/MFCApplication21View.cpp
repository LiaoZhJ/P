
// MFCApplication21View.cpp : CMFCApplication21View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "MFCApplication21.h"
#endif

#include "MFCApplication21Doc.h"
#include "MFCApplication21View.h"
#include"MyD.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMFCApplication21View

IMPLEMENT_DYNCREATE(CMFCApplication21View, CView)

BEGIN_MESSAGE_MAP(CMFCApplication21View, CView)
	ON_COMMAND(ID_32771, &CMFCApplication21View::On32771)
END_MESSAGE_MAP()

// CMFCApplication21View ����/����

CMFCApplication21View::CMFCApplication21View()
{
	// TODO: �ڴ˴���ӹ������

}

CMFCApplication21View::~CMFCApplication21View()
{
}

BOOL CMFCApplication21View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CMFCApplication21View ����

void CMFCApplication21View::OnDraw(CDC* /*pDC*/)
{
	CMFCApplication21Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// CMFCApplication21View ���

#ifdef _DEBUG
void CMFCApplication21View::AssertValid() const
{
	CView::AssertValid();
}

void CMFCApplication21View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMFCApplication21Doc* CMFCApplication21View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMFCApplication21Doc)));
	return (CMFCApplication21Doc*)m_pDocument;
}
#endif //_DEBUG


// CMFCApplication21View ��Ϣ�������


void CMFCApplication21View::On32771()
{
	// TODO: �ڴ���������������
	MyD dlg;
	dlg.DoModal();

}
