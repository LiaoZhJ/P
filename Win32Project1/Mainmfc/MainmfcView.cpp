
// MainmfcView.cpp : CMainmfcView ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "Mainmfc.h"
#endif

#include "MainmfcDoc.h"
#include "MainmfcView.h"
#include"f1.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMainmfcView

IMPLEMENT_DYNCREATE(CMainmfcView, CView)

BEGIN_MESSAGE_MAP(CMainmfcView, CView)
END_MESSAGE_MAP()

// CMainmfcView ����/����

CMainmfcView::CMainmfcView()
{
	// TODO: �ڴ˴���ӹ������

}

CMainmfcView::~CMainmfcView()
{
}

BOOL CMainmfcView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CMainmfcView ����

void CMainmfcView::OnDraw(CDC* pDC)
{
	CMainmfcDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
	CString str;
	str.Format(_T("5�Ľ׳�Ϊ%d"), factorial(5));
	pDC->TextOutW(20, 20, str);
	FAC f;
	str.Format(_T("30��Ļ���ֵΪ%f"), f.convert(30.0));
	pDC->TextOutW(20, 50, str);
}


// CMainmfcView ���

#ifdef _DEBUG
void CMainmfcView::AssertValid() const
{
	CView::AssertValid();
}

void CMainmfcView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMainmfcDoc* CMainmfcView::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMainmfcDoc)));
	return (CMainmfcDoc*)m_pDocument;
}
#endif //_DEBUG


// CMainmfcView ��Ϣ�������
