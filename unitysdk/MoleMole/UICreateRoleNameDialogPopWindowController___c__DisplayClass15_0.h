#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UICreateRoleNameDialogContext; }
namespace System { class Action; }
namespace System { class String; }

#define MOLEMOLE_UICREATEROLENAMEDIALOGPOPWINDOWCONTROLLER___C__DISPLAYCLASS15_0__CLOSEWINDOW_B__0_OFFSET UNITYSDK_OFFSET(0xA33F270)
#define MOLEMOLE_UICREATEROLENAMEDIALOGPOPWINDOWCONTROLLER___C__DISPLAYCLASS15_0__CLOSEWINDOW_B__1_OFFSET UNITYSDK_OFFSET(0xA33F310)
#define MOLEMOLE_UICREATEROLENAMEDIALOGPOPWINDOWCONTROLLER___C__DISPLAYCLASS15_0__CTOR_OFFSET UNITYSDK_OFFSET(0xA33F260)

namespace MoleMole
{
	inline static constexpr unsigned int UICreateRoleNameDialogPopWindowController___c__DisplayClass15_0_TypeDefinitionIndex = 46696;

	class UICreateRoleNameDialogPopWindowController___c__DisplayClass15_0 : public ::System::Object
	{
	public:
		::MoleMole::UICreateRoleNameDialogContext* context; // 0x10
		::System::String* cacheInput; // 0x18
		::System::Action* __9__1; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICREATEROLENAMEDIALOGPOPWINDOWCONTROLLER___C__DISPLAYCLASS15_0__CTOR_OFFSET))(this);
		}

		::System::Void _CloseWindow_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICREATEROLENAMEDIALOGPOPWINDOWCONTROLLER___C__DISPLAYCLASS15_0__CLOSEWINDOW_B__0_OFFSET))(this);
		}

		::System::Void _CloseWindow_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICREATEROLENAMEDIALOGPOPWINDOWCONTROLLER___C__DISPLAYCLASS15_0__CLOSEWINDOW_B__1_OFFSET))(this);
		}
	};
}
