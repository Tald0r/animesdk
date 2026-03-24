#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class Class_2_208CC9941471731A_627;
namespace System { class Action; }

#define MOLEMOLE_UIMAINPLOTINTORSTARTDIALOGPOPWINDOWCONTROLLER_PANELDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xA1FE790)

namespace MoleMole
{
	inline static constexpr unsigned int UIMainPlotIntorStartDialogPopWindowController_PanelData_TypeDefinitionIndex = 46728;

	class UIMainPlotIntorStartDialogPopWindowController_PanelData : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Action* OnClosePanel; // 0x28
		::Class_2_208CC9941471731A_627* TableInfo; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINPLOTINTORSTARTDIALOGPOPWINDOWCONTROLLER_PANELDATA__CTOR_OFFSET))(this);
		}
	};
}
