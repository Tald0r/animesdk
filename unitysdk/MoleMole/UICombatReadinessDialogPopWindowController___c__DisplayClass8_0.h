#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_0A55B5A82A61DAFA_2;
class Class_2_208CC9941471731A_552;
namespace MoleMole { class UICombatReadinessDialogPopWindowController; }
namespace System { class Action; }

#define MOLEMOLE_UICOMBATREADINESSDIALOGPOPWINDOWCONTROLLER___C__DISPLAYCLASS8_0__CTOR_OFFSET UNITYSDK_OFFSET(0xD550890)
#define MOLEMOLE_UICOMBATREADINESSDIALOGPOPWINDOWCONTROLLER___C__DISPLAYCLASS8_0__REFRESHMAINSTORYVIEW_B__0_OFFSET UNITYSDK_OFFSET(0xD5508A0)
#define MOLEMOLE_UICOMBATREADINESSDIALOGPOPWINDOWCONTROLLER___C__DISPLAYCLASS8_0__REFRESHMAINSTORYVIEW_B__1_OFFSET UNITYSDK_OFFSET(0xD550930)

namespace MoleMole
{
	inline static constexpr unsigned int UICombatReadinessDialogPopWindowController___c__DisplayClass8_0_TypeDefinitionIndex = 55588;

	class UICombatReadinessDialogPopWindowController___c__DisplayClass8_0 : public ::System::Object
	{
	public:
		::Class_2_208CC9941471731A_552* archiveFileQuestTemplateExt; // 0x10
		::Class_2_0A55B5A82A61DAFA_2* template_; // 0x18
		::MoleMole::UICombatReadinessDialogPopWindowController* __4__this; // 0x20
		::System::Action* __9__1; // 0x28
		::System::Int32 curTapeIndex; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOMBATREADINESSDIALOGPOPWINDOWCONTROLLER___C__DISPLAYCLASS8_0__CTOR_OFFSET))(this);
		}

		::System::Void _RefreshMainStoryView_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOMBATREADINESSDIALOGPOPWINDOWCONTROLLER___C__DISPLAYCLASS8_0__REFRESHMAINSTORYVIEW_B__0_OFFSET))(this);
		}

		::System::Void _RefreshMainStoryView_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOMBATREADINESSDIALOGPOPWINDOWCONTROLLER___C__DISPLAYCLASS8_0__REFRESHMAINSTORYVIEW_B__1_OFFSET))(this);
		}
	};
}
