
// MFCApplication9View.cpp : CMFCApplication9View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "MFCApplication9.h"
#endif

#include "MFCApplication9Doc.h"
#include "MFCApplication9View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMFCApplication9View

IMPLEMENT_DYNCREATE(CMFCApplication9View, CView)

BEGIN_MESSAGE_MAP(CMFCApplication9View, CView)
	ON_COMMAND(ID_NAME, &CMFCApplication9View::OnName)
END_MESSAGE_MAP()

// CMFCApplication9View ����/����

CMFCApplication9View::CMFCApplication9View()
{
	// TODO: �ڴ˴���ӹ������

}

CMFCApplication9View::~CMFCApplication9View()
{
}

BOOL CMFCApplication9View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CMFCApplication9View ����

void CMFCApplication9View::OnDraw(CDC* /*pDC*/)
{
	CMFCApplication9Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// CMFCApplication9View ���

#ifdef _DEBUG
void CMFCApplication9View::AssertValid() const
{
	CView::AssertValid();
}

void CMFCApplication9View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMFCApplication9Doc* CMFCApplication9View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMFCApplication9Doc)));
	return (CMFCApplication9Doc*)m_pDocument;
}
#endif //_DEBUG


// CMFCApplication9View ��Ϣ�������


void CMFCApplication9View::OnName()
{
	// TODO: �ڴ���������������
	CDC* pDC;
	pDC = GetDC();
	pDC->TextOutW(20,20,_T("���ν�"));
}
