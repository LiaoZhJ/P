
// MFCApplication15Doc.h : CMFCApplication15Doc ��Ľӿ�
//


#pragma once


class CMFCApplication15Doc : public CDocument
{
protected: // �������л�����
	CMFCApplication15Doc();
	DECLARE_DYNCREATE(CMFCApplication15Doc)

// ����
public:
	CRect rect;
	CString str;
	int index;
	boolean flag;
// ����
public:

// ��д
public:
	virtual BOOL OnNewDocument();
	virtual void Serialize(CArchive& ar);
#ifdef SHARED_HANDLERS
	virtual void InitializeSearchContent();
	virtual void OnDrawThumbnail(CDC& dc, LPRECT lprcBounds);
#endif // SHARED_HANDLERS

// ʵ��
public:
	virtual ~CMFCApplication15Doc();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()

#ifdef SHARED_HANDLERS
	// ����Ϊ����������������������ݵ� Helper ����
	void SetSearchContent(const CString& value);
#endif // SHARED_HANDLERS
};
