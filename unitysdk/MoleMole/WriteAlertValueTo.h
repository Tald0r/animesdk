#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/Action.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/TaskStatus.h"

class Class_4_E2880458FFC7DD8C;
namespace BehaviorDesigner::Runtime { class SharedFloat; }
namespace MoleMole { class SharedGameEntity; }

#define MOLEMOLE_WRITEALERTVALUETO_ONRESET_OFFSET UNITYSDK_OFFSET(0x7BEE540)
#define MOLEMOLE_WRITEALERTVALUETO_ONSTART_OFFSET UNITYSDK_OFFSET(0x7BEE340)
#define MOLEMOLE_WRITEALERTVALUETO_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x7BEE4B0)
#define MOLEMOLE_WRITEALERTVALUETO__CTOR_OFFSET UNITYSDK_OFFSET(0x7BEE5B0)
#define MOLEMOLE_WRITEALERTVALUETO___BASE_ONRESET_OFFSET UNITYSDK_OFFSET(0x7BEE5F0)
#define MOLEMOLE_WRITEALERTVALUETO___BASE_ONSTART_OFFSET UNITYSDK_OFFSET(0x7BEE680)
#define MOLEMOLE_WRITEALERTVALUETO___BASE_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x7BEE710)

namespace MoleMole
{
	inline static constexpr unsigned int WriteAlertValueTo_TypeDefinitionIndex = 39065;

	class WriteAlertValueTo : public ::BehaviorDesigner::Runtime::Tasks::Action
	{
	public:
		::MoleMole::SharedGameEntity* SharedOwnerEntity; // 0x58
		::BehaviorDesigner::Runtime::SharedFloat* TargetSharedValue; // 0x60
		::Class_4_E2880458FFC7DD8C* _enterBattleComponent; // 0x68

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_WRITEALERTVALUETO__CTOR_OFFSET))(this);
		}

		::System::Void OnStart()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_WRITEALERTVALUETO_ONSTART_OFFSET))(this);
		}

		::BehaviorDesigner::Runtime::Tasks::TaskStatus OnUpdate()
		{
			return ((::BehaviorDesigner::Runtime::Tasks::TaskStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_WRITEALERTVALUETO_ONUPDATE_OFFSET))(this);
		}

		::System::Void OnReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_WRITEALERTVALUETO_ONRESET_OFFSET))(this);
		}

		::System::Void __base_OnReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_WRITEALERTVALUETO___BASE_ONRESET_OFFSET))(this);
		}

		::System::Void __base_OnStart()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_WRITEALERTVALUETO___BASE_ONSTART_OFFSET))(this);
		}

		::BehaviorDesigner::Runtime::Tasks::TaskStatus __base_OnUpdate()
		{
			return ((::BehaviorDesigner::Runtime::Tasks::TaskStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_WRITEALERTVALUETO___BASE_ONUPDATE_OFFSET))(this);
		}
	};
}
