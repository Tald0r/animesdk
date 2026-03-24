#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_3EDF246633A325B0.h"
#include "unitysdk/MoleMole/UIMainCityStorePageController.h"

class Class_2_79AE422BA06F6D26_82;
class Class_2_8265DBA59E61D93F;
namespace MoleMole { class ScrollViewItemWidgetController; }
namespace MoleMole { class UIControlReference; }
namespace System { class EventArgs; }
namespace System { class String; }
namespace System { template <typename T> class Func_1; }

#define MOLEMOLE_UIFLIPCARDGAMEZHAOMAINPAGECONTROLLER_FLIPCARDSUCCESSHANDLE_OFFSET UNITYSDK_OFFSET(0x9BCEDC0)
#define MOLEMOLE_UIFLIPCARDGAMEZHAOMAINPAGECONTROLLER_GET_WINDOWTYPE_OFFSET UNITYSDK_OFFSET(0x9BCDB30)
#define MOLEMOLE_UIFLIPCARDGAMEZHAOMAINPAGECONTROLLER_INITVIEW_OFFSET UNITYSDK_OFFSET(0x9BCDFE0)
#define MOLEMOLE_UIFLIPCARDGAMEZHAOMAINPAGECONTROLLER_ONACTIVITYCHANGE_OFFSET UNITYSDK_OFFSET(0x9BCEC30)
#define MOLEMOLE_UIFLIPCARDGAMEZHAOMAINPAGECONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x9BCDB40)
#define MOLEMOLE_UIFLIPCARDGAMEZHAOMAINPAGECONTROLLER_ONCREATITEM_OFFSET UNITYSDK_OFFSET(0x9BCECA0)
#define MOLEMOLE_UIFLIPCARDGAMEZHAOMAINPAGECONTROLLER_ONINFOBTNCLICK_OFFSET UNITYSDK_OFFSET(0x9BCEF30)
#define MOLEMOLE_UIFLIPCARDGAMEZHAOMAINPAGECONTROLLER_ONITEMCHANGED_OFFSET UNITYSDK_OFFSET(0x9BCEB10)
#define MOLEMOLE_UIFLIPCARDGAMEZHAOMAINPAGECONTROLLER_ONREWARDBTNCLICK_OFFSET UNITYSDK_OFFSET(0x9BCF0B0)
#define MOLEMOLE_UIFLIPCARDGAMEZHAOMAINPAGECONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x9BCF290)
#define MOLEMOLE_UIFLIPCARDGAMEZHAOMAINPAGECONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x9BCDBE0)
#define MOLEMOLE_UIFLIPCARDGAMEZHAOMAINPAGECONTROLLER_REFRESHVIEW_OFFSET UNITYSDK_OFFSET(0x9BCE1A0)
#define MOLEMOLE_UIFLIPCARDGAMEZHAOMAINPAGECONTROLLER_SETUIWINDOWSETTING_OFFSET UNITYSDK_OFFSET(0x9BCF320)
#define MOLEMOLE_UIFLIPCARDGAMEZHAOMAINPAGECONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x9BCF410)
#define MOLEMOLE_UIFLIPCARDGAMEZHAOMAINPAGECONTROLLER__FLIPCARDSUCCESSHANDLE_B__15_0_OFFSET UNITYSDK_OFFSET(0x9BCF420)
#define MOLEMOLE_UIFLIPCARDGAMEZHAOMAINPAGECONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x9BCF4F0)
#define MOLEMOLE_UIFLIPCARDGAMEZHAOMAINPAGECONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x9BCF560)
#define MOLEMOLE_UIFLIPCARDGAMEZHAOMAINPAGECONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x9BCF570)
#define MOLEMOLE_UIFLIPCARDGAMEZHAOMAINPAGECONTROLLER___BASE_SETUIWINDOWSETTING_OFFSET UNITYSDK_OFFSET(0x9BCF580)

