#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/Action.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/TaskStatus.h"

class Class_3_AA6DF3A878195D3F;
class Class_3_F35B080B137ECC46;
namespace MoleMole { class SharedGameEntity; }
namespace MoleMole::Battle { class Entity; }
namespace MoleMole::Battle { class MonoSteerGather; }

#define MOLEMOLE_STEERGATHERUPDATE_ONAWAKE_OFFSET UNITYSDK_OFFSET(0x8A8CD20)
#define MOLEMOLE_STEERGATHERUPDATE_ONSTART_OFFSET UNITYSDK_OFFSET(0x8A8CFB0)
#define MOLEMOLE_STEERGATHERUPDATE_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x8A8D260)
#define MOLEMOLE_STEERGATHERUPDATE__CTOR_OFFSET UNITYSDK_OFFSET(0x8A8D2C0)
#define MOLEMOLE_STEERGATHERUPDATE___BASE_ONAWAKE_OFFSET UNITYSDK_OFFSET(0x8A8D310)
#define MOLEMOLE_STEERGATHERUPDATE___BASE_ONSTART_OFFSET UNITYSDK_OFFSET(0x8A8D3A0)
#define MOLEMOLE_STEERGATHERUPDATE___BASE_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x8A8D430)

namespace MoleMole
{
	inline static constexpr unsigned int SteerGatherUpdate_TypeDefinitionIndex = 44600;

	class SteerGatherUpdate : public ::BehaviorDesigner::Runtime::Tasks::Action
	{
	public:
		::Class_3_AA6DF3A878195D3F* steerComponent; // 0x58
		::MoleMole::Battle::MonoSteerGather* monoSteer; // 0x60
		::Class_3_F35B080B137ECC46* modelComponent; // 0x68
		::MoleMole::SharedGameEntity* SharedOwnerEntity; // 0x70
		::MoleMole::Battle::Entity* ownerEntity; // 0x78
		::System::Boolean Enable; // 0x80

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_STEERGATHERUPDATE__CTOR_OFFSET))(this);
		}

		::System::Void OnAwake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_STEERGATHERUPDATE_ONAWAKE_OFFSET))(this);
		}

		::System::Void OnStart()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_STEERGATHERUPDATE_ONSTART_OFFSET))(this);
		}

		::BehaviorDesigner::Runtime::Tasks::TaskStatus OnUpdate()
		{
			return ((::BehaviorDesigner::Runtime::Tasks::TaskStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_STEERGATHERUPDATE_ONUPDATE_OFFSET))(this);
		}

		::System::Void __base_OnAwake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_STEERGATHERUPDATE___BASE_ONAWAKE_OFFSET))(this);
		}

		::System::Void __base_OnStart()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_STEERGATHERUPDATE___BASE_ONSTART_OFFSET))(this);
		}

		::BehaviorDesigner::Runtime::Tasks::TaskStatus __base_OnUpdate()
		{
			return ((::BehaviorDesigner::Runtime::Tasks::TaskStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_STEERGATHERUPDATE___BASE_ONUPDATE_OFFSET))(this);
		}
	};
}
