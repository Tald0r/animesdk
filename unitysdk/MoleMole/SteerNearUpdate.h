#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/Action.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/TaskStatus.h"

class Class_3_AA6DF3A878195D3F;
class Class_3_F35B080B137ECC46;
namespace BehaviorDesigner::Runtime { class SharedFloat; }
namespace MoleMole { class SharedGameEntity; }
namespace MoleMole::Battle { class Entity; }
namespace MoleMole::Battle { class MonoSteerNear; }

#define MOLEMOLE_STEERNEARUPDATE_ONAWAKE_OFFSET UNITYSDK_OFFSET(0x7AA10C0)
#define MOLEMOLE_STEERNEARUPDATE_ONSTART_OFFSET UNITYSDK_OFFSET(0x7AA13B0)
#define MOLEMOLE_STEERNEARUPDATE_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x7AA17F0)
#define MOLEMOLE_STEERNEARUPDATE__CTOR_OFFSET UNITYSDK_OFFSET(0x7AA1850)
#define MOLEMOLE_STEERNEARUPDATE___BASE_ONAWAKE_OFFSET UNITYSDK_OFFSET(0x7AA18C0)
#define MOLEMOLE_STEERNEARUPDATE___BASE_ONSTART_OFFSET UNITYSDK_OFFSET(0x7AA1950)
#define MOLEMOLE_STEERNEARUPDATE___BASE_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x7AA19E0)

namespace MoleMole
{
	inline static constexpr unsigned int SteerNearUpdate_TypeDefinitionIndex = 61999;

	class SteerNearUpdate : public ::BehaviorDesigner::Runtime::Tasks::Action
	{
	public:
		::BehaviorDesigner::Runtime::SharedFloat* MaxDistance; // 0x58
		::BehaviorDesigner::Runtime::SharedFloat* MinDistance; // 0x60
		::Class_3_AA6DF3A878195D3F* steerComponent; // 0x68
		::MoleMole::Battle::MonoSteerNear* monoSteer; // 0x70
		::Class_3_F35B080B137ECC46* modelComponent; // 0x78
		::MoleMole::Battle::Entity* ownerEntity; // 0x80
		::MoleMole::SharedGameEntity* SharedOwnerEntity; // 0x88
		::System::Boolean Enable; // 0x90

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_STEERNEARUPDATE__CTOR_OFFSET))(this);
		}

		::System::Void OnAwake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_STEERNEARUPDATE_ONAWAKE_OFFSET))(this);
		}

		::System::Void OnStart()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_STEERNEARUPDATE_ONSTART_OFFSET))(this);
		}

		::BehaviorDesigner::Runtime::Tasks::TaskStatus OnUpdate()
		{
			return ((::BehaviorDesigner::Runtime::Tasks::TaskStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_STEERNEARUPDATE_ONUPDATE_OFFSET))(this);
		}

		::System::Void __base_OnAwake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_STEERNEARUPDATE___BASE_ONAWAKE_OFFSET))(this);
		}

		::System::Void __base_OnStart()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_STEERNEARUPDATE___BASE_ONSTART_OFFSET))(this);
		}

		::BehaviorDesigner::Runtime::Tasks::TaskStatus __base_OnUpdate()
		{
			return ((::BehaviorDesigner::Runtime::Tasks::TaskStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_STEERNEARUPDATE___BASE_ONUPDATE_OFFSET))(this);
		}
	};
}
