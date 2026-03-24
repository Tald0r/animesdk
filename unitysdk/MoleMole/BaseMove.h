#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/ContinuesTickAction.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/TaskStatus.h"
#include "unitysdk/MoleMole/AIMoveTargetType.h"
#include "unitysdk/MoleMole/BaseMove_AIMoveTargetState.h"
#include "unitysdk/MoleMole/BaseMove_AroundAxis.h"
#include "unitysdk/MoleMole/BaseMove_AroundUpdateMode.h"
#include "unitysdk/MoleMole/BaseMove_EAroundMoveMode.h"
#include "unitysdk/MoleMole/BaseMove_MoveDirectionMode.h"
#include "unitysdk/MoleMole/BaseMove_TypeOfAngleCheck.h"
#include "unitysdk/MoleMole/Config/BaseMoveType.h"
#include "unitysdk/MoleMole/Config/Boolean.h"
#include "unitysdk/Struct_2_FA5F50563E60AFBA.h"
#include "unitysdk/System/ValueTuple_2.h"
#include "unitysdk/UnityEngine/LayerMask.h"
#include "unitysdk/UnityEngine/RaycastHit.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_2_CDD73C57CE893967;
class Class_3_0D4C1A014C7CC9DE;
class Class_3_3A6272A02DE7F4E0;
class Class_3_750DA0E74FE20AAE;
class Class_3_883E597458B91E77;
class Class_3_AA6DF3A878195D3F;
class Class_3_B19369CC4AB45FA4;
class Class_3_BD1C1745FBC83F51;
class Class_3_C0D5B1A036ED00F0;
class Class_3_D2084E0C2DD39509;
class Class_3_F33F9DC5F4112336;
class Class_3_F35B080B137ECC46;
namespace BehaviorDesigner::Runtime { class SharedBool; }
namespace BehaviorDesigner::Runtime { class SharedFloat; }
namespace BehaviorDesigner::Runtime { class SharedString; }
namespace BehaviorDesigner::Runtime { class SharedVariable; }
namespace MoleMole { class AnimatorBlendData; }
namespace MoleMole { class AnimatorBlendGroup; }
namespace MoleMole { class AnimatorClipBlendData; }
namespace MoleMole { class SharedGameEntity; }
namespace MoleMole { class SkillCharacterScriptConfig; }
namespace MoleMole::Battle { class Entity; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Transform; }

