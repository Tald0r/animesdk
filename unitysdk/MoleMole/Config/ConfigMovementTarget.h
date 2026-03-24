#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_32134AA19ED34F5D.h"
#include "unitysdk/Enum_3_F40B865AC61AB8D7.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"
#include "unitysdk/MoleMole/Config/ConfigMovement.h"
#include "unitysdk/UnityEngine/RaycastHit.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_236FD73ABC492E3F;
class Class_1_39D3E61C562EE5C6;
class Class_2_14986121AA61AD99;
class Class_2_B82EB30E0EF7C354;
class Class_3_248DACE3BB3053DD;
class Class_3_F35B080B137ECC46;
namespace MoleMole::Battle { class Entity; }
namespace MoleMole::Config { class ConfigPosRot; }
namespace System { class Object; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine::AI { class NavMeshPath; }

#define MOLEMOLE_CONFIG_CONFIGMOVEMENTTARGET_CHECKOVERLAP_OFFSET UNITYSDK_OFFSET(0xE363D10)
#define MOLEMOLE_CONFIG_CONFIGMOVEMENTTARGET_CLONE_OFFSET UNITYSDK_OFFSET(0xE364DA0)
#define MOLEMOLE_CONFIG_CONFIGMOVEMENTTARGET_FINDSUITABLEPOSANDAPPLYINSTANTMOVE_OFFSET UNITYSDK_OFFSET(0xE363820)
#define MOLEMOLE_CONFIG_CONFIGMOVEMENTTARGET_FOREACHREFTYPEMEMBER_OFFSET UNITYSDK_OFFSET(0xE364D00)
#define MOLEMOLE_CONFIG_CONFIGMOVEMENTTARGET_FROMBINARY_OFFSET UNITYSDK_OFFSET(0xE365A30)
#define MOLEMOLE_CONFIG_CONFIGMOVEMENTTARGET_FROMFLX_OFFSET UNITYSDK_OFFSET(0xE364FB0)
#define MOLEMOLE_CONFIG_CONFIGMOVEMENTTARGET_GETCORRECTIONENTITY_OFFSET UNITYSDK_OFFSET(0xE3633B0)
#define MOLEMOLE_CONFIG_CONFIGMOVEMENTTARGET_GETGROUNDPOS_OFFSET UNITYSDK_OFFSET(0xE3636B0)
#define MOLEMOLE_CONFIG_CONFIGMOVEMENTTARGET_GETHASHNUM_OFFSET UNITYSDK_OFFSET(0xE364E80)
#define MOLEMOLE_CONFIG_CONFIGMOVEMENTTARGET_INITMODELCOLLIDERPARAM_OFFSET UNITYSDK_OFFSET(0xE3643C0)
#define MOLEMOLE_CONFIG_CONFIGMOVEMENTTARGET_INTERNALFROMBINARY_OFFSET UNITYSDK_OFFSET(0xE365A90)
#define MOLEMOLE_CONFIG_CONFIGMOVEMENTTARGET_INTERNALFROMFLX_OFFSET UNITYSDK_OFFSET(0xE365030)
#define MOLEMOLE_CONFIG_CONFIGMOVEMENTTARGET_PARSEFROMBINARY_OFFSET UNITYSDK_OFFSET(0xE365ED0)
#define MOLEMOLE_CONFIG_CONFIGMOVEMENTTARGET_PARSEFROMFLX_OFFSET UNITYSDK_OFFSET(0xE3658D0)
#define MOLEMOLE_CONFIG_CONFIGMOVEMENTTARGET_PROCESSRIGIDBODY_OFFSET UNITYSDK_OFFSET(0xE3621A0)
#define MOLEMOLE_CONFIG_CONFIGMOVEMENTTARGET_SELECTSUITABLEPOSBYCIRCLEMETHOD_OFFSET UNITYSDK_OFFSET(0xE364780)
#define MOLEMOLE_CONFIG_CONFIGMOVEMENTTARGET_SETUPLOGICMOVEMENT_OFFSET UNITYSDK_OFFSET(0xE363FB0)
#define MOLEMOLE_CONFIG_CONFIGMOVEMENTTARGET__CTOR_OFFSET UNITYSDK_OFFSET(0xE3620E0)
#define MOLEMOLE_CONFIG_CONFIGMOVEMENTTARGET___BASE_SETUPLOGICMOVEMENT_OFFSET UNITYSDK_OFFSET(0xE366080)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigMovementTarget_TypeDefinitionIndex = 71436;

