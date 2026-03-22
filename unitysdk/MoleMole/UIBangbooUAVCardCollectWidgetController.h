#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIWidgetController.h"

class Class_2_79AE422BA06F6D26_25;
class Class_2_8EFBFDFF19FA6CA9;
namespace MoleMole { class ScrollViewItemWidgetController; }
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace System { class EventArgs; }
namespace System { template <typename T> class Func_1; }

#define MOLEMOLE_UIBANGBOOUAVCARDCOLLECTWIDGETCONTROLLER_ONBANGBOOUAVCLICKCARD_OFFSET UNITYSDK_OFFSET(0xBF3FBA0)
#define MOLEMOLE_UIBANGBOOUAVCARDCOLLECTWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0xBF3F310)
#define MOLEMOLE_UIBANGBOOUAVCARDCOLLECTWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0xBF3F3B0)
#define MOLEMOLE_UIBANGBOOUAVCARDCOLLECTWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0xBF3EB90)
#define MOLEMOLE_UIBANGBOOUAVCARDCOLLECTWIDGETCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0xBF3ED00)
#define MOLEMOLE_UIBANGBOOUAVCARDCOLLECTWIDGETCONTROLLER_OPENDETAIL_OFFSET UNITYSDK_OFFSET(0xBF3F490)
#define MOLEMOLE_UIBANGBOOUAVCARDCOLLECTWIDGETCONTROLLER_REFRESHCARDCOUNT_OFFSET UNITYSDK_OFFSET(0xBF3F910)
#define MOLEMOLE_UIBANGBOOUAVCARDCOLLECTWIDGETCONTROLLER_REFRESHCARDINFO_OFFSET UNITYSDK_OFFSET(0xBF3F580)
#define MOLEMOLE_UIBANGBOOUAVCARDCOLLECTWIDGETCONTROLLER_REFRESHVIEW_OFFSET UNITYSDK_OFFSET(0xBF3EF90)
#define MOLEMOLE_UIBANGBOOUAVCARDCOLLECTWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0xBF3FC30)
#define MOLEMOLE_UIBANGBOOUAVCARDCOLLECTWIDGETCONTROLLER__ONUIINIT_B__1_0_OFFSET UNITYSDK_OFFSET(0xBF3FC70)
#define MOLEMOLE_UIBANGBOOUAVCARDCOLLECTWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0xBF3FCF0)
#define MOLEMOLE_UIBANGBOOUAVCARDCOLLECTWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0xBF3FD60)
#define MOLEMOLE_UIBANGBOOUAVCARDCOLLECTWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0xBF3FDE0)
#define MOLEMOLE_UIBANGBOOUAVCARDCOLLECTWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0xBF3FE40)

namespace MoleMole
{
	inline static constexpr unsigned int UIBangbooUAVCardCollectWidgetController_TypeDefinitionIndex = 77400;

	class UIBangbooUAVCardCollectWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::Class_2_79AE422BA06F6D26_25* _view; // 0x2A0
		::System::Int32 itemid; // 0x2A8
		::System::Boolean isBrief; // 0x2AC
		::Class_2_8EFBFDFF19FA6CA9* dreamModel; // 0x2B0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGBOOUAVCARDCOLLECTWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGBOOUAVCARDCOLLECTWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGBOOUAVCARDCOLLECTWIDGETCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGBOOUAVCARDCOLLECTWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGBOOUAVCARDCOLLECTWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void OpenDetail()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGBOOUAVCARDCOLLECTWIDGETCONTROLLER_OPENDETAIL_OFFSET))(this);
		}

		::System::Void RefreshView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGBOOUAVCARDCOLLECTWIDGETCONTROLLER_REFRESHVIEW_OFFSET))(this);
		}

		::System::Void OnBangBooUAVClickCard(::System::EventArgs* args)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGBOOUAVCARDCOLLECTWIDGETCONTROLLER_ONBANGBOOUAVCLICKCARD_OFFSET))(this, args);
		}

		::System::Void RefreshCardInfo(::System::Int32 itemid)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGBOOUAVCARDCOLLECTWIDGETCONTROLLER_REFRESHCARDINFO_OFFSET))(this, itemid);
		}

		::System::Void RefreshCardCount()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGBOOUAVCARDCOLLECTWIDGETCONTROLLER_REFRESHCARDCOUNT_OFFSET))(this);
		}

		::MoleMole::ScrollViewItemWidgetController* _OnUIInit_b__1_0(::System::Func_1<::MoleMole::UIControlReference*>* reference)
		{
			return ((::MoleMole::ScrollViewItemWidgetController*(*)(::PVOID, ::System::Func_1<::MoleMole::UIControlReference*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGBOOUAVCARDCOLLECTWIDGETCONTROLLER__ONUIINIT_B__1_0_OFFSET))(this, reference);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGBOOUAVCARDCOLLECTWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGBOOUAVCARDCOLLECTWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGBOOUAVCARDCOLLECTWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGBOOUAVCARDCOLLECTWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
