
// ewe_mfc.h : PROJECT_NAME Ӧ�ó������ͷ�ļ�
//

#pragma once

#ifndef __AFXWIN_H__
#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"		// ������


// CMbApp:
// �йش����ʵ�֣������ ewe_mfc.cpp
//

class CMbApp : public CWinApp {
public:
    CMbApp();

    // ��д
public:
    virtual BOOL InitInstance();

    // ʵ��

    DECLARE_MESSAGE_MAP()
};

extern CMbApp theApp;