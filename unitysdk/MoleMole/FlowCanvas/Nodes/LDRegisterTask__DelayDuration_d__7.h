#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::FlowCanvas::Nodes { class LDRegisterTask; }

#define MOLEMOLE_FLOWCANVAS_NODES_LDREGISTERTASK__DELAYDURATION_D__7_MOVENEXT_OFFSET UNITYSDK_OFFSET(0xA5E9720)
#define MOLEMOLE_FLOWCANVAS_NODES_LDREGISTERTASK__DELAYDURATION_D__7_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xA5E9820)
#define MOLEMOLE_FLOWCANVAS_NODES_LDREGISTERTASK__DELAYDURATION_D__7_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xA5E9880)
#define MOLEMOLE_FLOWCANVAS_NODES_LDREGISTERTASK__DELAYDURATION_D__7_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0xA5E9830)
#define MOLEMOLE_FLOWCANVAS_NODES_LDREGISTERTASK__DELAYDURATION_D__7_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0xA5E9710)
#define MOLEMOLE_FLOWCANVAS_NODES_LDREGISTERTASK__DELAYDURATION_D__7__CTOR_OFFSET UNITYSDK_OFFSET(0xA5E9700)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDRegisterTask__DelayDuration_d__7_TypeDefinitionIndex = 48552;

	class LDRegisterTask__DelayDuration_d__7 : public ::System::Object
	{
	public:
		::MoleMole::FlowCanvas::Nodes::LDRegisterTask* __4__this; // 0x10
		::System::Object* __2__current; // 0x18
		::System::Int32 __1__state; // 0x20
		::System::Single time; // 0x24

		::System::Void _ctor(::System::Int32 __1__state)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDREGISTERTASK__DELAYDURATION_D__7__CTOR_OFFSET))(this, __1__state);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDREGISTERTASK__DELAYDURATION_D__7_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDREGISTERTASK__DELAYDURATION_D__7_MOVENEXT_OFFSET))(this);
		}

		::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDREGISTERTASK__DELAYDURATION_D__7_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDREGISTERTASK__DELAYDURATION_D__7_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDREGISTERTASK__DELAYDURATION_D__7_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}
	};
}
