
// MFCApplication21View.h : CMFCApplication21View ��Ľӿ�
//

#pragma once


class CMFCApplication21View : public CView
{
protected: // �������л�����
	CMFCApplication21View();
	DECLARE_DYNCREATE(CMFCApplication21View)

// ����
public:
	CMFCApplication21Doc* GetDocument() const;

// ����
public:

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~CMFCApplication21View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void On32771();
};

#ifndef _DEBUG  // MFCApplication21View.cpp �еĵ��԰汾
inline CMFCApplication21Doc* CMFCApplication21View::GetDocument() const
   { return reinterpret_cast<CMFCApplication21Doc*>(m_pDocument); }
#endif

