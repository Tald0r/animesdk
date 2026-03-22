#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/LogicMessageBase.h"

class Class_1_570D2F07D3EA0FBD;

#define MOLEMOLE_TELEPORTMESSAGE_ONPROCESS_OFFSET UNITYSDK_OFFSET(0x9ACE090)
#define MOLEMOLE_TELEPORTMESSAGE_SETMESSAGECONFIG_OFFSET UNITYSDK_OFFSET(0x9ACE010)
#define MOLEMOLE_TELEPORTMESSAGE__CTOR_OFFSET UNITYSDK_OFFSET(0x9ACDFF0)
#define MOLEMOLE_TELEPORTMESSAGE___BASE_SETMESSAGECONFIG_OFFSET UNITYSDK_OFFSET(0x9ACE110)

namespace MoleMole
{
	inline static constexpr unsigned int TeleportMessage_TypeDefinitionIndex = 37352;

	class TeleportMessage : public ::MoleMole::LogicMessageBase
	{
	public:
		::Class_1_570D2F07D3EA0FBD* _teleport; // 0x20

		::System::Void _ctor(::Class_1_570D2F07D3EA0FBD* teleport)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_570D2F07D3EA0FBD*))((::PBYTE)hIl2Cpp + MOLEMOLE_TELEPORTMESSAGE__CTOR_OFFSET))(this, teleport);
		}

		::System::Void SetMessageConfig()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TELEPORTMESSAGE_SETMESSAGECONFIG_OFFSET))(this);
		}

		::System::Void OnProcess()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TELEPORTMESSAGE_ONPROCESS_OFFSET))(this);
		}

		::System::Void __base_SetMessageConfig()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TELEPORTMESSAGE___BASE_SETMESSAGECONFIG_OFFSET))(this);
		}
	};
}
