
// MFCApplication15View.h : CMFCApplication15View ��Ľӿ�
//

#pragma once


class CMFCApplication15View : public CView
{
protected: // �������л�����
	CMFCApplication15View();
	DECLARE_DYNCREATE(CMFCApplication15View)

// ����
public:
	CMFCApplication15Doc* GetDocument() const;

// ����
public:

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~CMFCApplication15View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnChar(UINT nChar, UINT nRepCnt, UINT nFlags);
//	afx_msg void OnLButtonDblClk(UINT nFlags, CPoint point);
	afx_msg void OnLButtonDown(UINT nFlags, CPoint point);
};

#ifndef _DEBUG  // MFCApplication15View.cpp �еĵ��԰汾
inline CMFCApplication15Doc* CMFCApplication15View::GetDocument() const
   { return reinterpret_cast<CMFCApplication15Doc*>(m_pDocument); }
#endif

