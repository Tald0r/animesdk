#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ConfigMovement.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_2_14986121AA61AD99;
class Class_3_248DACE3BB3053DD;
class Class_3_F35B080B137ECC46;
namespace MoleMole::Battle { class Entity; }

#define MOLEMOLE_CONFIG_CONFIGMOVEMENTFOLLOWPARTICLE_GETPOSITION_OFFSET UNITYSDK_OFFSET(0x918ED90)
#define MOLEMOLE_CONFIG_CONFIGMOVEMENTFOLLOWPARTICLE_PROCESSRIGIDBODY_OFFSET UNITYSDK_OFFSET(0x918EF10)
#define MOLEMOLE_CONFIG_CONFIGMOVEMENTFOLLOWPARTICLE_SETUPLOGICMOVEMENT_OFFSET UNITYSDK_OFFSET(0x918EC60)
#define MOLEMOLE_CONFIG_CONFIGMOVEMENTFOLLOWPARTICLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x918F3A0)
#define MOLEMOLE_CONFIG_CONFIGMOVEMENTFOLLOWPARTICLE__CTOR_OFFSET UNITYSDK_OFFSET(0x918F390)
#define MOLEMOLE_CONFIG_CONFIGMOVEMENTFOLLOWPARTICLE___BASE_SETUPLOGICMOVEMENT_OFFSET UNITYSDK_OFFSET(0x918F3D0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigMovementFollowParticle_TypeDefinitionIndex = 65853;

	class ConfigMovementFollowParticle : public ::MoleMole::Config::ConfigMovement
	{
	public:
		static ::MoleMole::Config::ConfigMovementFollowParticle** StaticGet_StaticMovementFollowParticle()
		{
			return (::MoleMole::Config::ConfigMovementFollowParticle**)Il2CppClass::FromTypeDefinitionIndex(ConfigMovementFollowParticle_TypeDefinitionIndex)->GetStaticField(0x3D020);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGMOVEMENTFOLLOWPARTICLE__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGMOVEMENTFOLLOWPARTICLE__CCTOR_OFFSET))();
		}

		::System::Void SetupLogicMovement(::Class_3_248DACE3BB3053DD* movementComponent, ::MoleMole::Battle::Entity* other, ::MoleMole::Battle::Entity* caster, ::Class_2_14986121AA61AD99* instancedAbility)
		{
			return ((::System::Void(*)(::PVOID, ::Class_3_248DACE3BB3053DD*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::Class_2_14986121AA61AD99*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGMOVEMENTFOLLOWPARTICLE_SETUPLOGICMOVEMENT_OFFSET))(this, movementComponent, other, caster, instancedAbility);
		}

		::UnityEngine::Vector3 GetPosition(::Class_3_F35B080B137ECC46* modelComponent, ::Class_3_248DACE3BB3053DD* movementComponent)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::Class_3_F35B080B137ECC46*, ::Class_3_248DACE3BB3053DD*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGMOVEMENTFOLLOWPARTICLE_GETPOSITION_OFFSET))(this, modelComponent, movementComponent);
		}

		::System::Void ProcessRigidbody(::Class_3_F35B080B137ECC46* modelComponent, ::Class_3_248DACE3BB3053DD* movementComponent, ::System::Single deltaTime, ::System::Single timeScale, ::Class_2_14986121AA61AD99* instancedAbility)
		{
			return ((::System::Void(*)(::PVOID, ::Class_3_F35B080B137ECC46*, ::Class_3_248DACE3BB3053DD*, ::System::Single, ::System::Single, ::Class_2_14986121AA61AD99*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGMOVEMENTFOLLOWPARTICLE_PROCESSRIGIDBODY_OFFSET))(this, modelComponent, movementComponent, deltaTime, timeScale, instancedAbility);
		}

		::System::Void __base_SetupLogicMovement(::Class_3_248DACE3BB3053DD* P0, ::MoleMole::Battle::Entity* P1, ::MoleMole::Battle::Entity* P2, ::Class_2_14986121AA61AD99* P3)
		{
			return ((::System::Void(*)(::PVOID, ::Class_3_248DACE3BB3053DD*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::Class_2_14986121AA61AD99*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGMOVEMENTFOLLOWPARTICLE___BASE_SETUPLOGICMOVEMENT_OFFSET))(this, P0, P1, P2, P3);
		}
	};
}
