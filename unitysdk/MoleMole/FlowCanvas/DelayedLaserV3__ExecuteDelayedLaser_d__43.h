#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::FlowCanvas { class DelayedLaserV3; }

#define MOLEMOLE_FLOWCANVAS_DELAYEDLASERV3__EXECUTEDELAYEDLASER_D__43_MOVENEXT_OFFSET UNITYSDK_OFFSET(0xA7C8400)
#define MOLEMOLE_FLOWCANVAS_DELAYEDLASERV3__EXECUTEDELAYEDLASER_D__43_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xA7C8570)
#define MOLEMOLE_FLOWCANVAS_DELAYEDLASERV3__EXECUTEDELAYEDLASER_D__43_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xA7C85D0)
#define MOLEMOLE_FLOWCANVAS_DELAYEDLASERV3__EXECUTEDELAYEDLASER_D__43_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0xA7C8580)
#define MOLEMOLE_FLOWCANVAS_DELAYEDLASERV3__EXECUTEDELAYEDLASER_D__43_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0xA7C83F0)
#define MOLEMOLE_FLOWCANVAS_DELAYEDLASERV3__EXECUTEDELAYEDLASER_D__43__CTOR_OFFSET UNITYSDK_OFFSET(0xA7C83E0)

namespace MoleMole::FlowCanvas
{
	inline static constexpr unsigned int DelayedLaserV3__ExecuteDelayedLaser_d__43_TypeDefinitionIndex = 53714;

	class DelayedLaserV3__ExecuteDelayedLaser_d__43 : public ::System::Object
	{
	public:
		::MoleMole::FlowCanvas::DelayedLaserV3* __4__this; // 0x10
		::System::Object* __2__current; // 0x18
		::System::Int32 __1__state; // 0x20

		::System::Void _ctor(::System::Int32 __1__state)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_DELAYEDLASERV3__EXECUTEDELAYEDLASER_D__43__CTOR_OFFSET))(this, __1__state);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_DELAYEDLASERV3__EXECUTEDELAYEDLASER_D__43_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_DELAYEDLASERV3__EXECUTEDELAYEDLASER_D__43_MOVENEXT_OFFSET))(this);
		}

		::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_DELAYEDLASERV3__EXECUTEDELAYEDLASER_D__43_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_DELAYEDLASERV3__EXECUTEDELAYEDLASER_D__43_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_DELAYEDLASERV3__EXECUTEDELAYEDLASER_D__43_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}
	};
}
