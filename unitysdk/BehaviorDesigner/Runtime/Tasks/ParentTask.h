#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/Task.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/TaskStatus.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define BEHAVIORDESIGNER_RUNTIME_TASKS_PARENTTASK_ADDCHILD_OFFSET UNITYSDK_OFFSET(0x1B330360)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_PARENTTASK_CANEXECUTE_OFFSET UNITYSDK_OFFSET(0x1B32FAD0)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_PARENTTASK_CANREEVALUATE_OFFSET UNITYSDK_OFFSET(0x1B3300E0)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_PARENTTASK_CANRUNPARALLELCHILDREN_OFFSET UNITYSDK_OFFSET(0x1B32FB50)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_PARENTTASK_CURRENTCHILDINDEX_OFFSET UNITYSDK_OFFSET(0x1B32FBD0)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_PARENTTASK_DECORATE_OFFSET UNITYSDK_OFFSET(0x1B330090)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_PARENTTASK_FINALOVERRIDE_OFFSET UNITYSDK_OFFSET(0x1B330040)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_PARENTTASK_GETUTILITY_OFFSET UNITYSDK_OFFSET(0x1B330200)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_PARENTTASK_GET_CHILDREN_OFFSET UNITYSDK_OFFSET(0x1B32FFD0)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_PARENTTASK_GET_PROXYCHILDREN_OFFSET UNITYSDK_OFFSET(0x1B32FFB0)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_PARENTTASK_MAXCHILDREN_OFFSET UNITYSDK_OFFSET(0x1B32FFF0)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_PARENTTASK_ONCHILDEXECUTED_1_OFFSET UNITYSDK_OFFSET(0x1B32FCF0)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_PARENTTASK_ONCHILDEXECUTED_OFFSET UNITYSDK_OFFSET(0x1B330120)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_PARENTTASK_ONCHILDSTARTED_1_OFFSET UNITYSDK_OFFSET(0x1B32FD90)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_PARENTTASK_ONCHILDSTARTED_OFFSET UNITYSDK_OFFSET(0x1B330170)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_PARENTTASK_ONCONDITIONALABORT_OFFSET UNITYSDK_OFFSET(0x1B32FE30)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_PARENTTASK_ONDRAWGIZMOS_OFFSET UNITYSDK_OFFSET(0x1B3302C0)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_PARENTTASK_OVERRIDESTATUS_1_OFFSET UNITYSDK_OFFSET(0x1B3301B0)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_PARENTTASK_OVERRIDESTATUS_OFFSET UNITYSDK_OFFSET(0x1B32FF60)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_PARENTTASK_REPLACEADDCHILD_OFFSET UNITYSDK_OFFSET(0x1B330420)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_PARENTTASK_SET_CHILDREN_OFFSET UNITYSDK_OFFSET(0x1B32FFE0)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_PARENTTASK_SET_PROXYCHILDREN_OFFSET UNITYSDK_OFFSET(0x1B32FFC0)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_PARENTTASK__CTOR_OFFSET UNITYSDK_OFFSET(0x1B3304D0)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_PARENTTASK___BASE_GETUTILITY_OFFSET UNITYSDK_OFFSET(0x1B330510)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_PARENTTASK___BASE_ONDRAWGIZMOS_OFFSET UNITYSDK_OFFSET(0x1B3305A0)

namespace BehaviorDesigner::Runtime::Tasks
{
	inline static constexpr unsigned int ParentTask_TypeDefinitionIndex = 31226;

	class ParentTask : public ::BehaviorDesigner::Runtime::Tasks::Task
	{
	public:
		::System::Collections::Generic::List_1<::BehaviorDesigner::Runtime::Tasks::Task*>* children; // 0x50

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_PARENTTASK__CTOR_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::BehaviorDesigner::Runtime::Tasks::Task*>* get_Proxychildren()
		{
			return ((::System::Collections::Generic::List_1<::BehaviorDesigner::Runtime::Tasks::Task*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_PARENTTASK_GET_PROXYCHILDREN_OFFSET))(this);
		}

