
// MFCApplication10View.h : CMFCApplication10View ��Ľӿ�
//

#pragma once


class CMFCApplication10View : public CView
{
protected: // �������л�����
	CMFCApplication10View();
	DECLARE_DYNCREATE(CMFCApplication10View)

// ����
public:
	CMFCApplication10Doc* GetDocument() const;
	CBitmap m_Bitmap;
	int m_nWidth;
	int m_nHeight;

// ����
public:

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~CMFCApplication10View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // MFCApplication10View.cpp �еĵ��԰汾
inline CMFCApplication10Doc* CMFCApplication10View::GetDocument() const
   { return reinterpret_cast<CMFCApplication10Doc*>(m_pDocument); }
#endif

