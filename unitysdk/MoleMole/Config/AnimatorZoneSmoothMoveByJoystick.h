#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/AnimatorZone.h"
#include "unitysdk/MoleMole/Config/AnimatorZoneSmoothMoveByJoystick_SpeedSmoothType.h"
#include "unitysdk/UnityEngine/AnimatorStateInfo.h"

class Class_1_BDDDDB46A99CFF4C;
namespace MoleMole::Battle { class Entity; }

#define MOLEMOLE_CONFIG_ANIMATORZONESMOOTHMOVEBYJOYSTICK_CREATEZONEINFOINSTANCE_OFFSET UNITYSDK_OFFSET(0xC2271C0)
#define MOLEMOLE_CONFIG_ANIMATORZONESMOOTHMOVEBYJOYSTICK_GET_ISUPDATEONEFRAME_OFFSET UNITYSDK_OFFSET(0xC225F20)
#define MOLEMOLE_CONFIG_ANIMATORZONESMOOTHMOVEBYJOYSTICK_ONUPDATE_OFFSET UNITYSDK_OFFSET(0xC2260E0)
#define MOLEMOLE_CONFIG_ANIMATORZONESMOOTHMOVEBYJOYSTICK_ONZONEENTER_OFFSET UNITYSDK_OFFSET(0xC225F30)
#define MOLEMOLE_CONFIG_ANIMATORZONESMOOTHMOVEBYJOYSTICK_ONZONEEXIT_OFFSET UNITYSDK_OFFSET(0xC226F40)
#define MOLEMOLE_CONFIG_ANIMATORZONESMOOTHMOVEBYJOYSTICK__CTOR_OFFSET UNITYSDK_OFFSET(0xC227260)
#define MOLEMOLE_CONFIG_ANIMATORZONESMOOTHMOVEBYJOYSTICK___BASE_CREATEZONEINFOINSTANCE_OFFSET UNITYSDK_OFFSET(0xC227270)
#define MOLEMOLE_CONFIG_ANIMATORZONESMOOTHMOVEBYJOYSTICK___BASE_ONUPDATE_OFFSET UNITYSDK_OFFSET(0xC2272F0)
#define MOLEMOLE_CONFIG_ANIMATORZONESMOOTHMOVEBYJOYSTICK___BASE_ONZONEENTER_OFFSET UNITYSDK_OFFSET(0xC227390)
#define MOLEMOLE_CONFIG_ANIMATORZONESMOOTHMOVEBYJOYSTICK___BASE_ONZONEEXIT_OFFSET UNITYSDK_OFFSET(0xC227420)

namespace MoleMole::Config
{
	inline static constexpr unsigned int AnimatorZoneSmoothMoveByJoystick_TypeDefinitionIndex = 39991;

	class AnimatorZoneSmoothMoveByJoystick : public ::MoleMole::Config::AnimatorZone
	{
	public:
		::System::Boolean AllowSteer; // 0x50
		::System::Boolean UseInputMagnitude; // 0x51
		::System::Boolean AllowRootMotion; // 0x52
		::System::Single SmoothLerpParam; // 0x54
		::MoleMole::Config::AnimatorZoneSmoothMoveByJoystick_SpeedSmoothType SmoothType; // 0x58
		::System::Single Deceleration; // 0x5C
		::System::Single Acceleration; // 0x60
		::System::Single Speed; // 0x64
		::System::Single SmoothDampParam; // 0x68
		::System::Single SmoothFixedSpeed; // 0x6C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONESMOOTHMOVEBYJOYSTICK__CTOR_OFFSET))(this);
		}

		::System::Boolean get_isUpdateOneFrame()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONESMOOTHMOVEBYJOYSTICK_GET_ISUPDATEONEFRAME_OFFSET))(this);
		}

		::System::Void OnZoneEnter(::MoleMole::Battle::Entity* entity, ::UnityEngine::AnimatorStateInfo& curStateInfo, ::Class_1_BDDDDB46A99CFF4C* zoneInfo, ::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::UnityEngine::AnimatorStateInfo&, ::Class_1_BDDDDB46A99CFF4C*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONESMOOTHMOVEBYJOYSTICK_ONZONEENTER_OFFSET))(this, entity, curStateInfo, zoneInfo, deltaTime);
		}

		::System::Void OnUpdate(::MoleMole::Battle::Entity* entity, ::System::Single deltaTime, ::Class_1_BDDDDB46A99CFF4C* zoneInfo, ::System::Single animNormalizedTime, ::UnityEngine::AnimatorStateInfo& curStateInfo)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::System::Single, ::Class_1_BDDDDB46A99CFF4C*, ::System::Single, ::UnityEngine::AnimatorStateInfo&))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONESMOOTHMOVEBYJOYSTICK_ONUPDATE_OFFSET))(this, entity, deltaTime, zoneInfo, animNormalizedTime, curStateInfo);
		}

		::System::Void OnZoneExit(::MoleMole::Battle::Entity* entity, ::System::Single stateNormalizedTime, ::Class_1_BDDDDB46A99CFF4C* zoneInfo, ::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::System::Single, ::Class_1_BDDDDB46A99CFF4C*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONESMOOTHMOVEBYJOYSTICK_ONZONEEXIT_OFFSET))(this, entity, stateNormalizedTime, zoneInfo, deltaTime);
		}

		::Class_1_BDDDDB46A99CFF4C* CreateZoneInfoInstance()
		{
			return ((::Class_1_BDDDDB46A99CFF4C*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONESMOOTHMOVEBYJOYSTICK_CREATEZONEINFOINSTANCE_OFFSET))(this);
		}

		::Class_1_BDDDDB46A99CFF4C* __base_CreateZoneInfoInstance()
		{
			return ((::Class_1_BDDDDB46A99CFF4C*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONESMOOTHMOVEBYJOYSTICK___BASE_CREATEZONEINFOINSTANCE_OFFSET))(this);
		}

		::System::Void __base_OnUpdate(::MoleMole::Battle::Entity* P0, ::System::Single P1, ::Class_1_BDDDDB46A99CFF4C* P2, ::System::Single P3, ::UnityEngine::AnimatorStateInfo& P4)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::System::Single, ::Class_1_BDDDDB46A99CFF4C*, ::System::Single, ::UnityEngine::AnimatorStateInfo&))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONESMOOTHMOVEBYJOYSTICK___BASE_ONUPDATE_OFFSET))(this, P0, P1, P2, P3, P4);
		}

		::System::Void __base_OnZoneEnter(::MoleMole::Battle::Entity* P0, ::UnityEngine::AnimatorStateInfo& P1, ::Class_1_BDDDDB46A99CFF4C* P2, ::System::Single P3)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::UnityEngine::AnimatorStateInfo&, ::Class_1_BDDDDB46A99CFF4C*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONESMOOTHMOVEBYJOYSTICK___BASE_ONZONEENTER_OFFSET))(this, P0, P1, P2, P3);
		}

		::System::Void __base_OnZoneExit(::MoleMole::Battle::Entity* P0, ::System::Single P1, ::Class_1_BDDDDB46A99CFF4C* P2, ::System::Single P3)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::System::Single, ::Class_1_BDDDDB46A99CFF4C*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONESMOOTHMOVEBYJOYSTICK___BASE_ONZONEEXIT_OFFSET))(this, P0, P1, P2, P3);
		}
	};
}
