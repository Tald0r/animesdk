#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/AvatarSteerType.h"
#include "unitysdk/MoleMole/Config/AnimatorZone.h"
#include "unitysdk/UnityEngine/AnimatorStateInfo.h"

class Class_1_BDDDDB46A99CFF4C;
class Class_2_DE5327A4E4FA3B9E;
namespace MoleMole::Battle { class Entity; }
namespace System { class String; }
namespace UnityEngine { class AnimationCurve; }

#define MOLEMOLE_CONFIG_ANIMATORZONEJOYSTICKDIRZONE_CREATEZONEINFOINSTANCE_OFFSET UNITYSDK_OFFSET(0x6D47440)
#define MOLEMOLE_CONFIG_ANIMATORZONEJOYSTICKDIRZONE_GET_ISUPDATEONEFRAME_OFFSET UNITYSDK_OFFSET(0x6D465B0)
#define MOLEMOLE_CONFIG_ANIMATORZONEJOYSTICKDIRZONE_GET_REALJOYSTICKDIRSTATEPARAM_OFFSET UNITYSDK_OFFSET(0x6D465C0)
#define MOLEMOLE_CONFIG_ANIMATORZONEJOYSTICKDIRZONE_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x6D46E70)
#define MOLEMOLE_CONFIG_ANIMATORZONEJOYSTICKDIRZONE_ONZONEENTER_OFFSET UNITYSDK_OFFSET(0x6D46660)
#define MOLEMOLE_CONFIG_ANIMATORZONEJOYSTICKDIRZONE_ONZONEEXIT_OFFSET UNITYSDK_OFFSET(0x6D46C10)
#define MOLEMOLE_CONFIG_ANIMATORZONEJOYSTICKDIRZONE_SAMPLECURVEVAL_OFFSET UNITYSDK_OFFSET(0x6D47090)
#define MOLEMOLE_CONFIG_ANIMATORZONEJOYSTICKDIRZONE__CTOR_OFFSET UNITYSDK_OFFSET(0x6D474C0)
#define MOLEMOLE_CONFIG_ANIMATORZONEJOYSTICKDIRZONE___BASE_CREATEZONEINFOINSTANCE_OFFSET UNITYSDK_OFFSET(0x6D474D0)
#define MOLEMOLE_CONFIG_ANIMATORZONEJOYSTICKDIRZONE___BASE_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x6D47550)
#define MOLEMOLE_CONFIG_ANIMATORZONEJOYSTICKDIRZONE___BASE_ONZONEENTER_OFFSET UNITYSDK_OFFSET(0x6D475F0)
#define MOLEMOLE_CONFIG_ANIMATORZONEJOYSTICKDIRZONE___BASE_ONZONEEXIT_OFFSET UNITYSDK_OFFSET(0x6D47680)

namespace MoleMole::Config
{
	inline static constexpr unsigned int AnimatorZoneJoyStickDirZone_TypeDefinitionIndex = 59037;

	class AnimatorZoneJoyStickDirZone : public ::MoleMole::Config::AnimatorZone
	{
	public:
		::System::String* JoyStickDirStateParam; // 0x50
		::UnityEngine::AnimationCurve* LerpSpeedCurve; // 0x58
		::UnityEngine::AnimationCurve* lerpSpeedCurve; // 0x60
		::System::Boolean KeepWhenJoyStickRelease; // 0x68
		::MoleMole::AvatarSteerType JoyStickDirLerpType; // 0x69
		::System::Single lerpSpeedFactor; // 0x6C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEJOYSTICKDIRZONE__CTOR_OFFSET))(this);
		}