#define MOLEMOLE_BASEMOVE_ALLOCATECONTINUESTICKTASK_OFFSET UNITYSDK_OFFSET(0x915C0E0)
#define MOLEMOLE_BASEMOVE_CALCULATEPATHINNAVMESH_OFFSET UNITYSDK_OFFSET(0x915F470)
#define MOLEMOLE_BASEMOVE_CANMOVE_OFFSET UNITYSDK_OFFSET(0x915C720)
#define MOLEMOLE_BASEMOVE_CHECKHITTEDSTATE_1_OFFSET UNITYSDK_OFFSET(0x915F5C0)
#define MOLEMOLE_BASEMOVE_CHECKHITTEDSTATE_OFFSET UNITYSDK_OFFSET(0x91659E0)
#define MOLEMOLE_BASEMOVE_CLEARLERPPARAMETER_OFFSET UNITYSDK_OFFSET(0x91626C0)
#define MOLEMOLE_BASEMOVE_CORRECTDIRECTION_OFFSET UNITYSDK_OFFSET(0x9163F00)
#define MOLEMOLE_BASEMOVE_CUSTOMLERPANGLE_OFFSET UNITYSDK_OFFSET(0x9164EE0)
#define MOLEMOLE_BASEMOVE_CUSTOMLERP_OFFSET UNITYSDK_OFFSET(0x91650C0)
#define MOLEMOLE_BASEMOVE_DEALLOCATECONTINUESTICKTASK_OFFSET UNITYSDK_OFFSET(0x9162750)
#define MOLEMOLE_BASEMOVE_GETAITARGETPOS_OFFSET UNITYSDK_OFFSET(0x9163080)
#define MOLEMOLE_BASEMOVE_GETANGLE360_OFFSET UNITYSDK_OFFSET(0x9164310)
#define MOLEMOLE_BASEMOVE_GETANGLEXY_OFFSET UNITYSDK_OFFSET(0x9164D00)
#define MOLEMOLE_BASEMOVE_GETAROUNDTARGETPOS_OFFSET UNITYSDK_OFFSET(0x9165210)
#define MOLEMOLE_BASEMOVE_GETBLENDDATA_OFFSET UNITYSDK_OFFSET(0x9164520)
#define MOLEMOLE_BASEMOVE_GETHITTEDDIRECTION_OFFSET UNITYSDK_OFFSET(0x91609D0)
#define MOLEMOLE_BASEMOVE_GETMIRRORANGLE_OFFSET UNITYSDK_OFFSET(0x915F720)
#define MOLEMOLE_BASEMOVE_GETNEARESTDIRECTION_OFFSET UNITYSDK_OFFSET(0x9164DC0)
#define MOLEMOLE_BASEMOVE_GETSELFFORWARD_OFFSET UNITYSDK_OFFSET(0x91629C0)
#define MOLEMOLE_BASEMOVE_GETSELFRIGHT_OFFSET UNITYSDK_OFFSET(0x9162CD0)
#define MOLEMOLE_BASEMOVE_GETTARGETENTITY_OFFSET UNITYSDK_OFFSET(0x9162870)
#define MOLEMOLE_BASEMOVE_GETTARGET_OFFSET UNITYSDK_OFFSET(0x9162920)
#define MOLEMOLE_BASEMOVE_ISFREESTYLE_OFFSET UNITYSDK_OFFSET(0x915F340)
#define MOLEMOLE_BASEMOVE_ONAWAKE_OFFSET UNITYSDK_OFFSET(0x915A2E0)
#define MOLEMOLE_BASEMOVE_ONEND_OFFSET UNITYSDK_OFFSET(0x9162550)
#define MOLEMOLE_BASEMOVE_ONSTART_OFFSET UNITYSDK_OFFSET(0x915AE90)
#define MOLEMOLE_BASEMOVE_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x915C900)
#define MOLEMOLE_BASEMOVE_SETAROUNDTARGETRANGEANDANGLE_OFFSET UNITYSDK_OFFSET(0x915B600)
#define MOLEMOLE_BASEMOVE_SETBLENDDATA_OFFSET UNITYSDK_OFFSET(0x915BF00)
#define MOLEMOLE_BASEMOVE_TARGETDIRECTIONPOSTPROCESS_OFFSET UNITYSDK_OFFSET(0x915F7C0)
#define MOLEMOLE_BASEMOVE_TOSTRING_OFFSET UNITYSDK_OFFSET(0x9166000)
#define MOLEMOLE_BASEMOVE_UPDATEAROUNDTARGETPOS_OFFSET UNITYSDK_OFFSET(0x915BB80)
#define MOLEMOLE_BASEMOVE_UPDATELERPPARAMETER_OFFSET UNITYSDK_OFFSET(0x9161D20)
#define MOLEMOLE_BASEMOVE__CTOR_OFFSET UNITYSDK_OFFSET(0x91665F0)
#define MOLEMOLE_BASEMOVE__GETAROUNDTARGETPOS_G__RANDOMPOS_141_0_OFFSET UNITYSDK_OFFSET(0x9165950)
#define MOLEMOLE_BASEMOVE___BASE_ONAWAKE_OFFSET UNITYSDK_OFFSET(0x9166810)
#define MOLEMOLE_BASEMOVE___BASE_ONEND_OFFSET UNITYSDK_OFFSET(0x91668A0)
#define MOLEMOLE_BASEMOVE___BASE_ONSTART_OFFSET UNITYSDK_OFFSET(0x9166930)
#define MOLEMOLE_BASEMOVE___BASE_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x91669C0)
#define MOLEMOLE_BASEMOVE___BASE_TOSTRING_OFFSET UNITYSDK_OFFSET(0x9166A50)

namespace MoleMole
{
	inline static constexpr unsigned int BaseMove_TypeDefinitionIndex = 71378;

