#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Flow.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::FlowCanvas::Nodes { class LDMonsterLeftCheckTimer; }
namespace MoleMole::FlowCanvas::Nodes { class LDMonsterLeftCheckTimer___c__DisplayClass26_0; }

#define MOLEMOLE_FLOWCANVAS_NODES_LDMONSTERLEFTCHECKTIMER__INTERNALCOROUTINE_D__26_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x82CDC90)
#define MOLEMOLE_FLOWCANVAS_NODES_LDMONSTERLEFTCHECKTIMER__INTERNALCOROUTINE_D__26_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x82CE030)
#define MOLEMOLE_FLOWCANVAS_NODES_LDMONSTERLEFTCHECKTIMER__INTERNALCOROUTINE_D__26_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x82CE090)
#define MOLEMOLE_FLOWCANVAS_NODES_LDMONSTERLEFTCHECKTIMER__INTERNALCOROUTINE_D__26_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x82CE040)
#define MOLEMOLE_FLOWCANVAS_NODES_LDMONSTERLEFTCHECKTIMER__INTERNALCOROUTINE_D__26_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x82CDC80)
#define MOLEMOLE_FLOWCANVAS_NODES_LDMONSTERLEFTCHECKTIMER__INTERNALCOROUTINE_D__26__CTOR_OFFSET UNITYSDK_OFFSET(0x82CDC70)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDMonsterLeftCheckTimer__InternalCoroutine_d__26_TypeDefinitionIndex = 71265;

	class LDMonsterLeftCheckTimer__InternalCoroutine_d__26 : public ::System::Object
	{
	public:
		::MoleMole::FlowCanvas::Nodes::LDMonsterLeftCheckTimer___c__DisplayClass26_0* __8__1; // 0x10
		::MoleMole::FlowCanvas::Nodes::LDMonsterLeftCheckTimer* __4__this; // 0x18
		::System::Object* __2__current; // 0x20
		::FlowCanvas::Flow f; // 0x28
		::System::Single _totalTime_5__2; // 0x50
		::System::Int32 __1__state; // 0x54

		::System::Void _ctor(::System::Int32 __1__state)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDMONSTERLEFTCHECKTIMER__INTERNALCOROUTINE_D__26__CTOR_OFFSET))(this, __1__state);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDMONSTERLEFTCHECKTIMER__INTERNALCOROUTINE_D__26_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDMONSTERLEFTCHECKTIMER__INTERNALCOROUTINE_D__26_MOVENEXT_OFFSET))(this);
		}

		::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDMONSTERLEFTCHECKTIMER__INTERNALCOROUTINE_D__26_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDMONSTERLEFTCHECKTIMER__INTERNALCOROUTINE_D__26_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDMONSTERLEFTCHECKTIMER__INTERNALCOROUTINE_D__26_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}
	};
}
