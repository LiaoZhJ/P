
// MFCApplication20View.h : CMFCApplication20View ��Ľӿ�
//

#pragma once


class CMFCApplication20View : public CView
{
protected: // �������л�����
	CMFCApplication20View();
	DECLARE_DYNCREATE(CMFCApplication20View)

// ����
public:
	CMFCApplication20Doc* GetDocument() const;

// ����
public:

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~CMFCApplication20View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnFileOpen();
};

#ifndef _DEBUG  // MFCApplication20View.cpp �еĵ��԰汾
inline CMFCApplication20Doc* CMFCApplication20View::GetDocument() const
   { return reinterpret_cast<CMFCApplication20Doc*>(m_pDocument); }
#endif

