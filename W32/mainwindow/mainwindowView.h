
// mainwindowView.h : CmainwindowView ��Ľӿ�
//

#pragma once


class CmainwindowView : public CView
{
protected: // �������л�����
	CmainwindowView();
	DECLARE_DYNCREATE(CmainwindowView)

// ����
public:
	CmainwindowDoc* GetDocument() const;

// ����
public:

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~CmainwindowView();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // mainwindowView.cpp �еĵ��԰汾
inline CmainwindowDoc* CmainwindowView::GetDocument() const
   { return reinterpret_cast<CmainwindowDoc*>(m_pDocument); }
#endif

