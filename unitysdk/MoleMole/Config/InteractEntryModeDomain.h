#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/InteractEntryMode.h"

class Class_1_35D50070BC469EAB;
namespace MoleMole::Config { class InteractEntry; }
namespace System { class String; }

#define MOLEMOLE_CONFIG_INTERACTENTRYMODEDOMAIN_CHECKACTIONCONTENT_OFFSET UNITYSDK_OFFSET(0xC241DE0)
#define MOLEMOLE_CONFIG_INTERACTENTRYMODEDOMAIN_CHECKVALUECONTENT_OFFSET UNITYSDK_OFFSET(0xC241EA0)
#define MOLEMOLE_CONFIG_INTERACTENTRYMODEDOMAIN_CREATEINSTANCE_OFFSET UNITYSDK_OFFSET(0xC241D30)
#define MOLEMOLE_CONFIG_INTERACTENTRYMODEDOMAIN_GETEFFINTERACTRANGE_OFFSET UNITYSDK_OFFSET(0xC241CA0)
#define MOLEMOLE_CONFIG_INTERACTENTRYMODEDOMAIN_TOSTRING_OFFSET UNITYSDK_OFFSET(0xC241F30)
#define MOLEMOLE_CONFIG_INTERACTENTRYMODEDOMAIN__CTOR_OFFSET UNITYSDK_OFFSET(0xC2425B0)
#define MOLEMOLE_CONFIG_INTERACTENTRYMODEDOMAIN___BASE_CHECKACTIONCONTENT_OFFSET UNITYSDK_OFFSET(0xC2425C0)
#define MOLEMOLE_CONFIG_INTERACTENTRYMODEDOMAIN___BASE_CHECKVALUECONTENT_OFFSET UNITYSDK_OFFSET(0xC242620)
#define MOLEMOLE_CONFIG_INTERACTENTRYMODEDOMAIN___BASE_GETEFFINTERACTRANGE_OFFSET UNITYSDK_OFFSET(0xC242680)
#define MOLEMOLE_CONFIG_INTERACTENTRYMODEDOMAIN___BASE_TOSTRING_OFFSET UNITYSDK_OFFSET(0xC2426F0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int InteractEntryModeDomain_TypeDefinitionIndex = 62665;

	class InteractEntryModeDomain : public ::MoleMole::Config::InteractEntryMode
	{
	public:
		::System::Single occupyNormalRatio; // 0x20
		::System::Single effRange; // 0x24
		::System::Single monsterInterruptMaxRatio; // 0x28
		::System::Boolean IsPlayerOutPause; // 0x2C
		::System::Boolean allowOccupyRatioToNegative; // 0x2D
		::System::Boolean ShowOccupyProgressBar; // 0x2E
		::System::Boolean useFairyImage; // 0x2F
		::System::Single monsterInteractionTime; // 0x30
		::System::Single monsterInterruptRatio; // 0x34
		::System::Single range; // 0x38
		::System::Single occupyDuration; // 0x3C
		::System::Single targetResource; // 0x40
		::System::Single occupyInterruptRatio; // 0x44

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_INTERACTENTRYMODEDOMAIN__CTOR_OFFSET))(this);
		}

		::System::Boolean GetEffInteractRange(::System::Single& effRadius)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Single&))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_INTERACTENTRYMODEDOMAIN_GETEFFINTERACTRANGE_OFFSET))(this, effRadius);
		}

		::Class_1_35D50070BC469EAB* CreateInstance(::MoleMole::Config::InteractEntry* entry)
		{
			return ((::Class_1_35D50070BC469EAB*(*)(::PVOID, ::MoleMole::Config::InteractEntry*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_INTERACTENTRYMODEDOMAIN_CREATEINSTANCE_OFFSET))(this, entry);
		}

		::System::Void CheckActionContent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_INTERACTENTRYMODEDOMAIN_CHECKACTIONCONTENT_OFFSET))(this);
		}

		::System::Void CheckValueContent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_INTERACTENTRYMODEDOMAIN_CHECKVALUECONTENT_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_INTERACTENTRYMODEDOMAIN_TOSTRING_OFFSET))(this);
		}

		::System::Void __base_CheckActionContent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_INTERACTENTRYMODEDOMAIN___BASE_CHECKACTIONCONTENT_OFFSET))(this);
		}

		::System::Void __base_CheckValueContent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_INTERACTENTRYMODEDOMAIN___BASE_CHECKVALUECONTENT_OFFSET))(this);
		}

		::System::Boolean __base_GetEffInteractRange(::System::Single& P0)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Single&))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_INTERACTENTRYMODEDOMAIN___BASE_GETEFFINTERACTRANGE_OFFSET))(this, P0);
		}

		::System::String* __base_ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_INTERACTENTRYMODEDOMAIN___BASE_TOSTRING_OFFSET))(this);
		}
	};
}