		::System::Void set_Proxychildren(::System::Collections::Generic::List_1<::BehaviorDesigner::Runtime::Tasks::Task*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::BehaviorDesigner::Runtime::Tasks::Task*>*))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_PARENTTASK_SET_PROXYCHILDREN_OFFSET))(this, value);
		}

		::System::Collections::Generic::List_1<::BehaviorDesigner::Runtime::Tasks::Task*>* get_Children()
		{
			return ((::System::Collections::Generic::List_1<::BehaviorDesigner::Runtime::Tasks::Task*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_PARENTTASK_GET_CHILDREN_OFFSET))(this);
		}

		::System::Void set_Children(::System::Collections::Generic::List_1<::BehaviorDesigner::Runtime::Tasks::Task*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::BehaviorDesigner::Runtime::Tasks::Task*>*))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_PARENTTASK_SET_CHILDREN_OFFSET))(this, value);
		}

		::System::Int32 MaxChildren()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_PARENTTASK_MAXCHILDREN_OFFSET))(this);
		}

		::System::Boolean CanRunParallelChildren()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_PARENTTASK_CANRUNPARALLELCHILDREN_OFFSET))(this);
		}

		::System::Int32 CurrentChildIndex()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_PARENTTASK_CURRENTCHILDINDEX_OFFSET))(this);
		}

		::System::Boolean CanExecute()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_PARENTTASK_CANEXECUTE_OFFSET))(this);
		}

		::BehaviorDesigner::Runtime::Tasks::TaskStatus FinalOverride(::BehaviorDesigner::Runtime::Tasks::TaskStatus status)
		{
			return ((::BehaviorDesigner::Runtime::Tasks::TaskStatus(*)(::PVOID, ::BehaviorDesigner::Runtime::Tasks::TaskStatus))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_PARENTTASK_FINALOVERRIDE_OFFSET))(this, status);
		}

		::BehaviorDesigner::Runtime::Tasks::TaskStatus Decorate(::BehaviorDesigner::Runtime::Tasks::TaskStatus status)
		{
			return ((::BehaviorDesigner::Runtime::Tasks::TaskStatus(*)(::PVOID, ::BehaviorDesigner::Runtime::Tasks::TaskStatus))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_PARENTTASK_DECORATE_OFFSET))(this, status);
		}

		::System::Boolean CanReevaluate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_PARENTTASK_CANREEVALUATE_OFFSET))(this);
		}

		::System::Void OnChildExecuted(::BehaviorDesigner::Runtime::Tasks::TaskStatus childStatus)
		{
			return ((::System::Void(*)(::PVOID, ::BehaviorDesigner::Runtime::Tasks::TaskStatus))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_PARENTTASK_ONCHILDEXECUTED_OFFSET))(this, childStatus);
		}

		::System::Void OnChildExecuted_1(::System::Int32 childIndex, ::BehaviorDesigner::Runtime::Tasks::TaskStatus childStatus)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::BehaviorDesigner::Runtime::Tasks::TaskStatus))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_PARENTTASK_ONCHILDEXECUTED_1_OFFSET))(this, childIndex, childStatus);
		}

		::System::Void OnChildStarted()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_PARENTTASK_ONCHILDSTARTED_OFFSET))(this);
		}

		::System::Void OnChildStarted_1(::System::Int32 childIndex)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_PARENTTASK_ONCHILDSTARTED_1_OFFSET))(this, childIndex);
		}

		::BehaviorDesigner::Runtime::Tasks::TaskStatus OverrideStatus(::BehaviorDesigner::Runtime::Tasks::TaskStatus status)
		{
			return ((::BehaviorDesigner::Runtime::Tasks::TaskStatus(*)(::PVOID, ::BehaviorDesigner::Runtime::Tasks::TaskStatus))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_PARENTTASK_OVERRIDESTATUS_OFFSET))(this, status);
		}

		::BehaviorDesigner::Runtime::Tasks::TaskStatus OverrideStatus_1()
		{
			return ((::BehaviorDesigner::Runtime::Tasks::TaskStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_PARENTTASK_OVERRIDESTATUS_1_OFFSET))(this);
		}

		::System::Void OnConditionalAbort(::System::Int32 childIndex)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_PARENTTASK_ONCONDITIONALABORT_OFFSET))(this, childIndex);
		}

		::System::Single GetUtility()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_PARENTTASK_GETUTILITY_OFFSET))(this);
		}

		::System::Void OnDrawGizmos()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_PARENTTASK_ONDRAWGIZMOS_OFFSET))(this);
		}

		::System::Void AddChild(::BehaviorDesigner::Runtime::Tasks::Task* child, ::System::Int32 index)
		{
			return ((::System::Void(*)(::PVOID, ::BehaviorDesigner::Runtime::Tasks::Task*, ::System::Int32))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_PARENTTASK_ADDCHILD_OFFSET))(this, child, index);
		}

		::System::Void ReplaceAddChild(::BehaviorDesigner::Runtime::Tasks::Task* child, ::System::Int32 index)
		{
			return ((::System::Void(*)(::PVOID, ::BehaviorDesigner::Runtime::Tasks::Task*, ::System::Int32))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_PARENTTASK_REPLACEADDCHILD_OFFSET))(this, child, index);
		}

		::System::Single __base_GetUtility()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_PARENTTASK___BASE_GETUTILITY_OFFSET))(this);
		}

		::System::Void __base_OnDrawGizmos()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_PARENTTASK___BASE_ONDRAWGIZMOS_OFFSET))(this);
		}
	};
}
