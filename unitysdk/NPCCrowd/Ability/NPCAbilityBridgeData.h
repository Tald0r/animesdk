#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NPCCrowd/Ability/FTransformFragment.h"
#include "unitysdk/System/Object.h"

namespace NPCCrowd::Ability { class NPCAbility; }

#define NPCCROWD_ABILITY_NPCABILITYBRIDGEDATA_REFRESHDATA_OFFSET UNITYSDK_OFFSET(0x69E2C90)
#define NPCCROWD_ABILITY_NPCABILITYBRIDGEDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x69E2F60)

namespace NPCCrowd::Ability
{
	inline static constexpr unsigned int NPCAbilityBridgeData_TypeDefinitionIndex = 40019;

	class NPCAbilityBridgeData : public ::System::Object
	{
	public:
		::NPCCrowd::Ability::FTransformFragment transform; // 0x10
		::System::Single attractorCDTimer; // 0x40
		::System::Boolean IsPathFollowFinished; // 0x44
		::System::Boolean navmeshArrived; // 0x45
		::System::Int32 stairType; // 0x48

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
