#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIBaseController; }

#define MOLEMOLE_UIBASECONTROLLER__ANIMCOROUTINE_D__546_MOVENEXT_OFFSET UNITYSDK_OFFSET(0xA51F8F0)
#define MOLEMOLE_UIBASECONTROLLER__ANIMCOROUTINE_D__546_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_SINGLE__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xA51FA40)
#define MOLEMOLE_UIBASECONTROLLER__ANIMCOROUTINE_D__546_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xA51FAA0)
#define MOLEMOLE_UIBASECONTROLLER__ANIMCOROUTINE_D__546_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0xA51FA50)
#define MOLEMOLE_UIBASECONTROLLER__ANIMCOROUTINE_D__546_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0xA51F8E0)
#define MOLEMOLE_UIBASECONTROLLER__ANIMCOROUTINE_D__546__CTOR_OFFSET UNITYSDK_OFFSET(0xA51F8D0)

namespace MoleMole
{
	inline static constexpr unsigned int UIBaseController__AnimCoroutine_d__546_TypeDefinitionIndex = 37246;

	class UIBaseController__AnimCoroutine_d__546 : public ::System::Object
	{
	public:
		::MoleMole::UIBaseController* __4__this; // 0x10
		::System::Int32 __1__state; // 0x18
		::System::Single length; // 0x1C
		::System::Single __2__current; // 0x20

		::System::Void _ctor(::System::Int32 __1__state)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBASECONTROLLER__ANIMCOROUTINE_D__546__CTOR_OFFSET))(this, __1__state);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBASECONTROLLER__ANIMCOROUTINE_D__546_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBASECONTROLLER__ANIMCOROUTINE_D__546_MOVENEXT_OFFSET))(this);
		}

		::System::Single System_Collections_Generic_IEnumerator_System_Single__get_Current()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBASECONTROLLER__ANIMCOROUTINE_D__546_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_SINGLE__GET_CURRENT_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBASECONTROLLER__ANIMCOROUTINE_D__546_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBASECONTROLLER__ANIMCOROUTINE_D__546_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}
	};
}
