
// MFCApplication16View.h : CMFCApplication16View ��Ľӿ�
//

#pragma once


class CMFCApplication16View : public CView
{
protected: // �������л�����
	CMFCApplication16View();
	DECLARE_DYNCREATE(CMFCApplication16View)

// ����
public:
	CMFCApplication16Doc* GetDocument() const;

// ����
public:

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~CMFCApplication16View();
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
};

#ifndef _DEBUG  // MFCApplication16View.cpp �еĵ��԰汾
inline CMFCApplication16Doc* CMFCApplication16View::GetDocument() const
   { return reinterpret_cast<CMFCApplication16Doc*>(m_pDocument); }
#endif

