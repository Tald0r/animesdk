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

#define MOLEMOLE_CONFIG_ANIMATORZONERENDERVISIBLE_CREATEZONEINFOINSTANCE_OFFSET UNITYSDK_OFFSET(0x9701E20)
#define MOLEMOLE_CONFIG_ANIMATORZONERENDERVISIBLE_FINDBYNAME_OFFSET UNITYSDK_OFFSET(0x97013D0)
#define MOLEMOLE_CONFIG_ANIMATORZONERENDERVISIBLE_ONZONEENTER_OFFSET UNITYSDK_OFFSET(0x9700C90)
#define MOLEMOLE_CONFIG_ANIMATORZONERENDERVISIBLE_ONZONEEXIT_OFFSET UNITYSDK_OFFSET(0x97016B0)
#define MOLEMOLE_CONFIG_ANIMATORZONERENDERVISIBLE_POPRENDERERVISIBLEBYZONE_OFFSET UNITYSDK_OFFSET(0x9701520)
#define MOLEMOLE_CONFIG_ANIMATORZONERENDERVISIBLE_PUSHRENDERERVISIBLEBYZONE_OFFSET UNITYSDK_OFFSET(0x9700A50)
#define MOLEMOLE_CONFIG_ANIMATORZONERENDERVISIBLE__CTOR_OFFSET UNITYSDK_OFFSET(0x9701EA0)
#define MOLEMOLE_CONFIG_ANIMATORZONERENDERVISIBLE___BASE_CREATEZONEINFOINSTANCE_OFFSET UNITYSDK_OFFSET(0x9701F00)
#define MOLEMOLE_CONFIG_ANIMATORZONERENDERVISIBLE___BASE_ONZONEENTER_OFFSET UNITYSDK_OFFSET(0x9701F80)
#define MOLEMOLE_CONFIG_ANIMATORZONERENDERVISIBLE___BASE_ONZONEEXIT_OFFSET UNITYSDK_OFFSET(0x9702010)

namespace MoleMole::Config
{
	inline static constexpr unsigned int AnimatorZoneRenderVisible_TypeDefinitionIndex = 61495;

	class AnimatorZoneRenderVisible : public ::MoleMole::Config::AnimatorZone
	{
	public:
		::System::Collections::Generic::List_1<::System::String*>* Paths; // 0x50
		::System::Boolean ApplyAllRenderers; // 0x58
		::System::Boolean visible; // 0x59

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONERENDERVISIBLE__CTOR_OFFSET))(this);
		}

		::System::Void PushRendererVisibleByZone(::Class_3_9AE843FF905C0BDB* matComponent, ::Class_1_BDDDDB46A99CFF4C* zoneInfo, ::UnityEngine::Renderer* renderer, ::System::String* path)
		{
			return ((::System::Void(*)(::PVOID, ::Class_3_9AE843FF905C0BDB*, ::Class_1_BDDDDB46A99CFF4C*, ::UnityEngine::Renderer*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONERENDERVISIBLE_PUSHRENDERERVISIBLEBYZONE_OFFSET))(this, matComponent, zoneInfo, renderer, path);
		}

		::System::Void OnZoneEnter(::MoleMole::Battle::Entity* entity, ::UnityEngine::AnimatorStateInfo& curStateInfo, ::Class_1_BDDDDB46A99CFF4C* zoneInfo, ::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::UnityEngine::AnimatorStateInfo&, ::Class_1_BDDDDB46A99CFF4C*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONERENDERVISIBLE_ONZONEENTER_OFFSET))(this, entity, curStateInfo, zoneInfo, deltaTime);
		}

		::System::Void PopRendererVisibleByZone(::Class_3_9AE843FF905C0BDB* matComponent, ::Class_1_BDDDDB46A99CFF4C* zoneInfo, ::UnityEngine::Renderer* renderer, ::System::String* path)
		{
			return ((::System::Void(*)(::PVOID, ::Class_3_9AE843FF905C0BDB*, ::Class_1_BDDDDB46A99CFF4C*, ::UnityEngine::Renderer*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONERENDERVISIBLE_POPRENDERERVISIBLEBYZONE_OFFSET))(this, matComponent, zoneInfo, renderer, path);
		}

		static ::UnityEngine::Renderer* FindByName(::Il2CppArray<::UnityEngine::Renderer*>* renderers, ::System::String* name)
		{
			return ((::UnityEngine::Renderer*(*)(::Il2CppArray<::UnityEngine::Renderer*>*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONERENDERVISIBLE_FINDBYNAME_OFFSET))(renderers, name);
		}

		::System::Void OnZoneExit(::MoleMole::Battle::Entity* entity, ::System::Single stateNormalizedTime, ::Class_1_BDDDDB46A99CFF4C* zoneInfo, ::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::System::Single, ::Class_1_BDDDDB46A99CFF4C*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONERENDERVISIBLE_ONZONEEXIT_OFFSET))(this, entity, stateNormalizedTime, zoneInfo, deltaTime);
		}

		::Class_1_BDDDDB46A99CFF4C* CreateZoneInfoInstance()
		{
			return ((::Class_1_BDDDDB46A99CFF4C*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONERENDERVISIBLE_CREATEZONEINFOINSTANCE_OFFSET))(this);
		}

		::Class_1_BDDDDB46A99CFF4C* __base_CreateZoneInfoInstance()
		{
			return ((::Class_1_BDDDDB46A99CFF4C*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONERENDERVISIBLE___BASE_CREATEZONEINFOINSTANCE_OFFSET))(this);
		}

		::System::Void __base_OnZoneEnter(::MoleMole::Battle::Entity* P0, ::UnityEngine::AnimatorStateInfo& P1, ::Class_1_BDDDDB46A99CFF4C* P2, ::System::Single P3)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::UnityEngine::AnimatorStateInfo&, ::Class_1_BDDDDB46A99CFF4C*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONERENDERVISIBLE___BASE_ONZONEENTER_OFFSET))(this, P0, P1, P2, P3);
		}

		::System::Void __base_OnZoneExit(::MoleMole::Battle::Entity* P0, ::System::Single P1, ::Class_1_BDDDDB46A99CFF4C* P2, ::System::Single P3)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::System::Single, ::Class_1_BDDDDB46A99CFF4C*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONERENDERVISIBLE___BASE_ONZONEEXIT_OFFSET))(this, P0, P1, P2, P3);
		}
	};
}
