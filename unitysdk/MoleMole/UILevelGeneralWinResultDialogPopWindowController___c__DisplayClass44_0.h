#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_87D98DA5C1AD6384_Enum_3_3DCE6AAF7E47B319.h"
#include "unitysdk/System/Object.h"

class Class_2_60DDD9C206686F44;
namespace MoleMole { class UILevelGeneralWinResultDialogPopWindowController; }
namespace System { class Action; }

#define MOLEMOLE_UILEVELGENERALWINRESULTDIALOGPOPWINDOWCONTROLLER___C__DISPLAYCLASS44_0__CTOR_OFFSET UNITYSDK_OFFSET(0x8967800)
#define MOLEMOLE_UILEVELGENERALWINRESULTDIALOGPOPWINDOWCONTROLLER___C__DISPLAYCLASS44_0___BINDBTNCALLBACK_B__0_OFFSET UNITYSDK_OFFSET(0x8967810)
#define MOLEMOLE_UILEVELGENERALWINRESULTDIALOGPOPWINDOWCONTROLLER___C__DISPLAYCLASS44_0___BINDBTNCALLBACK_B__1_OFFSET UNITYSDK_OFFSET(0x8967A60)

namespace MoleMole
{
	inline static constexpr unsigned int UILevelGeneralWinResultDialogPopWindowController___c__DisplayClass44_0_TypeDefinitionIndex = 63510;

	class UILevelGeneralWinResultDialogPopWindowController___c__DisplayClass44_0 : public ::System::Object
	{
	public:
		::System::Action* callback; // 0x10
		::System::Action* __9__1; // 0x18
		::Class_2_60DDD9C206686F44* targetBtn; // 0x20
		::MoleMole::UILevelGeneralWinResultDialogPopWindowController* __4__this; // 0x28
		::Class_1_87D98DA5C1AD6384_Enum_3_3DCE6AAF7E47B319 btnTag; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILEVELGENERALWINRESULTDIALOGPOPWINDOWCONTROLLER___C__DISPLAYCLASS44_0__CTOR_OFFSET))(this);
		}

		::System::Void __BindBtnCallback_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILEVELGENERALWINRESULTDIALOGPOPWINDOWCONTROLLER___C__DISPLAYCLASS44_0___BINDBTNCALLBACK_B__0_OFFSET))(this);
		}

		::System::Void __BindBtnCallback_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILEVELGENERALWINRESULTDIALOGPOPWINDOWCONTROLLER___C__DISPLAYCLASS44_0___BINDBTNCALLBACK_B__1_OFFSET))(this);
		}
	};
}
