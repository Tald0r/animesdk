#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/ScrollViewItemWidgetController.h"

class Class_1_D375C91CCE5D3999;
class Class_3_AE02BC8285203464_22;

#define MOLEMOLE_UIACTIVITYSIGNINWIDGETBASE_SETDAYDATA_OFFSET UNITYSDK_OFFSET(0xBF23DC0)
#define MOLEMOLE_UIACTIVITYSIGNINWIDGETBASE__CTOR_OFFSET UNITYSDK_OFFSET(0xBF23990)

namespace MoleMole
{
	inline static constexpr unsigned int UIActivitySignInWidgetBase_TypeDefinitionIndex = 80233;

	class UIActivitySignInWidgetBase : public ::MoleMole::ScrollViewItemWidgetController
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYSIGNINWIDGETBASE__CTOR_OFFSET))(this);
		}

		::System::Void SetDayData(::Class_3_AE02BC8285203464_22* task, ::Class_1_D375C91CCE5D3999* activityData)
		{
			return ((::System::Void(*)(::PVOID, ::Class_3_AE02BC8285203464_22*, ::Class_1_D375C91CCE5D3999*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYSIGNINWIDGETBASE_SETDAYDATA_OFFSET))(this, task, activityData);
		}
	};
}