namespace MoleMole
{
	inline static constexpr unsigned int UIFlipCardGameZhaoMainPageController_TypeDefinitionIndex = 43501;

	class UIFlipCardGameZhaoMainPageController : public ::MoleMole::UIMainCityStorePageController
	{
	public:
		// static const ::System::String* TextCanFlipTimes; // 0x0
		// static const ::System::String* TextFlipCard; // 0x0
		// static const ::System::String* TextHasFlipedAllCard; // 0x0
		// static const ::System::String* TextHasNoFlipTimes; // 0x0
		// static const ::System::String* TextHasNoFlipTimesCountdown; // 0x0
		// static const ::System::String* TextRewardPreviewTitle; // 0x0
		::Class_2_8265DBA59E61D93F* _model; // 0x308
		::Class_2_79AE422BA06F6D26_82* _view; // 0x310

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFLIPCARDGAMEZHAOMAINPAGECONTROLLER__CTOR_OFFSET))(this);
		}

		::Enum_3_3EDF246633A325B0 get_windowType()
		{
			return ((::Enum_3_3EDF246633A325B0(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFLIPCARDGAMEZHAOMAINPAGECONTROLLER_GET_WINDOWTYPE_OFFSET))(this);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFLIPCARDGAMEZHAOMAINPAGECONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFLIPCARDGAMEZHAOMAINPAGECONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnItemChanged(::System::EventArgs* args)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFLIPCARDGAMEZHAOMAINPAGECONTROLLER_ONITEMCHANGED_OFFSET))(this, args);
		}

		::System::Void OnActivityChange(::System::EventArgs* args)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFLIPCARDGAMEZHAOMAINPAGECONTROLLER_ONACTIVITYCHANGE_OFFSET))(this, args);
		}

		::MoleMole::ScrollViewItemWidgetController* OnCreatItem(::System::Func_1<::MoleMole::UIControlReference*>* arg)
		{
			return ((::MoleMole::ScrollViewItemWidgetController*(*)(::PVOID, ::System::Func_1<::MoleMole::UIControlReference*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFLIPCARDGAMEZHAOMAINPAGECONTROLLER_ONCREATITEM_OFFSET))(this, arg);
		}

		::System::Void FlipCardSuccessHandle(::System::Int32 indexOfCardBoard, ::System::Single delay)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFLIPCARDGAMEZHAOMAINPAGECONTROLLER_FLIPCARDSUCCESSHANDLE_OFFSET))(this, indexOfCardBoard, delay);
		}

		::System::Void InitView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFLIPCARDGAMEZHAOMAINPAGECONTROLLER_INITVIEW_OFFSET))(this);
		}

		::System::Void RefreshView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFLIPCARDGAMEZHAOMAINPAGECONTROLLER_REFRESHVIEW_OFFSET))(this);
		}

		::System::Void OnInfoBtnClick()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFLIPCARDGAMEZHAOMAINPAGECONTROLLER_ONINFOBTNCLICK_OFFSET))(this);
		}

		::System::Void OnRewardBtnClick()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFLIPCARDGAMEZHAOMAINPAGECONTROLLER_ONREWARDBTNCLICK_OFFSET))(this);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFLIPCARDGAMEZHAOMAINPAGECONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void SetUIWindowSetting()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFLIPCARDGAMEZHAOMAINPAGECONTROLLER_SETUIWINDOWSETTING_OFFSET))(this);
		}

		::System::Void _FlipCardSuccessHandle_b__15_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFLIPCARDGAMEZHAOMAINPAGECONTROLLER__FLIPCARDSUCCESSHANDLE_B__15_0_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFLIPCARDGAMEZHAOMAINPAGECONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFLIPCARDGAMEZHAOMAINPAGECONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFLIPCARDGAMEZHAOMAINPAGECONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_SetUIWindowSetting()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFLIPCARDGAMEZHAOMAINPAGECONTROLLER___BASE_SETUIWINDOWSETTING_OFFSET))(this);
		}
	};
}
