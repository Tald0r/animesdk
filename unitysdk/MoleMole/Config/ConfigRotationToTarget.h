#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_248DACE3BB3053DD_Enum_3_208B758CC2D6E4CF.h"
#include "unitysdk/Enum_3_32134AA19ED34F5D.h"
#include "unitysdk/Enum_3_DBE85A55BA66609E_1.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"
#include "unitysdk/MoleMole/Config/ConfigRotation.h"
#include "unitysdk/Struct_2_FC595D1A561D8C6F.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_236FD73ABC492E3F;
class Class_1_D0D2B3C2533F6DF2_4;
class Class_2_14986121AA61AD99;
class Class_3_248DACE3BB3053DD;
class Class_3_F35B080B137ECC46;
namespace MoleMole::Battle { class Entity; }
namespace MoleMole::Config { class ConfigPosRot; }
namespace System { class Object; }
namespace System { template <typename T> class Action_1; }
namespace UnityEngine { class AnimationCurve; }

#define MOLEMOLE_CONFIG_CONFIGROTATIONTOTARGET_CLONE_OFFSET UNITYSDK_OFFSET(0x1399FBC0)
#define MOLEMOLE_CONFIG_CONFIGROTATIONTOTARGET_FOREACHREFTYPEMEMBER_OFFSET UNITYSDK_OFFSET(0x1399FB50)
#define MOLEMOLE_CONFIG_CONFIGROTATIONTOTARGET_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x139A1390)
#define MOLEMOLE_CONFIG_CONFIGROTATIONTOTARGET_FROMFLX_OFFSET UNITYSDK_OFFSET(0x1399FDD0)
#define MOLEMOLE_CONFIG_CONFIGROTATIONTOTARGET_GETHASHNUM_OFFSET UNITYSDK_OFFSET(0x1399FCA0)
#define MOLEMOLE_CONFIG_CONFIGROTATIONTOTARGET_GETROTATIONDIR_OFFSET UNITYSDK_OFFSET(0x1399DB90)
#define MOLEMOLE_CONFIG_CONFIGROTATIONTOTARGET_GETROTATIONENTITY_OFFSET UNITYSDK_OFFSET(0x1399E540)
#define MOLEMOLE_CONFIG_CONFIGROTATIONTOTARGET_GETROTATIONUP_OFFSET UNITYSDK_OFFSET(0x1399DE10)
#define MOLEMOLE_CONFIG_CONFIGROTATIONTOTARGET_HANDLEFINALFORWARD_OFFSET UNITYSDK_OFFSET(0x1399F890)
#define MOLEMOLE_CONFIG_CONFIGROTATIONTOTARGET_INTERNALFROMBINARY_OFFSET UNITYSDK_OFFSET(0x139A13F0)
#define MOLEMOLE_CONFIG_CONFIGROTATIONTOTARGET_INTERNALFROMFLX_OFFSET UNITYSDK_OFFSET(0x1399FE50)
#define MOLEMOLE_CONFIG_CONFIGROTATIONTOTARGET_PARSEFROMBINARY_OFFSET UNITYSDK_OFFSET(0x139A1A30)
#define MOLEMOLE_CONFIG_CONFIGROTATIONTOTARGET_PARSEFROMFLX_OFFSET UNITYSDK_OFFSET(0x139A1290)
#define MOLEMOLE_CONFIG_CONFIGROTATIONTOTARGET_PROCESS_OFFSET UNITYSDK_OFFSET(0x1399E7E0)
#define MOLEMOLE_CONFIG_CONFIGROTATIONTOTARGET_RECORDPOSROTPARAM_OFFSET UNITYSDK_OFFSET(0x1399D9B0)
#define MOLEMOLE_CONFIG_CONFIGROTATIONTOTARGET_SETUP_OFFSET UNITYSDK_OFFSET(0x1399DEC0)
#define MOLEMOLE_CONFIG_CONFIGROTATIONTOTARGET__CTOR_OFFSET UNITYSDK_OFFSET(0x1399D960)
#define MOLEMOLE_CONFIG_CONFIGROTATIONTOTARGET___BASE_SETUP_OFFSET UNITYSDK_OFFSET(0x139A1BB0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigRotationToTarget_TypeDefinitionIndex = 45100;

	class ConfigRotationToTarget : public ::MoleMole::Config::ConfigRotation
	{
	public:
		::UnityEngine::AnimationCurve* RotationCurve; // 0x28
		::UnityEngine::AnimationCurve* TargetAngleCurve; // 0x30
		::Class_1_D0D2B3C2533F6DF2_4* SpeedRatioCurvebyDistance; // 0x38
		::MoleMole::Config::ConfigPosRot* TargetPosRot; // 0x40
		::System::Single ScaleRatio; // 0x48
		::Enum_3_DBE85A55BA66609E_1 RotateType; // 0x4C
		::Enum_3_32134AA19ED34F5D TargetUpdateMode; // 0x50
		::System::Boolean ReachTargetStop; // 0x54
		::System::Boolean DirectlyApplyRotation; // 0x55
		::System::Boolean DisableTargetCacheForBullet; // 0x56
		::System::Boolean ReachLimitStop; // 0x57
		::System::Single RotateSpeed; // 0x58
		::System::Single RotationAngleLimit; // 0x5C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGROTATIONTOTARGET__CTOR_OFFSET))(this);
		}

		::System::Void RecordPosRotParam(::Class_3_248DACE3BB3053DD* movementComponent, ::Struct_2_FC595D1A561D8C6F posRot)
		{
			return ((::System::Void(*)(::PVOID, ::Class_3_248DACE3BB3053DD*, ::Struct_2_FC595D1A561D8C6F))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGROTATIONTOTARGET_RECORDPOSROTPARAM_OFFSET))(this, movementComponent, posRot);
		}

		::UnityEngine::Vector3 GetRotationDir(::Class_3_F35B080B137ECC46* modelComponent, ::Class_3_248DACE3BB3053DD* movementComponent)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::Class_3_F35B080B137ECC46*, ::Class_3_248DACE3BB3053DD*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGROTATIONTOTARGET_GETROTATIONDIR_OFFSET))(this, modelComponent, movementComponent);
		}

		::UnityEngine::Vector3 GetRotationUp(::Class_3_F35B080B137ECC46* modelComponent, ::Class_3_248DACE3BB3053DD* movementComponent)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::Class_3_F35B080B137ECC46*, ::Class_3_248DACE3BB3053DD*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGROTATIONTOTARGET_GETROTATIONUP_OFFSET))(this, modelComponent, movementComponent);
		}

		::System::Void Setup(::Class_3_248DACE3BB3053DD* movementComponent, ::MoleMole::Battle::Entity* other, ::Class_3_248DACE3BB3053DD_Enum_3_208B758CC2D6E4CF& rotateState, ::MoleMole::Battle::Entity* inputCaster, ::Class_2_14986121AA61AD99* instancedAbility)
		{
			return ((::System::Void(*)(::PVOID, ::Class_3_248DACE3BB3053DD*, ::MoleMole::Battle::Entity*, ::Class_3_248DACE3BB3053DD_Enum_3_208B758CC2D6E4CF&, ::MoleMole::Battle::Entity*, ::Class_2_14986121AA61AD99*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGROTATIONTOTARGET_SETUP_OFFSET))(this, movementComponent, other, rotateState, inputCaster, instancedAbility);
		}

		::System::Void Process(::Class_3_F35B080B137ECC46* characterModelComp, ::Class_3_248DACE3BB3053DD* movementComponent, ::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::Class_3_F35B080B137ECC46*, ::Class_3_248DACE3BB3053DD*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGROTATIONTOTARGET_PROCESS_OFFSET))(this, characterModelComp, movementComponent, deltaTime);
		}

		::UnityEngine::Vector3 HandleFinalForward(::UnityEngine::Vector3 forward, ::System::Boolean& reachLimitAngle)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3, ::System::Boolean&))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGROTATIONTOTARGET_HANDLEFINALFORWARD_OFFSET))(this, forward, reachLimitAngle);
		}

		::MoleMole::Battle::Entity* GetRotationEntity(::System::UInt32 entityId)
		{
			return ((::MoleMole::Battle::Entity*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGROTATIONTOTARGET_GETROTATIONENTITY_OFFSET))(this, entityId);
		}

		::System::Void ForeachRefTypeMember(::System::Action_1<::System::Object*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGROTATIONTOTARGET_FOREACHREFTYPEMEMBER_OFFSET))(this, callback);
		}

		::MoleMole::Config::ConfigRotation* Clone()
		{
			return ((::MoleMole::Config::ConfigRotation*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGROTATIONTOTARGET_CLONE_OFFSET))(this);
		}

		::System::Int32 GetHashNum()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGROTATIONTOTARGET_GETHASHNUM_OFFSET))(this);
		}

		::System::Boolean FromFlx(::FlexBuffers::FlxValue node)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGROTATIONTOTARGET_FROMFLX_OFFSET))(this, node);
		}

		::System::Boolean InternalFromFlx(::FlexBuffers::FlxMap node)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGROTATIONTOTARGET_INTERNALFROMFLX_OFFSET))(this, node);
		}

		static ::MoleMole::Config::ConfigRotationToTarget* ParseFromFlx(::FlexBuffers::FlxValue node)
		{
			return ((::MoleMole::Config::ConfigRotationToTarget*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGROTATIONTOTARGET_PARSEFROMFLX_OFFSET))(node);
		}

		::System::Boolean FromBinary(::Class_1_236FD73ABC492E3F* byteArray, ::System::Int32 threadFlag)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGROTATIONTOTARGET_FROMBINARY_OFFSET))(this, byteArray, threadFlag);
		}

		::System::Boolean InternalFromBinary(::Class_1_236FD73ABC492E3F* byteArray, ::System::Int32 threadFlag)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGROTATIONTOTARGET_INTERNALFROMBINARY_OFFSET))(this, byteArray, threadFlag);
		}

		static ::MoleMole::Config::ConfigRotationToTarget* ParseFromBinary(::Class_1_236FD73ABC492E3F* byteArray, ::System::Int32 threadFlag)
		{
			return ((::MoleMole::Config::ConfigRotationToTarget*(*)(::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGROTATIONTOTARGET_PARSEFROMBINARY_OFFSET))(byteArray, threadFlag);
		}

		::System::Void __base_Setup(::Class_3_248DACE3BB3053DD* P0, ::MoleMole::Battle::Entity* P1, ::Class_3_248DACE3BB3053DD_Enum_3_208B758CC2D6E4CF& P2, ::MoleMole::Battle::Entity* P3, ::Class_2_14986121AA61AD99* P4)
		{
			return ((::System::Void(*)(::PVOID, ::Class_3_248DACE3BB3053DD*, ::MoleMole::Battle::Entity*, ::Class_3_248DACE3BB3053DD_Enum_3_208B758CC2D6E4CF&, ::MoleMole::Battle::Entity*, ::Class_2_14986121AA61AD99*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGROTATIONTOTARGET___BASE_SETUP_OFFSET))(this, P0, P1, P2, P3, P4);
		}
	};
}
