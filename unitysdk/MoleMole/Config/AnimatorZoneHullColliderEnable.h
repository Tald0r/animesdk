#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/AnimatorZone.h"
#include "unitysdk/MoleMole/Config/ColliderLayerType.h"
#include "unitysdk/UnityEngine/AnimatorStateInfo.h"

class Class_1_BDDDDB46A99CFF4C;
namespace MoleMole::Battle { class Entity; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_CONFIG_ANIMATORZONEHULLCOLLIDERENABLE_CREATEZONEINFOINSTANCE_OFFSET UNITYSDK_OFFSET(0x849A9C0)
#define MOLEMOLE_CONFIG_ANIMATORZONEHULLCOLLIDERENABLE_ONZONEENTER_OFFSET UNITYSDK_OFFSET(0x849A270)
#define MOLEMOLE_CONFIG_ANIMATORZONEHULLCOLLIDERENABLE_ONZONEEXIT_OFFSET UNITYSDK_OFFSET(0x849A610)
#define MOLEMOLE_CONFIG_ANIMATORZONEHULLCOLLIDERENABLE__CTOR_OFFSET UNITYSDK_OFFSET(0x849AA40)
#define MOLEMOLE_CONFIG_ANIMATORZONEHULLCOLLIDERENABLE___BASE_CREATEZONEINFOINSTANCE_OFFSET UNITYSDK_OFFSET(0x849AA50)
#define MOLEMOLE_CONFIG_ANIMATORZONEHULLCOLLIDERENABLE___BASE_ONZONEENTER_OFFSET UNITYSDK_OFFSET(0x849AAD0)
#define MOLEMOLE_CONFIG_ANIMATORZONEHULLCOLLIDERENABLE___BASE_ONZONEEXIT_OFFSET UNITYSDK_OFFSET(0x849AB60)

namespace MoleMole::Config
{
	inline static constexpr unsigned int AnimatorZoneHullColliderEnable_TypeDefinitionIndex = 49391;

	class AnimatorZoneHullColliderEnable : public ::MoleMole::Config::AnimatorZone
	{
	public:
		::System::Collections::Generic::List_1<::System::String*>* HitColliderList; // 0x50
		::MoleMole::Config::ColliderLayerType colliderEnableLayer; // 0x58
		::System::Boolean forceSetColliderActiveState; // 0x5C
		::System::Boolean colliderEnable; // 0x5D
		::System::Boolean colliderActiveState; // 0x5E

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEHULLCOLLIDERENABLE__CTOR_OFFSET))(this);
		}

		::System::Void OnZoneEnter(::MoleMole::Battle::Entity* entity, ::UnityEngine::AnimatorStateInfo& curStateInfo, ::Class_1_BDDDDB46A99CFF4C* zoneInfo, ::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::UnityEngine::AnimatorStateInfo&, ::Class_1_BDDDDB46A99CFF4C*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEHULLCOLLIDERENABLE_ONZONEENTER_OFFSET))(this, entity, curStateInfo, zoneInfo, deltaTime);
		}

		::System::Void OnZoneExit(::MoleMole::Battle::Entity* entity, ::System::Single stateNormalizedTime, ::Class_1_BDDDDB46A99CFF4C* zoneInfo, ::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::System::Single, ::Class_1_BDDDDB46A99CFF4C*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEHULLCOLLIDERENABLE_ONZONEEXIT_OFFSET))(this, entity, stateNormalizedTime, zoneInfo, deltaTime);
		}

		::Class_1_BDDDDB46A99CFF4C* CreateZoneInfoInstance()
		{
			return ((::Class_1_BDDDDB46A99CFF4C*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEHULLCOLLIDERENABLE_CREATEZONEINFOINSTANCE_OFFSET))(this);
		}

		::Class_1_BDDDDB46A99CFF4C* __base_CreateZoneInfoInstance()
		{
			return ((::Class_1_BDDDDB46A99CFF4C*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEHULLCOLLIDERENABLE___BASE_CREATEZONEINFOINSTANCE_OFFSET))(this);
		}

		::System::Void __base_OnZoneEnter(::MoleMole::Battle::Entity* P0, ::UnityEngine::AnimatorStateInfo& P1, ::Class_1_BDDDDB46A99CFF4C* P2, ::System::Single P3)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::UnityEngine::AnimatorStateInfo&, ::Class_1_BDDDDB46A99CFF4C*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEHULLCOLLIDERENABLE___BASE_ONZONEENTER_OFFSET))(this, P0, P1, P2, P3);
		}

		::System::Void __base_OnZoneExit(::MoleMole::Battle::Entity* P0, ::System::Single P1, ::Class_1_BDDDDB46A99CFF4C* P2, ::System::Single P3)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::System::Single, ::Class_1_BDDDDB46A99CFF4C*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEHULLCOLLIDERENABLE___BASE_ONZONEEXIT_OFFSET))(this, P0, P1, P2, P3);
		}
	};
}
