#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NPCCrowd/Ability/FTransformFragment.h"
#include "unitysdk/System/Object.h"

namespace NPCCrowd::Ability { class NPCAbility; }

#define NPCCROWD_ABILITY_NPCABILITYBRIDGEDATA_REFRESHDATA_OFFSET UNITYSDK_OFFSET(0x601F7B0)
#define NPCCROWD_ABILITY_NPCABILITYBRIDGEDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x601FA80)

namespace NPCCrowd::Ability
{
	inline static constexpr unsigned int NPCAbilityBridgeData_TypeDefinitionIndex = 54339;

	class NPCAbilityBridgeData : public ::System::Object
	{
	public:
		::System::Boolean navmeshArrived; // 0x10
		::System::Boolean IsPathFollowFinished; // 0x11
		::NPCCrowd::Ability::FTransformFragment transform; // 0x14
		::System::Int32 stairType; // 0x44
		::System::Single attractorCDTimer; // 0x48

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_NPCABILITYBRIDGEDATA__CTOR_OFFSET))(this);
		}

		::System::Void RefreshData(::NPCCrowd::Ability::NPCAbility* ability)
		{
			return ((::System::Void(*)(::PVOID, ::NPCCrowd::Ability::NPCAbility*))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_NPCABILITYBRIDGEDATA_REFRESHDATA_OFFSET))(this, ability);
		}
	};
}
