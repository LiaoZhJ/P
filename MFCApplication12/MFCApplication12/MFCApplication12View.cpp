
// MFCApplication12View.cpp : CMFCApplication12View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "MFCApplication12.h"
#endif

#include "MFCApplication12Doc.h"
#include "MFCApplication12View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMFCApplication12View

IMPLEMENT_DYNCREATE(CMFCApplication12View, CView)

BEGIN_MESSAGE_MAP(CMFCApplication12View, CView)
	ON_COMMAND(ID_FILE_OPEN, &CMFCApplication12View::OnFileOpen)
END_MESSAGE_MAP()

// CMFCApplication12View ����/����

CMFCApplication12View::CMFCApplication12View()
{
	// TODO: �ڴ˴���ӹ������

}

CMFCApplication12View::~CMFCApplication12View()
{
}

BOOL CMFCApplication12View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CMFCApplication12View ����

void CMFCApplication12View::OnDraw(CDC* /*pDC*/)
{
	CMFCApplication12Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// CMFCApplication12View ���

#ifdef _DEBUG
void CMFCApplication12View::AssertValid() const
{
	CView::AssertValid();
}

void CMFCApplication12View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMFCApplication12Doc* CMFCApplication12View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMFCApplication12Doc)));
	return (CMFCApplication12Doc*)m_pDocument;
}
#endif //_DEBUG


// CMFCApplication12View ��Ϣ�������


void CMFCApplication12View::OnFileOpen()
{
	// TODO: �ڴ���������������
	CFileDialog cfd(true);
	int r = cfd.DoModal();
	CClientDC dc(this);
	if (r == IDOK)
	{
		CString filename = cfd.GetPathName();
		CImage img;
		img.Load(filename);
		img.Draw(dc.m_hDC,0,0,img.GetWidth(),img.GetHeight());
	}
}
