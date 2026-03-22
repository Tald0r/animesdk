#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIWidgetController.h"

class Class_1_D375C91CCE5D3999;
class Class_2_8374F755CC1451AB;
namespace MoleMole { class ActivityWaterContext; }
namespace MoleMole { class UIActivityWaterProgressBarWidgetController; }
namespace MoleMole { class UIActivityWaterRewardWidgetController; }
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UIACTIVITYWATERWIDGETCONTROLLER_GETREWARD_OFFSET UNITYSDK_OFFSET(0xBAE0570)
#define MOLEMOLE_UIACTIVITYWATERWIDGETCONTROLLER_GET__ROOTACTIVITYDATA_OFFSET UNITYSDK_OFFSET(0xBAE0550)
#define MOLEMOLE_UIACTIVITYWATERWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0xBADFDA0)
#define MOLEMOLE_UIACTIVITYWATERWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0xBADFE40)
#define MOLEMOLE_UIACTIVITYWATERWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0xBADFBE0)
#define MOLEMOLE_UIACTIVITYWATERWIDGETCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0xBADFC80)
#define MOLEMOLE_UIACTIVITYWATERWIDGETCONTROLLER_REFRESHVIEW_OFFSET UNITYSDK_OFFSET(0xBADFF20)
#define MOLEMOLE_UIACTIVITYWATERWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0xBAE05E0)
#define MOLEMOLE_UIACTIVITYWATERWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0xBAE0690)
#define MOLEMOLE_UIACTIVITYWATERWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0xBAE0700)
#define MOLEMOLE_UIACTIVITYWATERWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0xBAE0780)
#define MOLEMOLE_UIACTIVITYWATERWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0xBAE07E0)

namespace MoleMole
{
	inline static constexpr unsigned int UIActivityWaterWidgetController_TypeDefinitionIndex = 39778;

	class UIActivityWaterWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::Class_2_8374F755CC1451AB* _view; // 0x2A0
		::MoleMole::ActivityWaterContext* _context; // 0x2A8
		::MoleMole::UIActivityWaterProgressBarWidgetController* _progressBarWidget; // 0x2B0
		::System::Collections::Generic::List_1<::MoleMole::UIActivityWaterRewardWidgetController*>* _rewardWidgets; // 0x2B8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYWATERWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYWATERWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYWATERWIDGETCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYWATERWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYWATERWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void RefreshView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYWATERWIDGETCONTROLLER_REFRESHVIEW_OFFSET))(this);
		}

		::System::Void GetReward()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYWATERWIDGETCONTROLLER_GETREWARD_OFFSET))(this);
		}

		::Class_1_D375C91CCE5D3999* get__rootActivityData()
		{
			return ((::Class_1_D375C91CCE5D3999*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYWATERWIDGETCONTROLLER_GET__ROOTACTIVITYDATA_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYWATERWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYWATERWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYWATERWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYWATERWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
