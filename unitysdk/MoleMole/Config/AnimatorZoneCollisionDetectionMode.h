#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/AnimatorZone.h"
#include "unitysdk/UnityEngine/AnimatorStateInfo.h"
#include "unitysdk/UnityEngine/CollisionDetectionMode.h"

class Class_1_BDDDDB46A99CFF4C;
namespace MoleMole::Battle { class Entity; }

#define MOLEMOLE_CONFIG_ANIMATORZONECOLLISIONDETECTIONMODE_ONZONEENTER_OFFSET UNITYSDK_OFFSET(0xF2BCE30)
#define MOLEMOLE_CONFIG_ANIMATORZONECOLLISIONDETECTIONMODE_ONZONEEXIT_OFFSET UNITYSDK_OFFSET(0xF2BCF20)
#define MOLEMOLE_CONFIG_ANIMATORZONECOLLISIONDETECTIONMODE__CTOR_OFFSET UNITYSDK_OFFSET(0xF2BD020)
#define MOLEMOLE_CONFIG_ANIMATORZONECOLLISIONDETECTIONMODE___BASE_ONZONEENTER_OFFSET UNITYSDK_OFFSET(0xF2BD030)
#define MOLEMOLE_CONFIG_ANIMATORZONECOLLISIONDETECTIONMODE___BASE_ONZONEEXIT_OFFSET UNITYSDK_OFFSET(0xF2BD0C0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int AnimatorZoneCollisionDetectionMode_TypeDefinitionIndex = 49370;

	class AnimatorZoneCollisionDetectionMode : public ::MoleMole::Config::AnimatorZone
	{
	public:
		::UnityEngine::CollisionDetectionMode collisionDetectionMode; // 0x50
		::System::Boolean setToDefault; // 0x54

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONECOLLISIONDETECTIONMODE__CTOR_OFFSET))(this);
		}

		::System::Void OnZoneEnter(::MoleMole::Battle::Entity* entity, ::UnityEngine::AnimatorStateInfo& curStateInfo, ::Class_1_BDDDDB46A99CFF4C* zoneInfo, ::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::UnityEngine::AnimatorStateInfo&, ::Class_1_BDDDDB46A99CFF4C*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONECOLLISIONDETECTIONMODE_ONZONEENTER_OFFSET))(this, entity, curStateInfo, zoneInfo, deltaTime);
		}

		::System::Void OnZoneExit(::MoleMole::Battle::Entity* entity, ::System::Single stateNormalizedTime, ::Class_1_BDDDDB46A99CFF4C* zoneInfo, ::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::System::Single, ::Class_1_BDDDDB46A99CFF4C*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONECOLLISIONDETECTIONMODE_ONZONEEXIT_OFFSET))(this, entity, stateNormalizedTime, zoneInfo, deltaTime);
		}

		::System::Void __base_OnZoneEnter(::MoleMole::Battle::Entity* P0, ::UnityEngine::AnimatorStateInfo& P1, ::Class_1_BDDDDB46A99CFF4C* P2, ::System::Single P3)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::UnityEngine::AnimatorStateInfo&, ::Class_1_BDDDDB46A99CFF4C*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONECOLLISIONDETECTIONMODE___BASE_ONZONEENTER_OFFSET))(this, P0, P1, P2, P3);
		}

		::System::Void __base_OnZoneExit(::MoleMole::Battle::Entity* P0, ::System::Single P1, ::Class_1_BDDDDB46A99CFF4C* P2, ::System::Single P3)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::System::Single, ::Class_1_BDDDDB46A99CFF4C*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONECOLLISIONDETECTIONMODE___BASE_ONZONEEXIT_OFFSET))(this, P0, P1, P2, P3);
		}
	};
}
