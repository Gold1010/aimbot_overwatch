
// Overx64.h : PROJECT_NAME Ӧ�ó������ͷ�ļ�
//

#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif




void GetGameWindowRect();
class COverx64App : public CWinApp
{
public:

	COverx64App();
public:
	virtual BOOL InitInstance();
	virtual void MyCreateWindow();









	DECLARE_MESSAGE_MAP()
};
extern COverx64App theApp;