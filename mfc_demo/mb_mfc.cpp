
// ewe_mfc.cpp : ����Ӧ�ó��������Ϊ��
//

#include "stdafx.h"
#include "mb_mfc.h"
#include "MbWnd.h"
#include "MbDlg.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMbApp

BEGIN_MESSAGE_MAP(CMbApp, CWinApp)
    ON_COMMAND(ID_HELP, &CWinApp::OnHelp)
END_MESSAGE_MAP()


// CMbApp ����

CMbApp::CMbApp()
{
    // TODO: �ڴ˴���ӹ�����룬
    // ��������Ҫ�ĳ�ʼ�������� InitInstance ��
}


// Ψһ��һ�� CMbApp ����

CMbApp theApp;


// CMbApp ��ʼ��

BOOL CMbApp::InitInstance()
{
    CWinApp::InitInstance();

    AfxEnableControlContainer();

    wkeSetWkeDllPath(L"..\\..\\node.dll");
    wkeInitialize();

    // ���� shell ���������Է��Ի������
    // �κ� shell ����ͼ�ؼ��� shell �б���ͼ�ؼ���
    CShellManager *pShellManager = new CShellManager;

    // ��׼��ʼ��
    // ���δʹ����Щ���ܲ�ϣ����С
    // ���տ�ִ���ļ��Ĵ�С����Ӧ�Ƴ�����
    // ����Ҫ���ض���ʼ������
    // �������ڴ洢���õ�ע�����
    // TODO: Ӧ�ʵ��޸ĸ��ַ�����
    // �����޸�Ϊ��˾����֯��
    SetRegistryKey(_T("Ӧ�ó��������ɵı���Ӧ�ó���"));

    CMbDlg dlg;
    m_pMainWnd = &dlg;
    INT_PTR nResponse = dlg.DoModal();
    if (nResponse == IDOK) {
        // TODO: �ڴ˷��ô����ʱ��
        //  ��ȷ�������رնԻ���Ĵ���
    } else if (nResponse == IDCANCEL) {
        // TODO: �ڴ˷��ô����ʱ��
        //  ��ȡ�������رնԻ���Ĵ���
    }

    // ɾ�����洴���� shell ��������
    if (pShellManager != NULL) {
        delete pShellManager;
    }

    // ���ڶԻ����ѹرգ����Խ����� FALSE �Ա��˳�Ӧ�ó���
    //  ����������Ӧ�ó������Ϣ�á�

    return FALSE;
}

