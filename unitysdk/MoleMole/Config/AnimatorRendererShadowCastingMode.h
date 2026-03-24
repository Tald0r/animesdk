#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/AnimatorZone.h"
#include "unitysdk/UnityEngine/AnimatorStateInfo.h"

class Class_1_BDDDDB46A99CFF4C;
class Class_3_9AE843FF905C0BDB;
namespace MoleMole::Battle { class Entity; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Renderer; }

#define MOLEMOLE_CONFIG_ANIMATORRENDERERSHADOWCASTINGMODE_CREATEZONEINFOINSTANCE_OFFSET UNITYSDK_OFFSET(0xB905230)
#define MOLEMOLE_CONFIG_ANIMATORRENDERERSHADOWCASTINGMODE_ONZONEENTER_OFFSET UNITYSDK_OFFSET(0xB904610)
#define MOLEMOLE_CONFIG_ANIMATORRENDERERSHADOWCASTINGMODE_ONZONEEXIT_OFFSET UNITYSDK_OFFSET(0xB904CA0)
#define MOLEMOLE_CONFIG_ANIMATORRENDERERSHADOWCASTINGMODE_POPRENDERERSHADOWCASTINGBYZONE_OFFSET UNITYSDK_OFFSET(0xB904B10)
#define MOLEMOLE_CONFIG_ANIMATORRENDERERSHADOWCASTINGMODE_PUSHRENDERERSHADOWCASTINGBYZONE_OFFSET UNITYSDK_OFFSET(0xB9043D0)
#define MOLEMOLE_CONFIG_ANIMATORRENDERERSHADOWCASTINGMODE__CTOR_OFFSET UNITYSDK_OFFSET(0xB9052D0)
#define MOLEMOLE_CONFIG_ANIMATORRENDERERSHADOWCASTINGMODE___BASE_CREATEZONEINFOINSTANCE_OFFSET UNITYSDK_OFFSET(0xB905330)
#define MOLEMOLE_CONFIG_ANIMATORRENDERERSHADOWCASTINGMODE___BASE_ONZONEENTER_OFFSET UNITYSDK_OFFSET(0xB9053B0)
#define MOLEMOLE_CONFIG_ANIMATORRENDERERSHADOWCASTINGMODE___BASE_ONZONEEXIT_OFFSET UNITYSDK_OFFSET(0xB905440)

namespace MoleMole::Config
{
	inline static constexpr unsigned int AnimatorRendererShadowCastingMode_TypeDefinitionIndex = 41045;

	class AnimatorRendererShadowCastingMode : public ::MoleMole::Config::AnimatorZone
	{
	public:
		::System::Collections::Generic::List_1<::System::String*>* Paths; // 0x50
		::System::Int32 ShadowCastMode; // 0x58
		::System::Boolean ApplyAllRenderers; // 0x5C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORRENDERERSHADOWCASTINGMODE__CTOR_OFFSET))(this);
		}

		::System::Void PushRendererShadowCastingByZone(::Class_3_9AE843FF905C0BDB* matComponent, ::Class_1_BDDDDB46A99CFF4C* zoneInfo, ::UnityEngine::Renderer* renderer, ::System::String* path)
		{
			return ((::System::Void(*)(::PVOID, ::Class_3_9AE843FF905C0BDB*, ::Class_1_BDDDDB46A99CFF4C*, ::UnityEngine::Renderer*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORRENDERERSHADOWCASTINGMODE_PUSHRENDERERSHADOWCASTINGBYZONE_OFFSET))(this, matComponent, zoneInfo, renderer, path);
		}

		::System::Void OnZoneEnter(::MoleMole::Battle::Entity* entity, ::UnityEngine::AnimatorStateInfo& curStateInfo, ::Class_1_BDDDDB46A99CFF4C* zoneInfo, ::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::UnityEngine::AnimatorStateInfo&, ::Class_1_BDDDDB46A99CFF4C*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORRENDERERSHADOWCASTINGMODE_ONZONEENTER_OFFSET))(this, entity, curStateInfo, zoneInfo, deltaTime);
		}

		::System::Void PopRendererShadowCastingByZone(::Class_3_9AE843FF905C0BDB* matComponent, ::Class_1_BDDDDB46A99CFF4C* zoneInfo, ::UnityEngine::Renderer* renderer, ::System::String* path)
		{
			return ((::System::Void(*)(::PVOID, ::Class_3_9AE843FF905C0BDB*, ::Class_1_BDDDDB46A99CFF4C*, ::UnityEngine::Renderer*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORRENDERERSHADOWCASTINGMODE_POPRENDERERSHADOWCASTINGBYZONE_OFFSET))(this, matComponent, zoneInfo, renderer, path);
		}

		::System::Void OnZoneExit(::MoleMole::Battle::Entity* entity, ::System::Single stateNormalizedTime, ::Class_1_BDDDDB46A99CFF4C* zoneInfo, ::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::System::Single, ::Class_1_BDDDDB46A99CFF4C*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORRENDERERSHADOWCASTINGMODE_ONZONEEXIT_OFFSET))(this, entity, stateNormalizedTime, zoneInfo, deltaTime);
		}

		::Class_1_BDDDDB46A99CFF4C* CreateZoneInfoInstance()
		{
			return ((::Class_1_BDDDDB46A99CFF4C*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORRENDERERSHADOWCASTINGMODE_CREATEZONEINFOINSTANCE_OFFSET))(this);
		}

		::Class_1_BDDDDB46A99CFF4C* __base_CreateZoneInfoInstance()
		{
			return ((::Class_1_BDDDDB46A99CFF4C*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORRENDERERSHADOWCASTINGMODE___BASE_CREATEZONEINFOINSTANCE_OFFSET))(this);
		}

		::System::Void __base_OnZoneEnter(::MoleMole::Battle::Entity* P0, ::UnityEngine::AnimatorStateInfo& P1, ::Class_1_BDDDDB46A99CFF4C* P2, ::System::Single P3)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::UnityEngine::AnimatorStateInfo&, ::Class_1_BDDDDB46A99CFF4C*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORRENDERERSHADOWCASTINGMODE___BASE_ONZONEENTER_OFFSET))(this, P0, P1, P2, P3);
		}

		::System::Void __base_OnZoneExit(::MoleMole::Battle::Entity* P0, ::System::Single P1, ::Class_1_BDDDDB46A99CFF4C* P2, ::System::Single P3)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::System::Single, ::Class_1_BDDDDB46A99CFF4C*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORRENDERERSHADOWCASTINGMODE___BASE_ONZONEEXIT_OFFSET))(this, P0, P1, P2, P3);
		}
	};
}
