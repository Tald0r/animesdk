#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/Action.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/TaskStatus.h"
#include "unitysdk/MoleMole/AITargetType.h"

class Class_3_F33F9DC5F4112336;
namespace BehaviorDesigner::Runtime { class SharedBool; }
namespace BehaviorDesigner::Runtime { class SharedString; }
namespace MoleMole { class SharedGameEntity; }
namespace MoleMole::Battle { class Entity; }
namespace System::Collections { class IEnumerator; }

#define MOLEMOLE_SETBOOLPARAMETER_GETTARGETENTITY_OFFSET UNITYSDK_OFFSET(0x8A8AA30)
#define MOLEMOLE_SETBOOLPARAMETER_ONAWAKE_OFFSET UNITYSDK_OFFSET(0x8A8A8F0)
#define MOLEMOLE_SETBOOLPARAMETER_ONRESET_OFFSET UNITYSDK_OFFSET(0x8A8AEC0)
#define MOLEMOLE_SETBOOLPARAMETER_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x8A8AB40)
#define MOLEMOLE_SETBOOLPARAMETER_RESETVALUE_OFFSET UNITYSDK_OFFSET(0x8A8AE10)
#define MOLEMOLE_SETBOOLPARAMETER__CTOR_OFFSET UNITYSDK_OFFSET(0x8A8AFA0)
#define MOLEMOLE_SETBOOLPARAMETER___BASE_ONAWAKE_OFFSET UNITYSDK_OFFSET(0x8A8AFE0)
#define MOLEMOLE_SETBOOLPARAMETER___BASE_ONRESET_OFFSET UNITYSDK_OFFSET(0x8A8B070)
#define MOLEMOLE_SETBOOLPARAMETER___BASE_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x8A8B100)

namespace MoleMole
{
	inline static constexpr unsigned int SetBoolParameter_TypeDefinitionIndex = 53059;

	class SetBoolParameter : public ::BehaviorDesigner::Runtime::Tasks::Action
	{
	public:
		::BehaviorDesigner::Runtime::SharedString* paramaterName; // 0x58
		::BehaviorDesigner::Runtime::SharedString* CustomKey; // 0x60
		::BehaviorDesigner::Runtime::SharedBool* boolValue; // 0x68
		::MoleMole::Battle::Entity* ownerEntity; // 0x70
		::MoleMole::SharedGameEntity* SharedOwnerEntity; // 0x78
		::System::Boolean setOnce; // 0x80
		::System::Int32 hashID; // 0x84
		::MoleMole::AITargetType TargetType; // 0x88

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SETBOOLPARAMETER__CTOR_OFFSET))(this);
		}

		::System::Void OnAwake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SETBOOLPARAMETER_ONAWAKE_OFFSET))(this);
		}

		::MoleMole::Battle::Entity* GetTargetEntity()
		{
			return ((::MoleMole::Battle::Entity*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SETBOOLPARAMETER_GETTARGETENTITY_OFFSET))(this);
		}

		::BehaviorDesigner::Runtime::Tasks::TaskStatus OnUpdate()
		{
			return ((::BehaviorDesigner::Runtime::Tasks::TaskStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SETBOOLPARAMETER_ONUPDATE_OFFSET))(this);
		}

		::System::Collections::IEnumerator* ResetValue(::Class_3_F33F9DC5F4112336* animatorComponent, ::System::Boolean origVale)
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID, ::Class_3_F33F9DC5F4112336*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_SETBOOLPARAMETER_RESETVALUE_OFFSET))(this, animatorComponent, origVale);
		}

		::System::Void OnReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SETBOOLPARAMETER_ONRESET_OFFSET))(this);
		}

		::System::Void __base_OnAwake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SETBOOLPARAMETER___BASE_ONAWAKE_OFFSET))(this);
		}

		::System::Void __base_OnReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SETBOOLPARAMETER___BASE_ONRESET_OFFSET))(this);
		}

		::BehaviorDesigner::Runtime::Tasks::TaskStatus __base_OnUpdate()
		{
			return ((::BehaviorDesigner::Runtime::Tasks::TaskStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SETBOOLPARAMETER___BASE_ONUPDATE_OFFSET))(this);
		}
	};
}
