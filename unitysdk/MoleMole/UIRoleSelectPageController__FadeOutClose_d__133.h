#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIRoleSelectPageController; }
namespace System { class Action; }

#define MOLEMOLE_UIROLESELECTPAGECONTROLLER__FADEOUTCLOSE_D__133_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x9A09950)
#define MOLEMOLE_UIROLESELECTPAGECONTROLLER__FADEOUTCLOSE_D__133_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_SINGLE__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x9A09A30)
#define MOLEMOLE_UIROLESELECTPAGECONTROLLER__FADEOUTCLOSE_D__133_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x9A09A90)
#define MOLEMOLE_UIROLESELECTPAGECONTROLLER__FADEOUTCLOSE_D__133_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x9A09A40)
#define MOLEMOLE_UIROLESELECTPAGECONTROLLER__FADEOUTCLOSE_D__133_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x9A09940)
#define MOLEMOLE_UIROLESELECTPAGECONTROLLER__FADEOUTCLOSE_D__133__CTOR_OFFSET UNITYSDK_OFFSET(0x9A09930)

namespace MoleMole
{
	inline static constexpr unsigned int UIRoleSelectPageController__FadeOutClose_d__133_TypeDefinitionIndex = 51295;

	class UIRoleSelectPageController__FadeOutClose_d__133 : public ::System::Object
	{
	public:
		::System::Action* action; // 0x10
		::MoleMole::UIRoleSelectPageController* __4__this; // 0x18
		::System::Single __2__current; // 0x20
		::System::Int32 __1__state; // 0x24

		::System::Void _ctor(::System::Int32 __1__state)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLESELECTPAGECONTROLLER__FADEOUTCLOSE_D__133__CTOR_OFFSET))(this, __1__state);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLESELECTPAGECONTROLLER__FADEOUTCLOSE_D__133_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLESELECTPAGECONTROLLER__FADEOUTCLOSE_D__133_MOVENEXT_OFFSET))(this);
		}

		::System::Single System_Collections_Generic_IEnumerator_System_Single__get_Current()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLESELECTPAGECONTROLLER__FADEOUTCLOSE_D__133_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_SINGLE__GET_CURRENT_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLESELECTPAGECONTROLLER__FADEOUTCLOSE_D__133_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLESELECTPAGECONTROLLER__FADEOUTCLOSE_D__133_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}
	};
}
