#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/Action.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/TaskStatus.h"

class Class_3_AA6DF3A878195D3F;
class Class_3_F35B080B137ECC46;
namespace MoleMole { class SharedGameEntity; }
namespace MoleMole::Battle { class Entity; }
namespace MoleMole::Battle { class MonoSteerCamera; }

#define MOLEMOLE_STEERCAMERAUPDATE_ONAWAKE_OFFSET UNITYSDK_OFFSET(0x8A8C580)
#define MOLEMOLE_STEERCAMERAUPDATE_ONSTART_OFFSET UNITYSDK_OFFSET(0x8A8C810)
#define MOLEMOLE_STEERCAMERAUPDATE_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x8A8CAC0)
#define MOLEMOLE_STEERCAMERAUPDATE__CTOR_OFFSET UNITYSDK_OFFSET(0x8A8CB20)
#define MOLEMOLE_STEERCAMERAUPDATE___BASE_ONAWAKE_OFFSET UNITYSDK_OFFSET(0x8A8CB70)
#define MOLEMOLE_STEERCAMERAUPDATE___BASE_ONSTART_OFFSET UNITYSDK_OFFSET(0x8A8CC00)
#define MOLEMOLE_STEERCAMERAUPDATE___BASE_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x8A8CC90)

namespace MoleMole
{
	inline static constexpr unsigned int SteerCameraUpdate_TypeDefinitionIndex = 52890;

	class SteerCameraUpdate : public ::BehaviorDesigner::Runtime::Tasks::Action
	{
	public:
		::Class_3_AA6DF3A878195D3F* steerComponent; // 0x58
		::Class_3_F35B080B137ECC46* modelComponent; // 0x60
		::MoleMole::Battle::Entity* ownerEntity; // 0x68
		::MoleMole::Battle::MonoSteerCamera* monoSteer; // 0x70
		::MoleMole::SharedGameEntity* SharedOwnerEntity; // 0x78
		::System::Boolean Enable; // 0x80

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_STEERCAMERAUPDATE__CTOR_OFFSET))(this);
		}

		::System::Void OnAwake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_STEERCAMERAUPDATE_ONAWAKE_OFFSET))(this);
		}

		::System::Void OnStart()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_STEERCAMERAUPDATE_ONSTART_OFFSET))(this);
		}

		::BehaviorDesigner::Runtime::Tasks::TaskStatus OnUpdate()
		{
			return ((::BehaviorDesigner::Runtime::Tasks::TaskStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_STEERCAMERAUPDATE_ONUPDATE_OFFSET))(this);
		}

		::System::Void __base_OnAwake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_STEERCAMERAUPDATE___BASE_ONAWAKE_OFFSET))(this);
		}

		::System::Void __base_OnStart()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_STEERCAMERAUPDATE___BASE_ONSTART_OFFSET))(this);
		}

		::BehaviorDesigner::Runtime::Tasks::TaskStatus __base_OnUpdate()
		{
			return ((::BehaviorDesigner::Runtime::Tasks::TaskStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_STEERCAMERAUPDATE___BASE_ONUPDATE_OFFSET))(this);
		}
	};
}
