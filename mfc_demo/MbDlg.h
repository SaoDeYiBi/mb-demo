
#pragma once

// CMbDlg �Ի���
class CMbDlg : public CDialogEx {
    // ����
public:
    CMbDlg(CWnd* pParent = NULL);	// ��׼���캯��

                                    // �Ի�������
    enum { IDD = IDD_MB_MFC_DIALOG };

protected:
    virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV ֧��

                                                      // ʵ��
protected:
    HICON m_hIcon;
    CMbWnd m_mbWin;

    // ���ɵ���Ϣӳ�亯��
    virtual BOOL OnInitDialog();
    afx_msg void OnPaint();
    afx_msg HCURSOR OnQueryDragIcon();
    DECLARE_MESSAGE_MAP()
};
