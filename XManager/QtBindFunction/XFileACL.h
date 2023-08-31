#pragma once
#include <accctrl.h>
#include <QString>

class XFileACL
{
public:


	bool changeFilePrivilege(QString file);

private:
	bool getEveryOnePSID(QList<PSID>& listPSID);
	bool getAdministratorsPSID(QList<PSID>& listPSID);
	bool getCurrentUserPSID(QList<PSID>& listPSID);

	bool setEveryOneEA(EXPLICIT_ACCESS* ea, PSID pSID);
	bool setAdministratorsEA(EXPLICIT_ACCESS* ea, PSID pSID);
	bool setCurrentUserEA(EXPLICIT_ACCESS* ea, PSID pSID);

	bool SetPrivilege(
		HANDLE hToken,          // access token handle
		LPCWSTR lpszPrivilege,  // name of privilege to enable/disable
		BOOL bEnablePrivilege   // to enable or disable privilege
	);
};

//
//class EuProcess
//{
//public:
//	EuProcess(bool bSetActiveFilePrivilege = true);
//	~EuProcess();
//	qint64 openProcessAsUser(QString process);
//	bool openProcessAsAdmin(QString processe);
//	BOOL IsRunasAdmin(HANDLE hProcess);
//	DWORD GetIdByProcessName(std::wstring ProcessName);
//	HANDLE GetHandleByProcessId(DWORD id);
//
//private:
//	void changeActiveAcFilePrivilege();
//	QString getActiveFileDir();
//
//private:
//	bool m_bForAllUser = true;
//	bool m_bSetActiveFilePrivilege = true;
//};
