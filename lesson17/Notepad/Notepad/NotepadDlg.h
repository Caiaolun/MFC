
// NotepadDlg.h : 头文件
//

#pragma once


// CNotepadDlg 对话框
class CNotepadDlg : public CDialogEx
{
public:
	CFont m_font;
	CString m_path;
	CEdit* pEdit;
// 构造
public:
	CNotepadDlg(CWnd* pParent = NULL);	// 标准构造函数
	HACCEL m_hAccel;
// 对话框数据
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_NOTEPAD_DIALOG };
#endif

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV 支持


// 实现
protected:
	HICON m_hIcon;
	BOOL m_change;

	// 生成的消息映射函数
	virtual BOOL OnInitDialog();
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP()
	virtual void OnOK();
	virtual void OnCancel();
public:
	afx_msg void OnOnappexit();
	afx_msg void OnDropFiles(HDROP hDropInfo);
	afx_msg void OnAppAbout();
	afx_msg void OnSize(UINT nType, int cx, int cy);
	afx_msg void OnClose();
	afx_msg void OnEditClear();
	afx_msg void OnEditClearAll();
	afx_msg void OnEditCopy();
	afx_msg void OnEditCut();
	afx_msg void OnEditDate();
	afx_msg void OnEditFind();
	afx_msg void OnEditFindnet();
	afx_msg void OnEditGo();
	afx_msg void OnEditPaste();
	afx_msg void OnEditReplace();
	afx_msg void OnEditUndo();
	afx_msg void OnEditSelectAll();
	virtual BOOL PreTranslateMessage(MSG* pMsg);
	void ReadUTF8(CFile& file);
	void ReadUTF16(CFile& file);
	void ReadASCII(CFile& file);
	afx_msg void OnDestroy();
	afx_msg void OnFormatFont();
	afx_msg void OnFileOpen();
	afx_msg void OnFileNew();
	afx_msg void OnFileSave();
	afx_msg void OnFileSaveAs();
	void LoadFile(LPCTSTR sFile);
	void SetTitle(CString szFile);
	BOOL CheckModify();
};