		::System::Boolean get_isUpdateOneFrame()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEJOYSTICKDIRZONE_GET_ISUPDATEONEFRAME_OFFSET))(this);
		}

		::System::String* get_realJoyStickDirStateParam()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEJOYSTICKDIRZONE_GET_REALJOYSTICKDIRSTATEPARAM_OFFSET))(this);
		}

		::System::Void OnZoneEnter(::MoleMole::Battle::Entity* entity, ::UnityEngine::AnimatorStateInfo& curStateInfo, ::Class_1_BDDDDB46A99CFF4C* zoneInfo, ::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::UnityEngine::AnimatorStateInfo&, ::Class_1_BDDDDB46A99CFF4C*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEJOYSTICKDIRZONE_ONZONEENTER_OFFSET))(this, entity, curStateInfo, zoneInfo, deltaTime);
		}

		::System::Void OnZoneExit(::MoleMole::Battle::Entity* entity, ::System::Single stateNormalizedTime, ::Class_1_BDDDDB46A99CFF4C* zoneInfo, ::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::System::Single, ::Class_1_BDDDDB46A99CFF4C*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEJOYSTICKDIRZONE_ONZONEEXIT_OFFSET))(this, entity, stateNormalizedTime, zoneInfo, deltaTime);
		}

		::System::Void OnUpdate(::MoleMole::Battle::Entity* entity, ::System::Single deltaTime, ::Class_1_BDDDDB46A99CFF4C* zoneInfo, ::System::Single animNormalizedTime, ::UnityEngine::AnimatorStateInfo& curStateInfo)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::System::Single, ::Class_1_BDDDDB46A99CFF4C*, ::System::Single, ::UnityEngine::AnimatorStateInfo&))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEJOYSTICKDIRZONE_ONUPDATE_OFFSET))(this, entity, deltaTime, zoneInfo, animNormalizedTime, curStateInfo);
		}

		::System::Single SampleCurveVal(::System::Single animNormalizedTime, ::Class_2_DE5327A4E4FA3B9E* zoneInfo, ::MoleMole::Battle::Entity* entity, ::UnityEngine::AnimatorStateInfo curStateInfo)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::Class_2_DE5327A4E4FA3B9E*, ::MoleMole::Battle::Entity*, ::UnityEngine::AnimatorStateInfo))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEJOYSTICKDIRZONE_SAMPLECURVEVAL_OFFSET))(this, animNormalizedTime, zoneInfo, entity, curStateInfo);
		}

		::Class_1_BDDDDB46A99CFF4C* CreateZoneInfoInstance()
		{
			return ((::Class_1_BDDDDB46A99CFF4C*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEJOYSTICKDIRZONE_CREATEZONEINFOINSTANCE_OFFSET))(this);
		}

		::Class_1_BDDDDB46A99CFF4C* __base_CreateZoneInfoInstance()
		{
			return ((::Class_1_BDDDDB46A99CFF4C*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEJOYSTICKDIRZONE___BASE_CREATEZONEINFOINSTANCE_OFFSET))(this);
		}

		::System::Void __base_OnUpdate(::MoleMole::Battle::Entity* P0, ::System::Single P1, ::Class_1_BDDDDB46A99CFF4C* P2, ::System::Single P3, ::UnityEngine::AnimatorStateInfo& P4)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::System::Single, ::Class_1_BDDDDB46A99CFF4C*, ::System::Single, ::UnityEngine::AnimatorStateInfo&))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEJOYSTICKDIRZONE___BASE_ONUPDATE_OFFSET))(this, P0, P1, P2, P3, P4);
		}

		::System::Void __base_OnZoneEnter(::MoleMole::Battle::Entity* P0, ::UnityEngine::AnimatorStateInfo& P1, ::Class_1_BDDDDB46A99CFF4C* P2, ::System::Single P3)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::UnityEngine::AnimatorStateInfo&, ::Class_1_BDDDDB46A99CFF4C*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEJOYSTICKDIRZONE___BASE_ONZONEENTER_OFFSET))(this, P0, P1, P2, P3);
		}

		::System::Void __base_OnZoneExit(::MoleMole::Battle::Entity* P0, ::System::Single P1, ::Class_1_BDDDDB46A99CFF4C* P2, ::System::Single P3)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::System::Single, ::Class_1_BDDDDB46A99CFF4C*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEJOYSTICKDIRZONE___BASE_ONZONEEXIT_OFFSET))(this, P0, P1, P2, P3);
		}
	};
}
