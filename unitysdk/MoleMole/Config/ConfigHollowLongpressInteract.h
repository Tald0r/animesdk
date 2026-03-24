#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ConfigHollowInteractBase.h"
#include "unitysdk/MoleMole/Config/DragWhenInteractingType.h"
#include "unitysdk/MoleMole/Config/LongPressTotalTimeType.h"
#include "unitysdk/MoleMole/Config/LongPressTriggerStateType.h"

class Class_1_3E7861A5123BFC05;
namespace MoleMole::Config { class ConfigHollowInteractEffect; }
namespace System { class String; }

#define MOLEMOLE_CONFIG_CONFIGHOLLOWLONGPRESSINTERACT_CHECKTRIGGERONLYONCE_OFFSET UNITYSDK_OFFSET(0xCAE7130)
#define MOLEMOLE_CONFIG_CONFIGHOLLOWLONGPRESSINTERACT_GETINTERACTINSTANCE_OFFSET UNITYSDK_OFFSET(0xCAE71B0)
#define MOLEMOLE_CONFIG_CONFIGHOLLOWLONGPRESSINTERACT__CTOR_OFFSET UNITYSDK_OFFSET(0xCAE7260)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigHollowLongpressInteract_TypeDefinitionIndex = 38538;

	class ConfigHollowLongpressInteract : public ::MoleMole::Config::ConfigHollowInteractBase
	{
	public:
		::MoleMole::Config::ConfigHollowInteractEffect* RealLongPressStartEvent; // 0x50
		::MoleMole::Config::ConfigHollowInteractEffect* PressStartEvent; // 0x58
		::MoleMole::Config::ConfigHollowInteractEffect* IntervalEvent; // 0x60
		::System::Single PressTime; // 0x68
		::System::Single QuickClickInterval; // 0x6C
		::System::Single PressStartTime; // 0x70
		::System::Single ClickDelta; // 0x74
		::System::Single LongPressInterval; // 0x78
		::MoleMole::Config::LongPressTotalTimeType PressTimeType; // 0x7C
		::System::Boolean TriggerOnlyOnce; // 0x80
		::System::Boolean UseIntervalEventAsRealLongPressStart; // 0x81
		::System::Boolean UseAttenuation; // 0x82
		::MoleMole::Config::DragWhenInteractingType DragInteractType; // 0x84
		::System::Single LongAttenuation; // 0x88
		::MoleMole::Config::LongPressTriggerStateType TriggerStateType; // 0x8C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGHOLLOWLONGPRESSINTERACT__CTOR_OFFSET))(this);
		}

		::System::Boolean CheckTriggerOnlyOnce()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGHOLLOWLONGPRESSINTERACT_CHECKTRIGGERONLYONCE_OFFSET))(this);
		}

		::Class_1_3E7861A5123BFC05* GetInteractInstance(::System::String* key)
		{
			return ((::Class_1_3E7861A5123BFC05*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGHOLLOWLONGPRESSINTERACT_GETINTERACTINSTANCE_OFFSET))(this, key);
		}
	};
}
