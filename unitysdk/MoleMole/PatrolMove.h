#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BehaviorDesigner/Runtime/Behavior_EventTypes.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/ContinuesTickAction.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/TaskStatus.h"
#include "unitysdk/MoleMole/PatrolMove_MoveState.h"
#include "unitysdk/MoleMole/PatrolMove_RotationType.h"
#include "unitysdk/MoleMole/PatrolMove_StartMode.h"
#include "unitysdk/UnityEngine/LayerMask.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_2_934813404382511A;
class Class_3_750DA0E74FE20AAE;
class Class_3_883E597458B91E77;
class Class_3_AA6DF3A878195D3F;
class Class_3_BD1C1745FBC83F51;
class Class_3_C0D5B1A036ED00F0;
class Class_3_D2084E0C2DD39509;
class Class_3_D902FC5F64432838;
class Class_3_F33F9DC5F4112336;
class Class_3_F35B080B137ECC46;
namespace BehaviorDesigner::Runtime { class SharedBool; }
namespace BehaviorDesigner::Runtime { class SharedFloat; }
namespace BehaviorDesigner::Runtime { class SharedString; }
namespace MoleMole { class MonoWayPath; }
namespace MoleMole { class MonoWayPoint; }
namespace MoleMole { class SharedGameEntity; }
namespace MoleMole::Battle { class Entity; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_PATROLMOVE_ALLOCATECONTINUESTICKTASK_OFFSET UNITYSDK_OFFSET(0xA532C50)
#define MOLEMOLE_PATROLMOVE_CALCULATEPATHINNAVMESH_OFFSET UNITYSDK_OFFSET(0xA534AC0)
#define MOLEMOLE_PATROLMOVE_CHECKARRIVETARGETPOINT_OFFSET UNITYSDK_OFFSET(0xA534DD0)
#define MOLEMOLE_PATROLMOVE_CLEARCACHEINPUTDATA_OFFSET UNITYSDK_OFFSET(0xA532830)
#define MOLEMOLE_PATROLMOVE_CONSUMEINPUTDATA_OFFSET UNITYSDK_OFFSET(0xA533910)
#define MOLEMOLE_PATROLMOVE_DEALLOCATECONTINUESTICKTASK_OFFSET UNITYSDK_OFFSET(0xA537A50)
#define MOLEMOLE_PATROLMOVE_ENTERSTAYWAIT_OFFSET UNITYSDK_OFFSET(0xA5375D0)
#define MOLEMOLE_PATROLMOVE_EXITSTAY_OFFSET UNITYSDK_OFFSET(0xA536EC0)
#define MOLEMOLE_PATROLMOVE_FINISHMOVE_OFFSET UNITYSDK_OFFSET(0xA5371C0)
#define MOLEMOLE_PATROLMOVE_GETHITDIRECTION_OFFSET UNITYSDK_OFFSET(0xA535AD0)
#define MOLEMOLE_PATROLMOVE_GETWAYPATHBYSPLINE_OFFSET UNITYSDK_OFFSET(0xA533B90)
#define MOLEMOLE_PATROLMOVE_GET_TIMESCALE_OFFSET UNITYSDK_OFFSET(0xA537560)
#define MOLEMOLE_PATROLMOVE_INITWAYPOINT_OFFSET UNITYSDK_OFFSET(0xA532EC0)
#define MOLEMOLE_PATROLMOVE_ISSTREAMINGGAME_OFFSET UNITYSDK_OFFSET(0xA533A30)
#define MOLEMOLE_PATROLMOVE_LOGICTICK_OFFSET UNITYSDK_OFFSET(0xA532DE0)
#define MOLEMOLE_PATROLMOVE_NEEDSTEER_OFFSET UNITYSDK_OFFSET(0xA537E40)
#define MOLEMOLE_PATROLMOVE_ONAWAKE_OFFSET UNITYSDK_OFFSET(0xA531F30)
#define MOLEMOLE_PATROLMOVE_ONEND_OFFSET UNITYSDK_OFFSET(0xA5378F0)
#define MOLEMOLE_PATROLMOVE_ONENTERWAYPOINT_OFFSET UNITYSDK_OFFSET(0xA5355C0)
#define MOLEMOLE_PATROLMOVE_ONFIXEDUPDATE_OFFSET UNITYSDK_OFFSET(0xA534030)
#define MOLEMOLE_PATROLMOVE_ONLEAVEWAYPOINT_OFFSET UNITYSDK_OFFSET(0xA537130)
#define MOLEMOLE_PATROLMOVE_ONSTART_OFFSET UNITYSDK_OFFSET(0xA5328C0)
#define MOLEMOLE_PATROLMOVE_ONUPDATE_OFFSET UNITYSDK_OFFSET(0xA532D70)
#define MOLEMOLE_PATROLMOVE_RECORDMOVEINPUT_OFFSET UNITYSDK_OFFSET(0xA536E00)
#define MOLEMOLE_PATROLMOVE_RECORDSTOPINPUT_OFFSET UNITYSDK_OFFSET(0xA534A50)
#define MOLEMOLE_PATROLMOVE_SELFCONTAINSMETHOD_OFFSET UNITYSDK_OFFSET(0xA537FE0)
#define MOLEMOLE_PATROLMOVE_SENDWAYPOINTEVT_OFFSET UNITYSDK_OFFSET(0xA5376A0)
#define MOLEMOLE_PATROLMOVE_SQRDISTANCETOSEGMENT_OFFSET UNITYSDK_OFFSET(0xA537B70)
#define MOLEMOLE_PATROLMOVE_STAYWAIT_OFFSET UNITYSDK_OFFSET(0xA533620)
#define MOLEMOLE_PATROLMOVE_TICKMOVING_OFFSET UNITYSDK_OFFSET(0xA5340B0)
#define MOLEMOLE_PATROLMOVE_UPDATEMOVING_OFFSET UNITYSDK_OFFSET(0xA533500)
#define MOLEMOLE_PATROLMOVE__CTOR_OFFSET UNITYSDK_OFFSET(0xA538080)
#define MOLEMOLE_PATROLMOVE___BASE_ONAWAKE_OFFSET UNITYSDK_OFFSET(0xA538210)
#define MOLEMOLE_PATROLMOVE___BASE_ONEND_OFFSET UNITYSDK_OFFSET(0xA5382A0)
#define MOLEMOLE_PATROLMOVE___BASE_ONFIXEDUPDATE_OFFSET UNITYSDK_OFFSET(0xA538330)
#define MOLEMOLE_PATROLMOVE___BASE_ONSTART_OFFSET UNITYSDK_OFFSET(0xA5383C0)
#define MOLEMOLE_PATROLMOVE___BASE_ONUPDATE_OFFSET UNITYSDK_OFFSET(0xA538450)
#define MOLEMOLE_PATROLMOVE___BASE_SELFCONTAINSMETHOD_OFFSET UNITYSDK_OFFSET(0xA5384E0)

namespace MoleMole
{
	inline static constexpr unsigned int PatrolMove_TypeDefinitionIndex = 73379;

