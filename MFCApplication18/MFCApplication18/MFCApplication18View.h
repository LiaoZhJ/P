
// MFCApplication18View.h : CMFCApplication18View ��Ľӿ�
//

#pragma once


class CMFCApplication18View : public CView
{
protected: // �������л�����
	CMFCApplication18View();
	DECLARE_DYNCREATE(CMFCApplication18View)

// ����
public:
	CMFCApplication18Doc* GetDocument() const;

// ����
public:

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~CMFCApplication18View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnLButtonDown(UINT nFlags, CPoint point);
};

#ifndef _DEBUG  // MFCApplication18View.cpp �еĵ��԰汾
inline CMFCApplication18Doc* CMFCApplication18View::GetDocument() const
   { return reinterpret_cast<CMFCApplication18Doc*>(m_pDocument); }
#endif

