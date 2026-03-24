#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_93ADA810875FF1BB.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class Class_1_53ABF32F4BCABDBB;
class Class_1_59ACE1D68DDF9B15;
class Class_1_59BC20CDF12D1A85;
class Class_1_5CA3042B03E40C06;
class Class_1_A7ED02430811372E;
class Class_1_AE0C440AAD48398A;
class Class_1_C9FCD193B2E091DD;
class Class_1_D375C91CCE5D3999;
class Class_1_EEA0111A28582B57;
namespace MoleMole { class ActivityGuideUIBaseWidgetController; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define MOLEMOLE_ACTIVITYWIDGETCONTEXT_ADDACTIVITYCOMPONENTHANDLER_OFFSET UNITYSDK_OFFSET(0xE2A03D0)
#define MOLEMOLE_ACTIVITYWIDGETCONTEXT_ADDCOMPONENTCONTROLTAG_OFFSET UNITYSDK_OFFSET(0xE2A0D30)
#define MOLEMOLE_ACTIVITYWIDGETCONTEXT_CALLDORESET_OFFSET UNITYSDK_OFFSET(0xE2A0CA0)
#define MOLEMOLE_ACTIVITYWIDGETCONTEXT_CALLONDESTROY_OFFSET UNITYSDK_OFFSET(0xE2A0B90)
#define MOLEMOLE_ACTIVITYWIDGETCONTEXT_CALLONHIDE_OFFSET UNITYSDK_OFFSET(0xE2A0AA0)
#define MOLEMOLE_ACTIVITYWIDGETCONTEXT_CALLONOPEN_OFFSET UNITYSDK_OFFSET(0xE2A07E0)
#define MOLEMOLE_ACTIVITYWIDGETCONTEXT_CALLONSHOW_OFFSET UNITYSDK_OFFSET(0xE2A0920)
#define MOLEMOLE_ACTIVITYWIDGETCONTEXT_COPYBASE_OFFSET UNITYSDK_OFFSET(0xE2A0220)
#define MOLEMOLE_ACTIVITYWIDGETCONTEXT_HASCOMPONENTCONTROLTAG_OFFSET UNITYSDK_OFFSET(0xE2A0EC0)
#define MOLEMOLE_ACTIVITYWIDGETCONTEXT_INITWIDGETACTIVITY_OFFSET UNITYSDK_OFFSET(0xE2A0180)
#define MOLEMOLE_ACTIVITYWIDGETCONTEXT_SETBASEACTIVITYUIPROXY_OFFSET UNITYSDK_OFFSET(0xE2A02E0)
#define MOLEMOLE_ACTIVITYWIDGETCONTEXT_TRYADDGUIDEBUTTONCOMPONENT_OFFSET UNITYSDK_OFFSET(0xE2A0550)
#define MOLEMOLE_ACTIVITYWIDGETCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0xE2A02D0)

namespace MoleMole
{
	inline static constexpr unsigned int ActivityWidgetContext_TypeDefinitionIndex = 63904;

	class ActivityWidgetContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::Class_1_D375C91CCE5D3999* activityData; // 0x28
		::Class_1_59ACE1D68DDF9B15* componentFactory; // 0x30
		::System::Collections::Generic::HashSet_1<::Enum_3_93ADA810875FF1BB>* controlTags; // 0x38
		::Class_1_53ABF32F4BCABDBB* uiProxy; // 0x40
		::Class_1_59BC20CDF12D1A85* componentCenter; // 0x48
		::Class_1_A7ED02430811372E* activityPageData; // 0x50
		::Class_1_5CA3042B03E40C06* createProcessor; // 0x58
		::Class_1_AE0C440AAD48398A* pageCenter; // 0x60

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ACTIVITYWIDGETCONTEXT__CTOR_OFFSET))(this);
		}

		::System::Void InitWidgetActivity()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ACTIVITYWIDGETCONTEXT_INITWIDGETACTIVITY_OFFSET))(this);
		}

		::MoleMole::ActivityWidgetContext* CopyBase()
		{
			return ((::MoleMole::ActivityWidgetContext*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ACTIVITYWIDGETCONTEXT_COPYBASE_OFFSET))(this);
		}

		::System::Void SetBaseActivityUIProxy(::Class_1_53ABF32F4BCABDBB* uiProxy)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_53ABF32F4BCABDBB*))((::PBYTE)hIl2Cpp + MOLEMOLE_ACTIVITYWIDGETCONTEXT_SETBASEACTIVITYUIPROXY_OFFSET))(this, uiProxy);
		}

		::System::Void AddActivityComponentHandler(::Class_1_C9FCD193B2E091DD* activityComponentHandler)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_C9FCD193B2E091DD*))((::PBYTE)hIl2Cpp + MOLEMOLE_ACTIVITYWIDGETCONTEXT_ADDACTIVITYCOMPONENTHANDLER_OFFSET))(this, activityComponentHandler);
		}

		::System::Void TryAddGuideButtonComponent(::System::Int32 activityId)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_ACTIVITYWIDGETCONTEXT_TRYADDGUIDEBUTTONCOMPONENT_OFFSET))(this, activityId);
		}

		::System::Void CallOnOpen(::MoleMole::ActivityGuideUIBaseWidgetController* activityController, ::Class_1_EEA0111A28582B57* baseView, ::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::ActivityGuideUIBaseWidgetController*, ::Class_1_EEA0111A28582B57*, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_ACTIVITYWIDGETCONTEXT_CALLONOPEN_OFFSET))(this, activityController, baseView, openCtrlContext);
		}

		::System::Void CallOnShow(::MoleMole::UIControllerContextBase* showCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_ACTIVITYWIDGETCONTEXT_CALLONSHOW_OFFSET))(this, showCtrlContext);
		}

		::System::Void CallOnHide()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ACTIVITYWIDGETCONTEXT_CALLONHIDE_OFFSET))(this);
		}

		::System::Void CallOnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ACTIVITYWIDGETCONTEXT_CALLONDESTROY_OFFSET))(this);
		}

		::System::Void CallDoReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ACTIVITYWIDGETCONTEXT_CALLDORESET_OFFSET))(this);
		}

		::System::Void AddComponentControlTag(::Enum_3_93ADA810875FF1BB controlTag)
		{
			return ((::System::Void(*)(::PVOID, ::Enum_3_93ADA810875FF1BB))((::PBYTE)hIl2Cpp + MOLEMOLE_ACTIVITYWIDGETCONTEXT_ADDCOMPONENTCONTROLTAG_OFFSET))(this, controlTag);
		}

		::System::Boolean HasComponentControlTag(::Enum_3_93ADA810875FF1BB controlTag)
		{
			return ((::System::Boolean(*)(::PVOID, ::Enum_3_93ADA810875FF1BB))((::PBYTE)hIl2Cpp + MOLEMOLE_ACTIVITYWIDGETCONTEXT_HASCOMPONENTCONTROLTAG_OFFSET))(this, controlTag);
		}
	};
}
