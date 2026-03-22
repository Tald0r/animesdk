#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NodeCanvas/Framework/Status.h"
#include "unitysdk/System/Object.h"

namespace NodeCanvas::Framework { class ActionTask; }
namespace NodeCanvas::Framework { class IBlackboard; }
namespace System { template <typename T> class Action_1; }
namespace UnityEngine { class Component; }

#define NODECANVAS_FRAMEWORK_ACTIONTASK__INDEPENDENTACTIONUPDATER_D__12_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x183F1A30)
#define NODECANVAS_FRAMEWORK_ACTIONTASK__INDEPENDENTACTIONUPDATER_D__12_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x183F1AC0)
#define NODECANVAS_FRAMEWORK_ACTIONTASK__INDEPENDENTACTIONUPDATER_D__12_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x183F1B20)
#define NODECANVAS_FRAMEWORK_ACTIONTASK__INDEPENDENTACTIONUPDATER_D__12_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x183F1AD0)
#define NODECANVAS_FRAMEWORK_ACTIONTASK__INDEPENDENTACTIONUPDATER_D__12_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x183F1A20)
#define NODECANVAS_FRAMEWORK_ACTIONTASK__INDEPENDENTACTIONUPDATER_D__12__CTOR_OFFSET UNITYSDK_OFFSET(0x183F1A10)

namespace NodeCanvas::Framework
{
	inline static constexpr unsigned int ActionTask__IndependentActionUpdater_d__12_TypeDefinitionIndex = 25645;

	class ActionTask__IndependentActionUpdater_d__12 : public ::System::Object
	{
	public:
		::NodeCanvas::Framework::IBlackboard* blackboard; // 0x10
		::System::Action_1<::NodeCanvas::Framework::Status>* callback; // 0x18
		::System::Object* __2__current; // 0x20
		::NodeCanvas::Framework::ActionTask* __4__this; // 0x28
		::UnityEngine::Component* agent; // 0x30
		::System::Int32 __1__state; // 0x38

		::System::Void _ctor(::System::Int32 __1__state)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_ACTIONTASK__INDEPENDENTACTIONUPDATER_D__12__CTOR_OFFSET))(this, __1__state);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_ACTIONTASK__INDEPENDENTACTIONUPDATER_D__12_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_ACTIONTASK__INDEPENDENTACTIONUPDATER_D__12_MOVENEXT_OFFSET))(this);
		}

		::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_ACTIONTASK__INDEPENDENTACTIONUPDATER_D__12_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_ACTIONTASK__INDEPENDENTACTIONUPDATER_D__12_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_ACTIONTASK__INDEPENDENTACTIONUPDATER_D__12_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}
	};
}
