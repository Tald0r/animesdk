#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIArcadeTeamChildWindowController; }
namespace MoleMole { class UIArcadeTeamChildWindowController___c__DisplayClass49_0; }
namespace System { class Action; }

#define MOLEMOLE_UIARCADETEAMCHILDWINDOWCONTROLLER___ONBATTLEREADY_G__COMATCHREADY_49_0_D_MOVENEXT_OFFSET UNITYSDK_OFFSET(0xC2938D0)
#define MOLEMOLE_UIARCADETEAMCHILDWINDOWCONTROLLER___ONBATTLEREADY_G__COMATCHREADY_49_0_D_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xC293B90)
#define MOLEMOLE_UIARCADETEAMCHILDWINDOWCONTROLLER___ONBATTLEREADY_G__COMATCHREADY_49_0_D_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xC293BF0)
#define MOLEMOLE_UIARCADETEAMCHILDWINDOWCONTROLLER___ONBATTLEREADY_G__COMATCHREADY_49_0_D_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0xC293BA0)
#define MOLEMOLE_UIARCADETEAMCHILDWINDOWCONTROLLER___ONBATTLEREADY_G__COMATCHREADY_49_0_D_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0xC2938C0)
#define MOLEMOLE_UIARCADETEAMCHILDWINDOWCONTROLLER___ONBATTLEREADY_G__COMATCHREADY_49_0_D__CTOR_OFFSET UNITYSDK_OFFSET(0xC2938B0)

namespace MoleMole
{
	inline static constexpr unsigned int UIArcadeTeamChildWindowController___OnBattleReady_g__CoMatchReady_49_0_d_TypeDefinitionIndex = 50891;

	class UIArcadeTeamChildWindowController___OnBattleReady_g__CoMatchReady_49_0_d : public ::System::Object
	{
	public:
		::MoleMole::UIArcadeTeamChildWindowController* __4__this; // 0x10
		::System::Object* __2__current; // 0x18
		::System::Action* callback; // 0x20
		::MoleMole::UIArcadeTeamChildWindowController___c__DisplayClass49_0* __8__1; // 0x28
		::System::Int32 __1__state; // 0x30
		::System::Int32 _i_5__2; // 0x34

		::System::Void _ctor(::System::Int32 __1__state)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIARCADETEAMCHILDWINDOWCONTROLLER___ONBATTLEREADY_G__COMATCHREADY_49_0_D__CTOR_OFFSET))(this, __1__state);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIARCADETEAMCHILDWINDOWCONTROLLER___ONBATTLEREADY_G__COMATCHREADY_49_0_D_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIARCADETEAMCHILDWINDOWCONTROLLER___ONBATTLEREADY_G__COMATCHREADY_49_0_D_MOVENEXT_OFFSET))(this);
		}

		::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIARCADETEAMCHILDWINDOWCONTROLLER___ONBATTLEREADY_G__COMATCHREADY_49_0_D_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIARCADETEAMCHILDWINDOWCONTROLLER___ONBATTLEREADY_G__COMATCHREADY_49_0_D_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIARCADETEAMCHILDWINDOWCONTROLLER___ONBATTLEREADY_G__COMATCHREADY_49_0_D_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}
	};
}
