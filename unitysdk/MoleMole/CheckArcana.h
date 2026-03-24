#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/Conditional.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/TaskStatus.h"
#include "unitysdk/MoleMole/Config/ArcanaType.h"

class Class_3_F97B015544BE936B;
namespace MoleMole { class SharedGameEntity; }
namespace MoleMole::Battle { class Entity; }

#define MOLEMOLE_CHECKARCANA_ONAWAKE_OFFSET UNITYSDK_OFFSET(0xB07C4A0)
#define MOLEMOLE_CHECKARCANA_ONUPDATE_OFFSET UNITYSDK_OFFSET(0xB07C690)
#define MOLEMOLE_CHECKARCANA__CTOR_OFFSET UNITYSDK_OFFSET(0xB07C760)
#define MOLEMOLE_CHECKARCANA___BASE_ONAWAKE_OFFSET UNITYSDK_OFFSET(0xB07C7A0)
#define MOLEMOLE_CHECKARCANA___BASE_ONUPDATE_OFFSET UNITYSDK_OFFSET(0xB07C830)

namespace MoleMole
{
	inline static constexpr unsigned int CheckArcana_TypeDefinitionIndex = 74813;

	class CheckArcana : public ::BehaviorDesigner::Runtime::Tasks::Conditional
	{
	public:
		::MoleMole::Battle::Entity* _ownerEntity; // 0x50
		::MoleMole::SharedGameEntity* sharedOwnerEntity; // 0x58
		::Class_3_F97B015544BE936B* dataComponent; // 0x60
		::MoleMole::Config::ArcanaType Type; // 0x68
		::System::Int32 Position; // 0x6C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CHECKARCANA__CTOR_OFFSET))(this);
		}

		::System::Void OnAwake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CHECKARCANA_ONAWAKE_OFFSET))(this);
		}

		::BehaviorDesigner::Runtime::Tasks::TaskStatus OnUpdate()
		{
			return ((::BehaviorDesigner::Runtime::Tasks::TaskStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CHECKARCANA_ONUPDATE_OFFSET))(this);
		}

		::System::Void __base_OnAwake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CHECKARCANA___BASE_ONAWAKE_OFFSET))(this);
		}

		::BehaviorDesigner::Runtime::Tasks::TaskStatus __base_OnUpdate()
		{
			return ((::BehaviorDesigner::Runtime::Tasks::TaskStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CHECKARCANA___BASE_ONUPDATE_OFFSET))(this);
		}
	};
}
