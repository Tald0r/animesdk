#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_3EDF246633A325B0.h"
#include "unitysdk/Enum_3_B90C1A15EA6E3C2B.h"
#include "unitysdk/MoleMole/UIWindowController.h"

class Class_1_B33BAF81033C55CD;
class Class_2_46B1304F31463D00_2;
class Class_2_5E184A036E0D2174;
class MonoUITableScrollV2;
namespace MoleMole { class ScrollViewItemWidgetController; }
namespace MoleMole { class UIAbyssS2InlevelMapAreaWidgetController_IconTipInfo; }
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace System { template <typename T> class Func_1; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UIABYSSMAPDETAILPOPWINDOWCONTROLLER_CREATEDATA_OFFSET UNITYSDK_OFFSET(0xD84E150)
#define MOLEMOLE_UIABYSSMAPDETAILPOPWINDOWCONTROLLER_GET_WINDOWTYPE_OFFSET UNITYSDK_OFFSET(0xD84DB00)
#define MOLEMOLE_UIABYSSMAPDETAILPOPWINDOWCONTROLLER_INITVIEW_OFFSET UNITYSDK_OFFSET(0xD84DFA0)
#define MOLEMOLE_UIABYSSMAPDETAILPOPWINDOWCONTROLLER_ONCLOSEBTNCLICKED_OFFSET UNITYSDK_OFFSET(0xD84DD50)
#define MOLEMOLE_UIABYSSMAPDETAILPOPWINDOWCONTROLLER_ONCREATEICONTIP_OFFSET UNITYSDK_OFFSET(0xD84E520)
#define MOLEMOLE_UIABYSSMAPDETAILPOPWINDOWCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0xD84DE70)
#define MOLEMOLE_UIABYSSMAPDETAILPOPWINDOWCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0xD84DF10)
#define MOLEMOLE_UIABYSSMAPDETAILPOPWINDOWCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0xD84DB10)
#define MOLEMOLE_UIABYSSMAPDETAILPOPWINDOWCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0xD84DDC0)
#define MOLEMOLE_UIABYSSMAPDETAILPOPWINDOWCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0xD84E600)
#define MOLEMOLE_UIABYSSMAPDETAILPOPWINDOWCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0xD84E610)
#define MOLEMOLE_UIABYSSMAPDETAILPOPWINDOWCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0xD84E680)
#define MOLEMOLE_UIABYSSMAPDETAILPOPWINDOWCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0xD84E690)
#define MOLEMOLE_UIABYSSMAPDETAILPOPWINDOWCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0xD84E6A0)

namespace MoleMole
{
	inline static constexpr unsigned int UIAbyssMapDetailPopWindowController_TypeDefinitionIndex = 61253;

	class UIAbyssMapDetailPopWindowController : public ::MoleMole::UIWindowController
	{
	public:
		::Class_2_46B1304F31463D00_2* _view; // 0x2F8
		::MonoUITableScrollV2* _scrollview; // 0x300
		::System::Collections::Generic::List_1<::Class_1_B33BAF81033C55CD*>* _data; // 0x308
		::Class_2_5E184A036E0D2174* _scrollViewExpendAbleContainer; // 0x310

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSMAPDETAILPOPWINDOWCONTROLLER__CTOR_OFFSET))(this);
		}

		::Enum_3_3EDF246633A325B0 get_windowType()
		{
			return ((::Enum_3_3EDF246633A325B0(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSMAPDETAILPOPWINDOWCONTROLLER_GET_WINDOWTYPE_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSMAPDETAILPOPWINDOWCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnCloseBtnClicked()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSMAPDETAILPOPWINDOWCONTROLLER_ONCLOSEBTNCLICKED_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSMAPDETAILPOPWINDOWCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSMAPDETAILPOPWINDOWCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSMAPDETAILPOPWINDOWCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void InitView(::System::Collections::Generic::IReadOnlyList_1<::MoleMole::UIAbyssS2InlevelMapAreaWidgetController_IconTipInfo*>* iconTips)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IReadOnlyList_1<::MoleMole::UIAbyssS2InlevelMapAreaWidgetController_IconTipInfo*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSMAPDETAILPOPWINDOWCONTROLLER_INITVIEW_OFFSET))(this, iconTips);
		}

		::System::Collections::Generic::List_1<::Class_1_B33BAF81033C55CD*>* CreateData(::System::Collections::Generic::IReadOnlyList_1<::MoleMole::UIAbyssS2InlevelMapAreaWidgetController_IconTipInfo*>* iconTips)
		{
			return ((::System::Collections::Generic::List_1<::Class_1_B33BAF81033C55CD*>*(*)(::PVOID, ::System::Collections::Generic::IReadOnlyList_1<::MoleMole::UIAbyssS2InlevelMapAreaWidgetController_IconTipInfo*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSMAPDETAILPOPWINDOWCONTROLLER_CREATEDATA_OFFSET))(this, iconTips);
		}

		::MoleMole::ScrollViewItemWidgetController* OnCreateIconTip(::Enum_3_B90C1A15EA6E3C2B ctrl, ::System::Func_1<::MoleMole::UIControlReference*>* arg)
		{
			return ((::MoleMole::ScrollViewItemWidgetController*(*)(::PVOID, ::Enum_3_B90C1A15EA6E3C2B, ::System::Func_1<::MoleMole::UIControlReference*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSMAPDETAILPOPWINDOWCONTROLLER_ONCREATEICONTIP_OFFSET))(this, ctrl, arg);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSMAPDETAILPOPWINDOWCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSMAPDETAILPOPWINDOWCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSMAPDETAILPOPWINDOWCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSMAPDETAILPOPWINDOWCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
