#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ConfigMovement.h"

class Class_2_14986121AA61AD99;
class Class_3_248DACE3BB3053DD;
class Class_3_F35B080B137ECC46;
namespace MoleMole::Battle { class Entity; }

#define MOLEMOLE_DYNAMICMOVECONFIG_CONFIGMOVEMENTDYNAMICPROXY_GET_INS_OFFSET UNITYSDK_OFFSET(0x6E06F50)
#define MOLEMOLE_DYNAMICMOVECONFIG_CONFIGMOVEMENTDYNAMICPROXY_PROCESSRIGIDBODY_OFFSET UNITYSDK_OFFSET(0x6E07080)
#define MOLEMOLE_DYNAMICMOVECONFIG_CONFIGMOVEMENTDYNAMICPROXY_SETUPLOGICMOVEMENT_OFFSET UNITYSDK_OFFSET(0x6E06FC0)
#define MOLEMOLE_DYNAMICMOVECONFIG_CONFIGMOVEMENTDYNAMICPROXY__CCTOR_OFFSET UNITYSDK_OFFSET(0x6E07190)
#define MOLEMOLE_DYNAMICMOVECONFIG_CONFIGMOVEMENTDYNAMICPROXY__CTOR_OFFSET UNITYSDK_OFFSET(0x6E06F40)
#define MOLEMOLE_DYNAMICMOVECONFIG_CONFIGMOVEMENTDYNAMICPROXY___BASE_SETUPLOGICMOVEMENT_OFFSET UNITYSDK_OFFSET(0x6E071A0)

namespace MoleMole::DynamicMoveConfig
{
	inline static constexpr unsigned int ConfigMovementDynamicProxy_TypeDefinitionIndex = 61654;

	class ConfigMovementDynamicProxy : public ::MoleMole::Config::ConfigMovement
	{
	public:
		static ::MoleMole::DynamicMoveConfig::ConfigMovementDynamicProxy** StaticGet__ins()
		{
			return (::MoleMole::DynamicMoveConfig::ConfigMovementDynamicProxy**)Il2CppClass::FromTypeDefinitionIndex(ConfigMovementDynamicProxy_TypeDefinitionIndex)->GetStaticField(0x44A30);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_DYNAMICMOVECONFIG_CONFIGMOVEMENTDYNAMICPROXY__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_DYNAMICMOVECONFIG_CONFIGMOVEMENTDYNAMICPROXY__CCTOR_OFFSET))();
		}

		static ::MoleMole::DynamicMoveConfig::ConfigMovementDynamicProxy* get_Ins()
		{
			return ((::MoleMole::DynamicMoveConfig::ConfigMovementDynamicProxy*(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_DYNAMICMOVECONFIG_CONFIGMOVEMENTDYNAMICPROXY_GET_INS_OFFSET))();
		}

		::System::Void SetupLogicMovement(::Class_3_248DACE3BB3053DD* movementComponent, ::MoleMole::Battle::Entity* other, ::MoleMole::Battle::Entity* caster, ::Class_2_14986121AA61AD99* instancedAbility)
		{
			return ((::System::Void(*)(::PVOID, ::Class_3_248DACE3BB3053DD*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::Class_2_14986121AA61AD99*))((::PBYTE)hIl2Cpp + MOLEMOLE_DYNAMICMOVECONFIG_CONFIGMOVEMENTDYNAMICPROXY_SETUPLOGICMOVEMENT_OFFSET))(this, movementComponent, other, caster, instancedAbility);
		}

		::System::Void ProcessRigidbody(::Class_3_F35B080B137ECC46* modelComponent, ::Class_3_248DACE3BB3053DD* movementComponent, ::System::Single deltaTime, ::System::Single timeScale, ::Class_2_14986121AA61AD99* instancedAbility)
		{
			return ((::System::Void(*)(::PVOID, ::Class_3_F35B080B137ECC46*, ::Class_3_248DACE3BB3053DD*, ::System::Single, ::System::Single, ::Class_2_14986121AA61AD99*))((::PBYTE)hIl2Cpp + MOLEMOLE_DYNAMICMOVECONFIG_CONFIGMOVEMENTDYNAMICPROXY_PROCESSRIGIDBODY_OFFSET))(this, modelComponent, movementComponent, deltaTime, timeScale, instancedAbility);
		}

		::System::Void __base_SetupLogicMovement(::Class_3_248DACE3BB3053DD* P0, ::MoleMole::Battle::Entity* P1, ::MoleMole::Battle::Entity* P2, ::Class_2_14986121AA61AD99* P3)
		{
			return ((::System::Void(*)(::PVOID, ::Class_3_248DACE3BB3053DD*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::Class_2_14986121AA61AD99*))((::PBYTE)hIl2Cpp + MOLEMOLE_DYNAMICMOVECONFIG_CONFIGMOVEMENTDYNAMICPROXY___BASE_SETUPLOGICMOVEMENT_OFFSET))(this, P0, P1, P2, P3);
		}
	};
}
