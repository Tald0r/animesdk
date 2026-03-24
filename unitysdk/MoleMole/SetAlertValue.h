#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/Action.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/TaskStatus.h"

class Class_4_E2880458FFC7DD8C;
namespace BehaviorDesigner::Runtime { class SharedFloat; }
namespace MoleMole { class SharedGameEntity; }

#define MOLEMOLE_SETALERTVALUE_ONRESET_OFFSET UNITYSDK_OFFSET(0x7AA0AA0)
#define MOLEMOLE_SETALERTVALUE_ONSTART_OFFSET UNITYSDK_OFFSET(0x7AA0860)
#define MOLEMOLE_SETALERTVALUE_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x7AA09D0)
#define MOLEMOLE_SETALERTVALUE__CTOR_OFFSET UNITYSDK_OFFSET(0x7AA0B10)
#define MOLEMOLE_SETALERTVALUE___BASE_ONRESET_OFFSET UNITYSDK_OFFSET(0x7AA0B50)
#define MOLEMOLE_SETALERTVALUE___BASE_ONSTART_OFFSET UNITYSDK_OFFSET(0x7AA0BE0)
#define MOLEMOLE_SETALERTVALUE___BASE_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x7AA0C70)

namespace MoleMole
{
	inline static constexpr unsigned int SetAlertValue_TypeDefinitionIndex = 80965;

	class SetAlertValue : public ::BehaviorDesigner::Runtime::Tasks::Action
	{
	public:
		::Class_4_E2880458FFC7DD8C* _enterBattleComponent; // 0x58
		::BehaviorDesigner::Runtime::SharedFloat* TargetSharedValue; // 0x60
		::MoleMole::SharedGameEntity* SharedOwnerEntity; // 0x68

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SETALERTVALUE__CTOR_OFFSET))(this);
		}

		::System::Void OnStart()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SETALERTVALUE_ONSTART_OFFSET))(this);
		}

		::BehaviorDesigner::Runtime::Tasks::TaskStatus OnUpdate()
		{
			return ((::BehaviorDesigner::Runtime::Tasks::TaskStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SETALERTVALUE_ONUPDATE_OFFSET))(this);
		}

		::System::Void OnReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SETALERTVALUE_ONRESET_OFFSET))(this);
		}

		::System::Void __base_OnReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SETALERTVALUE___BASE_ONRESET_OFFSET))(this);
		}

		::System::Void __base_OnStart()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SETALERTVALUE___BASE_ONSTART_OFFSET))(this);
		}

		::BehaviorDesigner::Runtime::Tasks::TaskStatus __base_OnUpdate()
		{
			return ((::BehaviorDesigner::Runtime::Tasks::TaskStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SETALERTVALUE___BASE_ONUPDATE_OFFSET))(this);
		}
	};
}
