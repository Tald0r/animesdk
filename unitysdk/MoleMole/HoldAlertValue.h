#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/Action.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/TaskStatus.h"

class Class_4_E2880458FFC7DD8C;
namespace BehaviorDesigner::Runtime { class SharedBool; }
namespace MoleMole { class SharedGameEntity; }

#define MOLEMOLE_HOLDALERTVALUE_ONRESET_OFFSET UNITYSDK_OFFSET(0x7F0F5D0)
#define MOLEMOLE_HOLDALERTVALUE_ONSTART_OFFSET UNITYSDK_OFFSET(0x7F0F390)
#define MOLEMOLE_HOLDALERTVALUE_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x7F0F500)
#define MOLEMOLE_HOLDALERTVALUE__CTOR_OFFSET UNITYSDK_OFFSET(0x7F0F6A0)
#define MOLEMOLE_HOLDALERTVALUE___BASE_ONRESET_OFFSET UNITYSDK_OFFSET(0x7F0F6E0)
#define MOLEMOLE_HOLDALERTVALUE___BASE_ONSTART_OFFSET UNITYSDK_OFFSET(0x7F0F770)
#define MOLEMOLE_HOLDALERTVALUE___BASE_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x7F0F800)

namespace MoleMole
{
	inline static constexpr unsigned int HoldAlertValue_TypeDefinitionIndex = 37487;

	class HoldAlertValue : public ::BehaviorDesigner::Runtime::Tasks::Action
	{
	public:
		::Class_4_E2880458FFC7DD8C* _enterBattleComponent; // 0x58
		::MoleMole::SharedGameEntity* SharedOwnerEntity; // 0x60
		::BehaviorDesigner::Runtime::SharedBool* IsHold; // 0x68

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_HOLDALERTVALUE__CTOR_OFFSET))(this);
		}

		::System::Void OnStart()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_HOLDALERTVALUE_ONSTART_OFFSET))(this);
		}

		::BehaviorDesigner::Runtime::Tasks::TaskStatus OnUpdate()
		{
			return ((::BehaviorDesigner::Runtime::Tasks::TaskStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_HOLDALERTVALUE_ONUPDATE_OFFSET))(this);
		}

		::System::Void OnReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_HOLDALERTVALUE_ONRESET_OFFSET))(this);
		}

		::System::Void __base_OnReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_HOLDALERTVALUE___BASE_ONRESET_OFFSET))(this);
		}

		::System::Void __base_OnStart()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_HOLDALERTVALUE___BASE_ONSTART_OFFSET))(this);
		}

		::BehaviorDesigner::Runtime::Tasks::TaskStatus __base_OnUpdate()
		{
			return ((::BehaviorDesigner::Runtime::Tasks::TaskStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_HOLDALERTVALUE___BASE_ONUPDATE_OFFSET))(this);
		}
	};
}
