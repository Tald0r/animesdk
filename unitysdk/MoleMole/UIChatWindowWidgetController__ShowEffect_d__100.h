#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIChatWindowWidgetController; }

#define MOLEMOLE_UICHATWINDOWWIDGETCONTROLLER__SHOWEFFECT_D__100_MOVENEXT_OFFSET UNITYSDK_OFFSET(0xBFDDE90)
#define MOLEMOLE_UICHATWINDOWWIDGETCONTROLLER__SHOWEFFECT_D__100_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_SINGLE__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xBFDE040)
#define MOLEMOLE_UICHATWINDOWWIDGETCONTROLLER__SHOWEFFECT_D__100_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xBFDE0A0)
#define MOLEMOLE_UICHATWINDOWWIDGETCONTROLLER__SHOWEFFECT_D__100_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0xBFDE050)
#define MOLEMOLE_UICHATWINDOWWIDGETCONTROLLER__SHOWEFFECT_D__100_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0xBFDDE80)
#define MOLEMOLE_UICHATWINDOWWIDGETCONTROLLER__SHOWEFFECT_D__100__CTOR_OFFSET UNITYSDK_OFFSET(0xBFDDE70)

namespace MoleMole
{
	inline static constexpr unsigned int UIChatWindowWidgetController__ShowEffect_d__100_TypeDefinitionIndex = 44641;

	class UIChatWindowWidgetController__ShowEffect_d__100 : public ::System::Object
	{
	public:
		::MoleMole::UIChatWindowWidgetController* __4__this; // 0x10
		::System::Int32 __1__state; // 0x18
		::System::Single __2__current; // 0x1C

		::System::Void _ctor(::System::Int32 __1__state)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UICHATWINDOWWIDGETCONTROLLER__SHOWEFFECT_D__100__CTOR_OFFSET))(this, __1__state);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICHATWINDOWWIDGETCONTROLLER__SHOWEFFECT_D__100_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICHATWINDOWWIDGETCONTROLLER__SHOWEFFECT_D__100_MOVENEXT_OFFSET))(this);
		}

		::System::Single System_Collections_Generic_IEnumerator_System_Single__get_Current()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICHATWINDOWWIDGETCONTROLLER__SHOWEFFECT_D__100_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_SINGLE__GET_CURRENT_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICHATWINDOWWIDGETCONTROLLER__SHOWEFFECT_D__100_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICHATWINDOWWIDGETCONTROLLER__SHOWEFFECT_D__100_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}
	};
}