	class PatrolMove : public ::BehaviorDesigner::Runtime::Tasks::ContinuesTickAction
	{
	public:
		// static const ::System::Double Const_ExpectTickDeltaTime; // 0x0
		::BehaviorDesigner::Runtime::SharedString* wayPathName; // 0x58
		::System::Collections::Generic::List_1<::UnityEngine::Vector3>* pathPosList; // 0x60
		::Class_3_BD1C1745FBC83F51* inputComp; // 0x68
		::BehaviorDesigner::Runtime::SharedFloat* reachPointStayTime; // 0x70
		::MoleMole::Battle::Entity* ownerEntity; // 0x78
		::BehaviorDesigner::Runtime::SharedFloat* HitCheckRadius; // 0x80
		::Class_3_D2084E0C2DD39509* characterNavmeshAgentComponent; // 0x88
		::Class_2_934813404382511A* patrolMoveTask; // 0x90
		::BehaviorDesigner::Runtime::SharedBool* ApplyAvoidObstacle; // 0x98
		::MoleMole::MonoWayPoint* currentTarget; // 0xA0
		::Class_3_D902FC5F64432838* timeSlowEffectComponent; // 0xA8
		::Class_3_AA6DF3A878195D3F* steerComponent; // 0xB0
		::MoleMole::SharedGameEntity* SharedOwnerEntity; // 0xB8
		::Class_3_883E597458B91E77* characterMovement; // 0xC0
		::System::String* pathName; // 0xC8
		::BehaviorDesigner::Runtime::SharedString* NextPatrolNode; // 0xD0
		::BehaviorDesigner::Runtime::SharedFloat* PatrolRotationSpeed; // 0xD8
		::MoleMole::MonoWayPath* wayPath; // 0xE0
		::Class_3_F33F9DC5F4112336* animCharacter; // 0xE8
		::System::Collections::Generic::List_1<::UnityEngine::Vector3>* checkStartPos; // 0xF0
		::Class_3_750DA0E74FE20AAE* aiComponent; // 0xF8
		::Class_3_F35B080B137ECC46* modelComponent; // 0x100
		::System::Collections::Generic::List_1<::UnityEngine::Vector3>* _recheckcheckStartPos; // 0x108
		::Class_3_C0D5B1A036ED00F0* dataComponent; // 0x110
		::BehaviorDesigner::Runtime::SharedFloat* arrivalPrecision; // 0x118
		::BehaviorDesigner::Runtime::SharedFloat* CollisionCheckWidth; // 0x120
		::System::Collections::Generic::List_1<::UnityEngine::Vector3>* calculatePath; // 0x128
		::UnityEngine::Vector3 lastTargetPosition; // 0x130
		::BehaviorDesigner::Runtime::Tasks::TaskStatus physicsTickMovingResult; // 0x13C
		::UnityEngine::Vector3 lastPosition; // 0x140
		::UnityEngine::Vector3 TargetSourceVec; // 0x14C
		::MoleMole::PatrolMove_MoveState moveState; // 0x158
		::UnityEngine::Vector3 faceJoysticDir; // 0x15C
		::System::Single stayTimer; // 0x168
		::UnityEngine::LayerMask _collisionLayerMask; // 0x16C
		::System::Double lastTickTime; // 0x170
		::System::Boolean isStreamingGame; // 0x178
		::System::Byte cacheSteerType; // 0x179
		::System::Boolean cacheStopMove; // 0x17A
		::System::Boolean IsDirectionalMove; // 0x17B
		::System::Single rotationSpeed; // 0x17C
		::UnityEngine::Vector3 checkBefore; // 0x180
		::MoleMole::PatrolMove_StartMode MoveStartType; // 0x18C
		::System::Boolean isAnimatorFixedUpdate; // 0x190
		::System::Boolean needApplyInputInUpdate; // 0x191
		::System::Int32 inputFrameCount; // 0x194
		::System::Single colliderRadius; // 0x198
		::MoleMole::PatrolMove_RotationType rotationType; // 0x19C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_PATROLMOVE__CTOR_OFFSET))(this);
		}

