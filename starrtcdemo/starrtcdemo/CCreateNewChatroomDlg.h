#pragma once


// CCreateNewChatroomDlg 对话框

class CCreateNewChatroomDlg : public CDialogEx
{
	DECLARE_DYNAMIC(CCreateNewChatroomDlg)

public:
	CCreateNewChatroomDlg(CWnd* pParent = nullptr);   // 标准构造函数
	virtual ~CCreateNewChatroomDlg();

// 对话框数据
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_DIALOG_CREATE_NEW_CHATROOM };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	DECLARE_MESSAGE_MAP()
public:
	CString m_strRoomName;
	CEdit m_editName;
	afx_msg void OnBnClickedButtonCreateNewChatroom();
};
