#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_837569F131F63A57.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/MoleMole/ScrollViewItemWidgetController.h"
#include "unitysdk/MoleMole/UISelectMonsterCardWidgetController_ItemRootTurningState.h"
#include "unitysdk/Struct_2_575273D27F02957E.h"

class Class_1_B2C060183F4E5398;
class Class_2_208CC9941471731A_240;
class Class_2_C7387D40D4120A48_11_Class_2_870C11D2A8D09105;
class Class_2_C885C7F33138A3B9;
class Class_3_2D3090DDF542616F_4;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIDoubleTipsInfoWidgetController; }
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace UnityEngine::Events { class UnityAction; }
namespace UnityEngine::UI::Extension { class UIButtonBase; }

#define MOLEMOLE_UISELECTMONSTERCARDWIDGETCONTROLLER_BINDEVENT_OFFSET UNITYSDK_OFFSET(0xAC35720)
#define MOLEMOLE_UISELECTMONSTERCARDWIDGETCONTROLLER_ENABLEEMPTY_OFFSET UNITYSDK_OFFSET(0xAC359B0)
#define MOLEMOLE_UISELECTMONSTERCARDWIDGETCONTROLLER_GETMAINBUTTON_OFFSET UNITYSDK_OFFSET(0xAC35A20)
#define MOLEMOLE_UISELECTMONSTERCARDWIDGETCONTROLLER_GET_CURRENTCARDSUMMARY_OFFSET UNITYSDK_OFFSET(0xAC35650)
#define MOLEMOLE_UISELECTMONSTERCARDWIDGETCONTROLLER_GET__VIEWMODEL_OFFSET UNITYSDK_OFFSET(0xAC35570)
#define MOLEMOLE_UISELECTMONSTERCARDWIDGETCONTROLLER_GET__VIEW_OFFSET UNITYSDK_OFFSET(0xAC355E0)
#define MOLEMOLE_UISELECTMONSTERCARDWIDGETCONTROLLER_INITITEMROOTSTATE_OFFSET UNITYSDK_OFFSET(0xAC38630)
#define MOLEMOLE_UISELECTMONSTERCARDWIDGETCONTROLLER_ISSELECTED_OFFSET UNITYSDK_OFFSET(0xAC38730)
#define MOLEMOLE_UISELECTMONSTERCARDWIDGETCONTROLLER_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0xAC35900)
#define MOLEMOLE_UISELECTMONSTERCARDWIDGETCONTROLLER_ONROLE1CLICK_OFFSET UNITYSDK_OFFSET(0xAC39BC0)
#define MOLEMOLE_UISELECTMONSTERCARDWIDGETCONTROLLER_ONROLE2CLICK_OFFSET UNITYSDK_OFFSET(0xAC39C30)
#define MOLEMOLE_UISELECTMONSTERCARDWIDGETCONTROLLER_ONROLE3CLICK_OFFSET UNITYSDK_OFFSET(0xAC39CA0)
#define MOLEMOLE_UISELECTMONSTERCARDWIDGETCONTROLLER_ONROLECLICK_OFFSET UNITYSDK_OFFSET(0xAC39B00)
#define MOLEMOLE_UISELECTMONSTERCARDWIDGETCONTROLLER_ONSCROLLITEMUPDATE_OFFSET UNITYSDK_OFFSET(0xAC35B00)
#define MOLEMOLE_UISELECTMONSTERCARDWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0xAC35670)
#define MOLEMOLE_UISELECTMONSTERCARDWIDGETCONTROLLER_REFESHITEMROOTVIEW_OFFSET UNITYSDK_OFFSET(0xAC39850)
#define MOLEMOLE_UISELECTMONSTERCARDWIDGETCONTROLLER_REFRESHCARDIMG_OFFSET UNITYSDK_OFFSET(0xAC38AB0)
#define MOLEMOLE_UISELECTMONSTERCARDWIDGETCONTROLLER_REFRESHEMPTYVIEW_OFFSET UNITYSDK_OFFSET(0xAC36240)
#define MOLEMOLE_UISELECTMONSTERCARDWIDGETCONTROLLER_REFRESHROLE_OFFSET UNITYSDK_OFFSET(0xAC394E0)
#define MOLEMOLE_UISELECTMONSTERCARDWIDGETCONTROLLER_REFRESHVIEW_OFFSET UNITYSDK_OFFSET(0xAC36920)
#define MOLEMOLE_UISELECTMONSTERCARDWIDGETCONTROLLER_SETCARDCLICKFUNC_OFFSET UNITYSDK_OFFSET(0xAC385C0)
#define MOLEMOLE_UISELECTMONSTERCARDWIDGETCONTROLLER_SETCLICKENABLE_OFFSET UNITYSDK_OFFSET(0xAC388B0)
#define MOLEMOLE_UISELECTMONSTERCARDWIDGETCONTROLLER_SET_CURRENTCARDSUMMARY_OFFSET UNITYSDK_OFFSET(0xAC35660)
#define MOLEMOLE_UISELECTMONSTERCARDWIDGETCONTROLLER_TURNITEMROOTACTIVE_OFFSET UNITYSDK_OFFSET(0xAC39950)
#define MOLEMOLE_UISELECTMONSTERCARDWIDGETCONTROLLER__BINDEVENT_B__23_0_OFFSET UNITYSDK_OFFSET(0xAC39D20)
#define MOLEMOLE_UISELECTMONSTERCARDWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0xAC39D10)
#define MOLEMOLE_UISELECTMONSTERCARDWIDGETCONTROLLER__TURNITEMROOTACTIVE_B__40_0_OFFSET UNITYSDK_OFFSET(0xAC39D90)
#define MOLEMOLE_UISELECTMONSTERCARDWIDGETCONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0xAC39E30)
#define MOLEMOLE_UISELECTMONSTERCARDWIDGETCONTROLLER___BASE_ONSCROLLITEMUPDATE_OFFSET UNITYSDK_OFFSET(0xAC39EA0)
#define MOLEMOLE_UISELECTMONSTERCARDWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0xAC39F20)

