#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_8F5D2857AFA0CB49_Enum_3_6E486192AB36213F.h"
#include "unitysdk/MoleMole/Config/AnimatorZone.h"
#include "unitysdk/MoleMole/Config/AnimatorZoneDistanceVariation_StopReason.h"
#include "unitysdk/UnityEngine/AnimatorStateInfo.h"
#include "unitysdk/UnityEngine/RaycastHit.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_BDDDDB46A99CFF4C;
class Class_2_8F5D2857AFA0CB49;
class Class_3_F33F9DC5F4112336;
class Class_3_F35B080B137ECC46;
namespace MoleMole::Battle { class Entity; }
namespace MoleMole::Config { class ConfigPosRot; }
namespace UnityEngine { class Collider; }

#define MOLEMOLE_CONFIG_ANIMATORZONEDISTANCEVARIATION_CALCMOVEVELOCITY_OFFSET UNITYSDK_OFFSET(0xC21EDD0)
#define MOLEMOLE_CONFIG_ANIMATORZONEDISTANCEVARIATION_CALCTARGETPOS_OFFSET UNITYSDK_OFFSET(0xC21E2F0)
#define MOLEMOLE_CONFIG_ANIMATORZONEDISTANCEVARIATION_CHECKISINVALIDCOLLIDER_OFFSET UNITYSDK_OFFSET(0xC221B10)
#define MOLEMOLE_CONFIG_ANIMATORZONEDISTANCEVARIATION_CHECKISLOCALBUDDYCOL_OFFSET UNITYSDK_OFFSET(0xC222650)
#define MOLEMOLE_CONFIG_ANIMATORZONEDISTANCEVARIATION_CHECKISSELFCOLLIDER_OFFSET UNITYSDK_OFFSET(0xC221F90)
#define MOLEMOLE_CONFIG_ANIMATORZONEDISTANCEVARIATION_CHECKOVERMAXMOVEDISTANCE_OFFSET UNITYSDK_OFFSET(0xC222B70)
#define MOLEMOLE_CONFIG_ANIMATORZONEDISTANCEVARIATION_CLEARSPEED_OFFSET UNITYSDK_OFFSET(0xC223130)
#define MOLEMOLE_CONFIG_ANIMATORZONEDISTANCEVARIATION_COLLIDERRAYCASTCHECK_OFFSET UNITYSDK_OFFSET(0xC220740)
#define MOLEMOLE_CONFIG_ANIMATORZONEDISTANCEVARIATION_CREATEZONEINFOINSTANCE_OFFSET UNITYSDK_OFFSET(0xC2239D0)
#define MOLEMOLE_CONFIG_ANIMATORZONEDISTANCEVARIATION_GETNEARESTHITRESULTBYDISTANCE_OFFSET UNITYSDK_OFFSET(0xC221E00)
#define MOLEMOLE_CONFIG_ANIMATORZONEDISTANCEVARIATION_GET_ISUPDATEONEFRAME_OFFSET UNITYSDK_OFFSET(0xC21C2E0)
#define MOLEMOLE_CONFIG_ANIMATORZONEDISTANCEVARIATION_HANDLEMOVEBYVELOCITY_OFFSET UNITYSDK_OFFSET(0xC222E80)
#define MOLEMOLE_CONFIG_ANIMATORZONEDISTANCEVARIATION_HANDLEMOVEMENTBYPOSITION_OFFSET UNITYSDK_OFFSET(0xC21F720)
#define MOLEMOLE_CONFIG_ANIMATORZONEDISTANCEVARIATION_INITSELFCOLLIDERINFO_OFFSET UNITYSDK_OFFSET(0xC21D940)
#define MOLEMOLE_CONFIG_ANIMATORZONEDISTANCEVARIATION_ONINIT_OFFSET UNITYSDK_OFFSET(0xC21C2F0)
#define MOLEMOLE_CONFIG_ANIMATORZONEDISTANCEVARIATION_ONUPDATE_OFFSET UNITYSDK_OFFSET(0xC2232D0)
#define MOLEMOLE_CONFIG_ANIMATORZONEDISTANCEVARIATION_ONZONEENTER_OFFSET UNITYSDK_OFFSET(0xC21C520)
#define MOLEMOLE_CONFIG_ANIMATORZONEDISTANCEVARIATION_ONZONEEXIT_OFFSET UNITYSDK_OFFSET(0xC223430)
#define MOLEMOLE_CONFIG_ANIMATORZONEDISTANCEVARIATION_SETEVENOUTVELOCITYFORFRAMESKIP_OFFSET UNITYSDK_OFFSET(0xC21C3B0)
#define MOLEMOLE_CONFIG_ANIMATORZONEDISTANCEVARIATION_SETMOVESPEED_OFFSET UNITYSDK_OFFSET(0xC21F410)
#define MOLEMOLE_CONFIG_ANIMATORZONEDISTANCEVARIATION_STOPMOVE_OFFSET UNITYSDK_OFFSET(0xC222AD0)
#define MOLEMOLE_CONFIG_ANIMATORZONEDISTANCEVARIATION__CTOR_OFFSET UNITYSDK_OFFSET(0xC223A50)
#define MOLEMOLE_CONFIG_ANIMATORZONEDISTANCEVARIATION___BASE_CREATEZONEINFOINSTANCE_OFFSET UNITYSDK_OFFSET(0xC223A70)
#define MOLEMOLE_CONFIG_ANIMATORZONEDISTANCEVARIATION___BASE_ONINIT_OFFSET UNITYSDK_OFFSET(0xC223AF0)
#define MOLEMOLE_CONFIG_ANIMATORZONEDISTANCEVARIATION___BASE_ONUPDATE_OFFSET UNITYSDK_OFFSET(0xC223B60)
#define MOLEMOLE_CONFIG_ANIMATORZONEDISTANCEVARIATION___BASE_ONZONEENTER_OFFSET UNITYSDK_OFFSET(0xC223C00)
#define MOLEMOLE_CONFIG_ANIMATORZONEDISTANCEVARIATION___BASE_ONZONEEXIT_OFFSET UNITYSDK_OFFSET(0xC223C90)

