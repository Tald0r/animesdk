#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/LogicMessageBase.h"

class Class_3_E0C65D7026380557;

#define MOLEMOLE_CHANGESCENENOTIFYOBJ_GET_PRIORITY_OFFSET UNITYSDK_OFFSET(0xB8FE310)
#define MOLEMOLE_CHANGESCENENOTIFYOBJ_ONPROCESS_OFFSET UNITYSDK_OFFSET(0xB8FE3A0)
#define MOLEMOLE_CHANGESCENENOTIFYOBJ_SETMESSAGECONFIG_OFFSET UNITYSDK_OFFSET(0xB8FE320)
#define MOLEMOLE_CHANGESCENENOTIFYOBJ__CTOR_OFFSET UNITYSDK_OFFSET(0xB8FE4D0)
#define MOLEMOLE_CHANGESCENENOTIFYOBJ___BASE_SETMESSAGECONFIG_OFFSET UNITYSDK_OFFSET(0xB8FE4E0)

namespace MoleMole
{
	inline static constexpr unsigned int ChangeSceneNotifyObj_TypeDefinitionIndex = 59918;

	class ChangeSceneNotifyObj : public ::MoleMole::LogicMessageBase
	{
	public:
		::Class_3_E0C65D7026380557* Notify; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CHANGESCENENOTIFYOBJ__CTOR_OFFSET))(this);
		}

		::System::Int32 get_Priority()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CHANGESCENENOTIFYOBJ_GET_PRIORITY_OFFSET))(this);
		}

		::System::Void SetMessageConfig()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CHANGESCENENOTIFYOBJ_SETMESSAGECONFIG_OFFSET))(this);
		}

		::System::Void OnProcess()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CHANGESCENENOTIFYOBJ_ONPROCESS_OFFSET))(this);
		}

		::System::Void __base_SetMessageConfig()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CHANGESCENENOTIFYOBJ___BASE_SETMESSAGECONFIG_OFFSET))(this);
		}
	};
}
