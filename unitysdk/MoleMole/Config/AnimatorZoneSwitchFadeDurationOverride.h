#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/AnimatorZone.h"
#include "unitysdk/UnityEngine/AnimatorStateInfo.h"

class Class_1_BDDDDB46A99CFF4C;
namespace MoleMole::Battle { class Entity; }

#define MOLEMOLE_CONFIG_ANIMATORZONESWITCHFADEDURATIONOVERRIDE_ONZONEENTER_OFFSET UNITYSDK_OFFSET(0x1398E9C0)
#define MOLEMOLE_CONFIG_ANIMATORZONESWITCHFADEDURATIONOVERRIDE_ONZONEEXIT_OFFSET UNITYSDK_OFFSET(0x1398ECB0)
#define MOLEMOLE_CONFIG_ANIMATORZONESWITCHFADEDURATIONOVERRIDE__CTOR_OFFSET UNITYSDK_OFFSET(0x1398EF10)
#define MOLEMOLE_CONFIG_ANIMATORZONESWITCHFADEDURATIONOVERRIDE___BASE_ONZONEENTER_OFFSET UNITYSDK_OFFSET(0x1398EF30)
#define MOLEMOLE_CONFIG_ANIMATORZONESWITCHFADEDURATIONOVERRIDE___BASE_ONZONEEXIT_OFFSET UNITYSDK_OFFSET(0x1398EFC0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int AnimatorZoneSwitchFadeDurationOverride_TypeDefinitionIndex = 41906;

	class AnimatorZoneSwitchFadeDurationOverride : public ::MoleMole::Config::AnimatorZone
	{
	public:
		::System::Single overrideFadeOutDuration; // 0x50
		::System::Single overrideFadeInDuration; // 0x54
		::System::Boolean needOverrideSwitchFadeInDuration; // 0x58
		::System::Boolean needOverrideSwitchFadeOutDuration; // 0x59

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONESWITCHFADEDURATIONOVERRIDE__CTOR_OFFSET))(this);
		}

		::System::Void OnZoneEnter(::MoleMole::Battle::Entity* entity, ::UnityEngine::AnimatorStateInfo& curStateInfo, ::Class_1_BDDDDB46A99CFF4C* zoneInfo, ::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::UnityEngine::AnimatorStateInfo&, ::Class_1_BDDDDB46A99CFF4C*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONESWITCHFADEDURATIONOVERRIDE_ONZONEENTER_OFFSET))(this, entity, curStateInfo, zoneInfo, deltaTime);
		}

		::System::Void OnZoneExit(::MoleMole::Battle::Entity* entity, ::System::Single stateNormalizedTime, ::Class_1_BDDDDB46A99CFF4C* zoneInfo, ::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::System::Single, ::Class_1_BDDDDB46A99CFF4C*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONESWITCHFADEDURATIONOVERRIDE_ONZONEEXIT_OFFSET))(this, entity, stateNormalizedTime, zoneInfo, deltaTime);
		}

		::System::Void __base_OnZoneEnter(::MoleMole::Battle::Entity* P0, ::UnityEngine::AnimatorStateInfo& P1, ::Class_1_BDDDDB46A99CFF4C* P2, ::System::Single P3)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::UnityEngine::AnimatorStateInfo&, ::Class_1_BDDDDB46A99CFF4C*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONESWITCHFADEDURATIONOVERRIDE___BASE_ONZONEENTER_OFFSET))(this, P0, P1, P2, P3);
		}

		::System::Void __base_OnZoneExit(::MoleMole::Battle::Entity* P0, ::System::Single P1, ::Class_1_BDDDDB46A99CFF4C* P2, ::System::Single P3)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::System::Single, ::Class_1_BDDDDB46A99CFF4C*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONESWITCHFADEDURATIONOVERRIDE___BASE_ONZONEEXIT_OFFSET))(this, P0, P1, P2, P3);
		}
	};
}
