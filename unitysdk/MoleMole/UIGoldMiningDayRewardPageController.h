#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_3EDF246633A325B0.h"
#include "unitysdk/MoleMole/UIWindowController.h"

class Class_1_C50659C1F7858B0C;
class Class_2_D9B86F043E0024E5;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace MoleMole { class UIGeneralButtonController; }
namespace MoleMole { class UIGoldMiningDayStateRewardEffectItemWidgetController; }
namespace System { class EventArgs; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UIGOLDMININGDAYREWARDPAGECONTROLLER_GET_WINDOWTYPE_OFFSET UNITYSDK_OFFSET(0x96010E0)
#define MOLEMOLE_UIGOLDMININGDAYREWARDPAGECONTROLLER_ONALLRECEIVEBTNCLICK_OFFSET UNITYSDK_OFFSET(0x9601960)
#define MOLEMOLE_UIGOLDMININGDAYREWARDPAGECONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x96010F0)
#define MOLEMOLE_UIGOLDMININGDAYREWARDPAGECONTROLLER_ONGOLDMININGDAYSTATEREWARDGET_OFFSET UNITYSDK_OFFSET(0x9601C20)
#define MOLEMOLE_UIGOLDMININGDAYREWARDPAGECONTROLLER_ONSHOW_OFFSET UNITYSDK_OFFSET(0x9601560)
#define MOLEMOLE_UIGOLDMININGDAYREWARDPAGECONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x96018D0)
#define MOLEMOLE_UIGOLDMININGDAYREWARDPAGECONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x9601190)
#define MOLEMOLE_UIGOLDMININGDAYREWARDPAGECONTROLLER_UPDATEBTN_OFFSET UNITYSDK_OFFSET(0x9601780)
#define MOLEMOLE_UIGOLDMININGDAYREWARDPAGECONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x9601DA0)
#define MOLEMOLE_UIGOLDMININGDAYREWARDPAGECONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x9601DB0)
#define MOLEMOLE_UIGOLDMININGDAYREWARDPAGECONTROLLER___BASE_ONSHOW_OFFSET UNITYSDK_OFFSET(0x9601E20)
#define MOLEMOLE_UIGOLDMININGDAYREWARDPAGECONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x9601E30)
#define MOLEMOLE_UIGOLDMININGDAYREWARDPAGECONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x9601E40)

namespace MoleMole
{
	inline static constexpr unsigned int UIGoldMiningDayRewardPageController_TypeDefinitionIndex = 75433;

	class UIGoldMiningDayRewardPageController : public ::MoleMole::UIWindowController
	{
	public:
		::Class_2_D9B86F043E0024E5* _view; // 0x2F8
		::Class_1_C50659C1F7858B0C* data; // 0x300
		::System::Collections::Generic::List_1<::MoleMole::UIGoldMiningDayStateRewardEffectItemWidgetController*>* effectList; // 0x308
		::MoleMole::UIGeneralButtonController* effectGetBtn; // 0x310

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGOLDMININGDAYREWARDPAGECONTROLLER__CTOR_OFFSET))(this);
		}

		::Enum_3_3EDF246633A325B0 get_windowType()
		{
			return ((::Enum_3_3EDF246633A325B0(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGOLDMININGDAYREWARDPAGECONTROLLER_GET_WINDOWTYPE_OFFSET))(this);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGOLDMININGDAYREWARDPAGECONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGOLDMININGDAYREWARDPAGECONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnShow(::MoleMole::UIControllerContextBase* showCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGOLDMININGDAYREWARDPAGECONTROLLER_ONSHOW_OFFSET))(this, showCtrlContext);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGOLDMININGDAYREWARDPAGECONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void UpdateBtn()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGOLDMININGDAYREWARDPAGECONTROLLER_UPDATEBTN_OFFSET))(this);
		}

		::System::Void OnAllReceiveBtnClick()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGOLDMININGDAYREWARDPAGECONTROLLER_ONALLRECEIVEBTNCLICK_OFFSET))(this);
		}

		::System::Void OnGoldMiningDayStateRewardGet(::System::EventArgs* arg)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGOLDMININGDAYREWARDPAGECONTROLLER_ONGOLDMININGDAYSTATEREWARDGET_OFFSET))(this, arg);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGOLDMININGDAYREWARDPAGECONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnShow(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGOLDMININGDAYREWARDPAGECONTROLLER___BASE_ONSHOW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGOLDMININGDAYREWARDPAGECONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGOLDMININGDAYREWARDPAGECONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}
	};
}
