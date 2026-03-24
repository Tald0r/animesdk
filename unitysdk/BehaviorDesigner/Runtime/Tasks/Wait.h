#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/ContinuesTickAction.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/TaskStatus.h"
#include "unitysdk/MoleMole/Config/Boolean.h"

class Class_2_9DAFE6A077A11AC9;
class Class_3_750DA0E74FE20AAE;
namespace BehaviorDesigner::Runtime { class SharedBool; }
namespace BehaviorDesigner::Runtime { class SharedFloat; }

#define BEHAVIORDESIGNER_RUNTIME_TASKS_WAIT_ALLOCATECONTINUESTICKTASK_OFFSET UNITYSDK_OFFSET(0x7677C40)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_WAIT_DEALLOCATECONTINUESTICKTASK_OFFSET UNITYSDK_OFFSET(0x7677D70)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_WAIT_ONAWAKE_OFFSET UNITYSDK_OFFSET(0x7677780)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_WAIT_ONEND_OFFSET UNITYSDK_OFFSET(0x7678510)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_WAIT_ONPAUSE_OFFSET UNITYSDK_OFFSET(0x7678250)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_WAIT_ONRESET_OFFSET UNITYSDK_OFFSET(0x76783F0)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_WAIT_ONSTART_OFFSET UNITYSDK_OFFSET(0x76779A0)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_WAIT_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x7677F00)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_WAIT__CTOR_OFFSET UNITYSDK_OFFSET(0x7678580)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_WAIT___BASE_ONAWAKE_OFFSET UNITYSDK_OFFSET(0x76786C0)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_WAIT___BASE_ONEND_OFFSET UNITYSDK_OFFSET(0x7678750)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_WAIT___BASE_ONPAUSE_OFFSET UNITYSDK_OFFSET(0x76787E0)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_WAIT___BASE_ONRESET_OFFSET UNITYSDK_OFFSET(0x7678870)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_WAIT___BASE_ONSTART_OFFSET UNITYSDK_OFFSET(0x7678900)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_WAIT___BASE_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x7678990)

namespace BehaviorDesigner::Runtime::Tasks
{
	inline static constexpr unsigned int Wait_TypeDefinitionIndex = 38743;

	class Wait : public ::BehaviorDesigner::Runtime::Tasks::ContinuesTickAction
	{
	public:
		::BehaviorDesigner::Runtime::SharedFloat* randomWaitMax; // 0x58
		::BehaviorDesigner::Runtime::SharedBool* randomWait; // 0x60
		::BehaviorDesigner::Runtime::SharedFloat* randomWaitMin; // 0x68
		::BehaviorDesigner::Runtime::SharedFloat* waitTime; // 0x70
		::Class_2_9DAFE6A077A11AC9* waitTask; // 0x78
		::Class_3_750DA0E74FE20AAE* _aiCharacter; // 0x80
		::MoleMole::Config::Boolean IgnoreTimeScale; // 0x88
		::System::Single waitDuration; // 0x8C
		::System::Single startTime; // 0x90
		::System::Single pauseTime; // 0x94

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_WAIT__CTOR_OFFSET))(this);
		}

		::System::Void OnAwake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_WAIT_ONAWAKE_OFFSET))(this);
		}

		::System::Void OnStart()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_WAIT_ONSTART_OFFSET))(this);
		}

		::System::Void AllocateContinuesTickTask()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_WAIT_ALLOCATECONTINUESTICKTASK_OFFSET))(this);
		}

		::System::Void DeAllocateContinuesTickTask()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_WAIT_DEALLOCATECONTINUESTICKTASK_OFFSET))(this);
		}

		::BehaviorDesigner::Runtime::Tasks::TaskStatus OnUpdate()
		{
			return ((::BehaviorDesigner::Runtime::Tasks::TaskStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_WAIT_ONUPDATE_OFFSET))(this);
		}

		::System::Void OnPause(::System::Boolean paused)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_WAIT_ONPAUSE_OFFSET))(this, paused);
		}

		::System::Void OnReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_WAIT_ONRESET_OFFSET))(this);
		}

		::System::Void OnEnd()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_WAIT_ONEND_OFFSET))(this);
		}

		::System::Void __base_OnAwake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_WAIT___BASE_ONAWAKE_OFFSET))(this);
		}

		::System::Void __base_OnEnd()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_WAIT___BASE_ONEND_OFFSET))(this);
		}

		::System::Void __base_OnPause(::System::Boolean P0)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_WAIT___BASE_ONPAUSE_OFFSET))(this, P0);
		}

		::System::Void __base_OnReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_WAIT___BASE_ONRESET_OFFSET))(this);
		}

		::System::Void __base_OnStart()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_WAIT___BASE_ONSTART_OFFSET))(this);
		}

		::BehaviorDesigner::Runtime::Tasks::TaskStatus __base_OnUpdate()
		{
			return ((::BehaviorDesigner::Runtime::Tasks::TaskStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_WAIT___BASE_ONUPDATE_OFFSET))(this);
		}
	};
}
