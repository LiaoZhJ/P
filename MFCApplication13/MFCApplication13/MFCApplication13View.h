
// MFCApplication13View.h : CMFCApplication13View ��Ľӿ�
//

#pragma once


class CMFCApplication13View : public CView
{
protected: // �������л�����
	CMFCApplication13View();
	DECLARE_DYNCREATE(CMFCApplication13View)

// ����
public:
	CMFCApplication13Doc* GetDocument() const;

// ����
public:

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~CMFCApplication13View();
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

#ifndef _DEBUG  // MFCApplication13View.cpp �еĵ��԰汾
inline CMFCApplication13Doc* CMFCApplication13View::GetDocument() const
   { return reinterpret_cast<CMFCApplication13Doc*>(m_pDocument); }
#endif

