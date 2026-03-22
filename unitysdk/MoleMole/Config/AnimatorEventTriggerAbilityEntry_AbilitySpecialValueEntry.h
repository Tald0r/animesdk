#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_5D65F42F0EEB3310.h"
#include "unitysdk/MoleMole/Config/DynamicArgumentType.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define MOLEMOLE_CONFIG_ANIMATOREVENTTRIGGERABILITYENTRY_ABILITYSPECIALVALUEENTRY_GETVALUETYPE_OFFSET UNITYSDK_OFFSET(0x6BE2300)
#define MOLEMOLE_CONFIG_ANIMATOREVENTTRIGGERABILITYENTRY_ABILITYSPECIALVALUEENTRY_GET_SPECIALVALUE_OFFSET UNITYSDK_OFFSET(0x6BE2210)
#define MOLEMOLE_CONFIG_ANIMATOREVENTTRIGGERABILITYENTRY_ABILITYSPECIALVALUEENTRY__CTOR_OFFSET UNITYSDK_OFFSET(0x6BE2370)

namespace MoleMole::Config
{
	inline static constexpr unsigned int AnimatorEventTriggerAbilityEntry_AbilitySpecialValueEntry_TypeDefinitionIndex = 66738;

	class AnimatorEventTriggerAbilityEntry_AbilitySpecialValueEntry : public ::System::Object
	{
	public:
		::System::String* AbilitySpecialName; // 0x10
		::System::String* stringValue; // 0x18
		::System::Int32 intValue; // 0x20
		::MoleMole::Config::DynamicArgumentType ArgumentType; // 0x24
		::System::Single floatValue; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATOREVENTTRIGGERABILITYENTRY_ABILITYSPECIALVALUEENTRY__CTOR_OFFSET))(this);
		}

		::System::Object* get_SpecialValue()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATOREVENTTRIGGERABILITYENTRY_ABILITYSPECIALVALUEENTRY_GET_SPECIALVALUE_OFFSET))(this);
		}

		::Enum_3_5D65F42F0EEB3310 GetValueType()
		{
			return ((::Enum_3_5D65F42F0EEB3310(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATOREVENTTRIGGERABILITYENTRY_ABILITYSPECIALVALUEENTRY_GETVALUETYPE_OFFSET))(this);
		}
	};
}
