#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_C4CB11A2FD957208_Struct_2_98E057419FFAAB00.h"
#include "unitysdk/MoleMole/ScrollViewItemWidgetController.h"
#include "unitysdk/MoleMole/UIHadalZone_RewardV3_PopWindowController_HadalRewardData.h"

class Class_2_260D74264003CECB;
class Class_2_468A4FBF2E9F527C;
class Class_3_025FF4981524A424_43;
namespace MoleMole { class MonoGamepadCustomList; }
namespace MoleMole { class MonoGamepadNestedListDelegate; }
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIItemIconBtnWidgetController; }
namespace MoleMole { class UIRankingImageConfig; }
namespace System { class Action; }
namespace System { class EventArgs; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UIHADALZONE_REWARDROWV3_WIDGETCONTROLLER_GET_TAKEREWARDACTION_OFFSET UNITYSDK_OFFSET(0xB0FFE60)
#define MOLEMOLE_UIHADALZONE_REWARDROWV3_WIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0xB0FE590)
#define MOLEMOLE_UIHADALZONE_REWARDROWV3_WIDGETCONTROLLER_ONSCROLLITEMRECYCLE_OFFSET UNITYSDK_OFFSET(0xB0FF4A0)
#define MOLEMOLE_UIHADALZONE_REWARDROWV3_WIDGETCONTROLLER_ONSCROLLITEMUPDATE_OFFSET UNITYSDK_OFFSET(0xB0FE8C0)
#define MOLEMOLE_UIHADALZONE_REWARDROWV3_WIDGETCONTROLLER_ONUICLOSE_OFFSET UNITYSDK_OFFSET(0xB0FE770)
#define MOLEMOLE_UIHADALZONE_REWARDROWV3_WIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0xB0FE7E0)
#define MOLEMOLE_UIHADALZONE_REWARDROWV3_WIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0xB0FE310)
#define MOLEMOLE_UIHADALZONE_REWARDROWV3_WIDGETCONTROLLER_REFRESHREWARDITEMS_OFFSET UNITYSDK_OFFSET(0xB0FEB90)
#define MOLEMOLE_UIHADALZONE_REWARDROWV3_WIDGETCONTROLLER_SET_TAKEREWARDACTION_OFFSET UNITYSDK_OFFSET(0xB0FFE70)
#define MOLEMOLE_UIHADALZONE_REWARDROWV3_WIDGETCONTROLLER__CLEARPREVS_OFFSET UNITYSDK_OFFSET(0xB0FF540)
#define MOLEMOLE_UIHADALZONE_REWARDROWV3_WIDGETCONTROLLER__CREATEREWARDITEMSCROLL_OFFSET UNITYSDK_OFFSET(0xB0FF7C0)
#define MOLEMOLE_UIHADALZONE_REWARDROWV3_WIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0xB0FFE80)
#define MOLEMOLE_UIHADALZONE_REWARDROWV3_WIDGETCONTROLLER__ONSCROLLITEMUPDATE_B__12_0_OFFSET UNITYSDK_OFFSET(0xB0FFE90)
#define MOLEMOLE_UIHADALZONE_REWARDROWV3_WIDGETCONTROLLER__SETBTNCLICK_OFFSET UNITYSDK_OFFSET(0xB0FF6E0)
#define MOLEMOLE_UIHADALZONE_REWARDROWV3_WIDGETCONTROLLER__TAKEREWARD_OFFSET UNITYSDK_OFFSET(0xB0FFB70)
#define MOLEMOLE_UIHADALZONE_REWARDROWV3_WIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0xB100140)
#define MOLEMOLE_UIHADALZONE_REWARDROWV3_WIDGETCONTROLLER___BASE_ONSCROLLITEMRECYCLE_OFFSET UNITYSDK_OFFSET(0xB1001B0)
#define MOLEMOLE_UIHADALZONE_REWARDROWV3_WIDGETCONTROLLER___BASE_ONSCROLLITEMUPDATE_OFFSET UNITYSDK_OFFSET(0xB100210)
#define MOLEMOLE_UIHADALZONE_REWARDROWV3_WIDGETCONTROLLER___BASE_ONUICLOSE_OFFSET UNITYSDK_OFFSET(0xB100290)
#define MOLEMOLE_UIHADALZONE_REWARDROWV3_WIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0xB1002A0)
#define MOLEMOLE_UIHADALZONE_REWARDROWV3_WIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0xB100320)
#define MOLEMOLE_UIHADALZONE_REWARDROWV3_WIDGETCONTROLLER___SETBTNCLICK_B__15_0_OFFSET UNITYSDK_OFFSET(0xB0FFF50)
#define MOLEMOLE_UIHADALZONE_REWARDROWV3_WIDGETCONTROLLER___TAKEREWARD_B__18_0_OFFSET UNITYSDK_OFFSET(0xB100020)

namespace MoleMole
{
	inline static constexpr unsigned int UIHadalZone_RewardRowV3_WidgetController_TypeDefinitionIndex = 60816;

