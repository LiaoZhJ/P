
// MFCApplication14View.h : CMFCApplication14View ��Ľӿ�
//

#pragma once


class CMFCApplication14View : public CView
{
protected: // �������л�����
	CMFCApplication14View();
	DECLARE_DYNCREATE(CMFCApplication14View)

// ����
public:
	CMFCApplication14Doc* GetDocument() const;

// ����
public:

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:
	virtual BOOL OnPreparePrinting(CPrintInfo* pInfo);
	virtual void OnBeginPrinting(CDC* pDC, CPrintInfo* pInfo);
	virtual void OnEndPrinting(CDC* pDC, CPrintInfo* pInfo);

// ʵ��
public:
	virtual ~CMFCApplication14View();
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

#ifndef _DEBUG  // MFCApplication14View.cpp �еĵ��԰汾
inline CMFCApplication14Doc* CMFCApplication14View::GetDocument() const
   { return reinterpret_cast<CMFCApplication14Doc*>(m_pDocument); }
#endif

