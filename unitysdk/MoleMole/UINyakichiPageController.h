#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_3EDF246633A325B0.h"
#include "unitysdk/MoleMole/InputActionEvent.h"
#include "unitysdk/MoleMole/UIMainCityStorePageController.h"
#include "unitysdk/UnityEngine/Vector2.h"

class Class_1_48C59E92AE345A89;
class Class_2_60638234271CCDB8_115;
class Class_2_7C995C45BC10DBB8;
namespace MoleMole { class MonoGamepadModule; }
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace MoleMole { class UIGeneralDynamicTipsPopWindowController; }
namespace MoleMole { class UIGeneralPopUpHintWidgetController; }
namespace System { class EventArgs; }
namespace System { class String; }

#define MOLEMOLE_UINYAKICHIPAGECONTROLLER_GET_WINDOWTYPE_OFFSET UNITYSDK_OFFSET(0xAB7AA80)
#define MOLEMOLE_UINYAKICHIPAGECONTROLLER_ONCLICKDROPDOWN_OFFSET UNITYSDK_OFFSET(0xAB7EA90)
#define MOLEMOLE_UINYAKICHIPAGECONTROLLER_ONCLICKINFOBTN_OFFSET UNITYSDK_OFFSET(0xAB7C260)
#define MOLEMOLE_UINYAKICHIPAGECONTROLLER_ONCLICKSTATEBTN_OFFSET UNITYSDK_OFFSET(0xAB7CC70)
#define MOLEMOLE_UINYAKICHIPAGECONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0xAB7AB80)
#define MOLEMOLE_UINYAKICHIPAGECONTROLLER_ONDROPDOWNCHANGE_OFFSET UNITYSDK_OFFSET(0xAB7F590)
#define MOLEMOLE_UINYAKICHIPAGECONTROLLER_ONGAMEPADMODULETRYOVERRIDENEXTSELECTINDEX_OFFSET UNITYSDK_OFFSET(0xAB7F1E0)
#define MOLEMOLE_UINYAKICHIPAGECONTROLLER_ONINPUTACTION_OFFSET UNITYSDK_OFFSET(0xAB7C170)
#define MOLEMOLE_UINYAKICHIPAGECONTROLLER_ONLAYOUTPLATFORMCHANGED_OFFSET UNITYSDK_OFFSET(0xAB7E8C0)
#define MOLEMOLE_UINYAKICHIPAGECONTROLLER_ONQUESTCLICK_OFFSET UNITYSDK_OFFSET(0xAB7D550)
#define MOLEMOLE_UINYAKICHIPAGECONTROLLER_ONSHOW_OFFSET UNITYSDK_OFFSET(0xAB7BFA0)
#define MOLEMOLE_UINYAKICHIPAGECONTROLLER_ONTABCLICK_OFFSET UNITYSDK_OFFSET(0xAB7CF50)
#define MOLEMOLE_UINYAKICHIPAGECONTROLLER_ONTAKEREWARD_OFFSET UNITYSDK_OFFSET(0xAB7C470)
#define MOLEMOLE_UINYAKICHIPAGECONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0xAB7BF10)
#define MOLEMOLE_UINYAKICHIPAGECONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0xAB7AC20)
#define MOLEMOLE_UINYAKICHIPAGECONTROLLER_PLAYPROGRESSANIM_OFFSET UNITYSDK_OFFSET(0xAB7CA90)
#define MOLEMOLE_UINYAKICHIPAGECONTROLLER_PLAYTAKEREWARDANI_OFFSET UNITYSDK_OFFSET(0xAB7E670)
#define MOLEMOLE_UINYAKICHIPAGECONTROLLER_SETCURRENTSTOREBYSTOREINDEX_OFFSET UNITYSDK_OFFSET(0xAB7B7D0)
#define MOLEMOLE_UINYAKICHIPAGECONTROLLER_SETUIWINDOWSETTING_OFFSET UNITYSDK_OFFSET(0xAB7AA90)
#define MOLEMOLE_UINYAKICHIPAGECONTROLLER_SHOWPROGRESS_OFFSET UNITYSDK_OFFSET(0xAB7E6E0)
#define MOLEMOLE_UINYAKICHIPAGECONTROLLER_UPDATEGOLDENSTATE_OFFSET UNITYSDK_OFFSET(0xAB7D0E0)
#define MOLEMOLE_UINYAKICHIPAGECONTROLLER_UPDATEGROUPUI_OFFSET UNITYSDK_OFFSET(0xAB7C970)
#define MOLEMOLE_UINYAKICHIPAGECONTROLLER_UPDATEQUESTUI_OFFSET UNITYSDK_OFFSET(0xAB7D740)
#define MOLEMOLE_UINYAKICHIPAGECONTROLLER__CCTOR_OFFSET UNITYSDK_OFFSET(0xAB7F6B0)
#define MOLEMOLE_UINYAKICHIPAGECONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0xAB7F620)
#define MOLEMOLE_UINYAKICHIPAGECONTROLLER__ONUIINIT_B__6_0_OFFSET UNITYSDK_OFFSET(0xAB7F6C0)
#define MOLEMOLE_UINYAKICHIPAGECONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0xAB7F710)
#define MOLEMOLE_UINYAKICHIPAGECONTROLLER___BASE_ONGAMEPADMODULETRYOVERRIDENEXTSELECTINDEX_OFFSET UNITYSDK_OFFSET(0xAB7F780)
#define MOLEMOLE_UINYAKICHIPAGECONTROLLER___BASE_ONINPUTACTION_OFFSET UNITYSDK_OFFSET(0xAB7F840)
#define MOLEMOLE_UINYAKICHIPAGECONTROLLER___BASE_ONLAYOUTPLATFORMCHANGED_OFFSET UNITYSDK_OFFSET(0xAB7F870)
#define MOLEMOLE_UINYAKICHIPAGECONTROLLER___BASE_ONSHOW_OFFSET UNITYSDK_OFFSET(0xAB7F8D0)
#define MOLEMOLE_UINYAKICHIPAGECONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0xAB7F940)
#define MOLEMOLE_UINYAKICHIPAGECONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0xAB7F950)
#define MOLEMOLE_UINYAKICHIPAGECONTROLLER___BASE_SETUIWINDOWSETTING_OFFSET UNITYSDK_OFFSET(0xAB7F960)