namespace MoleMole
{
	inline static constexpr unsigned int UISelectMonsterCardWidgetController_TypeDefinitionIndex = 46677;

	class UISelectMonsterCardWidgetController : public ::MoleMole::ScrollViewItemWidgetController
	{
	public:
		// static const ::System::String* ShowItemRootAnimName; // 0x0
		// static const ::System::String* HideItemRootAnimName; // 0x0
		::System::Action_1<::System::Int32>* onCardClick; // 0x2D0
		::System::Boolean autoRefreshSelectState; // 0x2D8
		::System::Int32 rewardLevel; // 0x2DC
		::System::Boolean _checkLevelMatch; // 0x2E0
		::System::Boolean macthMachineLevel; // 0x2E1
		::System::Boolean enableEmpty; // 0x2E2
		::System::Int32 caffBuffTipsID; // 0x2E4
		::System::Int32 overrideRewardID; // 0x2E8
		::MoleMole::UIDoubleTipsInfoWidgetController* _doubleTipsInfoWidgetController; // 0x2F0
		::System::Int32 selected; // 0x2F8
		::System::Int32 rewardItemId1; // 0x2FC
		::System::Int32 rewardItemId2; // 0x300
		::System::Int32 rewardItemId3; // 0x304
		::Class_1_B2C060183F4E5398* _CurrentCardSummary_k__BackingField; // 0x308
		::MoleMole::UISelectMonsterCardWidgetController_ItemRootTurningState currentState; // 0x310
		::MoleMole::UISelectMonsterCardWidgetController_ItemRootTurningState nextState; // 0x318

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISELECTMONSTERCARDWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::Class_2_C885C7F33138A3B9* get__viewModel()
		{
			return ((::Class_2_C885C7F33138A3B9*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISELECTMONSTERCARDWIDGETCONTROLLER_GET__VIEWMODEL_OFFSET))(this);
		}

		::Class_3_2D3090DDF542616F_4* get__view()
		{
			return ((::Class_3_2D3090DDF542616F_4*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISELECTMONSTERCARDWIDGETCONTROLLER_GET__VIEW_OFFSET))(this);
		}

		::Class_1_B2C060183F4E5398* get_CurrentCardSummary()
		{
			return ((::Class_1_B2C060183F4E5398*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISELECTMONSTERCARDWIDGETCONTROLLER_GET_CURRENTCARDSUMMARY_OFFSET))(this);
		}