		::System::Void OnAwake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_PATROLMOVE_ONAWAKE_OFFSET))(this);
		}

		::System::Void OnStart()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_PATROLMOVE_ONSTART_OFFSET))(this);
		}

		::BehaviorDesigner::Runtime::Tasks::TaskStatus OnUpdate()
		{
			return ((::BehaviorDesigner::Runtime::Tasks::TaskStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_PATROLMOVE_ONUPDATE_OFFSET))(this);
		}

		::BehaviorDesigner::Runtime::Tasks::TaskStatus LogicTick()
		{
			return ((::BehaviorDesigner::Runtime::Tasks::TaskStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_PATROLMOVE_LOGICTICK_OFFSET))(this);
		}

		::System::Void InitWayPoint()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_PATROLMOVE_INITWAYPOINT_OFFSET))(this);
		}

		::System::Void OnFixedUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_PATROLMOVE_ONFIXEDUPDATE_OFFSET))(this);
		}

		::BehaviorDesigner::Runtime::Tasks::TaskStatus TickMoving()
		{
			return ((::BehaviorDesigner::Runtime::Tasks::TaskStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_PATROLMOVE_TICKMOVING_OFFSET))(this);
		}

		::BehaviorDesigner::Runtime::Tasks::TaskStatus UpdateMoving()
		{
			return ((::BehaviorDesigner::Runtime::Tasks::TaskStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_PATROLMOVE_UPDATEMOVING_OFFSET))(this);
		}

		::System::Void ExitStay()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_PATROLMOVE_EXITSTAY_OFFSET))(this);
		}

		::System::Void StayWait()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_PATROLMOVE_STAYWAIT_OFFSET))(this);
		}

		::System::Void EnterStayWait()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_PATROLMOVE_ENTERSTAYWAIT_OFFSET))(this);
		}

		::System::Void FinishMove()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_PATROLMOVE_FINISHMOVE_OFFSET))(this);
		}

		::System::Void OnEnterWayPoint(::MoleMole::MonoWayPoint* wayPoint)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::MonoWayPoint*))((::PBYTE)hIl2Cpp + MOLEMOLE_PATROLMOVE_ONENTERWAYPOINT_OFFSET))(this, wayPoint);
		}

		::System::Void OnLeaveWayPoint(::MoleMole::MonoWayPoint* wayPoint)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::MonoWayPoint*))((::PBYTE)hIl2Cpp + MOLEMOLE_PATROLMOVE_ONLEAVEWAYPOINT_OFFSET))(this, wayPoint);
		}

		::System::Single get_TimeScale()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_PATROLMOVE_GET_TIMESCALE_OFFSET))(this);
		}

		::System::Void OnEnd()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_PATROLMOVE_ONEND_OFFSET))(this);
		}

		::System::Void AllocateContinuesTickTask()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_PATROLMOVE_ALLOCATECONTINUESTICKTASK_OFFSET))(this);
		}

		::System::Void DeAllocateContinuesTickTask()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_PATROLMOVE_DEALLOCATECONTINUESTICKTASK_OFFSET))(this);
		}

		::UnityEngine::Vector3 CalculatePathInNavmesh(::UnityEngine::Vector3 targetPos, ::UnityEngine::Vector3 lastTargetPos)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + MOLEMOLE_PATROLMOVE_CALCULATEPATHINNAVMESH_OFFSET))(this, targetPos, lastTargetPos);
		}

		::System::Boolean CheckArriveTargetPoint(::UnityEngine::Vector3 sourcePos)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + MOLEMOLE_PATROLMOVE_CHECKARRIVETARGETPOINT_OFFSET))(this, sourcePos);
		}

		::System::Single SqrDistanceToSegment(::UnityEngine::Vector3 p0, ::UnityEngine::Vector3 p1, ::UnityEngine::Vector3 point)
		{
			return ((::System::Single(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + MOLEMOLE_PATROLMOVE_SQRDISTANCETOSEGMENT_OFFSET))(this, p0, p1, point);
		}

		::System::Void SendWayPointEvt(::System::String* waypath, ::System::String* waypoint, ::System::Single waitTime, ::System::Boolean isEnter)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_PATROLMOVE_SENDWAYPOINTEVT_OFFSET))(this, waypath, waypoint, waitTime, isEnter);
		}

		::System::Boolean NeedSteer(::UnityEngine::Vector3 targetDir)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + MOLEMOLE_PATROLMOVE_NEEDSTEER_OFFSET))(this, targetDir);
		}

		::System::Void RecordMoveInput(::UnityEngine::Vector3 dir, ::System::Single rotationSpeed, ::System::Byte steerType)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::System::Single, ::System::Byte))((::PBYTE)hIl2Cpp + MOLEMOLE_PATROLMOVE_RECORDMOVEINPUT_OFFSET))(this, dir, rotationSpeed, steerType);
		}

		::System::Void RecordStopInput()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_PATROLMOVE_RECORDSTOPINPUT_OFFSET))(this);
		}

		::System::Void ClearCacheInputData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_PATROLMOVE_CLEARCACHEINPUTDATA_OFFSET))(this);
		}

		::System::Void ConsumeInputData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_PATROLMOVE_CONSUMEINPUTDATA_OFFSET))(this);
		}

		::System::Boolean GetHitDirection(::MoleMole::Battle::Entity* sourceElf, ::UnityEngine::Vector3 forward, ::System::Boolean check, ::UnityEngine::Vector3& newForward)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Battle::Entity*, ::UnityEngine::Vector3, ::System::Boolean, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + MOLEMOLE_PATROLMOVE_GETHITDIRECTION_OFFSET))(this, sourceElf, forward, check, newForward);
		}

		::System::Boolean IsStreamingGame()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_PATROLMOVE_ISSTREAMINGGAME_OFFSET))(this);
		}

		::System::Boolean GetWayPathBySpline(::System::String* pathName, ::MoleMole::MonoWayPath*& wayPathComponent)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*, ::MoleMole::MonoWayPath*&))((::PBYTE)hIl2Cpp + MOLEMOLE_PATROLMOVE_GETWAYPATHBYSPLINE_OFFSET))(this, pathName, wayPathComponent);
		}

		::System::Boolean SelfContainsMethod(::BehaviorDesigner::Runtime::Behavior_EventTypes evt)
		{
			return ((::System::Boolean(*)(::PVOID, ::BehaviorDesigner::Runtime::Behavior_EventTypes))((::PBYTE)hIl2Cpp + MOLEMOLE_PATROLMOVE_SELFCONTAINSMETHOD_OFFSET))(this, evt);
		}

		::System::Void __base_OnAwake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_PATROLMOVE___BASE_ONAWAKE_OFFSET))(this);
		}

		::System::Void __base_OnEnd()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_PATROLMOVE___BASE_ONEND_OFFSET))(this);
		}

		::System::Void __base_OnFixedUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_PATROLMOVE___BASE_ONFIXEDUPDATE_OFFSET))(this);
		}

		::System::Void __base_OnStart()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_PATROLMOVE___BASE_ONSTART_OFFSET))(this);
		}

		::BehaviorDesigner::Runtime::Tasks::TaskStatus __base_OnUpdate()
		{
			return ((::BehaviorDesigner::Runtime::Tasks::TaskStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_PATROLMOVE___BASE_ONUPDATE_OFFSET))(this);
		}

		::System::Boolean __base_SelfContainsMethod(::BehaviorDesigner::Runtime::Behavior_EventTypes P0)
		{
			return ((::System::Boolean(*)(::PVOID, ::BehaviorDesigner::Runtime::Behavior_EventTypes))((::PBYTE)hIl2Cpp + MOLEMOLE_PATROLMOVE___BASE_SELFCONTAINSMETHOD_OFFSET))(this, P0);
		}
	};
}