	class UIHadalZone_RewardRowV3_WidgetController : public ::MoleMole::ScrollViewItemWidgetController
	{
	public:
		::Class_2_260D74264003CECB* _view; // 0x2D0
		::System::Collections::Generic::List_1<::MoleMole::UIItemIconBtnWidgetController*>* _itemCachedList; // 0x2D8
		::Class_2_468A4FBF2E9F527C* _hadalZoneModel; // 0x2E0
		::MoleMole::MonoGamepadNestedListDelegate* _nestedListDelegate; // 0x2E8
		::MoleMole::MonoGamepadCustomList* _customList; // 0x2F0
		::System::Boolean _couldTake; // 0x2F8
		::MoleMole::UIHadalZone_RewardV3_PopWindowController_HadalRewardData _curRatingRowData; // 0x300
		::MoleMole::UIRankingImageConfig* _uiConfig; // 0x310
		::System::Action* _TakeRewardAction_k__BackingField; // 0x318

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHADALZONE_REWARDROWV3_WIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHADALZONE_REWARDROWV3_WIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHADALZONE_REWARDROWV3_WIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIClose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHADALZONE_REWARDROWV3_WIDGETCONTROLLER_ONUICLOSE_OFFSET))(this);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHADALZONE_REWARDROWV3_WIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void OnScrollItemUpdate(::System::Int32 index, ::System::Object* data, ::System::Boolean init)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHADALZONE_REWARDROWV3_WIDGETCONTROLLER_ONSCROLLITEMUPDATE_OFFSET))(this, index, data, init);
		}

		::System::Void OnScrollItemRecycle()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHADALZONE_REWARDROWV3_WIDGETCONTROLLER_ONSCROLLITEMRECYCLE_OFFSET))(this);
		}

		::System::Void _ClearPrevs()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHADALZONE_REWARDROWV3_WIDGETCONTROLLER__CLEARPREVS_OFFSET))(this);
		}

		::System::Void _SetBtnClick()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHADALZONE_REWARDROWV3_WIDGETCONTROLLER__SETBTNCLICK_OFFSET))(this);
		}

		::System::Void RefreshRewardItems()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHADALZONE_REWARDROWV3_WIDGETCONTROLLER_REFRESHREWARDITEMS_OFFSET))(this);
		}

		::System::Void _CreateRewardItemScroll(::Class_1_C4CB11A2FD957208_Struct_2_98E057419FFAAB00 item, ::System::Boolean takenTag)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_C4CB11A2FD957208_Struct_2_98E057419FFAAB00, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHADALZONE_REWARDROWV3_WIDGETCONTROLLER__CREATEREWARDITEMSCROLL_OFFSET))(this, item, takenTag);
		}

		::System::Void _TakeReward()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHADALZONE_REWARDROWV3_WIDGETCONTROLLER__TAKEREWARD_OFFSET))(this);
		}

		::System::Action* get_TakeRewardAction()
		{
			return ((::System::Action*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHADALZONE_REWARDROWV3_WIDGETCONTROLLER_GET_TAKEREWARDACTION_OFFSET))(this);
		}

		::System::Void set_TakeRewardAction(::System::Action* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHADALZONE_REWARDROWV3_WIDGETCONTROLLER_SET_TAKEREWARDACTION_OFFSET))(this, value);
		}

		::System::Void _OnScrollItemUpdate_b__12_0(::System::EventArgs* args)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHADALZONE_REWARDROWV3_WIDGETCONTROLLER__ONSCROLLITEMUPDATE_B__12_0_OFFSET))(this, args);
		}

		::System::Void __SetBtnClick_b__15_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHADALZONE_REWARDROWV3_WIDGETCONTROLLER___SETBTNCLICK_B__15_0_OFFSET))(this);
		}

		::System::Void __TakeReward_b__18_0(::Class_3_025FF4981524A424_43* rsp)
		{
			return ((::System::Void(*)(::PVOID, ::Class_3_025FF4981524A424_43*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHADALZONE_REWARDROWV3_WIDGETCONTROLLER___TAKEREWARD_B__18_0_OFFSET))(this, rsp);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHADALZONE_REWARDROWV3_WIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnScrollItemRecycle()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHADALZONE_REWARDROWV3_WIDGETCONTROLLER___BASE_ONSCROLLITEMRECYCLE_OFFSET))(this);
		}

		::System::Void __base_OnScrollItemUpdate(::System::Int32 P0, ::System::Object* P1, ::System::Boolean P2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHADALZONE_REWARDROWV3_WIDGETCONTROLLER___BASE_ONSCROLLITEMUPDATE_OFFSET))(this, P0, P1, P2);
		}

		::System::Void __base_OnUIClose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHADALZONE_REWARDROWV3_WIDGETCONTROLLER___BASE_ONUICLOSE_OFFSET))(this);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHADALZONE_REWARDROWV3_WIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHADALZONE_REWARDROWV3_WIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}
	};
}
