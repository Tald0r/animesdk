#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Flow.h"
#include "unitysdk/System/Object.h"

class Class_3_7FBB00F3330A4099;
namespace MoleMole::FlowCanvas::Nodes { class LDWaveMonster; }
namespace MoleMole::FlowCanvas::Nodes { class LDWaveMonster___c__DisplayClass70_0; }
namespace MoleMole::FlowCanvas::Nodes { class MonsterCreateDataBase; }

#define MOLEMOLE_FLOWCANVAS_NODES_LDWAVEMONSTER__MULTIPLAYERINTERNALCOROUTINE_D__70_MOVENEXT_OFFSET UNITYSDK_OFFSET(0xA0172F0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDWAVEMONSTER__MULTIPLAYERINTERNALCOROUTINE_D__70_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xA019170)
#define MOLEMOLE_FLOWCANVAS_NODES_LDWAVEMONSTER__MULTIPLAYERINTERNALCOROUTINE_D__70_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xA0191D0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDWAVEMONSTER__MULTIPLAYERINTERNALCOROUTINE_D__70_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0xA019180)
#define MOLEMOLE_FLOWCANVAS_NODES_LDWAVEMONSTER__MULTIPLAYERINTERNALCOROUTINE_D__70_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0xA0172E0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDWAVEMONSTER__MULTIPLAYERINTERNALCOROUTINE_D__70__CTOR_OFFSET UNITYSDK_OFFSET(0xA0172D0)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDWaveMonster__MultiplayerInternalCoroutine_d__70_TypeDefinitionIndex = 51976;

	class LDWaveMonster__MultiplayerInternalCoroutine_d__70 : public ::System::Object
	{
	public:
		::FlowCanvas::Flow f; // 0x10
		::MoleMole::FlowCanvas::Nodes::MonsterCreateDataBase* _createData_5__4; // 0x38
		::MoleMole::FlowCanvas::Nodes::LDWaveMonster* __4__this; // 0x40
		::System::Object* __2__current; // 0x48
		::MoleMole::FlowCanvas::Nodes::LDWaveMonster___c__DisplayClass70_0* __8__1; // 0x50
		::Class_3_7FBB00F3330A4099* _serverNotifyRecord_5__5; // 0x58
		::System::Boolean _doWait_5__3; // 0x60
		::System::Boolean _isChangeToHostWhenWait_5__6; // 0x61
		::System::Int32 __1__state; // 0x64
		::System::Int32 _createListLen_5__2; // 0x68

		::System::Void _ctor(::System::Int32 __1__state)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDWAVEMONSTER__MULTIPLAYERINTERNALCOROUTINE_D__70__CTOR_OFFSET))(this, __1__state);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDWAVEMONSTER__MULTIPLAYERINTERNALCOROUTINE_D__70_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDWAVEMONSTER__MULTIPLAYERINTERNALCOROUTINE_D__70_MOVENEXT_OFFSET))(this);
		}

		::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDWAVEMONSTER__MULTIPLAYERINTERNALCOROUTINE_D__70_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDWAVEMONSTER__MULTIPLAYERINTERNALCOROUTINE_D__70_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDWAVEMONSTER__MULTIPLAYERINTERNALCOROUTINE_D__70_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}
	};
}