	class BaseMove : public ::BehaviorDesigner::Runtime::Tasks::ContinuesTickAction
	{
	public:
		::Class_3_3A6272A02DE7F4E0* characterBattle; // 0x58
		::System::Collections::Generic::List_1<::UnityEngine::Vector3>* _recheckcheckStartPos; // 0x60
		::BehaviorDesigner::Runtime::SharedString* targetGroupPoint; // 0x68
		::BehaviorDesigner::Runtime::SharedString* targetFloorPoint; // 0x70
		::System::String* AsideVerticalCurveKey; // 0x78
		::Class_3_C0D5B1A036ED00F0* characterData; // 0x80
		::BehaviorDesigner::Runtime::SharedFloat* AroundAngleMax; // 0x88
		::Class_3_F33F9DC5F4112336* animCharacter; // 0x90
		::BehaviorDesigner::Runtime::SharedString* targetAttachPoint; // 0x98
		::System::Collections::Generic::List_1<::UnityEngine::Vector3>* _checkStartPos; // 0xA0
		::MoleMole::SharedGameEntity* SharedOwnerEntity; // 0xA8
		::BehaviorDesigner::Runtime::SharedFloat* AroundAngleMin; // 0xB0
		::BehaviorDesigner::Runtime::SharedFloat* CollisionCheckWidth; // 0xB8
		::BehaviorDesigner::Runtime::SharedString* selfForwardAttachPoint; // 0xC0
		::BehaviorDesigner::Runtime::SharedFloat* minDistancePositive; // 0xC8
		::MoleMole::SkillCharacterScriptConfig* config; // 0xD0
		::UnityEngine::Transform* _selfForwardPoint; // 0xD8
		::Class_3_BD1C1745FBC83F51* inputComp; // 0xE0
		::BehaviorDesigner::Runtime::SharedString* TargetSavePointName; // 0xE8
		::System::String* AsideHorizontalCurveKey; // 0xF0
		::Class_3_883E597458B91E77* characterMovement; // 0xF8
		::MoleMole::Battle::Entity* ownerEntity; // 0x100
		::BehaviorDesigner::Runtime::SharedFloat* SkipPointDistance; // 0x108
		::Class_2_CDD73C57CE893967* baseMoveTask; // 0x110
		::BehaviorDesigner::Runtime::SharedBool* ApplyAvoidObstacle; // 0x118
		::BehaviorDesigner::Runtime::SharedVariable* canIdleVar; // 0x120
		::BehaviorDesigner::Runtime::SharedString* targetAnchorName; // 0x128
		::BehaviorDesigner::Runtime::SharedFloat* minDistance; // 0x130
		::BehaviorDesigner::Runtime::SharedBool* AroundFaceToAttackTarget; // 0x138
		::System::String* TargetAngleCurve; // 0x140
		::BehaviorDesigner::Runtime::SharedBool* bSkipNearPoint; // 0x148
		::BehaviorDesigner::Runtime::SharedFloat* minDistanceNegtive; // 0x150
		::Class_3_B19369CC4AB45FA4* attackTargetComponent; // 0x158
		::BehaviorDesigner::Runtime::SharedFloat* AroundRangeMin; // 0x160
		::Class_3_F35B080B137ECC46* characterModel; // 0x168
		::BehaviorDesigner::Runtime::SharedVariable* steerVar; // 0x170
		::Class_3_D2084E0C2DD39509* navmeshAgentComponent; // 0x178
		::Class_3_750DA0E74FE20AAE* aiComponent; // 0x180
		::MoleMole::AnimatorBlendData* _blendData; // 0x188
		::BehaviorDesigner::Runtime::SharedFloat* SteerMaxThinkTime; // 0x190
		::BehaviorDesigner::Runtime::SharedFloat* maxDistance; // 0x198
		::BehaviorDesigner::Runtime::SharedVariable* steerLengthVar; // 0x1A0
		::System::String* SavePointTargetCustomKey; // 0x1A8
		::BehaviorDesigner::Runtime::SharedFloat* AroundRangeMax; // 0x1B0
		::BehaviorDesigner::Runtime::SharedFloat* moveTime; // 0x1B8
		::BehaviorDesigner::Runtime::SharedFloat* AroundRange; // 0x1C0
		::Class_3_0D4C1A014C7CC9DE* levelaiComponent; // 0x1C8
		::BehaviorDesigner::Runtime::SharedFloat* SteerMinThinkTime; // 0x1D0
		::BehaviorDesigner::Runtime::SharedFloat* HitCheckRadius; // 0x1D8
		::System::Collections::Generic::List_1<::UnityEngine::Vector3>* calculatePath; // 0x1E0
		::Class_3_AA6DF3A878195D3F* steerComponent; // 0x1E8
		::System::Single AngleMin; // 0x1F0
		::UnityEngine::Vector3 TargetSourceVec; // 0x1F4
		::UnityEngine::LayerMask _collisionLayerMask; // 0x200
		::System::Single _freeTimer; // 0x204
		::System::Int32 _slotIndex; // 0x208
		::System::Single AroundDirRefreshMaxDistance; // 0x20C
		::BehaviorDesigner::Runtime::Tasks::TaskStatus reachMinRst; // 0x210
		::System::Single _lerpAngle; // 0x214
		::System::Int32 _moveType; // 0x218
		::MoleMole::Config::BaseMoveType MoveType; // 0x21C
		::System::Single _targetDistance; // 0x220
		::System::Single TestSteerAngle; // 0x224
		::System::Boolean IsSymmetry; // 0x228
		::System::Boolean _isHitted; // 0x229
		::System::Boolean TestSteerMode; // 0x22A
		::System::Boolean applyMinDistanceRange; // 0x22B
		::System::Single AroundDirRefreshInterval; // 0x22C
		::MoleMole::Config::Boolean IgnoreTimeScale; // 0x230
		::System::Single RandomAroundRange; // 0x234
		::System::Single AngleMax; // 0x238
		::System::Single _asideTimer; // 0x23C
		::MoleMole::AIMoveTargetType type; // 0x240
		::UnityEngine::Vector3 _slotTargetPos; // 0x244
		::System::Single _idleThinkTimer; // 0x250
		::System::Single _selectTargetDir; // 0x254
		::System::Single _moveTimer; // 0x258
		::System::Single randomCurveMirror; // 0x25C
		::MoleMole::BaseMove_AroundUpdateMode AroundMode; // 0x260
		::BehaviorDesigner::Runtime::Tasks::TaskStatus ExitAngleRst; // 0x264
		::UnityEngine::Vector3 lastVect; // 0x268
		::System::Single RandomAroundAngle; // 0x274
		::MoleMole::BaseMove_AIMoveTargetState _moveState; // 0x278
		::UnityEngine::Vector3 _lastForce; // 0x27C
		::System::Single _fixMinDistance; // 0x288
		::MoleMole::BaseMove_MoveDirectionMode directionMode; // 0x28C
		::MoleMole::BaseMove_TypeOfAngleCheck TypeOfChecking; // 0x290
		::MoleMole::BaseMove_EAroundMoveMode AroundMoveMode; // 0x294
		::System::Single _followCheckTimer; // 0x298
		::System::Single _curTargetAngle; // 0x29C
		::BehaviorDesigner::Runtime::Tasks::TaskStatus reachMoveTimeRst; // 0x2A0
		::UnityEngine::RaycastHit _hitInfo; // 0x2A4
		::UnityEngine::Vector3 AroundTargetPos; // 0x2D8
		::BehaviorDesigner::Runtime::Tasks::TaskStatus reachMaxRst; // 0x2E4
		::System::Single angleOffsetA; // 0x2E8
		::System::Boolean applyMoveTime; // 0x2EC
		::System::Boolean TestSteerLog; // 0x2ED
		::MoleMole::BaseMove_AroundAxis Axis; // 0x2F0
		::System::Single angleOffsetB; // 0x2F4
		::System::Boolean _isBlendMoving; // 0x2F8
		::System::Boolean _targetDirLocked; // 0x2F9
		::System::Boolean ApplyAngleExitCheck; // 0x2FA
		::System::Boolean IsTargetAngleCurveMirror; // 0x2FB
		::System::Single _currentLerpK; // 0x2FC
		::UnityEngine::Vector3 _checkBefore; // 0x300
		::System::Single _lastAngle; // 0x30C
		::System::Single _currentLerp; // 0x310

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BASEMOVE__CTOR_OFFSET))(this);
		}

		::System::Void OnAwake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BASEMOVE_ONAWAKE_OFFSET))(this);
		}

		::System::Void OnStart()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BASEMOVE_ONSTART_OFFSET))(this);
		}

		::System::Boolean CanMove()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BASEMOVE_CANMOVE_OFFSET))(this);
		}

		::BehaviorDesigner::Runtime::Tasks::TaskStatus OnUpdate()
		{
			return ((::BehaviorDesigner::Runtime::Tasks::TaskStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BASEMOVE_ONUPDATE_OFFSET))(this);
		}

		::System::Void OnEnd()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BASEMOVE_ONEND_OFFSET))(this);
		}

		::System::Void AllocateContinuesTickTask()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BASEMOVE_ALLOCATECONTINUESTICKTASK_OFFSET))(this);
		}

		::System::Void DeAllocateContinuesTickTask()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BASEMOVE_DEALLOCATECONTINUESTICKTASK_OFFSET))(this);
		}

		::MoleMole::Battle::Entity* GetTargetEntity()
		{
			return ((::MoleMole::Battle::Entity*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BASEMOVE_GETTARGETENTITY_OFFSET))(this);
		}

		::Struct_2_FA5F50563E60AFBA GetTarget()
		{
			return ((::Struct_2_FA5F50563E60AFBA(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BASEMOVE_GETTARGET_OFFSET))(this);
		}

		::UnityEngine::Vector3 GetSelfForward()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BASEMOVE_GETSELFFORWARD_OFFSET))(this);
		}

		::UnityEngine::Vector3 GetSelfRight()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BASEMOVE_GETSELFRIGHT_OFFSET))(this);
		}

		::System::ValueTuple_2<::UnityEngine::Vector3, ::UnityEngine::Vector3> GetAITargetPos()
		{
			return ((::System::ValueTuple_2<::UnityEngine::Vector3, ::UnityEngine::Vector3>(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BASEMOVE_GETAITARGETPOS_OFFSET))(this);
		}

		::System::Boolean IsFreeStyle()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BASEMOVE_ISFREESTYLE_OFFSET))(this);
		}

		::System::Void SetBlendData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BASEMOVE_SETBLENDDATA_OFFSET))(this);
		}

		::System::Boolean TargetDirectionPostProcess(::UnityEngine::Vector3& targetDir)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + MOLEMOLE_BASEMOVE_TARGETDIRECTIONPOSTPROCESS_OFFSET))(this, targetDir);
		}

		::System::Void GetNearestDirection(::UnityEngine::Vector3 source, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>* dirs, ::System::Int32& matchValue)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*, ::System::Int32&))((::PBYTE)hIl2Cpp + MOLEMOLE_BASEMOVE_GETNEARESTDIRECTION_OFFSET))(this, source, dirs, matchValue);
		}

		::UnityEngine::Vector3 CorrectDirection(::UnityEngine::Vector3 source, ::System::Boolean& res)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3, ::System::Boolean&))((::PBYTE)hIl2Cpp + MOLEMOLE_BASEMOVE_CORRECTDIRECTION_OFFSET))(this, source, res);
		}

		::System::Void ClearLerpParameter(::System::Boolean clearLerp)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_BASEMOVE_CLEARLERPPARAMETER_OFFSET))(this, clearLerp);
		}

		::UnityEngine::Vector2 GetAngleXY(::System::Single angle)
		{
			return ((::UnityEngine::Vector2(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_BASEMOVE_GETANGLEXY_OFFSET))(this, angle);
		}

		::System::Single GetAngle360(::UnityEngine::Vector3 force, ::UnityEngine::Vector3 forward)
		{
			return ((::System::Single(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + MOLEMOLE_BASEMOVE_GETANGLE360_OFFSET))(this, force, forward);
		}

		::MoleMole::AnimatorBlendGroup* GetBlendData(::System::Single& angle, ::MoleMole::AnimatorClipBlendData*& data1, ::MoleMole::AnimatorClipBlendData*& data2)
		{
			return ((::MoleMole::AnimatorBlendGroup*(*)(::PVOID, ::System::Single&, ::MoleMole::AnimatorClipBlendData*&, ::MoleMole::AnimatorClipBlendData*&))((::PBYTE)hIl2Cpp + MOLEMOLE_BASEMOVE_GETBLENDDATA_OFFSET))(this, angle, data1, data2);
		}

		::System::Void UpdateLerpParameter()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BASEMOVE_UPDATELERPPARAMETER_OFFSET))(this);
		}

		::System::Single CustomLerpAngle(::System::Single currentAngle, ::System::Single targetAngle, ::System::Single t)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_BASEMOVE_CUSTOMLERPANGLE_OFFSET))(this, currentAngle, targetAngle, t);
		}

		::System::Single CustomLerp(::System::Single currentValue, ::System::Single targetValue, ::System::Single t)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_BASEMOVE_CUSTOMLERP_OFFSET))(this, currentValue, targetValue, t);
		}

		::System::Void CalculatePathInNavmesh(::UnityEngine::Vector3& targetPos)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + MOLEMOLE_BASEMOVE_CALCULATEPATHINNAVMESH_OFFSET))(this, targetPos);
		}

		::System::Boolean GetHittedDirection(::MoleMole::Battle::Entity* sourceElf, ::UnityEngine::Vector3 forward, ::System::Boolean check, ::UnityEngine::Vector3& newForward)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Battle::Entity*, ::UnityEngine::Vector3, ::System::Boolean, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + MOLEMOLE_BASEMOVE_GETHITTEDDIRECTION_OFFSET))(this, sourceElf, forward, check, newForward);
		}

		::System::Void UpdateAroundTargetPos()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BASEMOVE_UPDATEAROUNDTARGETPOS_OFFSET))(this);
		}

		::System::Void SetAroundTargetRangeAndAngle()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BASEMOVE_SETAROUNDTARGETRANGEANDANGLE_OFFSET))(this);
		}

		::UnityEngine::Vector3 GetAroundTargetPos(::UnityEngine::Vector3 targetPos)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + MOLEMOLE_BASEMOVE_GETAROUNDTARGETPOS_OFFSET))(this, targetPos);
		}

		::System::Single GetMirrorAngle(::System::Single angle)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_BASEMOVE_GETMIRRORANGLE_OFFSET))(this, angle);
		}

		::System::Boolean CheckHittedState(::MoleMole::Battle::Entity* sourceElf, ::UnityEngine::Vector3 forward)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Battle::Entity*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + MOLEMOLE_BASEMOVE_CHECKHITTEDSTATE_OFFSET))(this, sourceElf, forward);
		}

		::System::Boolean CheckHittedState_1(::MoleMole::Battle::Entity* sourceElf)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + MOLEMOLE_BASEMOVE_CHECKHITTEDSTATE_1_OFFSET))(this, sourceElf);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BASEMOVE_TOSTRING_OFFSET))(this);
		}

		static ::UnityEngine::Vector3 _GetAroundTargetPos_g__RandomPos_141_0(::System::Single targetRange, ::UnityEngine::Vector3 pos)
		{
			return ((::UnityEngine::Vector3(*)(::System::Single, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + MOLEMOLE_BASEMOVE__GETAROUNDTARGETPOS_G__RANDOMPOS_141_0_OFFSET))(targetRange, pos);
		}

		::System::Void __base_OnAwake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BASEMOVE___BASE_ONAWAKE_OFFSET))(this);
		}

		::System::Void __base_OnEnd()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BASEMOVE___BASE_ONEND_OFFSET))(this);
		}

		::System::Void __base_OnStart()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BASEMOVE___BASE_ONSTART_OFFSET))(this);
		}

		::BehaviorDesigner::Runtime::Tasks::TaskStatus __base_OnUpdate()
		{
			return ((::BehaviorDesigner::Runtime::Tasks::TaskStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BASEMOVE___BASE_ONUPDATE_OFFSET))(this);
		}

		::System::String* __base_ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BASEMOVE___BASE_TOSTRING_OFFSET))(this);
		}
	};
}
