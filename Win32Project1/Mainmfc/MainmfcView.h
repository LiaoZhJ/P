
// MainmfcView.h : CMainmfcView ��Ľӿ�
//

#pragma once


class CMainmfcView : public CView
{
protected: // �������л�����
	CMainmfcView();
	DECLARE_DYNCREATE(CMainmfcView)

// ����
public:
	CMainmfcDoc* GetDocument() const;

// ����
public:

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~CMainmfcView();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // MainmfcView.cpp �еĵ��԰汾
inline CMainmfcDoc* CMainmfcView::GetDocument() const
   { return reinterpret_cast<CMainmfcDoc*>(m_pDocument); }
#endif

