#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIWidgetController.h"

class Class_1_D375C91CCE5D3999;
class Class_3_BE75AAF0F7C40C75_3;
namespace MoleMole { class UIActivitySignInPopWindowController; }

#define MOLEMOLE_UIACTIVITYSIGNINLASTDAYWIDGET_REFRESHLASTDAYINFO_OFFSET UNITYSDK_OFFSET(0xDC386F0)
#define MOLEMOLE_UIACTIVITYSIGNINLASTDAYWIDGET_SETDAYDATA_OFFSET UNITYSDK_OFFSET(0xDC38750)
#define MOLEMOLE_UIACTIVITYSIGNINLASTDAYWIDGET_SETPOPCONTROLLER_OFFSET UNITYSDK_OFFSET(0xDC38680)
#define MOLEMOLE_UIACTIVITYSIGNINLASTDAYWIDGET__CTOR_OFFSET UNITYSDK_OFFSET(0xDC387C0)

namespace MoleMole
{
	inline static constexpr unsigned int UIActivitySignInLastDayWidget_TypeDefinitionIndex = 68191;

	class UIActivitySignInLastDayWidget : public ::MoleMole::UIWidgetController
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYSIGNINLASTDAYWIDGET__CTOR_OFFSET))(this);
		}

		::System::Void SetPopController(::MoleMole::UIActivitySignInPopWindowController* popController)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIActivitySignInPopWindowController*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYSIGNINLASTDAYWIDGET_SETPOPCONTROLLER_OFFSET))(this, popController);
		}

		::System::Void RefreshLastDayInfo()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYSIGNINLASTDAYWIDGET_REFRESHLASTDAYINFO_OFFSET))(this);
		}

		::System::Void SetDayData(::Class_3_BE75AAF0F7C40C75_3* task, ::Class_1_D375C91CCE5D3999* activityBaseData)
		{
			return ((::System::Void(*)(::PVOID, ::Class_3_BE75AAF0F7C40C75_3*, ::Class_1_D375C91CCE5D3999*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYSIGNINLASTDAYWIDGET_SETDAYDATA_OFFSET))(this, task, activityBaseData);
		}
	};
}
