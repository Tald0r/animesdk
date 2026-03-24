#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/AnimatorZone.h"
#include "unitysdk/UnityEngine/AnimatorStateInfo.h"

class Class_1_BDDDDB46A99CFF4C;
namespace MoleMole::Battle { class Entity; }

#define MOLEMOLE_CONFIG_ANIMATORZONECHECKSLIDING_ONZONEENTER_OFFSET UNITYSDK_OFFSET(0xB4633F0)
#define MOLEMOLE_CONFIG_ANIMATORZONECHECKSLIDING_ONZONEEXIT_OFFSET UNITYSDK_OFFSET(0xB463540)
#define MOLEMOLE_CONFIG_ANIMATORZONECHECKSLIDING__CTOR_OFFSET UNITYSDK_OFFSET(0xB463690)
#define MOLEMOLE_CONFIG_ANIMATORZONECHECKSLIDING___BASE_ONZONEENTER_OFFSET UNITYSDK_OFFSET(0xB4636A0)
#define MOLEMOLE_CONFIG_ANIMATORZONECHECKSLIDING___BASE_ONZONEEXIT_OFFSET UNITYSDK_OFFSET(0xB463730)

namespace MoleMole::Config
{
	inline static constexpr unsigned int AnimatorZoneCheckSliding_TypeDefinitionIndex = 67889;

	class AnimatorZoneCheckSliding : public ::MoleMole::Config::AnimatorZone
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONECHECKSLIDING__CTOR_OFFSET))(this);
		}

		::System::Void OnZoneEnter(::MoleMole::Battle::Entity* entity, ::UnityEngine::AnimatorStateInfo& state, ::Class_1_BDDDDB46A99CFF4C* zone, ::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::UnityEngine::AnimatorStateInfo&, ::Class_1_BDDDDB46A99CFF4C*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONECHECKSLIDING_ONZONEENTER_OFFSET))(this, entity, state, zone, deltaTime);
		}

		::System::Void OnZoneExit(::MoleMole::Battle::Entity* entity, ::System::Single stateNormalizedTime, ::Class_1_BDDDDB46A99CFF4C* zone, ::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::System::Single, ::Class_1_BDDDDB46A99CFF4C*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONECHECKSLIDING_ONZONEEXIT_OFFSET))(this, entity, stateNormalizedTime, zone, deltaTime);
		}

		::System::Void __base_OnZoneEnter(::MoleMole::Battle::Entity* P0, ::UnityEngine::AnimatorStateInfo& P1, ::Class_1_BDDDDB46A99CFF4C* P2, ::System::Single P3)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::UnityEngine::AnimatorStateInfo&, ::Class_1_BDDDDB46A99CFF4C*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONECHECKSLIDING___BASE_ONZONEENTER_OFFSET))(this, P0, P1, P2, P3);
		}

		::System::Void __base_OnZoneExit(::MoleMole::Battle::Entity* P0, ::System::Single P1, ::Class_1_BDDDDB46A99CFF4C* P2, ::System::Single P3)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::System::Single, ::Class_1_BDDDDB46A99CFF4C*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONECHECKSLIDING___BASE_ONZONEEXIT_OFFSET))(this, P0, P1, P2, P3);
		}
	};
}
