#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Flow.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::FlowCanvas::Nodes { class LDCurveMove; }
namespace MoleMole::FlowCanvas::Nodes { class LDCurveMove___c__DisplayClass17_0; }

#define MOLEMOLE_FLOWCANVAS_NODES_LDCURVEMOVE__INTERNALCOROUTINE_D__17_MOVENEXT_OFFSET UNITYSDK_OFFSET(0xD0CEE70)
#define MOLEMOLE_FLOWCANVAS_NODES_LDCURVEMOVE__INTERNALCOROUTINE_D__17_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xD0CF2C0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDCURVEMOVE__INTERNALCOROUTINE_D__17_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xD0CF320)
#define MOLEMOLE_FLOWCANVAS_NODES_LDCURVEMOVE__INTERNALCOROUTINE_D__17_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0xD0CF2D0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDCURVEMOVE__INTERNALCOROUTINE_D__17_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0xD0CEE60)
#define MOLEMOLE_FLOWCANVAS_NODES_LDCURVEMOVE__INTERNALCOROUTINE_D__17__CTOR_OFFSET UNITYSDK_OFFSET(0xD0CEE50)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDCurveMove__InternalCoroutine_d__17_TypeDefinitionIndex = 66279;

	class LDCurveMove__InternalCoroutine_d__17 : public ::System::Object
	{
	public:
		::MoleMole::FlowCanvas::Nodes::LDCurveMove* __4__this; // 0x10
		::MoleMole::FlowCanvas::Nodes::LDCurveMove___c__DisplayClass17_0* __8__1; // 0x18
		::FlowCanvas::Flow f; // 0x20
		::System::Object* __2__current; // 0x48
		::System::Int32 __1__state; // 0x50

		::System::Void _ctor(::System::Int32 __1__state)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDCURVEMOVE__INTERNALCOROUTINE_D__17__CTOR_OFFSET))(this, __1__state);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDCURVEMOVE__INTERNALCOROUTINE_D__17_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDCURVEMOVE__INTERNALCOROUTINE_D__17_MOVENEXT_OFFSET))(this);
		}

		::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDCURVEMOVE__INTERNALCOROUTINE_D__17_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDCURVEMOVE__INTERNALCOROUTINE_D__17_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDCURVEMOVE__INTERNALCOROUTINE_D__17_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}
	};
}
