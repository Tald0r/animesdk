#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/DisplayMessageBase.h"

namespace MoleMole { class UIBaseController; }

#define MOLEMOLE_TOWERDEFENSENEWBIEDISPLAYMESSAGE_ONPROCESS_OFFSET UNITYSDK_OFFSET(0xC26E590)
#define MOLEMOLE_TOWERDEFENSENEWBIEDISPLAYMESSAGE_SETMESSAGECONFIG_OFFSET UNITYSDK_OFFSET(0xC26E510)
#define MOLEMOLE_TOWERDEFENSENEWBIEDISPLAYMESSAGE__CTOR_OFFSET UNITYSDK_OFFSET(0xC26E4E0)
#define MOLEMOLE_TOWERDEFENSENEWBIEDISPLAYMESSAGE___BASE_SETMESSAGECONFIG_OFFSET UNITYSDK_OFFSET(0xC26E820)

namespace MoleMole
{
	inline static constexpr unsigned int TowerDefenseNewbieDisplayMessage_TypeDefinitionIndex = 56998;

	class TowerDefenseNewbieDisplayMessage : public ::MoleMole::DisplayMessageBase
	{
	public:
		::MoleMole::UIBaseController* controller; // 0x28
		::System::Int32 id; // 0x30

		::System::Void _ctor(::System::Int32 id, ::MoleMole::UIBaseController* controller)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::MoleMole::UIBaseController*))((::PBYTE)hIl2Cpp + MOLEMOLE_TOWERDEFENSENEWBIEDISPLAYMESSAGE__CTOR_OFFSET))(this, id, controller);
		}

		::System::Void SetMessageConfig()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TOWERDEFENSENEWBIEDISPLAYMESSAGE_SETMESSAGECONFIG_OFFSET))(this);
		}

		::System::Void OnProcess()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TOWERDEFENSENEWBIEDISPLAYMESSAGE_ONPROCESS_OFFSET))(this);
		}

		::System::Void __base_SetMessageConfig()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TOWERDEFENSENEWBIEDISPLAYMESSAGE___BASE_SETMESSAGECONFIG_OFFSET))(this);
		}
	};
}