namespace MoleMole::Config
{
	inline static constexpr unsigned int AnimatorZoneDistanceVariation_TypeDefinitionIndex = 46238;

	class AnimatorZoneDistanceVariation : public ::MoleMole::Config::AnimatorZone
	{
	public:
		::MoleMole::Config::ConfigPosRot* configPosRot; // 0x50
		::System::Single maxDistance; // 0x58
		::System::Single maxFrameSpeed; // 0x5C
		::System::Single maxMoveDistance; // 0x60
		::System::Single maxAngle; // 0x64
		::System::Boolean muteWallColliderRayCast; // 0x68
		::System::Boolean useBackupTarget; // 0x69
		::System::Boolean UseVelocityMode; // 0x6A
		::System::Boolean useDistanceLimit; // 0x6B
		::System::Single valideRangeMin; // 0x6C
		::System::Boolean posRotFollowTarget; // 0x70
		::System::Boolean isSelfTarget; // 0x71
		::System::Boolean useAngleLimit; // 0x72
		::System::Boolean useValidAngleRange; // 0x73
		::System::Single validAngleMax; // 0x74
		::System::Single minAngle; // 0x78
		::System::Single valideRangeMax; // 0x7C
		::System::Boolean useMaxMoveDistance; // 0x80
		::System::Boolean useMoveSpeedLimit; // 0x81
		::System::Boolean useValidRange; // 0x82
		::System::Single minDistance; // 0x84
		::System::Single validAngleMin; // 0x88

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEDISTANCEVARIATION__CTOR_OFFSET))(this);
		}

		::System::Boolean get_isUpdateOneFrame()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEDISTANCEVARIATION_GET_ISUPDATEONEFRAME_OFFSET))(this);
		}

		::System::Void OnInit(::Class_3_F33F9DC5F4112336* animatorComponent)
		{
			return ((::System::Void(*)(::PVOID, ::Class_3_F33F9DC5F4112336*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEDISTANCEVARIATION_ONINIT_OFFSET))(this, animatorComponent);
		}

		::System::Void SetEvenOutVelocityForFrameSkip(::Class_2_8F5D2857AFA0CB49* selfZoneInfo, ::System::Boolean skip)
		{
			return ((::System::Void(*)(::PVOID, ::Class_2_8F5D2857AFA0CB49*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEDISTANCEVARIATION_SETEVENOUTVELOCITYFORFRAMESKIP_OFFSET))(this, selfZoneInfo, skip);
		}

		::System::Void OnZoneEnter(::MoleMole::Battle::Entity* entity, ::UnityEngine::AnimatorStateInfo& curStateInfo, ::Class_1_BDDDDB46A99CFF4C* zoneInfo, ::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::UnityEngine::AnimatorStateInfo&, ::Class_1_BDDDDB46A99CFF4C*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEDISTANCEVARIATION_ONZONEENTER_OFFSET))(this, entity, curStateInfo, zoneInfo, deltaTime);
		}

		::System::Void InitSelfColliderInfo(::Class_3_F35B080B137ECC46* modelComponent, ::Class_2_8F5D2857AFA0CB49* zoneInfo)
		{
			return ((::System::Void(*)(::PVOID, ::Class_3_F35B080B137ECC46*, ::Class_2_8F5D2857AFA0CB49*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEDISTANCEVARIATION_INITSELFCOLLIDERINFO_OFFSET))(this, modelComponent, zoneInfo);
		}

		::System::Boolean ColliderRayCastCheck(::Class_2_8F5D2857AFA0CB49* zoneInfo, ::UnityEngine::Vector3 startPos, ::UnityEngine::Vector3 dir, ::System::Int32 layerMask, ::System::Single maxDistance, ::UnityEngine::Collider* dataCollider, ::Class_2_8F5D2857AFA0CB49_Enum_3_6E486192AB36213F colliderShape, ::UnityEngine::Vector3& targetPos, ::System::Boolean& overlapTarget, ::System::Single& rayDistance)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_2_8F5D2857AFA0CB49*, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Int32, ::System::Single, ::UnityEngine::Collider*, ::Class_2_8F5D2857AFA0CB49_Enum_3_6E486192AB36213F, ::UnityEngine::Vector3&, ::System::Boolean&, ::System::Single&))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEDISTANCEVARIATION_COLLIDERRAYCASTCHECK_OFFSET))(this, zoneInfo, startPos, dir, layerMask, maxDistance, dataCollider, colliderShape, targetPos, overlapTarget, rayDistance);
		}

		::System::Int32 GetNearestHitResultByDistance(::Class_2_8F5D2857AFA0CB49* zoneInfo, ::Il2CppArray<::UnityEngine::RaycastHit>* hitInfos, ::System::Int32 hitCount)
		{
			return ((::System::Int32(*)(::PVOID, ::Class_2_8F5D2857AFA0CB49*, ::Il2CppArray<::UnityEngine::RaycastHit>*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEDISTANCEVARIATION_GETNEARESTHITRESULTBYDISTANCE_OFFSET))(this, zoneInfo, hitInfos, hitCount);
		}

		::System::Boolean CheckIsInValidCollider(::Class_2_8F5D2857AFA0CB49* zoneInfo, ::UnityEngine::Collider* col)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_2_8F5D2857AFA0CB49*, ::UnityEngine::Collider*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEDISTANCEVARIATION_CHECKISINVALIDCOLLIDER_OFFSET))(this, zoneInfo, col);
		}

		::System::Boolean CheckIsSelfCollider(::Class_2_8F5D2857AFA0CB49* zoneInfo, ::UnityEngine::Collider* col)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_2_8F5D2857AFA0CB49*, ::UnityEngine::Collider*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEDISTANCEVARIATION_CHECKISSELFCOLLIDER_OFFSET))(this, zoneInfo, col);
		}

		::System::Boolean CheckIsLocalBuddyCol(::Class_2_8F5D2857AFA0CB49* zoneInfo, ::UnityEngine::Collider* col)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_2_8F5D2857AFA0CB49*, ::UnityEngine::Collider*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEDISTANCEVARIATION_CHECKISLOCALBUDDYCOL_OFFSET))(this, zoneInfo, col);
		}

		::System::Boolean CalcTargetPos(::MoleMole::Battle::Entity* entity, ::Class_2_8F5D2857AFA0CB49* zoneInfo, ::System::Boolean& findSelf, ::System::Boolean& useBackUpTarget, ::System::Boolean forceUseBackUpTarget)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Battle::Entity*, ::Class_2_8F5D2857AFA0CB49*, ::System::Boolean&, ::System::Boolean&, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEDISTANCEVARIATION_CALCTARGETPOS_OFFSET))(this, entity, zoneInfo, findSelf, useBackUpTarget, forceUseBackUpTarget);
		}

		::System::Void HandleMovementByPosition(::MoleMole::Battle::Entity* entity, ::Class_2_8F5D2857AFA0CB49* zoneInfo, ::System::Single normalizedTime, ::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::Class_2_8F5D2857AFA0CB49*, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEDISTANCEVARIATION_HANDLEMOVEMENTBYPOSITION_OFFSET))(this, entity, zoneInfo, normalizedTime, deltaTime);
		}

		::System::Void HandleMoveByVelocity(::MoleMole::Battle::Entity* entity, ::Class_2_8F5D2857AFA0CB49* zoneInfo, ::System::Single normalizedTime, ::System::Single deltaTime, ::UnityEngine::AnimatorStateInfo& curStateInfo)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::Class_2_8F5D2857AFA0CB49*, ::System::Single, ::System::Single, ::UnityEngine::AnimatorStateInfo&))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEDISTANCEVARIATION_HANDLEMOVEBYVELOCITY_OFFSET))(this, entity, zoneInfo, normalizedTime, deltaTime, curStateInfo);
		}

		::UnityEngine::Vector3 CalcMoveVelocity(::MoleMole::Battle::Entity* entity, ::Class_2_8F5D2857AFA0CB49* zoneInfo, ::System::Single normalizedTime, ::System::Single deltaTime, ::UnityEngine::AnimatorStateInfo& curStateInfo, ::System::Single timeScale)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::MoleMole::Battle::Entity*, ::Class_2_8F5D2857AFA0CB49*, ::System::Single, ::System::Single, ::UnityEngine::AnimatorStateInfo&, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEDISTANCEVARIATION_CALCMOVEVELOCITY_OFFSET))(this, entity, zoneInfo, normalizedTime, deltaTime, curStateInfo, timeScale);
		}

		::System::Void SetMoveSpeed(::MoleMole::Battle::Entity* entity, ::Class_2_8F5D2857AFA0CB49* zoneInfo, ::UnityEngine::Vector3 velocity)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::Class_2_8F5D2857AFA0CB49*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEDISTANCEVARIATION_SETMOVESPEED_OFFSET))(this, entity, zoneInfo, velocity);
		}

		::System::Void ClearSpeed(::MoleMole::Battle::Entity* entity, ::Class_2_8F5D2857AFA0CB49* zoneInfo)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::Class_2_8F5D2857AFA0CB49*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEDISTANCEVARIATION_CLEARSPEED_OFFSET))(this, entity, zoneInfo);
		}

		::System::Void CheckOverMaxMoveDistance(::MoleMole::Battle::Entity* entity, ::Class_2_8F5D2857AFA0CB49* zoneInfo)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::Class_2_8F5D2857AFA0CB49*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEDISTANCEVARIATION_CHECKOVERMAXMOVEDISTANCE_OFFSET))(this, entity, zoneInfo);
		}

		::System::Void OnUpdate(::MoleMole::Battle::Entity* entity, ::System::Single deltaTime, ::Class_1_BDDDDB46A99CFF4C* zoneInfo, ::System::Single animNormalizedTime, ::UnityEngine::AnimatorStateInfo& curStateInfo)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::System::Single, ::Class_1_BDDDDB46A99CFF4C*, ::System::Single, ::UnityEngine::AnimatorStateInfo&))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEDISTANCEVARIATION_ONUPDATE_OFFSET))(this, entity, deltaTime, zoneInfo, animNormalizedTime, curStateInfo);
		}

		::System::Void StopMove(::MoleMole::Battle::Entity* entity, ::Class_2_8F5D2857AFA0CB49* zoneInfo, ::MoleMole::Config::AnimatorZoneDistanceVariation_StopReason reason)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::Class_2_8F5D2857AFA0CB49*, ::MoleMole::Config::AnimatorZoneDistanceVariation_StopReason))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEDISTANCEVARIATION_STOPMOVE_OFFSET))(this, entity, zoneInfo, reason);
		}

		::System::Void OnZoneExit(::MoleMole::Battle::Entity* entity, ::System::Single stateNormalizedTime, ::Class_1_BDDDDB46A99CFF4C* zoneInfo, ::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::System::Single, ::Class_1_BDDDDB46A99CFF4C*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEDISTANCEVARIATION_ONZONEEXIT_OFFSET))(this, entity, stateNormalizedTime, zoneInfo, deltaTime);
		}

		::Class_1_BDDDDB46A99CFF4C* CreateZoneInfoInstance()
		{
			return ((::Class_1_BDDDDB46A99CFF4C*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEDISTANCEVARIATION_CREATEZONEINFOINSTANCE_OFFSET))(this);
		}

		::Class_1_BDDDDB46A99CFF4C* __base_CreateZoneInfoInstance()
		{
			return ((::Class_1_BDDDDB46A99CFF4C*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEDISTANCEVARIATION___BASE_CREATEZONEINFOINSTANCE_OFFSET))(this);
		}

		::System::Void __base_OnInit(::Class_3_F33F9DC5F4112336* P0)
		{
			return ((::System::Void(*)(::PVOID, ::Class_3_F33F9DC5F4112336*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEDISTANCEVARIATION___BASE_ONINIT_OFFSET))(this, P0);
		}

		::System::Void __base_OnUpdate(::MoleMole::Battle::Entity* P0, ::System::Single P1, ::Class_1_BDDDDB46A99CFF4C* P2, ::System::Single P3, ::UnityEngine::AnimatorStateInfo& P4)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::System::Single, ::Class_1_BDDDDB46A99CFF4C*, ::System::Single, ::UnityEngine::AnimatorStateInfo&))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEDISTANCEVARIATION___BASE_ONUPDATE_OFFSET))(this, P0, P1, P2, P3, P4);
		}

		::System::Void __base_OnZoneEnter(::MoleMole::Battle::Entity* P0, ::UnityEngine::AnimatorStateInfo& P1, ::Class_1_BDDDDB46A99CFF4C* P2, ::System::Single P3)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::UnityEngine::AnimatorStateInfo&, ::Class_1_BDDDDB46A99CFF4C*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEDISTANCEVARIATION___BASE_ONZONEENTER_OFFSET))(this, P0, P1, P2, P3);
		}

		::System::Void __base_OnZoneExit(::MoleMole::Battle::Entity* P0, ::System::Single P1, ::Class_1_BDDDDB46A99CFF4C* P2, ::System::Single P3)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::System::Single, ::Class_1_BDDDDB46A99CFF4C*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEDISTANCEVARIATION___BASE_ONZONEEXIT_OFFSET))(this, P0, P1, P2, P3);
		}
	};
}
