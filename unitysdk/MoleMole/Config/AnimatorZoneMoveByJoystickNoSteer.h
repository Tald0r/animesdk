#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/AnimatorZone.h"
#include "unitysdk/UnityEngine/AnimatorStateInfo.h"

class Class_1_BDDDDB46A99CFF4C;
namespace MoleMole::Battle { class Entity; }
namespace UnityEngine { class Transform; }

#define MOLEMOLE_CONFIG_ANIMATORZONEMOVEBYJOYSTICKNOSTEER_CREATEZONEINFOINSTANCE_OFFSET UNITYSDK_OFFSET(0x9B56480)
#define MOLEMOLE_CONFIG_ANIMATORZONEMOVEBYJOYSTICKNOSTEER_GET_ISUPDATEONEFRAME_OFFSET UNITYSDK_OFFSET(0x9B55210)
#define MOLEMOLE_CONFIG_ANIMATORZONEMOVEBYJOYSTICKNOSTEER_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x9B55470)
#define MOLEMOLE_CONFIG_ANIMATORZONEMOVEBYJOYSTICKNOSTEER_ONZONEENTER_OFFSET UNITYSDK_OFFSET(0x9B55220)
#define MOLEMOLE_CONFIG_ANIMATORZONEMOVEBYJOYSTICKNOSTEER_ONZONEEXIT_OFFSET UNITYSDK_OFFSET(0x9B56180)
#define MOLEMOLE_CONFIG_ANIMATORZONEMOVEBYJOYSTICKNOSTEER__CTOR_OFFSET UNITYSDK_OFFSET(0x9B56520)
#define MOLEMOLE_CONFIG_ANIMATORZONEMOVEBYJOYSTICKNOSTEER___BASE_CREATEZONEINFOINSTANCE_OFFSET UNITYSDK_OFFSET(0x9B56530)
#define MOLEMOLE_CONFIG_ANIMATORZONEMOVEBYJOYSTICKNOSTEER___BASE_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x9B565B0)
#define MOLEMOLE_CONFIG_ANIMATORZONEMOVEBYJOYSTICKNOSTEER___BASE_ONZONEENTER_OFFSET UNITYSDK_OFFSET(0x9B56650)
#define MOLEMOLE_CONFIG_ANIMATORZONEMOVEBYJOYSTICKNOSTEER___BASE_ONZONEEXIT_OFFSET UNITYSDK_OFFSET(0x9B566E0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int AnimatorZoneMoveByJoystickNoSteer_TypeDefinitionIndex = 50021;

	class AnimatorZoneMoveByJoystickNoSteer : public ::MoleMole::Config::AnimatorZone
	{
	public:
		::UnityEngine::Transform* _mainCamera; // 0x50
		::System::Single Decelaration; // 0x58
		::System::Single Accelaration; // 0x5C
		::System::Single Speed; // 0x60
		::System::Boolean NoOverrideRootMotion; // 0x64
		::System::Boolean NoForbidSteer; // 0x65

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEMOVEBYJOYSTICKNOSTEER__CTOR_OFFSET))(this);
		}

		::System::Boolean get_isUpdateOneFrame()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEMOVEBYJOYSTICKNOSTEER_GET_ISUPDATEONEFRAME_OFFSET))(this);
		}

		::System::Void OnZoneEnter(::MoleMole::Battle::Entity* entity, ::UnityEngine::AnimatorStateInfo& curStateInfo, ::Class_1_BDDDDB46A99CFF4C* zoneInfo, ::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::UnityEngine::AnimatorStateInfo&, ::Class_1_BDDDDB46A99CFF4C*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEMOVEBYJOYSTICKNOSTEER_ONZONEENTER_OFFSET))(this, entity, curStateInfo, zoneInfo, deltaTime);
		}

		::System::Void OnUpdate(::MoleMole::Battle::Entity* entity, ::System::Single deltaTime, ::Class_1_BDDDDB46A99CFF4C* zoneInfo, ::System::Single animNormalizedTime, ::UnityEngine::AnimatorStateInfo& curStateInfo)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::System::Single, ::Class_1_BDDDDB46A99CFF4C*, ::System::Single, ::UnityEngine::AnimatorStateInfo&))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEMOVEBYJOYSTICKNOSTEER_ONUPDATE_OFFSET))(this, entity, deltaTime, zoneInfo, animNormalizedTime, curStateInfo);
		}

		::System::Void OnZoneExit(::MoleMole::Battle::Entity* entity, ::System::Single stateNormalizedTime, ::Class_1_BDDDDB46A99CFF4C* zoneInfo, ::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::System::Single, ::Class_1_BDDDDB46A99CFF4C*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEMOVEBYJOYSTICKNOSTEER_ONZONEEXIT_OFFSET))(this, entity, stateNormalizedTime, zoneInfo, deltaTime);
		}

		::Class_1_BDDDDB46A99CFF4C* CreateZoneInfoInstance()
		{
			return ((::Class_1_BDDDDB46A99CFF4C*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEMOVEBYJOYSTICKNOSTEER_CREATEZONEINFOINSTANCE_OFFSET))(this);
		}

		::Class_1_BDDDDB46A99CFF4C* __base_CreateZoneInfoInstance()
		{
			return ((::Class_1_BDDDDB46A99CFF4C*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEMOVEBYJOYSTICKNOSTEER___BASE_CREATEZONEINFOINSTANCE_OFFSET))(this);
		}

		::System::Void __base_OnUpdate(::MoleMole::Battle::Entity* P0, ::System::Single P1, ::Class_1_BDDDDB46A99CFF4C* P2, ::System::Single P3, ::UnityEngine::AnimatorStateInfo& P4)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::System::Single, ::Class_1_BDDDDB46A99CFF4C*, ::System::Single, ::UnityEngine::AnimatorStateInfo&))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEMOVEBYJOYSTICKNOSTEER___BASE_ONUPDATE_OFFSET))(this, P0, P1, P2, P3, P4);
		}

		::System::Void __base_OnZoneEnter(::MoleMole::Battle::Entity* P0, ::UnityEngine::AnimatorStateInfo& P1, ::Class_1_BDDDDB46A99CFF4C* P2, ::System::Single P3)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::UnityEngine::AnimatorStateInfo&, ::Class_1_BDDDDB46A99CFF4C*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEMOVEBYJOYSTICKNOSTEER___BASE_ONZONEENTER_OFFSET))(this, P0, P1, P2, P3);
		}

		::System::Void __base_OnZoneExit(::MoleMole::Battle::Entity* P0, ::System::Single P1, ::Class_1_BDDDDB46A99CFF4C* P2, ::System::Single P3)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::System::Single, ::Class_1_BDDDDB46A99CFF4C*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEMOVEBYJOYSTICKNOSTEER___BASE_ONZONEEXIT_OFFSET))(this, P0, P1, P2, P3);
		}
	};
}
