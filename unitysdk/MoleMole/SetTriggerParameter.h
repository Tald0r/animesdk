#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/Action.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/TaskStatus.h"

class Class_3_F33F9DC5F4112336;
namespace BehaviorDesigner::Runtime { class SharedString; }
namespace MoleMole { class SharedGameEntity; }
namespace MoleMole::Battle { class Entity; }
namespace System::Collections { class IEnumerator; }

#define MOLEMOLE_SETTRIGGERPARAMETER_ONAWAKE_OFFSET UNITYSDK_OFFSET(0x8C94550)
#define MOLEMOLE_SETTRIGGERPARAMETER_ONRESET_OFFSET UNITYSDK_OFFSET(0x8C94910)
#define MOLEMOLE_SETTRIGGERPARAMETER_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x8C94740)
#define MOLEMOLE_SETTRIGGERPARAMETER_RESETVALUE_OFFSET UNITYSDK_OFFSET(0x8C94870)
#define MOLEMOLE_SETTRIGGERPARAMETER__CTOR_OFFSET UNITYSDK_OFFSET(0x8C94990)
#define MOLEMOLE_SETTRIGGERPARAMETER___BASE_ONAWAKE_OFFSET UNITYSDK_OFFSET(0x8C949D0)
#define MOLEMOLE_SETTRIGGERPARAMETER___BASE_ONRESET_OFFSET UNITYSDK_OFFSET(0x8C94A60)
#define MOLEMOLE_SETTRIGGERPARAMETER___BASE_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x8C94AF0)

namespace MoleMole
{
	inline static constexpr unsigned int SetTriggerParameter_TypeDefinitionIndex = 43110;

	class SetTriggerParameter : public ::BehaviorDesigner::Runtime::Tasks::Action
	{
	public:
		::MoleMole::SharedGameEntity* SharedOwnerEntity; // 0x58
		::Class_3_F33F9DC5F4112336* animatorComponent; // 0x60
		::BehaviorDesigner::Runtime::SharedString* paramaterName; // 0x68
		::MoleMole::Battle::Entity* ownerEntity; // 0x70
		::System::Int32 hashID; // 0x78

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SETTRIGGERPARAMETER__CTOR_OFFSET))(this);
		}

		::System::Void OnAwake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SETTRIGGERPARAMETER_ONAWAKE_OFFSET))(this);
		}

		::BehaviorDesigner::Runtime::Tasks::TaskStatus OnUpdate()
		{
			return ((::BehaviorDesigner::Runtime::Tasks::TaskStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SETTRIGGERPARAMETER_ONUPDATE_OFFSET))(this);
		}

		::System::Collections::IEnumerator* ResetValue(::System::Boolean origVale)
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_SETTRIGGERPARAMETER_RESETVALUE_OFFSET))(this, origVale);
		}

		::System::Void OnReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SETTRIGGERPARAMETER_ONRESET_OFFSET))(this);
		}

		::System::Void __base_OnAwake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SETTRIGGERPARAMETER___BASE_ONAWAKE_OFFSET))(this);
		}

		::System::Void __base_OnReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SETTRIGGERPARAMETER___BASE_ONRESET_OFFSET))(this);
		}

		::BehaviorDesigner::Runtime::Tasks::TaskStatus __base_OnUpdate()
		{
			return ((::BehaviorDesigner::Runtime::Tasks::TaskStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SETTRIGGERPARAMETER___BASE_ONUPDATE_OFFSET))(this);
		}
	};
}
