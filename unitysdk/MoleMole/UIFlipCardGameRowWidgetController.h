#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/ScrollViewItemWidgetController.h"

class Class_0_16E4307DCC419505_7;
class Class_2_A1B81CF87EE39EFE;
class Class_2_FC1C7C652DFD7506;
namespace MoleMole { class MonoGamepadModule; }
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIItemIconBtnSmallWidgetController; }
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System { template <typename T> class Action_1; }

#define MOLEMOLE_UIFLIPCARDGAMEROWWIDGETCONTROLLER_ONCLICKITEM_OFFSET UNITYSDK_OFFSET(0x9D6E6D0)
#define MOLEMOLE_UIFLIPCARDGAMEROWWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x9D6DFD0)
#define MOLEMOLE_UIFLIPCARDGAMEROWWIDGETCONTROLLER_ONGAMEPADMODULEFOCUS_OFFSET UNITYSDK_OFFSET(0x9D6DC20)
#define MOLEMOLE_UIFLIPCARDGAMEROWWIDGETCONTROLLER_ONREQUESTFLIPCARDSUCCESS_OFFSET UNITYSDK_OFFSET(0x9D6EA20)
#define MOLEMOLE_UIFLIPCARDGAMEROWWIDGETCONTROLLER_ONSCROLLITEMUPDATE_OFFSET UNITYSDK_OFFSET(0x9D6E150)
#define MOLEMOLE_UIFLIPCARDGAMEROWWIDGETCONTROLLER_ONSELECTCHANGED_OFFSET UNITYSDK_OFFSET(0x9D6DB20)
#define MOLEMOLE_UIFLIPCARDGAMEROWWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x9D6E070)
#define MOLEMOLE_UIFLIPCARDGAMEROWWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x9D6D6E0)
#define MOLEMOLE_UIFLIPCARDGAMEROWWIDGETCONTROLLER_REFRESHVIEW_OFFSET UNITYSDK_OFFSET(0x9D6E240)
#define MOLEMOLE_UIFLIPCARDGAMEROWWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x9D6EB50)
#define MOLEMOLE_UIFLIPCARDGAMEROWWIDGETCONTROLLER__ONREQUESTFLIPCARDSUCCESS_B__16_0_OFFSET UNITYSDK_OFFSET(0x9D6EB60)
#define MOLEMOLE_UIFLIPCARDGAMEROWWIDGETCONTROLLER___BASE_ONCLICKITEM_OFFSET UNITYSDK_OFFSET(0x9D6ED00)
#define MOLEMOLE_UIFLIPCARDGAMEROWWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x9D6ED10)
#define MOLEMOLE_UIFLIPCARDGAMEROWWIDGETCONTROLLER___BASE_ONGAMEPADMODULEFOCUS_OFFSET UNITYSDK_OFFSET(0x9D6ED80)
#define MOLEMOLE_UIFLIPCARDGAMEROWWIDGETCONTROLLER___BASE_ONSCROLLITEMUPDATE_OFFSET UNITYSDK_OFFSET(0x9D6EDF0)
#define MOLEMOLE_UIFLIPCARDGAMEROWWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x9D6EE70)
#define MOLEMOLE_UIFLIPCARDGAMEROWWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x9D6EEF0)

namespace MoleMole
{
	inline static constexpr unsigned int UIFlipCardGameRowWidgetController_TypeDefinitionIndex = 42251;

	class UIFlipCardGameRowWidgetController : public ::MoleMole::ScrollViewItemWidgetController
	{
	public:
		// static const ::System::String* FilpCardGameRowFishAniName; // 0x0
		::Class_2_A1B81CF87EE39EFE* _view; // 0x2D0
		::Class_2_FC1C7C652DFD7506* _flipCardModel; // 0x2D8
		::System::Int32 _dataIndex; // 0x2E0
		::MoleMole::UIItemIconBtnSmallWidgetController* _itemIconBtnSmall0; // 0x2E8
		::MoleMole::UIItemIconBtnSmallWidgetController* _itemIconBtnSmall1; // 0x2F0
		::System::Action_2<::System::Int32, ::System::Single>* FlipCardSuccessAction; // 0x2F8
		::System::Action_1<::System::Boolean>* OnGamePadSelectChanged; // 0x300

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFLIPCARDGAMEROWWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFLIPCARDGAMEROWWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnSelectChanged(::System::Boolean obj)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFLIPCARDGAMEROWWIDGETCONTROLLER_ONSELECTCHANGED_OFFSET))(this, obj);
		}

		::System::Void OnGamepadModuleFocus(::MoleMole::MonoGamepadModule* gamepadModule)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::MonoGamepadModule*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFLIPCARDGAMEROWWIDGETCONTROLLER_ONGAMEPADMODULEFOCUS_OFFSET))(this, gamepadModule);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFLIPCARDGAMEROWWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFLIPCARDGAMEROWWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void OnScrollItemUpdate(::System::Int32 index, ::System::Object* data, ::System::Boolean init)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFLIPCARDGAMEROWWIDGETCONTROLLER_ONSCROLLITEMUPDATE_OFFSET))(this, index, data, init);
		}

		::System::Void RefreshView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFLIPCARDGAMEROWWIDGETCONTROLLER_REFRESHVIEW_OFFSET))(this);
		}

		::System::Void OnClickItem()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFLIPCARDGAMEROWWIDGETCONTROLLER_ONCLICKITEM_OFFSET))(this);
		}

		::System::Void OnRequestFlipCardSuccess(::Class_0_16E4307DCC419505_7* rcvmessage)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_7*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFLIPCARDGAMEROWWIDGETCONTROLLER_ONREQUESTFLIPCARDSUCCESS_OFFSET))(this, rcvmessage);
		}

		::System::Void _OnRequestFlipCardSuccess_b__16_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFLIPCARDGAMEROWWIDGETCONTROLLER__ONREQUESTFLIPCARDSUCCESS_B__16_0_OFFSET))(this);
		}

		::System::Void __base_OnClickItem()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFLIPCARDGAMEROWWIDGETCONTROLLER___BASE_ONCLICKITEM_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFLIPCARDGAMEROWWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnGamepadModuleFocus(::MoleMole::MonoGamepadModule* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::MonoGamepadModule*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFLIPCARDGAMEROWWIDGETCONTROLLER___BASE_ONGAMEPADMODULEFOCUS_OFFSET))(this, P0);
		}

		::System::Void __base_OnScrollItemUpdate(::System::Int32 P0, ::System::Object* P1, ::System::Boolean P2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFLIPCARDGAMEROWWIDGETCONTROLLER___BASE_ONSCROLLITEMUPDATE_OFFSET))(this, P0, P1, P2);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFLIPCARDGAMEROWWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFLIPCARDGAMEROWWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}
	};
}
