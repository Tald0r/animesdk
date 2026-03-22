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

#define MOLEMOLE_BASEMOVE_ALLOCATECONTINUESTICKTASK_OFFSET UNITYSDK_OFFSET(0x6FAE030)
#define MOLEMOLE_BASEMOVE_CALCULATEPATHINNAVMESH_OFFSET UNITYSDK_OFFSET(0x6FB1350)
#define MOLEMOLE_BASEMOVE_CANMOVE_OFFSET UNITYSDK_OFFSET(0x6FAE650)
#define MOLEMOLE_BASEMOVE_CHECKHITTEDSTATE_1_OFFSET UNITYSDK_OFFSET(0x6FB14A0)
#define MOLEMOLE_BASEMOVE_CHECKHITTEDSTATE_OFFSET UNITYSDK_OFFSET(0x6FB78C0)
#define MOLEMOLE_BASEMOVE_CLEARLERPPARAMETER_OFFSET UNITYSDK_OFFSET(0x6FB45B0)
#define MOLEMOLE_BASEMOVE_CORRECTDIRECTION_OFFSET UNITYSDK_OFFSET(0x6FB5DE0)
#define MOLEMOLE_BASEMOVE_CUSTOMLERPANGLE_OFFSET UNITYSDK_OFFSET(0x6FB6DC0)
#define MOLEMOLE_BASEMOVE_CUSTOMLERP_OFFSET UNITYSDK_OFFSET(0x6FB6FA0)
#define MOLEMOLE_BASEMOVE_DEALLOCATECONTINUESTICKTASK_OFFSET UNITYSDK_OFFSET(0x6FB4640)
#define MOLEMOLE_BASEMOVE_GETAITARGETPOS_OFFSET UNITYSDK_OFFSET(0x6FB4F60)
#define MOLEMOLE_BASEMOVE_GETANGLE360_OFFSET UNITYSDK_OFFSET(0x6FB61F0)
#define MOLEMOLE_BASEMOVE_GETANGLEXY_OFFSET UNITYSDK_OFFSET(0x6FB6BE0)
#define MOLEMOLE_BASEMOVE_GETAROUNDTARGETPOS_OFFSET UNITYSDK_OFFSET(0x6FB70F0)
#define MOLEMOLE_BASEMOVE_GETBLENDDATA_OFFSET UNITYSDK_OFFSET(0x6FB6400)
#define MOLEMOLE_BASEMOVE_GETHITTEDDIRECTION_OFFSET UNITYSDK_OFFSET(0x6FB28B0)
#define MOLEMOLE_BASEMOVE_GETMIRRORANGLE_OFFSET UNITYSDK_OFFSET(0x6FB1600)
#define MOLEMOLE_BASEMOVE_GETNEARESTDIRECTION_OFFSET UNITYSDK_OFFSET(0x6FB6CA0)
#define MOLEMOLE_BASEMOVE_GETSELFFORWARD_OFFSET UNITYSDK_OFFSET(0x6FB48A0)
#define MOLEMOLE_BASEMOVE_GETSELFRIGHT_OFFSET UNITYSDK_OFFSET(0x6FB4BB0)
#define MOLEMOLE_BASEMOVE_GETTARGETENTITY_OFFSET UNITYSDK_OFFSET(0x6FB4750)
#define MOLEMOLE_BASEMOVE_GETTARGET_OFFSET UNITYSDK_OFFSET(0x6FB4800)
#define MOLEMOLE_BASEMOVE_ISFREESTYLE_OFFSET UNITYSDK_OFFSET(0x6FB1220)
#define MOLEMOLE_BASEMOVE_ONAWAKE_OFFSET UNITYSDK_OFFSET(0x6FAC230)
#define MOLEMOLE_BASEMOVE_ONEND_OFFSET UNITYSDK_OFFSET(0x6FB4440)
#define MOLEMOLE_BASEMOVE_ONSTART_OFFSET UNITYSDK_OFFSET(0x6FACDE0)
#define MOLEMOLE_BASEMOVE_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x6FAE830)
#define MOLEMOLE_BASEMOVE_SETAROUNDTARGETRANGEANDANGLE_OFFSET UNITYSDK_OFFSET(0x6FAD550)
#define MOLEMOLE_BASEMOVE_SETBLENDDATA_OFFSET UNITYSDK_OFFSET(0x6FADE50)
#define MOLEMOLE_BASEMOVE_TARGETDIRECTIONPOSTPROCESS_OFFSET UNITYSDK_OFFSET(0x6FB16A0)
#define MOLEMOLE_BASEMOVE_TOSTRING_OFFSET UNITYSDK_OFFSET(0x6FB7EE0)
#define MOLEMOLE_BASEMOVE_UPDATEAROUNDTARGETPOS_OFFSET UNITYSDK_OFFSET(0x6FADAD0)
#define MOLEMOLE_BASEMOVE_UPDATELERPPARAMETER_OFFSET UNITYSDK_OFFSET(0x6FB3C10)
#define MOLEMOLE_BASEMOVE__CTOR_OFFSET UNITYSDK_OFFSET(0x6FB84D0)
#define MOLEMOLE_BASEMOVE__GETAROUNDTARGETPOS_G__RANDOMPOS_141_0_OFFSET UNITYSDK_OFFSET(0x6FB7830)
#define MOLEMOLE_BASEMOVE___BASE_ONAWAKE_OFFSET UNITYSDK_OFFSET(0x6FB86F0)
#define MOLEMOLE_BASEMOVE___BASE_ONEND_OFFSET UNITYSDK_OFFSET(0x6FB8780)
#define MOLEMOLE_BASEMOVE___BASE_ONSTART_OFFSET UNITYSDK_OFFSET(0x6FB8810)
#define MOLEMOLE_BASEMOVE___BASE_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x6FB88A0)
#define MOLEMOLE_BASEMOVE___BASE_TOSTRING_OFFSET UNITYSDK_OFFSET(0x6FB8930)

