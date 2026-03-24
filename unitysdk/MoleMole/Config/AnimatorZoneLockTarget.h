#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/AnimatorZone.h"
#include "unitysdk/MoleMole/Config/AnimatorZoneLockTarget_ForceSpecialCameraLockType.h"
#include "unitysdk/MoleMole/Config/AnimatorZoneLockTarget_SteerDirection.h"
#include "unitysdk/MoleMole/Config/AnimatorZoneLockTarget_TargetType.h"
#include "unitysdk/MoleMole/Config/AnimatorZoneLockTarget_ZoneSteerType.h"
#include "unitysdk/Struct_2_FA5F50563E60AFBA.h"
#include "unitysdk/UnityEngine/AnimatorStateInfo.h"

class Class_1_BDDDDB46A99CFF4C;
class Class_3_883E597458B91E77;
class Class_3_F33F9DC5F4112336;
namespace MoleMole::Battle { class Entity; }
namespace MoleMole::Config { class ConfigPosRot; }
namespace System { class String; }
namespace UnityEngine { class AnimationCurve; }

#define MOLEMOLE_CONFIG_ANIMATORZONELOCKTARGET_CANUSELOCKTARGETFORMULTIPLAYER_OFFSET UNITYSDK_OFFSET(0x9171A20)
#define MOLEMOLE_CONFIG_ANIMATORZONELOCKTARGET_CHECKBATTLEAREA_OFFSET UNITYSDK_OFFSET(0x9175E30)
#define MOLEMOLE_CONFIG_ANIMATORZONELOCKTARGET_CHECKSWITCHLOCKLOCALAVATAR_OFFSET UNITYSDK_OFFSET(0x9175A20)
#define MOLEMOLE_CONFIG_ANIMATORZONELOCKTARGET_CREATEZONEINFOINSTANCE_OFFSET UNITYSDK_OFFSET(0x9175DB0)
#define MOLEMOLE_CONFIG_ANIMATORZONELOCKTARGET_ENTERHANDLEFORCESPECIALCAMERALOCK_OFFSET UNITYSDK_OFFSET(0x9172C90)
#define MOLEMOLE_CONFIG_ANIMATORZONELOCKTARGET_EXITHANDLEFORCESPECIALCAMERALOCK_OFFSET UNITYSDK_OFFSET(0x9173930)
#define MOLEMOLE_CONFIG_ANIMATORZONELOCKTARGET_GETENTITYINPUTROTSPEED_OFFSET UNITYSDK_OFFSET(0x9175790)
#define MOLEMOLE_CONFIG_ANIMATORZONELOCKTARGET_GET_ISUPDATEONEFRAME_OFFSET UNITYSDK_OFFSET(0x9171900)
#define MOLEMOLE_CONFIG_ANIMATORZONELOCKTARGET_ONINIT_OFFSET UNITYSDK_OFFSET(0x9171910)
#define MOLEMOLE_CONFIG_ANIMATORZONELOCKTARGET_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x9173A20)
#define MOLEMOLE_CONFIG_ANIMATORZONELOCKTARGET_ONZONEENTER_OFFSET UNITYSDK_OFFSET(0x9171AA0)
#define MOLEMOLE_CONFIG_ANIMATORZONELOCKTARGET_ONZONEEXIT_OFFSET UNITYSDK_OFFSET(0x9173170)
#define MOLEMOLE_CONFIG_ANIMATORZONELOCKTARGET_PROCESSCAMRELOCK_OFFSET UNITYSDK_OFFSET(0x9172D70)
#define MOLEMOLE_CONFIG_ANIMATORZONELOCKTARGET_SETROOTMOTIONROTATIONMUTED_OFFSET UNITYSDK_OFFSET(0x9172A90)
#define MOLEMOLE_CONFIG_ANIMATORZONELOCKTARGET_TICKLOCKTARGETROTATE_OFFSET UNITYSDK_OFFSET(0x9173E80)
#define MOLEMOLE_CONFIG_ANIMATORZONELOCKTARGET__CTOR_OFFSET UNITYSDK_OFFSET(0x9175F30)
#define MOLEMOLE_CONFIG_ANIMATORZONELOCKTARGET___BASE_CREATEZONEINFOINSTANCE_OFFSET UNITYSDK_OFFSET(0x9175F50)
#define MOLEMOLE_CONFIG_ANIMATORZONELOCKTARGET___BASE_ONINIT_OFFSET UNITYSDK_OFFSET(0x9175FD0)
#define MOLEMOLE_CONFIG_ANIMATORZONELOCKTARGET___BASE_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x9176040)
#define MOLEMOLE_CONFIG_ANIMATORZONELOCKTARGET___BASE_ONZONEENTER_OFFSET UNITYSDK_OFFSET(0x91760E0)
#define MOLEMOLE_CONFIG_ANIMATORZONELOCKTARGET___BASE_ONZONEEXIT_OFFSET UNITYSDK_OFFSET(0x9176170)

