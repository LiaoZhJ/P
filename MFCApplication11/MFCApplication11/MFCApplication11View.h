
// MFCApplication11View.h : CMFCApplication11View ��Ľӿ�
//

#pragma once


class CMFCApplication11View : public CView
{
protected: // �������л�����
	CMFCApplication11View();
	DECLARE_DYNCREATE(CMFCApplication11View)

// ����
public:
	CMFCApplication11Doc* GetDocument() const;

// ����
public:

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~CMFCApplication11View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void Ondrawline();
	afx_msg void Ondrawrect();
	afx_msg void Ondrawellipse();
	afx_msg void OnLButtonDown(UINT nFlags, CPoint point);
	afx_msg void OnLButtonUp(UINT nFlags, CPoint point);
};

#ifndef _DEBUG  // MFCApplication11View.cpp �еĵ��԰汾
inline CMFCApplication11Doc* CMFCApplication11View::GetDocument() const
   { return reinterpret_cast<CMFCApplication11Doc*>(m_pDocument); }
#endif