namespace MoleMole
{
	inline static constexpr unsigned int UINyakichiPageController_TypeDefinitionIndex = 67988;

	class UINyakichiPageController : public ::MoleMole::UIMainCityStorePageController
	{
	public:
		static ::System::Boolean* StaticGet_testLog()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(UINyakichiPageController_TypeDefinitionIndex)->GetStaticField(0xF380);
		}
		::Class_2_60638234271CCDB8_115* _view; // 0x308
		::Class_1_48C59E92AE345A89* storeData; // 0x310
		::System::Int32 StoreIndex; // 0x318
		::Class_2_7C995C45BC10DBB8* _model; // 0x320
		::MoleMole::UIGeneralDynamicTipsPopWindowController* _dropDownTipsWidgetController; // 0x328
		::System::Int32 tabIndex; // 0x330
		::System::Int32 selectQuestID; // 0x334
		::MoleMole::UIGeneralPopUpHintWidgetController* dropDownHint; // 0x338
		::System::String* ContentSwitchAni; // 0x340
		::System::String* CardBGSwitchAni; // 0x348
		::System::String* ProgressAddAni; // 0x350
		::System::String* ProgressSwitchAni; // 0x358
		::System::String* IconGoldenFadeIn; // 0x360
		::System::String* IconGoldenFadeOut; // 0x368

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UINYAKICHIPAGECONTROLLER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UINYAKICHIPAGECONTROLLER__CCTOR_OFFSET))();
		}

		::Enum_3_3EDF246633A325B0 get_windowType()
		{
			return ((::Enum_3_3EDF246633A325B0(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UINYAKICHIPAGECONTROLLER_GET_WINDOWTYPE_OFFSET))(this);
		}

		::System::Void SetUIWindowSetting()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UINYAKICHIPAGECONTROLLER_SETUIWINDOWSETTING_OFFSET))(this);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UINYAKICHIPAGECONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UINYAKICHIPAGECONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UINYAKICHIPAGECONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void OnShow(::MoleMole::UIControllerContextBase* showCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UINYAKICHIPAGECONTROLLER_ONSHOW_OFFSET))(this, showCtrlContext);
		}

		::System::Boolean OnInputAction(::MoleMole::InputActionEvent inputAction)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::InputActionEvent))((::PBYTE)hIl2Cpp + MOLEMOLE_UINYAKICHIPAGECONTROLLER_ONINPUTACTION_OFFSET))(this, inputAction);
		}

		::System::Void OnTakeReward(::System::EventArgs* arg)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UINYAKICHIPAGECONTROLLER_ONTAKEREWARD_OFFSET))(this, arg);
		}

		::System::Void PlayProgressAnim(::System::String* animName)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_UINYAKICHIPAGECONTROLLER_PLAYPROGRESSANIM_OFFSET))(this, animName);
		}

		::System::Void OnClickInfoBtn()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UINYAKICHIPAGECONTROLLER_ONCLICKINFOBTN_OFFSET))(this);
		}

		::System::Void OnClickStateBtn()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UINYAKICHIPAGECONTROLLER_ONCLICKSTATEBTN_OFFSET))(this);
		}

		::System::Void OnTabClick(::System::Int32 index)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UINYAKICHIPAGECONTROLLER_ONTABCLICK_OFFSET))(this, index);
		}

		::System::Void OnQuestClick(::System::Int32 index)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UINYAKICHIPAGECONTROLLER_ONQUESTCLICK_OFFSET))(this, index);
		}

		::System::Void UpdateGroupUI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UINYAKICHIPAGECONTROLLER_UPDATEGROUPUI_OFFSET))(this);
		}

		::System::Void PlayTakeRewardAni(::System::EventArgs* arg)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UINYAKICHIPAGECONTROLLER_PLAYTAKEREWARDANI_OFFSET))(this, arg);
		}

		::System::Void UpdateGoldenState()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UINYAKICHIPAGECONTROLLER_UPDATEGOLDENSTATE_OFFSET))(this);
		}

		::System::Void UpdateQuestUI(::System::Boolean resetRightDescPos)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UINYAKICHIPAGECONTROLLER_UPDATEQUESTUI_OFFSET))(this, resetRightDescPos);
		}

		::System::Void ShowProgress()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UINYAKICHIPAGECONTROLLER_SHOWPROGRESS_OFFSET))(this);
		}

		::System::Void SetCurrentStoreByStoreIndex(::System::Int32 index)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UINYAKICHIPAGECONTROLLER_SETCURRENTSTOREBYSTOREINDEX_OFFSET))(this, index);
		}

		::System::Void OnLayoutPlatformChanged()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UINYAKICHIPAGECONTROLLER_ONLAYOUTPLATFORMCHANGED_OFFSET))(this);
		}

		::System::Void OnClickDropDown()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UINYAKICHIPAGECONTROLLER_ONCLICKDROPDOWN_OFFSET))(this);
		}

		::System::Int32 OnGamepadModuleTryOverrideNextSelectIndex(::MoleMole::MonoGamepadModule* gamepadModule, ::System::Int32 curIndex, ::System::Int32 nextIndex, ::MoleMole::InputActionEvent actionEvent, ::UnityEngine::Vector2 moveDir)
		{
			return ((::System::Int32(*)(::PVOID, ::MoleMole::MonoGamepadModule*, ::System::Int32, ::System::Int32, ::MoleMole::InputActionEvent, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + MOLEMOLE_UINYAKICHIPAGECONTROLLER_ONGAMEPADMODULETRYOVERRIDENEXTSELECTINDEX_OFFSET))(this, gamepadModule, curIndex, nextIndex, actionEvent, moveDir);
		}

		::System::Void OnDropDownChange(::System::Int32 index, ::System::Boolean isSelect)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UINYAKICHIPAGECONTROLLER_ONDROPDOWNCHANGE_OFFSET))(this, index, isSelect);
		}

		::System::Void _OnUIInit_b__6_0(::System::EventArgs* arg)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UINYAKICHIPAGECONTROLLER__ONUIINIT_B__6_0_OFFSET))(this, arg);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UINYAKICHIPAGECONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Int32 __base_OnGamepadModuleTryOverrideNextSelectIndex(::MoleMole::MonoGamepadModule* P0, ::System::Int32 P1, ::System::Int32 P2, ::MoleMole::InputActionEvent P3, ::UnityEngine::Vector2 P4)
		{
			return ((::System::Int32(*)(::PVOID, ::MoleMole::MonoGamepadModule*, ::System::Int32, ::System::Int32, ::MoleMole::InputActionEvent, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + MOLEMOLE_UINYAKICHIPAGECONTROLLER___BASE_ONGAMEPADMODULETRYOVERRIDENEXTSELECTINDEX_OFFSET))(this, P0, P1, P2, P3, P4);
		}

		::System::Boolean __base_OnInputAction(::MoleMole::InputActionEvent P0)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::InputActionEvent))((::PBYTE)hIl2Cpp + MOLEMOLE_UINYAKICHIPAGECONTROLLER___BASE_ONINPUTACTION_OFFSET))(this, P0);
		}

		::System::Void __base_OnLayoutPlatformChanged()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UINYAKICHIPAGECONTROLLER___BASE_ONLAYOUTPLATFORMCHANGED_OFFSET))(this);
		}

		::System::Void __base_OnShow(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UINYAKICHIPAGECONTROLLER___BASE_ONSHOW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UINYAKICHIPAGECONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UINYAKICHIPAGECONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_SetUIWindowSetting()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UINYAKICHIPAGECONTROLLER___BASE_SETUIWINDOWSETTING_OFFSET))(this);
		}
	};
}
