
// MFCApplication12View.h : CMFCApplication12View ��Ľӿ�
//

#pragma once


class CMFCApplication12View : public CView
{
protected: // �������л�����
	CMFCApplication12View();
	DECLARE_DYNCREATE(CMFCApplication12View)

// ����
public:
	CMFCApplication12Doc* GetDocument() const;

// ����
public:

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~CMFCApplication12View();
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

#ifndef _DEBUG  // MFCApplication12View.cpp �еĵ��԰汾
inline CMFCApplication12Doc* CMFCApplication12View::GetDocument() const
   { return reinterpret_cast<CMFCApplication12Doc*>(m_pDocument); }
#endif

