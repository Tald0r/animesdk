#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/ScrollViewItemWidgetController.h"

class Class_1_D375C91CCE5D3999;
class Class_3_BE75AAF0F7C40C75_3;

#define MOLEMOLE_UIACTIVITYSIGNINWIDGETBASE_SETDAYDATA_OFFSET UNITYSDK_OFFSET(0xBD912F0)
#define MOLEMOLE_UIACTIVITYSIGNINWIDGETBASE__CTOR_OFFSET UNITYSDK_OFFSET(0xBD90EC0)

namespace MoleMole
{
	inline static constexpr unsigned int UIActivitySignInWidgetBase_TypeDefinitionIndex = 39361;

	class UIActivitySignInWidgetBase : public ::MoleMole::ScrollViewItemWidgetController
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYSIGNINWIDGETBASE__CTOR_OFFSET))(this);
		}

		::System::Void SetDayData(::Class_3_BE75AAF0F7C40C75_3* task, ::Class_1_D375C91CCE5D3999* activityData)
		{
			return ((::System::Void(*)(::PVOID, ::Class_3_BE75AAF0F7C40C75_3*, ::Class_1_D375C91CCE5D3999*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYSIGNINWIDGETBASE_SETDAYDATA_OFFSET))(this, task, activityData);
		}
	};
}
