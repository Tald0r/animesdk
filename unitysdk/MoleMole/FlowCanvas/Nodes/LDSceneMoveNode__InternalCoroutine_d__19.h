#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Flow.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::FlowCanvas::Nodes { class LDSceneMoveNode; }
namespace MoleMole::FlowCanvas::Nodes { class LDSceneMoveNode___c__DisplayClass19_0; }

#define MOLEMOLE_FLOWCANVAS_NODES_LDSCENEMOVENODE__INTERNALCOROUTINE_D__19_MOVENEXT_OFFSET UNITYSDK_OFFSET(0xEC82210)
#define MOLEMOLE_FLOWCANVAS_NODES_LDSCENEMOVENODE__INTERNALCOROUTINE_D__19_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xEC827C0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDSCENEMOVENODE__INTERNALCOROUTINE_D__19_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xEC82820)
#define MOLEMOLE_FLOWCANVAS_NODES_LDSCENEMOVENODE__INTERNALCOROUTINE_D__19_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0xEC827D0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDSCENEMOVENODE__INTERNALCOROUTINE_D__19_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0xEC82200)
#define MOLEMOLE_FLOWCANVAS_NODES_LDSCENEMOVENODE__INTERNALCOROUTINE_D__19__CTOR_OFFSET UNITYSDK_OFFSET(0xEC815E0)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDSceneMoveNode__InternalCoroutine_d__19_TypeDefinitionIndex = 40370;

	class LDSceneMoveNode__InternalCoroutine_d__19 : public ::System::Object
	{
	public:
		::FlowCanvas::Flow f; // 0x10
		::MoleMole::FlowCanvas::Nodes::LDSceneMoveNode___c__DisplayClass19_0* __8__1; // 0x38
		::MoleMole::FlowCanvas::Nodes::LDSceneMoveNode* __4__this; // 0x40
		::System::Object* __2__current; // 0x48
		::System::Int32 __1__state; // 0x50

		::System::Void _ctor(::System::Int32 __1__state)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDSCENEMOVENODE__INTERNALCOROUTINE_D__19__CTOR_OFFSET))(this, __1__state);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDSCENEMOVENODE__INTERNALCOROUTINE_D__19_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDSCENEMOVENODE__INTERNALCOROUTINE_D__19_MOVENEXT_OFFSET))(this);
		}

		::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDSCENEMOVENODE__INTERNALCOROUTINE_D__19_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDSCENEMOVENODE__INTERNALCOROUTINE_D__19_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDSCENEMOVENODE__INTERNALCOROUTINE_D__19_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}
	};
}
