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
};