	class ConfigMovementTarget : public ::MoleMole::Config::ConfigMovement
	{
	public:
		::UnityEngine::AI::NavMeshPath* navPath; // 0x38
		::Il2CppArray<::UnityEngine::Vector3>* navMeshPathCorners; // 0x40
		::System::Collections::Generic::List_1<::UnityEngine::Vector3>* path; // 0x48
		::MoleMole::Config::ConfigPosRot* TargetPosRot; // 0x50
		::Class_1_39D3E61C562EE5C6* MoveType; // 0x58
		::UnityEngine::RaycastHit hitInfo; // 0x60
		::System::Single colliderRadius; // 0x94
		::Enum_3_32134AA19ED34F5D TargetUpdateMode; // 0x98
		::System::Boolean IsReached; // 0x9C
		::System::Boolean ReachTargetStop; // 0x9D
		::System::Boolean isCapsule; // 0x9E
		::Enum_3_F40B865AC61AB8D7 colliderType; // 0xA0
		::UnityEngine::Vector3 DefaultOffset; // 0xA4
		::System::Single modelHeight; // 0xB0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGMOVEMENTTARGET__CTOR_OFFSET))(this);
		}

		::System::Void ProcessRigidbody(::Class_3_F35B080B137ECC46* modelComponent, ::Class_3_248DACE3BB3053DD* movementComponent, ::System::Single deltaTime, ::System::Single timeScale, ::Class_2_14986121AA61AD99* instancedAbility)
		{
			return ((::System::Void(*)(::PVOID, ::Class_3_F35B080B137ECC46*, ::Class_3_248DACE3BB3053DD*, ::System::Single, ::System::Single, ::Class_2_14986121AA61AD99*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGMOVEMENTTARGET_PROCESSRIGIDBODY_OFFSET))(this, modelComponent, movementComponent, deltaTime, timeScale, instancedAbility);
		}

		::System::Void SetupLogicMovement(::Class_3_248DACE3BB3053DD* movementComponent, ::MoleMole::Battle::Entity* other, ::MoleMole::Battle::Entity* caster, ::Class_2_14986121AA61AD99* instancedAbility)
		{
			return ((::System::Void(*)(::PVOID, ::Class_3_248DACE3BB3053DD*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::Class_2_14986121AA61AD99*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGMOVEMENTTARGET_SETUPLOGICMOVEMENT_OFFSET))(this, movementComponent, other, caster, instancedAbility);
		}

		::System::Void InitModelColliderParam(::Class_3_F35B080B137ECC46* modelComponent)
		{
			return ((::System::Void(*)(::PVOID, ::Class_3_F35B080B137ECC46*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGMOVEMENTTARGET_INITMODELCOLLIDERPARAM_OFFSET))(this, modelComponent);
		}

		::System::Boolean CheckOverlap(::Class_3_248DACE3BB3053DD* movementComponent, ::Class_3_F35B080B137ECC46* modelComponent, ::UnityEngine::Vector3 targetPos)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_3_248DACE3BB3053DD*, ::Class_3_F35B080B137ECC46*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGMOVEMENTTARGET_CHECKOVERLAP_OFFSET))(this, movementComponent, modelComponent, targetPos);
		}

