// MyD.cpp : ʵ���ļ�
//

#include "stdafx.h"
#include "MFCApplication19.h"
#include "MyD.h"
#include "afxdialogex.h"


// MyD �Ի���

IMPLEMENT_DYNAMIC(MyD, CDialogEx)

MyD::MyD(CWnd* pParent /*=NULL*/)
	: CDialogEx(IDD_DIALOG1, pParent)
	, fname(_T(""))
{

}

MyD::~MyD()
{
}

void MyD::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Text(pDX, IDC_EDIT1, fname);
}


BEGIN_MESSAGE_MAP(MyD, CDialogEx)
	ON_COMMAND(ID_32771, &MyD::On32771)
	ON_EN_CHANGE(IDC_EDIT1, &MyD::OnEnChangeEdit1)
END_MESSAGE_MAP()


// MyD ��Ϣ�������


void MyD::On32771()
{
	// TODO: �ڴ���������������

}


void MyD::OnEnChangeEdit1()
{
	// TODO:  ����ÿؼ��� RICHEDIT �ؼ���������
	// ���ʹ�֪ͨ��������д CDialogEx::OnInitDialog()
	// ���������� CRichEditCtrl().SetEventMask()��
	// ͬʱ�� ENM_CHANGE ��־�������㵽�����С�

	// TODO:  �ڴ���ӿؼ�֪ͨ����������


}