namespace MoleMole::Config
{
	inline static constexpr unsigned int AnimatorZoneLockTarget_TypeDefinitionIndex = 63909;

	class AnimatorZoneLockTarget : public ::MoleMole::Config::AnimatorZone
	{
	public:
		::UnityEngine::AnimationCurve* curveRotateSpeed; // 0x50
		::System::String* CameraLockModeID; // 0x58
		::System::String* BackUpLockTargetID; // 0x60
		::System::String* LockTargetID; // 0x68
		::UnityEngine::AnimationCurve* CurveRotateSpeed; // 0x70
		::System::String* SelfForwardAttachPoint; // 0x78
		::UnityEngine::AnimationCurve* AngleOffsetCurve; // 0x80
		::MoleMole::Config::ConfigPosRot* configPosRot; // 0x88
		::System::Boolean CamReLockWhenLockingSameTarget; // 0x90
		::System::Boolean AllowRootMotionRotation; // 0x91
		::System::Boolean NeedLockTargetOnZoneEnter; // 0x92
		::System::Boolean ForceIgnoreAISelectTarget; // 0x93
		::System::Boolean IgnoreJoystickSteerWhenRotSpeedZero; // 0x94
		::System::Boolean MouseModeLockCameraRotation; // 0x95
		::System::Boolean ForceReselectLockTarget; // 0x96
		::System::Boolean ApplyRotateSpeedZone; // 0x97
		::System::Single RotateSpeedRatio; // 0x98
		::MoleMole::Config::AnimatorZoneLockTarget_ForceSpecialCameraLockType ForceSpecialCameraLock; // 0x9C
		::MoleMole::Config::AnimatorZoneLockTarget_ZoneSteerType steerType; // 0xA0
		::MoleMole::Config::AnimatorZoneLockTarget_TargetType LockTargetType; // 0xA4
		::MoleMole::Config::AnimatorZoneLockTarget_SteerDirection steerDirectionType; // 0xA8
		::System::Boolean MuteCamLock; // 0xAC
		::System::Boolean enableTickConfigPosRot; // 0xAD
		::System::Boolean UseJoystickSteerPreferred; // 0xAE

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONELOCKTARGET__CTOR_OFFSET))(this);
		}

		::System::Boolean get_isUpdateOneFrame()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONELOCKTARGET_GET_ISUPDATEONEFRAME_OFFSET))(this);
		}

		::System::Void OnInit(::Class_3_F33F9DC5F4112336* animatorComponent)
		{
			return ((::System::Void(*)(::PVOID, ::Class_3_F33F9DC5F4112336*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONELOCKTARGET_ONINIT_OFFSET))(this, animatorComponent);
		}

		::System::Boolean CanUseLockTargetForMultiplayer(::MoleMole::Battle::Entity* entity)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONELOCKTARGET_CANUSELOCKTARGETFORMULTIPLAYER_OFFSET))(this, entity);
		}

		::System::Void OnZoneEnter(::MoleMole::Battle::Entity* entity, ::UnityEngine::AnimatorStateInfo& curStateInfo, ::Class_1_BDDDDB46A99CFF4C* zoneInfo, ::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::UnityEngine::AnimatorStateInfo&, ::Class_1_BDDDDB46A99CFF4C*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONELOCKTARGET_ONZONEENTER_OFFSET))(this, entity, curStateInfo, zoneInfo, deltaTime);
		}

		::System::Void OnZoneExit(::MoleMole::Battle::Entity* entity, ::System::Single stateNormalizedTime, ::Class_1_BDDDDB46A99CFF4C* zoneInfo, ::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::System::Single, ::Class_1_BDDDDB46A99CFF4C*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONELOCKTARGET_ONZONEEXIT_OFFSET))(this, entity, stateNormalizedTime, zoneInfo, deltaTime);
		}

		::System::Void OnUpdate(::MoleMole::Battle::Entity* entity, ::System::Single deltaTime, ::Class_1_BDDDDB46A99CFF4C* zoneInfo, ::System::Single animNormalizedTime, ::UnityEngine::AnimatorStateInfo& curStateInfo)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::System::Single, ::Class_1_BDDDDB46A99CFF4C*, ::System::Single, ::UnityEngine::AnimatorStateInfo&))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONELOCKTARGET_ONUPDATE_OFFSET))(this, entity, deltaTime, zoneInfo, animNormalizedTime, curStateInfo);
		}

		::System::Single GetEntityInputRotSpeed(::MoleMole::Battle::Entity* entity, ::Class_3_883E597458B91E77* movementComponent, ::System::Boolean applyRatio)
		{
			return ((::System::Single(*)(::PVOID, ::MoleMole::Battle::Entity*, ::Class_3_883E597458B91E77*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONELOCKTARGET_GETENTITYINPUTROTSPEED_OFFSET))(this, entity, movementComponent, applyRatio);
		}

		::System::Void TickLockTargetRotate(::MoleMole::Battle::Entity* entity, ::System::Single deltaTime, ::Class_1_BDDDDB46A99CFF4C* zoneInfo, ::System::Single animNormalizedTime, ::UnityEngine::AnimatorStateInfo curStateInfo, ::System::Boolean& isLockZoneRotate)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::System::Single, ::Class_1_BDDDDB46A99CFF4C*, ::System::Single, ::UnityEngine::AnimatorStateInfo, ::System::Boolean&))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONELOCKTARGET_TICKLOCKTARGETROTATE_OFFSET))(this, entity, deltaTime, zoneInfo, animNormalizedTime, curStateInfo, isLockZoneRotate);
		}

		::Class_1_BDDDDB46A99CFF4C* CreateZoneInfoInstance()
		{
			return ((::Class_1_BDDDDB46A99CFF4C*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONELOCKTARGET_CREATEZONEINFOINSTANCE_OFFSET))(this);
		}

		::System::Boolean CheckSwitchLockLocalAvatar(::MoleMole::Battle::Entity* entity)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONELOCKTARGET_CHECKSWITCHLOCKLOCALAVATAR_OFFSET))(this, entity);
		}

		::System::Void ProcessCamReLock(::MoleMole::Battle::Entity* self, ::Struct_2_FA5F50563E60AFBA target)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::Struct_2_FA5F50563E60AFBA))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONELOCKTARGET_PROCESSCAMRELOCK_OFFSET))(this, self, target);
		}

		::System::Void SetRootMotionRotationMuted(::MoleMole::Battle::Entity* entity, ::System::Boolean isMute)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONELOCKTARGET_SETROOTMOTIONROTATIONMUTED_OFFSET))(this, entity, isMute);
		}

		::System::Void EnterHandleForceSpecialCameraLock(::MoleMole::Battle::Entity* entity, ::UnityEngine::AnimatorStateInfo& curStateInfo, ::Class_1_BDDDDB46A99CFF4C* zoneInfo, ::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::UnityEngine::AnimatorStateInfo&, ::Class_1_BDDDDB46A99CFF4C*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONELOCKTARGET_ENTERHANDLEFORCESPECIALCAMERALOCK_OFFSET))(this, entity, curStateInfo, zoneInfo, deltaTime);
		}

		::System::Void ExitHandleForceSpecialCameraLock(::MoleMole::Battle::Entity* entity, ::System::Single stateNormalizedTime, ::Class_1_BDDDDB46A99CFF4C* zoneInfo, ::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::System::Single, ::Class_1_BDDDDB46A99CFF4C*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONELOCKTARGET_EXITHANDLEFORCESPECIALCAMERALOCK_OFFSET))(this, entity, stateNormalizedTime, zoneInfo, deltaTime);
		}

		::System::Boolean CheckBattleArea(::MoleMole::Battle::Entity* selfEntity, ::MoleMole::Battle::Entity* monsterEntity)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONELOCKTARGET_CHECKBATTLEAREA_OFFSET))(this, selfEntity, monsterEntity);
		}

		::Class_1_BDDDDB46A99CFF4C* __base_CreateZoneInfoInstance()
		{
			return ((::Class_1_BDDDDB46A99CFF4C*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONELOCKTARGET___BASE_CREATEZONEINFOINSTANCE_OFFSET))(this);
		}

		::System::Void __base_OnInit(::Class_3_F33F9DC5F4112336* P0)
		{
			return ((::System::Void(*)(::PVOID, ::Class_3_F33F9DC5F4112336*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONELOCKTARGET___BASE_ONINIT_OFFSET))(this, P0);
		}

		::System::Void __base_OnUpdate(::MoleMole::Battle::Entity* P0, ::System::Single P1, ::Class_1_BDDDDB46A99CFF4C* P2, ::System::Single P3, ::UnityEngine::AnimatorStateInfo& P4)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::System::Single, ::Class_1_BDDDDB46A99CFF4C*, ::System::Single, ::UnityEngine::AnimatorStateInfo&))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONELOCKTARGET___BASE_ONUPDATE_OFFSET))(this, P0, P1, P2, P3, P4);
		}

		::System::Void __base_OnZoneEnter(::MoleMole::Battle::Entity* P0, ::UnityEngine::AnimatorStateInfo& P1, ::Class_1_BDDDDB46A99CFF4C* P2, ::System::Single P3)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::UnityEngine::AnimatorStateInfo&, ::Class_1_BDDDDB46A99CFF4C*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONELOCKTARGET___BASE_ONZONEENTER_OFFSET))(this, P0, P1, P2, P3);
		}

		::System::Void __base_OnZoneExit(::MoleMole::Battle::Entity* P0, ::System::Single P1, ::Class_1_BDDDDB46A99CFF4C* P2, ::System::Single P3)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::System::Single, ::Class_1_BDDDDB46A99CFF4C*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONELOCKTARGET___BASE_ONZONEEXIT_OFFSET))(this, P0, P1, P2, P3);
		}
	};
}
