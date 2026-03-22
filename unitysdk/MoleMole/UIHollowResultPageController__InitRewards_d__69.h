#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIHollowResultPageController; }

#define MOLEMOLE_UIHOLLOWRESULTPAGECONTROLLER__INITREWARDS_D__69_MOVENEXT_OFFSET UNITYSDK_OFFSET(0xC0770D0)
#define MOLEMOLE_UIHOLLOWRESULTPAGECONTROLLER__INITREWARDS_D__69_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_SINGLE__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xC0776B0)
#define MOLEMOLE_UIHOLLOWRESULTPAGECONTROLLER__INITREWARDS_D__69_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xC077710)
#define MOLEMOLE_UIHOLLOWRESULTPAGECONTROLLER__INITREWARDS_D__69_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0xC0776C0)
#define MOLEMOLE_UIHOLLOWRESULTPAGECONTROLLER__INITREWARDS_D__69_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0xC0770C0)
#define MOLEMOLE_UIHOLLOWRESULTPAGECONTROLLER__INITREWARDS_D__69__CTOR_OFFSET UNITYSDK_OFFSET(0xC0770B0)

namespace MoleMole
{
	inline static constexpr unsigned int UIHollowResultPageController__InitRewards_d__69_TypeDefinitionIndex = 39278;

	class UIHollowResultPageController__InitRewards_d__69 : public ::System::Object
	{
	public:
		::MoleMole::UIHollowResultPageController* __4__this; // 0x10
		::System::Int32 __1__state; // 0x18
		::System::Single __2__current; // 0x1C

		::System::Void _ctor(::System::Int32 __1__state)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWRESULTPAGECONTROLLER__INITREWARDS_D__69__CTOR_OFFSET))(this, __1__state);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWRESULTPAGECONTROLLER__INITREWARDS_D__69_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWRESULTPAGECONTROLLER__INITREWARDS_D__69_MOVENEXT_OFFSET))(this);
		}

		::System::Single System_Collections_Generic_IEnumerator_System_Single__get_Current()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWRESULTPAGECONTROLLER__INITREWARDS_D__69_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_SINGLE__GET_CURRENT_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWRESULTPAGECONTROLLER__INITREWARDS_D__69_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWRESULTPAGECONTROLLER__INITREWARDS_D__69_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}
	};
}
