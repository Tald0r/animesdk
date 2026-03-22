#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Collections/Generic/List_1_Enumerator.h"
#include "unitysdk/System/Object.h"

class Class_1_4BD7B665C4CA18EA;
namespace MoleMole { class HackerGameNpcChessEntity; }

#define MOLEMOLE_HACKERGAMENPCCHESSENTITY__EXECUTEDELAYEDLASER_D__81_MOVENEXT_OFFSET UNITYSDK_OFFSET(0xC2D3BE0)
#define MOLEMOLE_HACKERGAMENPCCHESSENTITY__EXECUTEDELAYEDLASER_D__81_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xC2D3F30)
#define MOLEMOLE_HACKERGAMENPCCHESSENTITY__EXECUTEDELAYEDLASER_D__81_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xC2D3F90)
#define MOLEMOLE_HACKERGAMENPCCHESSENTITY__EXECUTEDELAYEDLASER_D__81_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0xC2D3F40)
#define MOLEMOLE_HACKERGAMENPCCHESSENTITY__EXECUTEDELAYEDLASER_D__81_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0xC2D3BB0)
#define MOLEMOLE_HACKERGAMENPCCHESSENTITY__EXECUTEDELAYEDLASER_D__81__CTOR_OFFSET UNITYSDK_OFFSET(0xC2D3BA0)
#define MOLEMOLE_HACKERGAMENPCCHESSENTITY__EXECUTEDELAYEDLASER_D__81___M__FINALLY1_OFFSET UNITYSDK_OFFSET(0xC2D3BD0)

namespace MoleMole
{
	inline static constexpr unsigned int HackerGameNpcChessEntity__ExecuteDelayedLaser_d__81_TypeDefinitionIndex = 51523;

	class HackerGameNpcChessEntity__ExecuteDelayedLaser_d__81 : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1_Enumerator<::Class_1_4BD7B665C4CA18EA*> __7__wrap2; // 0x10
		::Class_1_4BD7B665C4CA18EA* _bodyNpcData_5__4; // 0x28
		::MoleMole::HackerGameNpcChessEntity* __4__this; // 0x30
		::System::Object* __2__current; // 0x38
		::System::Int32 __1__state; // 0x40
		::System::Single _timer_5__2; // 0x44

		::System::Void _ctor(::System::Int32 __1__state)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_HACKERGAMENPCCHESSENTITY__EXECUTEDELAYEDLASER_D__81__CTOR_OFFSET))(this, __1__state);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_HACKERGAMENPCCHESSENTITY__EXECUTEDELAYEDLASER_D__81_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_HACKERGAMENPCCHESSENTITY__EXECUTEDELAYEDLASER_D__81_MOVENEXT_OFFSET))(this);
		}

		::System::Void __m__Finally1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_HACKERGAMENPCCHESSENTITY__EXECUTEDELAYEDLASER_D__81___M__FINALLY1_OFFSET))(this);
		}

		::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_HACKERGAMENPCCHESSENTITY__EXECUTEDELAYEDLASER_D__81_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_HACKERGAMENPCCHESSENTITY__EXECUTEDELAYEDLASER_D__81_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_HACKERGAMENPCCHESSENTITY__EXECUTEDELAYEDLASER_D__81_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}
	};
}
