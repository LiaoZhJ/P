
// MFCApplication9View.h : CMFCApplication9View ��Ľӿ�
//

#pragma once


class CMFCApplication9View : public CView
{
protected: // �������л�����
	CMFCApplication9View();
	DECLARE_DYNCREATE(CMFCApplication9View)

// ����
public:
	CMFCApplication9Doc* GetDocument() const;

// ����
public:

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~CMFCApplication9View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnName();
};

#ifndef _DEBUG  // MFCApplication9View.cpp �еĵ��԰汾
inline CMFCApplication9Doc* CMFCApplication9View::GetDocument() const
   { return reinterpret_cast<CMFCApplication9Doc*>(m_pDocument); }
#endif

