
// MFCApplication20View.cpp : CMFCApplication20View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "MFCApplication20.h"
#endif

#include "MFCApplication20Doc.h"
#include "MFCApplication20View.h"
#include"fstream"
#include"iostream"
using namespace std;

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMFCApplication20View

IMPLEMENT_DYNCREATE(CMFCApplication20View, CView)

BEGIN_MESSAGE_MAP(CMFCApplication20View, CView)
	ON_COMMAND(ID_FILE_OPEN, &CMFCApplication20View::OnFileOpen)
END_MESSAGE_MAP()

// CMFCApplication20View ����/����

CMFCApplication20View::CMFCApplication20View()
{
	// TODO: �ڴ˴���ӹ������

}

CMFCApplication20View::~CMFCApplication20View()
{
}

BOOL CMFCApplication20View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CMFCApplication20View ����

void CMFCApplication20View::OnDraw(CDC* /*pDC*/)
{
	CMFCApplication20Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// CMFCApplication20View ���

#ifdef _DEBUG
void CMFCApplication20View::AssertValid() const
{
	CView::AssertValid();
}

void CMFCApplication20View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMFCApplication20Doc* CMFCApplication20View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMFCApplication20Doc)));
	return (CMFCApplication20Doc*)m_pDocument;
}
#endif //_DEBUG


// CMFCApplication20View ��Ϣ�������


void CMFCApplication20View::OnFileOpen()
{
	// TODO: �ڴ���������������
	CFileDialog cfd(true);
	int r = cfd.DoModal();
	if (r == IDOK)
	{
		CString filename = cfd.GetPathName();
		ofstream ofs(_T("D:\\abc.txt"));
		ofs << CT2A(filename.GetString());
		
	}

}
