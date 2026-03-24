#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIHollowCurseWidgetController; }

#define MOLEMOLE_UIHOLLOWCURSEWIDGETCONTROLLER___DELAY_D__6_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x6C8A0A0)
#define MOLEMOLE_UIHOLLOWCURSEWIDGETCONTROLLER___DELAY_D__6_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_SINGLE__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x6C8A230)
#define MOLEMOLE_UIHOLLOWCURSEWIDGETCONTROLLER___DELAY_D__6_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x6C8A290)
#define MOLEMOLE_UIHOLLOWCURSEWIDGETCONTROLLER___DELAY_D__6_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x6C8A240)
#define MOLEMOLE_UIHOLLOWCURSEWIDGETCONTROLLER___DELAY_D__6_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x6C8A090)
#define MOLEMOLE_UIHOLLOWCURSEWIDGETCONTROLLER___DELAY_D__6__CTOR_OFFSET UNITYSDK_OFFSET(0x6C8A080)

namespace MoleMole
{
	inline static constexpr unsigned int UIHollowCurseWidgetController___Delay_d__6_TypeDefinitionIndex = 53688;

	class UIHollowCurseWidgetController___Delay_d__6 : public ::System::Object
	{
	public:
		::MoleMole::UIHollowCurseWidgetController* __4__this; // 0x10
		::System::Int32 __1__state; // 0x18
		::System::Int32 _i_5__2; // 0x1C
		::System::Single __2__current; // 0x20

		::System::Void _ctor(::System::Int32 __1__state)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWCURSEWIDGETCONTROLLER___DELAY_D__6__CTOR_OFFSET))(this, __1__state);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWCURSEWIDGETCONTROLLER___DELAY_D__6_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWCURSEWIDGETCONTROLLER___DELAY_D__6_MOVENEXT_OFFSET))(this);
		}

		::System::Single System_Collections_Generic_IEnumerator_System_Single__get_Current()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWCURSEWIDGETCONTROLLER___DELAY_D__6_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_SINGLE__GET_CURRENT_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWCURSEWIDGETCONTROLLER___DELAY_D__6_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWCURSEWIDGETCONTROLLER___DELAY_D__6_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}
	};
}