namespace MoleMole
{
	inline static constexpr unsigned int BaseMove_TypeDefinitionIndex = 61881;

	class BaseMove : public ::BehaviorDesigner::Runtime::Tasks::ContinuesTickAction
	{
	public:
		::Class_3_D2084E0C2DD39509* navmeshAgentComponent; // 0x58
		::Class_2_CDD73C57CE893967* baseMoveTask; // 0x60
		::BehaviorDesigner::Runtime::SharedFloat* SkipPointDistance; // 0x68
		::BehaviorDesigner::Runtime::SharedString* targetAnchorName; // 0x70
		::BehaviorDesigner::Runtime::SharedVariable* steerVar; // 0x78
		::BehaviorDesigner::Runtime::SharedVariable* canIdleVar; // 0x80
		::BehaviorDesigner::Runtime::SharedFloat* minDistanceNegtive; // 0x88
		::BehaviorDesigner::Runtime::SharedFloat* HitCheckRadius; // 0x90
		::MoleMole::SkillCharacterScriptConfig* config; // 0x98
		::BehaviorDesigner::Runtime::SharedFloat* moveTime; // 0xA0
		::Class_3_B19369CC4AB45FA4* attackTargetComponent; // 0xA8
		::Class_3_0D4C1A014C7CC9DE* levelaiComponent; // 0xB0
		::BehaviorDesigner::Runtime::SharedVariable* steerLengthVar; // 0xB8
		::Class_3_AA6DF3A878195D3F* steerComponent; // 0xC0
		::BehaviorDesigner::Runtime::SharedFloat* CollisionCheckWidth; // 0xC8
		::BehaviorDesigner::Runtime::SharedString* targetFloorPoint; // 0xD0
		::BehaviorDesigner::Runtime::SharedFloat* AroundAngleMin; // 0xD8
		::System::String* TargetAngleCurve; // 0xE0
		::BehaviorDesigner::Runtime::SharedFloat* AroundRangeMax; // 0xE8
		::BehaviorDesigner::Runtime::SharedFloat* AroundAngleMax; // 0xF0
		::Class_3_3A6272A02DE7F4E0* characterBattle; // 0xF8
		::BehaviorDesigner::Runtime::SharedBool* AroundFaceToAttackTarget; // 0x100
		::BehaviorDesigner::Runtime::SharedFloat* AroundRangeMin; // 0x108
		::BehaviorDesigner::Runtime::SharedFloat* SteerMinThinkTime; // 0x110
		::BehaviorDesigner::Runtime::SharedFloat* SteerMaxThinkTime; // 0x118
		::BehaviorDesigner::Runtime::SharedString* targetGroupPoint; // 0x120
		::System::Collections::Generic::List_1<::UnityEngine::Vector3>* calculatePath; // 0x128
		::System::String* AsideVerticalCurveKey; // 0x130
		::Class_3_C0D5B1A036ED00F0* characterData; // 0x138
		::BehaviorDesigner::Runtime::SharedString* TargetSavePointName; // 0x140
		::Class_3_BD1C1745FBC83F51* inputComp; // 0x148
		::BehaviorDesigner::Runtime::SharedBool* bSkipNearPoint; // 0x150
		::Class_3_883E597458B91E77* characterMovement; // 0x158
		::BehaviorDesigner::Runtime::SharedFloat* maxDistance; // 0x160
		::BehaviorDesigner::Runtime::SharedFloat* AroundRange; // 0x168
		::System::Collections::Generic::List_1<::UnityEngine::Vector3>* _recheckcheckStartPos; // 0x170
		::System::Collections::Generic::List_1<::UnityEngine::Vector3>* _checkStartPos; // 0x178
		::BehaviorDesigner::Runtime::SharedBool* ApplyAvoidObstacle; // 0x180
		::Class_3_F33F9DC5F4112336* animCharacter; // 0x188
		::UnityEngine::Transform* _selfForwardPoint; // 0x190
		::MoleMole::SharedGameEntity* SharedOwnerEntity; // 0x198
		::Class_3_750DA0E74FE20AAE* aiComponent; // 0x1A0
		::System::String* AsideHorizontalCurveKey; // 0x1A8
		::BehaviorDesigner::Runtime::SharedString* selfForwardAttachPoint; // 0x1B0
		::System::String* SavePointTargetCustomKey; // 0x1B8
		::BehaviorDesigner::Runtime::SharedFloat* minDistancePositive; // 0x1C0
		::MoleMole::Battle::Entity* ownerEntity; // 0x1C8
		::Class_3_F35B080B137ECC46* characterModel; // 0x1D0
		::MoleMole::AnimatorBlendData* _blendData; // 0x1D8
		::BehaviorDesigner::Runtime::SharedFloat* minDistance; // 0x1E0
		::BehaviorDesigner::Runtime::SharedString* targetAttachPoint; // 0x1E8
		::MoleMole::BaseMove_MoveDirectionMode directionMode; // 0x1F0
		::System::Single _currentLerp; // 0x1F4
		::System::Single _targetDistance; // 0x1F8
		::MoleMole::BaseMove_AroundUpdateMode AroundMode; // 0x1FC
		::MoleMole::BaseMove_TypeOfAngleCheck TypeOfChecking; // 0x200
		::System::Single RandomAroundAngle; // 0x204
		::System::Single angleOffsetA; // 0x208
		::System::Boolean TestSteerLog; // 0x20C
		::System::Boolean IsTargetAngleCurveMirror; // 0x20D
		::System::Boolean applyMoveTime; // 0x20E
		::System::Boolean _isHitted; // 0x20F
		::System::Boolean IsSymmetry; // 0x210
		::System::Boolean _targetDirLocked; // 0x211
		::System::Boolean ApplyAngleExitCheck; // 0x212
		::System::Boolean _isBlendMoving; // 0x213
		::BehaviorDesigner::Runtime::Tasks::TaskStatus reachMaxRst; // 0x214
		::UnityEngine::Vector3 _lastForce; // 0x218
		::UnityEngine::LayerMask _collisionLayerMask; // 0x224
		::BehaviorDesigner::Runtime::Tasks::TaskStatus reachMoveTimeRst; // 0x228
		::MoleMole::BaseMove_AroundAxis Axis; // 0x22C
		::MoleMole::Config::BaseMoveType MoveType; // 0x230
		::BehaviorDesigner::Runtime::Tasks::TaskStatus reachMinRst; // 0x234
		::System::Single _selectTargetDir; // 0x238
		::UnityEngine::Vector3 _checkBefore; // 0x23C
		::MoleMole::AIMoveTargetType type; // 0x248
		::System::Single _followCheckTimer; // 0x24C
		::System::Single _currentLerpK; // 0x250
		::System::Single angleOffsetB; // 0x254
		::System::Single AroundDirRefreshMaxDistance; // 0x258
		::UnityEngine::Vector3 lastVect; // 0x25C
		::System::Single _moveTimer; // 0x268
		::System::Single RandomAroundRange; // 0x26C
		::UnityEngine::Vector3 AroundTargetPos; // 0x270
		::System::Int32 _moveType; // 0x27C
		::System::Single _asideTimer; // 0x280
		::UnityEngine::RaycastHit _hitInfo; // 0x284
		::System::Single AngleMax; // 0x2B8
		::BehaviorDesigner::Runtime::Tasks::TaskStatus ExitAngleRst; // 0x2BC
		::System::Single AroundDirRefreshInterval; // 0x2C0
		::System::Boolean TestSteerMode; // 0x2C4
		::System::Boolean applyMinDistanceRange; // 0x2C5
		::System::Single TestSteerAngle; // 0x2C8
		::MoleMole::Config::Boolean IgnoreTimeScale; // 0x2CC
		::System::Single _curTargetAngle; // 0x2D0
		::UnityEngine::Vector3 _slotTargetPos; // 0x2D4
		::System::Single _lerpAngle; // 0x2E0
		::System::Single _lastAngle; // 0x2E4
		::System::Single AngleMin; // 0x2E8
		::System::Int32 _slotIndex; // 0x2EC
		::System::Single _fixMinDistance; // 0x2F0
		::UnityEngine::Vector3 TargetSourceVec; // 0x2F4
		::System::Single randomCurveMirror; // 0x300
		::MoleMole::BaseMove_AIMoveTargetState _moveState; // 0x304
		::System::Single _freeTimer; // 0x308
		::System::Single _idleThinkTimer; // 0x30C
		::MoleMole::BaseMove_EAroundMoveMode AroundMoveMode; // 0x310

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
