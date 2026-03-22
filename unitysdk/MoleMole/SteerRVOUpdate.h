#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/Action.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/TaskStatus.h"

class Class_3_883FBE6CFFAC5DA2;
class Class_3_AA6DF3A878195D3F;
class Class_3_F35B080B137ECC46;
namespace MoleMole { class SharedGameEntity; }
namespace MoleMole::Battle { class Entity; }
namespace MoleMole::Battle { class MonoSteerRVO; }

#define MOLEMOLE_STEERRVOUPDATE_ONAWAKE_OFFSET UNITYSDK_OFFSET(0x7F278B0)
#define MOLEMOLE_STEERRVOUPDATE_ONSTART_OFFSET UNITYSDK_OFFSET(0x7F27C00)
#define MOLEMOLE_STEERRVOUPDATE_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x7F27ED0)
#define MOLEMOLE_STEERRVOUPDATE__CTOR_OFFSET UNITYSDK_OFFSET(0x7F27F30)
#define MOLEMOLE_STEERRVOUPDATE___BASE_ONAWAKE_OFFSET UNITYSDK_OFFSET(0x7F27F80)
#define MOLEMOLE_STEERRVOUPDATE___BASE_ONSTART_OFFSET UNITYSDK_OFFSET(0x7F28010)
#define MOLEMOLE_STEERRVOUPDATE___BASE_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x7F280A0)

namespace MoleMole
{
	inline static constexpr unsigned int SteerRVOUpdate_TypeDefinitionIndex = 65002;

	class SteerRVOUpdate : public ::BehaviorDesigner::Runtime::Tasks::Action
	{
	public:
		::Class_3_AA6DF3A878195D3F* steerComponent; // 0x58
		::Class_3_F35B080B137ECC46* modelComponent; // 0x60
		::MoleMole::Battle::Entity* ownerEntity; // 0x68
		::Class_3_883FBE6CFFAC5DA2* rvoComponent; // 0x70
		::MoleMole::Battle::MonoSteerRVO* monoRVO; // 0x78
		::MoleMole::SharedGameEntity* SharedOwnerEntity; // 0x80
		::System::Boolean Enable; // 0x88

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_STEERRVOUPDATE__CTOR_OFFSET))(this);
		}

		::System::Void OnAwake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_STEERRVOUPDATE_ONAWAKE_OFFSET))(this);
		}

		::System::Void OnStart()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_STEERRVOUPDATE_ONSTART_OFFSET))(this);
		}

		::BehaviorDesigner::Runtime::Tasks::TaskStatus OnUpdate()
		{
			return ((::BehaviorDesigner::Runtime::Tasks::TaskStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_STEERRVOUPDATE_ONUPDATE_OFFSET))(this);
		}

		::System::Void __base_OnAwake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_STEERRVOUPDATE___BASE_ONAWAKE_OFFSET))(this);
		}

		::System::Void __base_OnStart()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_STEERRVOUPDATE___BASE_ONSTART_OFFSET))(this);
		}

		::BehaviorDesigner::Runtime::Tasks::TaskStatus __base_OnUpdate()
		{
			return ((::BehaviorDesigner::Runtime::Tasks::TaskStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_STEERRVOUPDATE___BASE_ONUPDATE_OFFSET))(this);
		}
	};
}
