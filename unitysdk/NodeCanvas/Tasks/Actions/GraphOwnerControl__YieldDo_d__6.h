#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace NodeCanvas::Tasks::Actions { class GraphOwnerControl; }

#define NODECANVAS_TASKS_ACTIONS_GRAPHOWNERCONTROL__YIELDDO_D__6_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x1A269E80)
#define NODECANVAS_TASKS_ACTIONS_GRAPHOWNERCONTROL__YIELDDO_D__6_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1A269ED0)
#define NODECANVAS_TASKS_ACTIONS_GRAPHOWNERCONTROL__YIELDDO_D__6_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1A269F30)
#define NODECANVAS_TASKS_ACTIONS_GRAPHOWNERCONTROL__YIELDDO_D__6_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x1A269EE0)
#define NODECANVAS_TASKS_ACTIONS_GRAPHOWNERCONTROL__YIELDDO_D__6_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1A269E70)
#define NODECANVAS_TASKS_ACTIONS_GRAPHOWNERCONTROL__YIELDDO_D__6__CTOR_OFFSET UNITYSDK_OFFSET(0x1A269E60)

namespace NodeCanvas::Tasks::Actions
{
	inline static constexpr unsigned int GraphOwnerControl__YieldDo_d__6_TypeDefinitionIndex = 25637;

	class GraphOwnerControl__YieldDo_d__6 : public ::System::Object
	{
	public:
		::System::Object* __2__current; // 0x10
		::NodeCanvas::Tasks::Actions::GraphOwnerControl* __4__this; // 0x18
		::System::Int32 __1__state; // 0x20

		::System::Void _ctor(::System::Int32 __1__state)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_ACTIONS_GRAPHOWNERCONTROL__YIELDDO_D__6__CTOR_OFFSET))(this, __1__state);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_ACTIONS_GRAPHOWNERCONTROL__YIELDDO_D__6_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_ACTIONS_GRAPHOWNERCONTROL__YIELDDO_D__6_MOVENEXT_OFFSET))(this);
		}

		::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_ACTIONS_GRAPHOWNERCONTROL__YIELDDO_D__6_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_ACTIONS_GRAPHOWNERCONTROL__YIELDDO_D__6_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_ACTIONS_GRAPHOWNERCONTROL__YIELDDO_D__6_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}
	};
}
