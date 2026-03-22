#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UISocialCircleFriendCardRowWidgetController.h"

#define MOLEMOLE_UISOCIALCIRCLEFRIENDCARDROWWIDGETCONTROLLER_REPORT_ONCLICKREPORTCHECKMARKCALLBACK_OFFSET UNITYSDK_OFFSET(0xD6CB790)
#define MOLEMOLE_UISOCIALCIRCLEFRIENDCARDROWWIDGETCONTROLLER_REPORT_PROCESSBYOPENPAGE_OFFSET UNITYSDK_OFFSET(0xD6CB410)
#define MOLEMOLE_UISOCIALCIRCLEFRIENDCARDROWWIDGETCONTROLLER_REPORT__CTOR_OFFSET UNITYSDK_OFFSET(0xD6CB8D0)
#define MOLEMOLE_UISOCIALCIRCLEFRIENDCARDROWWIDGETCONTROLLER_REPORT___BASE_PROCESSBYOPENPAGE_OFFSET UNITYSDK_OFFSET(0xD6CB8F0)

namespace MoleMole
{
	inline static constexpr unsigned int UISocialCircleFriendCardRowWidgetController_Report_TypeDefinitionIndex = 69131;

	class UISocialCircleFriendCardRowWidgetController_Report : public ::MoleMole::UISocialCircleFriendCardRowWidgetController
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISOCIALCIRCLEFRIENDCARDROWWIDGETCONTROLLER_REPORT__CTOR_OFFSET))(this);
		}

		::System::Void ProcessByOpenPage(::System::Boolean& showPlatformInfoOnly)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean&))((::PBYTE)hIl2Cpp + MOLEMOLE_UISOCIALCIRCLEFRIENDCARDROWWIDGETCONTROLLER_REPORT_PROCESSBYOPENPAGE_OFFSET))(this, showPlatformInfoOnly);
		}

		::System::Void OnClickReportCheckMarkCallback()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISOCIALCIRCLEFRIENDCARDROWWIDGETCONTROLLER_REPORT_ONCLICKREPORTCHECKMARKCALLBACK_OFFSET))(this);
		}

		::System::Void __base_ProcessByOpenPage(::System::Boolean& P0)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean&))((::PBYTE)hIl2Cpp + MOLEMOLE_UISOCIALCIRCLEFRIENDCARDROWWIDGETCONTROLLER_REPORT___BASE_PROCESSBYOPENPAGE_OFFSET))(this, P0);
		}
	};
}