		::System::Void set_CurrentCardSummary(::Class_1_B2C060183F4E5398* value)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_B2C060183F4E5398*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISELECTMONSTERCARDWIDGETCONTROLLER_SET_CURRENTCARDSUMMARY_OFFSET))(this, value);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISELECTMONSTERCARDWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void BindEvent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISELECTMONSTERCARDWIDGETCONTROLLER_BINDEVENT_OFFSET))(this);
		}

		::System::Void OnCreateViewModel(::Struct_2_575273D27F02957E& binderInfo, ::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_575273D27F02957E&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISELECTMONSTERCARDWIDGETCONTROLLER_ONCREATEVIEWMODEL_OFFSET))(this, binderInfo, controlReference);
		}

		::System::Void EnableEmpty(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UISELECTMONSTERCARDWIDGETCONTROLLER_ENABLEEMPTY_OFFSET))(this, value);
		}

		::UnityEngine::UI::Extension::UIButtonBase* GetMainButton()
		{
			return ((::UnityEngine::UI::Extension::UIButtonBase*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISELECTMONSTERCARDWIDGETCONTROLLER_GETMAINBUTTON_OFFSET))(this);
		}

		::System::Void OnScrollItemUpdate(::System::Int32 index, ::System::Object* data, ::System::Boolean init)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UISELECTMONSTERCARDWIDGETCONTROLLER_ONSCROLLITEMUPDATE_OFFSET))(this, index, data, init);
		}

		::System::Void SetCardClickFunc(::System::Action_1<::System::Int32>* onClick)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Int32>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISELECTMONSTERCARDWIDGETCONTROLLER_SETCARDCLICKFUNC_OFFSET))(this, onClick);
		}

		::System::Void InitItemRootState(::System::Boolean showItemRoot)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UISELECTMONSTERCARDWIDGETCONTROLLER_INITITEMROOTSTATE_OFFSET))(this, showItemRoot);
		}

		::System::Boolean IsSelected()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISELECTMONSTERCARDWIDGETCONTROLLER_ISSELECTED_OFFSET))(this);
		}

		::System::Void SetClickEnable(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UISELECTMONSTERCARDWIDGETCONTROLLER_SETCLICKENABLE_OFFSET))(this, value);
		}

		::System::Void RefreshView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISELECTMONSTERCARDWIDGETCONTROLLER_REFRESHVIEW_OFFSET))(this);
		}

		::System::Void RefeshItemRootView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISELECTMONSTERCARDWIDGETCONTROLLER_REFESHITEMROOTVIEW_OFFSET))(this);
		}

		::System::Void TurnItemRootActive(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UISELECTMONSTERCARDWIDGETCONTROLLER_TURNITEMROOTACTIVE_OFFSET))(this, value);
		}

		::System::Void RefreshEmptyView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISELECTMONSTERCARDWIDGETCONTROLLER_REFRESHEMPTYVIEW_OFFSET))(this);
		}

		::System::Void RefreshCardImg(::System::String* path, ::Foundation::AssetPath raceImg, ::Enum_3_837569F131F63A57 type, ::System::Boolean useFrontMask)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::Foundation::AssetPath, ::Enum_3_837569F131F63A57, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UISELECTMONSTERCARDWIDGETCONTROLLER_REFRESHCARDIMG_OFFSET))(this, path, raceImg, type, useFrontMask);
		}

		::System::Void RefreshRole(::Class_2_C7387D40D4120A48_11_Class_2_870C11D2A8D09105* view, ::System::Boolean enable, ::System::Int32 count1, ::System::Int32 count2, ::Class_2_208CC9941471731A_240* itemConfig, ::UnityEngine::Events::UnityAction* callback)
		{
			return ((::System::Void(*)(::PVOID, ::Class_2_C7387D40D4120A48_11_Class_2_870C11D2A8D09105*, ::System::Boolean, ::System::Int32, ::System::Int32, ::Class_2_208CC9941471731A_240*, ::UnityEngine::Events::UnityAction*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISELECTMONSTERCARDWIDGETCONTROLLER_REFRESHROLE_OFFSET))(this, view, enable, count1, count2, itemConfig, callback);
		}

		::System::Void OnRoleClick(::System::Int32 rewardItemId)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UISELECTMONSTERCARDWIDGETCONTROLLER_ONROLECLICK_OFFSET))(this, rewardItemId);
		}

		::System::Void OnRole1Click()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISELECTMONSTERCARDWIDGETCONTROLLER_ONROLE1CLICK_OFFSET))(this);
		}

		::System::Void OnRole2Click()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISELECTMONSTERCARDWIDGETCONTROLLER_ONROLE2CLICK_OFFSET))(this);
		}

		::System::Void OnRole3Click()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISELECTMONSTERCARDWIDGETCONTROLLER_ONROLE3CLICK_OFFSET))(this);
		}

		::System::Void _BindEvent_b__23_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISELECTMONSTERCARDWIDGETCONTROLLER__BINDEVENT_B__23_0_OFFSET))(this);
		}

		::System::Void _TurnItemRootActive_b__40_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISELECTMONSTERCARDWIDGETCONTROLLER__TURNITEMROOTACTIVE_B__40_0_OFFSET))(this);
		}

		::System::Void __base_OnCreateViewModel(::Struct_2_575273D27F02957E& P0, ::MoleMole::UIControlReference* P1)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_575273D27F02957E&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISELECTMONSTERCARDWIDGETCONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET))(this, P0, P1);
		}

		::System::Void __base_OnScrollItemUpdate(::System::Int32 P0, ::System::Object* P1, ::System::Boolean P2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UISELECTMONSTERCARDWIDGETCONTROLLER___BASE_ONSCROLLITEMUPDATE_OFFSET))(this, P0, P1, P2);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISELECTMONSTERCARDWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}
	};
}