		::System::Void FindSuitablePosAndApplyInstantMove(::Class_3_248DACE3BB3053DD* movementComponent, ::Class_2_B82EB30E0EF7C354* instanceConfig, ::Class_3_F35B080B137ECC46* modelComponent, ::System::Boolean teleport)
		{
			return ((::System::Void(*)(::PVOID, ::Class_3_248DACE3BB3053DD*, ::Class_2_B82EB30E0EF7C354*, ::Class_3_F35B080B137ECC46*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGMOVEMENTTARGET_FINDSUITABLEPOSANDAPPLYINSTANTMOVE_OFFSET))(this, movementComponent, instanceConfig, modelComponent, teleport);
		}

		::System::Boolean SelectSuitablePosByCircleMethod(::MoleMole::Battle::Entity* self, ::Class_3_248DACE3BB3053DD* moveComponent, ::Class_2_B82EB30E0EF7C354* instantConfig, ::UnityEngine::Vector3 startPos, ::UnityEngine::Vector3 targetPos, ::System::Int32 overlapLayerMask, ::UnityEngine::Vector3& findPos)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Battle::Entity*, ::Class_3_248DACE3BB3053DD*, ::Class_2_B82EB30E0EF7C354*, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Int32, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGMOVEMENTTARGET_SELECTSUITABLEPOSBYCIRCLEMETHOD_OFFSET))(this, self, moveComponent, instantConfig, startPos, targetPos, overlapLayerMask, findPos);
		}

		::MoleMole::Battle::Entity* GetCorrectionEntity(::Class_2_B82EB30E0EF7C354* instanceConfig, ::Class_3_248DACE3BB3053DD* movementComponent)
		{
			return ((::MoleMole::Battle::Entity*(*)(::PVOID, ::Class_2_B82EB30E0EF7C354*, ::Class_3_248DACE3BB3053DD*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGMOVEMENTTARGET_GETCORRECTIONENTITY_OFFSET))(this, instanceConfig, movementComponent);
		}

		::UnityEngine::Vector3 GetGroundPos(::UnityEngine::Vector3 originPos)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGMOVEMENTTARGET_GETGROUNDPOS_OFFSET))(this, originPos);
		}

		::System::Void ForeachRefTypeMember(::System::Action_1<::System::Object*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGMOVEMENTTARGET_FOREACHREFTYPEMEMBER_OFFSET))(this, callback);
		}

		::MoleMole::Config::ConfigMovement* Clone()
		{
			return ((::MoleMole::Config::ConfigMovement*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGMOVEMENTTARGET_CLONE_OFFSET))(this);
		}

		::System::Int32 GetHashNum()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGMOVEMENTTARGET_GETHASHNUM_OFFSET))(this);
		}

		::System::Boolean FromFlx(::FlexBuffers::FlxValue node)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGMOVEMENTTARGET_FROMFLX_OFFSET))(this, node);
		}

		::System::Boolean InternalFromFlx(::FlexBuffers::FlxMap node)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGMOVEMENTTARGET_INTERNALFROMFLX_OFFSET))(this, node);
		}

		static ::MoleMole::Config::ConfigMovementTarget* ParseFromFlx(::FlexBuffers::FlxValue node)
		{
			return ((::MoleMole::Config::ConfigMovementTarget*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGMOVEMENTTARGET_PARSEFROMFLX_OFFSET))(node);
		}

		::System::Boolean FromBinary(::Class_1_236FD73ABC492E3F* byteArray, ::System::Int32 threadFlag)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGMOVEMENTTARGET_FROMBINARY_OFFSET))(this, byteArray, threadFlag);
		}

		::System::Boolean InternalFromBinary(::Class_1_236FD73ABC492E3F* byteArray, ::System::Int32 threadFlag)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGMOVEMENTTARGET_INTERNALFROMBINARY_OFFSET))(this, byteArray, threadFlag);
		}

		static ::MoleMole::Config::ConfigMovementTarget* ParseFromBinary(::Class_1_236FD73ABC492E3F* byteArray, ::System::Int32 threadFlag)
		{
			return ((::MoleMole::Config::ConfigMovementTarget*(*)(::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGMOVEMENTTARGET_PARSEFROMBINARY_OFFSET))(byteArray, threadFlag);
		}

		::System::Void __base_SetupLogicMovement(::Class_3_248DACE3BB3053DD* P0, ::MoleMole::Battle::Entity* P1, ::MoleMole::Battle::Entity* P2, ::Class_2_14986121AA61AD99* P3)
		{
			return ((::System::Void(*)(::PVOID, ::Class_3_248DACE3BB3053DD*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::Class_2_14986121AA61AD99*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGMOVEMENTTARGET___BASE_SETUPLOGICMOVEMENT_OFFSET))(this, P0, P1, P2, P3);
		}
	};
}
