
// MFCApplication17View.h : CMFCApplication17View ��Ľӿ�
//

#pragma once


class CMFCApplication17View : public CView
{
protected: // �������л�����
	CMFCApplication17View();
	DECLARE_DYNCREATE(CMFCApplication17View)

// ����
public:
	CMFCApplication17Doc* GetDocument() const;

// ����
public:

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~CMFCApplication17View();
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

#ifndef _DEBUG  // MFCApplication17View.cpp �еĵ��԰汾
inline CMFCApplication17Doc* CMFCApplication17View::GetDocument() const
   { return reinterpret_cast<CMFCApplication17Doc*>(m_pDocument); }
#endif

