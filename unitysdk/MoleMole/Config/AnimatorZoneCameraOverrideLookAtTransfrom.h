#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/AnimatorZone.h"
#include "unitysdk/UnityEngine/AnimatorStateInfo.h"

class Class_1_BDDDDB46A99CFF4C;
namespace MoleMole::Battle { class Entity; }
namespace System { class String; }

#define MOLEMOLE_CONFIG_ANIMATORZONECAMERAOVERRIDELOOKATTRANSFROM_CREATEZONEINFOINSTANCE_OFFSET UNITYSDK_OFFSET(0xCD99470)
#define MOLEMOLE_CONFIG_ANIMATORZONECAMERAOVERRIDELOOKATTRANSFROM_ONZONEENTER_OFFSET UNITYSDK_OFFSET(0xCD98F80)
#define MOLEMOLE_CONFIG_ANIMATORZONECAMERAOVERRIDELOOKATTRANSFROM_ONZONEEXIT_OFFSET UNITYSDK_OFFSET(0xCD99330)
#define MOLEMOLE_CONFIG_ANIMATORZONECAMERAOVERRIDELOOKATTRANSFROM__CTOR_OFFSET UNITYSDK_OFFSET(0xCD99510)
#define MOLEMOLE_CONFIG_ANIMATORZONECAMERAOVERRIDELOOKATTRANSFROM___BASE_CREATEZONEINFOINSTANCE_OFFSET UNITYSDK_OFFSET(0xCD99520)
#define MOLEMOLE_CONFIG_ANIMATORZONECAMERAOVERRIDELOOKATTRANSFROM___BASE_ONZONEENTER_OFFSET UNITYSDK_OFFSET(0xCD995A0)
#define MOLEMOLE_CONFIG_ANIMATORZONECAMERAOVERRIDELOOKATTRANSFROM___BASE_ONZONEEXIT_OFFSET UNITYSDK_OFFSET(0xCD99630)

namespace MoleMole::Config
{
	inline static constexpr unsigned int AnimatorZoneCameraOverrideLookAtTransfrom_TypeDefinitionIndex = 75997;

	class AnimatorZoneCameraOverrideLookAtTransfrom : public ::MoleMole::Config::AnimatorZone
	{
	public:
		::System::String* OverrideLookAtPoint; // 0x50
		::System::Boolean RestoreOnExit; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONECAMERAOVERRIDELOOKATTRANSFROM__CTOR_OFFSET))(this);
		}

		::System::Void OnZoneEnter(::MoleMole::Battle::Entity* entity, ::UnityEngine::AnimatorStateInfo& curStateInfo, ::Class_1_BDDDDB46A99CFF4C* zoneInfo, ::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::UnityEngine::AnimatorStateInfo&, ::Class_1_BDDDDB46A99CFF4C*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONECAMERAOVERRIDELOOKATTRANSFROM_ONZONEENTER_OFFSET))(this, entity, curStateInfo, zoneInfo, deltaTime);
		}

		::System::Void OnZoneExit(::MoleMole::Battle::Entity* entity, ::System::Single stateNormalizedTime, ::Class_1_BDDDDB46A99CFF4C* zoneInfo, ::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::System::Single, ::Class_1_BDDDDB46A99CFF4C*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONECAMERAOVERRIDELOOKATTRANSFROM_ONZONEEXIT_OFFSET))(this, entity, stateNormalizedTime, zoneInfo, deltaTime);
		}

		::Class_1_BDDDDB46A99CFF4C* CreateZoneInfoInstance()
		{
			return ((::Class_1_BDDDDB46A99CFF4C*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONECAMERAOVERRIDELOOKATTRANSFROM_CREATEZONEINFOINSTANCE_OFFSET))(this);
		}

		::Class_1_BDDDDB46A99CFF4C* __base_CreateZoneInfoInstance()
		{
			return ((::Class_1_BDDDDB46A99CFF4C*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONECAMERAOVERRIDELOOKATTRANSFROM___BASE_CREATEZONEINFOINSTANCE_OFFSET))(this);
		}

		::System::Void __base_OnZoneEnter(::MoleMole::Battle::Entity* P0, ::UnityEngine::AnimatorStateInfo& P1, ::Class_1_BDDDDB46A99CFF4C* P2, ::System::Single P3)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::UnityEngine::AnimatorStateInfo&, ::Class_1_BDDDDB46A99CFF4C*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONECAMERAOVERRIDELOOKATTRANSFROM___BASE_ONZONEENTER_OFFSET))(this, P0, P1, P2, P3);
		}

		::System::Void __base_OnZoneExit(::MoleMole::Battle::Entity* P0, ::System::Single P1, ::Class_1_BDDDDB46A99CFF4C* P2, ::System::Single P3)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::System::Single, ::Class_1_BDDDDB46A99CFF4C*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONECAMERAOVERRIDELOOKATTRANSFROM___BASE_ONZONEEXIT_OFFSET))(this, P0, P1, P2, P3);
		}
	};
}
