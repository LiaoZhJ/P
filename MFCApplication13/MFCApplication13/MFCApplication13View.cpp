
// MFCApplication13View.cpp : CMFCApplication13View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "MFCApplication13.h"
#endif

#include "MFCApplication13Doc.h"
#include "MFCApplication13View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMFCApplication13View

IMPLEMENT_DYNCREATE(CMFCApplication13View, CView)

BEGIN_MESSAGE_MAP(CMFCApplication13View, CView)
	ON_COMMAND(ID_FILE_OPEN, &CMFCApplication13View::OnFileOpen)
END_MESSAGE_MAP()

// CMFCApplication13View ����/����

CMFCApplication13View::CMFCApplication13View()
{
	// TODO: �ڴ˴���ӹ������

}

CMFCApplication13View::~CMFCApplication13View()
{
}

BOOL CMFCApplication13View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CMFCApplication13View ����

void CMFCApplication13View::OnDraw(CDC* pDC)
{
	CMFCApplication13Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
	if (pDoc->r == IDOK)
	{
		pDoc->img.Draw(pDC->m_hDC, 0, 0, pDoc->img.GetWidth(), pDoc->img.GetHeight());
	}
}


// CMFCApplication13View ���

#ifdef _DEBUG
void CMFCApplication13View::AssertValid() const
{
	CView::AssertValid();
}

void CMFCApplication13View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMFCApplication13Doc* CMFCApplication13View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMFCApplication13Doc)));
	return (CMFCApplication13Doc*)m_pDocument;
}
#endif //_DEBUG


// CMFCApplication13View ��Ϣ�������


void CMFCApplication13View::OnFileOpen()
{
	// TODO: �ڴ���������������
	CMFCApplication13Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	CDC* pDC;
	pDC = GetDC();
	CFileDialog cfd(true);
	pDoc->r = cfd.DoModal();
	if (pDoc->r == IDOK)
	{
		pDoc->filename = cfd.GetPathName();
		pDoc->img.Load(pDoc->filename);
		pDoc->img.Draw(pDC->m_hDC, 0, 0, pDoc->img.GetWidth(), pDoc->img.GetHeight());
	}
}
