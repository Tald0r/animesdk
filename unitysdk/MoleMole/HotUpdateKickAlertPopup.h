#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/DisplayMessageBase.h"

#define MOLEMOLE_HOTUPDATEKICKALERTPOPUP_GET_PRIORITY_OFFSET UNITYSDK_OFFSET(0x75A2710)
#define MOLEMOLE_HOTUPDATEKICKALERTPOPUP_ONPROCESS_OFFSET UNITYSDK_OFFSET(0x75A2730)
#define MOLEMOLE_HOTUPDATEKICKALERTPOPUP__CTOR_OFFSET UNITYSDK_OFFSET(0x75A2720)

namespace MoleMole
{
	inline static constexpr unsigned int HotUpdateKickAlertPopup_TypeDefinitionIndex = 59337;

	class HotUpdateKickAlertPopup : public ::MoleMole::DisplayMessageBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_HOTUPDATEKICKALERTPOPUP__CTOR_OFFSET))(this);
		}

		::System::Int32 get_Priority()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_HOTUPDATEKICKALERTPOPUP_GET_PRIORITY_OFFSET))(this);
		}

		::System::Void OnProcess()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_HOTUPDATEKICKALERTPOPUP_ONPROCESS_OFFSET))(this);
		}
	};
}
