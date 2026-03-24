#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_AF4D3A3041939147.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"
#include "unitysdk/MoleMole/Config/ConfigMovement.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_236FD73ABC492E3F;
class Class_2_14986121AA61AD99;
class Class_3_248DACE3BB3053DD;
class Class_3_F35B080B137ECC46;
namespace MoleMole::Battle { class Entity; }
namespace System { class Object; }
namespace System { template <typename T> class Action_1; }

#define MOLEMOLE_CONFIG_CONFIGMOVEMENTSIMPLE_CLONE_OFFSET UNITYSDK_OFFSET(0xACC7020)
#define MOLEMOLE_CONFIG_CONFIGMOVEMENTSIMPLE_FOREACHREFTYPEMEMBER_OFFSET UNITYSDK_OFFSET(0xACC6FD0)
#define MOLEMOLE_CONFIG_CONFIGMOVEMENTSIMPLE_FROMBINARY_OFFSET UNITYSDK_OFFSET(0xACC78A0)
#define MOLEMOLE_CONFIG_CONFIGMOVEMENTSIMPLE_FROMFLX_OFFSET UNITYSDK_OFFSET(0xACC7230)
#define MOLEMOLE_CONFIG_CONFIGMOVEMENTSIMPLE_GETHASHNUM_OFFSET UNITYSDK_OFFSET(0xACC7100)
#define MOLEMOLE_CONFIG_CONFIGMOVEMENTSIMPLE_INTERNALFROMBINARY_OFFSET UNITYSDK_OFFSET(0xACC7900)
#define MOLEMOLE_CONFIG_CONFIGMOVEMENTSIMPLE_INTERNALFROMFLX_OFFSET UNITYSDK_OFFSET(0xACC72B0)
#define MOLEMOLE_CONFIG_CONFIGMOVEMENTSIMPLE_PARSEFROMBINARY_OFFSET UNITYSDK_OFFSET(0xACC7B30)
#define MOLEMOLE_CONFIG_CONFIGMOVEMENTSIMPLE_PARSEFROMFLX_OFFSET UNITYSDK_OFFSET(0xACC7740)
#define MOLEMOLE_CONFIG_CONFIGMOVEMENTSIMPLE_PROCESSRIGIDBODY_OFFSET UNITYSDK_OFFSET(0xACC6740)
#define MOLEMOLE_CONFIG_CONFIGMOVEMENTSIMPLE_SETUPLOGICMOVEMENT_OFFSET UNITYSDK_OFFSET(0xACC6B90)
#define MOLEMOLE_CONFIG_CONFIGMOVEMENTSIMPLE__CTOR_OFFSET UNITYSDK_OFFSET(0xACC6700)
#define MOLEMOLE_CONFIG_CONFIGMOVEMENTSIMPLE___BASE_SETUPLOGICMOVEMENT_OFFSET UNITYSDK_OFFSET(0xACC7CE0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigMovementSimple_TypeDefinitionIndex = 55655;

	class ConfigMovementSimple : public ::MoleMole::Config::ConfigMovement
	{
	public:
		::UnityEngine::Vector3 Acceleration; // 0x38
		::Enum_3_AF4D3A3041939147 CoordinateType; // 0x44
		::UnityEngine::Vector3 InitVelocity; // 0x48

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGMOVEMENTSIMPLE__CTOR_OFFSET))(this);
		}

		::System::Void ProcessRigidbody(::Class_3_F35B080B137ECC46* modelComponent, ::Class_3_248DACE3BB3053DD* movementComponent, ::System::Single deltaTime, ::System::Single timeScale, ::Class_2_14986121AA61AD99* instancedAbility)
		{
			return ((::System::Void(*)(::PVOID, ::Class_3_F35B080B137ECC46*, ::Class_3_248DACE3BB3053DD*, ::System::Single, ::System::Single, ::Class_2_14986121AA61AD99*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGMOVEMENTSIMPLE_PROCESSRIGIDBODY_OFFSET))(this, modelComponent, movementComponent, deltaTime, timeScale, instancedAbility);
		}

		::System::Void SetupLogicMovement(::Class_3_248DACE3BB3053DD* movementComponent, ::MoleMole::Battle::Entity* other, ::MoleMole::Battle::Entity* caster, ::Class_2_14986121AA61AD99* instancedAbility)
		{
			return ((::System::Void(*)(::PVOID, ::Class_3_248DACE3BB3053DD*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::Class_2_14986121AA61AD99*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGMOVEMENTSIMPLE_SETUPLOGICMOVEMENT_OFFSET))(this, movementComponent, other, caster, instancedAbility);
		}

		::System::Void ForeachRefTypeMember(::System::Action_1<::System::Object*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGMOVEMENTSIMPLE_FOREACHREFTYPEMEMBER_OFFSET))(this, callback);
		}

		::MoleMole::Config::ConfigMovement* Clone()
		{
			return ((::MoleMole::Config::ConfigMovement*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGMOVEMENTSIMPLE_CLONE_OFFSET))(this);
		}

		::System::Int32 GetHashNum()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGMOVEMENTSIMPLE_GETHASHNUM_OFFSET))(this);
		}

		::System::Boolean FromFlx(::FlexBuffers::FlxValue node)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGMOVEMENTSIMPLE_FROMFLX_OFFSET))(this, node);
		}

		::System::Boolean InternalFromFlx(::FlexBuffers::FlxMap node)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGMOVEMENTSIMPLE_INTERNALFROMFLX_OFFSET))(this, node);
		}

		static ::MoleMole::Config::ConfigMovementSimple* ParseFromFlx(::FlexBuffers::FlxValue node)
		{
			return ((::MoleMole::Config::ConfigMovementSimple*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGMOVEMENTSIMPLE_PARSEFROMFLX_OFFSET))(node);
		}

		::System::Boolean FromBinary(::Class_1_236FD73ABC492E3F* byteArray, ::System::Int32 threadFlag)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGMOVEMENTSIMPLE_FROMBINARY_OFFSET))(this, byteArray, threadFlag);
		}

		::System::Boolean InternalFromBinary(::Class_1_236FD73ABC492E3F* byteArray, ::System::Int32 threadFlag)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGMOVEMENTSIMPLE_INTERNALFROMBINARY_OFFSET))(this, byteArray, threadFlag);
		}

		static ::MoleMole::Config::ConfigMovementSimple* ParseFromBinary(::Class_1_236FD73ABC492E3F* byteArray, ::System::Int32 threadFlag)
		{
			return ((::MoleMole::Config::ConfigMovementSimple*(*)(::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGMOVEMENTSIMPLE_PARSEFROMBINARY_OFFSET))(byteArray, threadFlag);
		}

		::System::Void __base_SetupLogicMovement(::Class_3_248DACE3BB3053DD* P0, ::MoleMole::Battle::Entity* P1, ::MoleMole::Battle::Entity* P2, ::Class_2_14986121AA61AD99* P3)
		{
			return ((::System::Void(*)(::PVOID, ::Class_3_248DACE3BB3053DD*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::Class_2_14986121AA61AD99*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGMOVEMENTSIMPLE___BASE_SETUPLOGICMOVEMENT_OFFSET))(this, P0, P1, P2, P3);
		}
	};
}
