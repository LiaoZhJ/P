
// MFCApplication19View.h : CMFCApplication19View ��Ľӿ�
//

#pragma once


class CMFCApplication19View : public CView
{
protected: // �������л�����
	CMFCApplication19View();
	DECLARE_DYNCREATE(CMFCApplication19View)

// ����
public:
	CMFCApplication19Doc* GetDocument() const;

// ����
public:

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~CMFCApplication19View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnLButtonDblClk(UINT nFlags, CPoint point);
	afx_msg void On32772();
	afx_msg void On32773();
};

#ifndef _DEBUG  // MFCApplication19View.cpp �еĵ��԰汾
inline CMFCApplication19Doc* CMFCApplication19View::GetDocument() const
   { return reinterpret_cast<CMFCApplication19Doc*>(m_pDocument); }
#endif

