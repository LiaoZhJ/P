// Edit0.cpp : ʵ���ļ�
//

#include "stdafx.h"
#include "MFCApplication18.h"
#include "Edit0.h"
#include "afxdialogex.h"


// Edit0 �Ի���

IMPLEMENT_DYNAMIC(Edit0, CDialogEx)

Edit0::Edit0(CWnd* pParent /*=NULL*/)
	: CDialogEx(IDD_DIALOG1, pParent)
	, str(_T(""))
	, str2(_T(""))
{

}

Edit0::~Edit0()
{
}

void Edit0::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Text(pDX, IDC_EDIT1, str);
	DDX_Text(pDX, IDC_EDIT2, str2);
}


BEGIN_MESSAGE_MAP(Edit0, CDialogEx)
	ON_EN_CHANGE(IDC_EDIT2, &Edit0::OnEnChangeEdit2)
	ON_BN_CLICKED(IDC_BUTTON1, &Edit0::OnBnClickedButton1)
END_MESSAGE_MAP()


// Edit0 ��Ϣ�������


void Edit0::OnEnChangeEdit2()
{
	// TODO:  ����ÿؼ��� RICHEDIT �ؼ���������
	// ���ʹ�֪ͨ��������д CDialogEx::OnInitDialog()
	// ���������� CRichEditCtrl().SetEventMask()��
	// ͬʱ�� ENM_CHANGE ��־�������㵽�����С�

	// TODO:  �ڴ���ӿؼ�֪ͨ����������
}


void Edit0::OnBnClickedButton1()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	this->UpdateData(true);
	CString s;
	s = str;
	str = str2;
	str2 = s;
	this->UpdateData(false);
}
