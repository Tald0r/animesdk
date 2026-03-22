#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIBabeltowerPageController.h"
#include "unitysdk/System/ValueTuple_2.h"

class Class_2_79AE422BA06F6D26_14;
namespace MoleMole { class ScrollViewItemWidgetController; }
namespace MoleMole { class UIBabeltowerFightingInfoWidgetController; }
namespace MoleMole { class UIControlReference; }
namespace System { class EventArgs; }
namespace System { template <typename T> class Func_1; }

#define MOLEMOLE_UIBABELTOWERPAGE02CONTROLLER_AFTERSHOWLEVELUPANIMATION_OFFSET UNITYSDK_OFFSET(0xB90FFD0)
#define MOLEMOLE_UIBABELTOWERPAGE02CONTROLLER_CALCULATECURRENTMVPCOUNT_OFFSET UNITYSDK_OFFSET(0xB910040)
#define MOLEMOLE_UIBABELTOWERPAGE02CONTROLLER_CHECKNEWBIE_OFFSET UNITYSDK_OFFSET(0xB90FE30)
#define MOLEMOLE_UIBABELTOWERPAGE02CONTROLLER_CREATEBOTTOM_OFFSET UNITYSDK_OFFSET(0xB90E780)
#define MOLEMOLE_UIBABELTOWERPAGE02CONTROLLER_CREATESELECTITEM_OFFSET UNITYSDK_OFFSET(0xB90E860)
#define MOLEMOLE_UIBABELTOWERPAGE02CONTROLLER_CREATETOP_OFFSET UNITYSDK_OFFSET(0xB90E6A0)
#define MOLEMOLE_UIBABELTOWERPAGE02CONTROLLER_GETFIGHTINFOWIDGET_OFFSET UNITYSDK_OFFSET(0xB90DC20)
#define MOLEMOLE_UIBABELTOWERPAGE02CONTROLLER_GETTOTALPOWERCOUNT_OFFSET UNITYSDK_OFFSET(0xB90F860)
#define MOLEMOLE_UIBABELTOWERPAGE02CONTROLLER_GET_CURRENTMVPCOUNT_OFFSET UNITYSDK_OFFSET(0xB90F7E0)
#define MOLEMOLE_UIBABELTOWERPAGE02CONTROLLER_INITSCROLL_OFFSET UNITYSDK_OFFSET(0xB90D9F0)
#define MOLEMOLE_UIBABELTOWERPAGE02CONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0xB90D610)
#define MOLEMOLE_UIBABELTOWERPAGE02CONTROLLER_ONFAIRYFINISH_OFFSET UNITYSDK_OFFSET(0xB90D8F0)
#define MOLEMOLE_UIBABELTOWERPAGE02CONTROLLER_ONPOSTREFRESHVIEW_OFFSET UNITYSDK_OFFSET(0xB90F370)
#define MOLEMOLE_UIBABELTOWERPAGE02CONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0xB90D750)
#define MOLEMOLE_UIBABELTOWERPAGE02CONTROLLER_OPENRECORD_OFFSET UNITYSDK_OFFSET(0xB90E9E0)
#define MOLEMOLE_UIBABELTOWERPAGE02CONTROLLER_OVERRIDEINITSCROLLINDEXANDFLOOR_OFFSET UNITYSDK_OFFSET(0xB90FBC0)
#define MOLEMOLE_UIBABELTOWERPAGE02CONTROLLER_REFRESHPOWER_OFFSET UNITYSDK_OFFSET(0xB90F610)
#define MOLEMOLE_UIBABELTOWERPAGE02CONTROLLER_REFRESHTIME_OFFSET UNITYSDK_OFFSET(0xB90EBF0)
#define MOLEMOLE_UIBABELTOWERPAGE02CONTROLLER_UPDATE_OFFSET UNITYSDK_OFFSET(0xB90F300)
#define MOLEMOLE_UIBABELTOWERPAGE02CONTROLLER__CREATESELECTITEM_B__9_0_OFFSET UNITYSDK_OFFSET(0xB910270)
#define MOLEMOLE_UIBABELTOWERPAGE02CONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0xB910200)
#define MOLEMOLE_UIBABELTOWERPAGE02CONTROLLER__ONUIINIT_B__2_0_OFFSET UNITYSDK_OFFSET(0xB910260)
#define MOLEMOLE_UIBABELTOWERPAGE02CONTROLLER__OPENBABELTOWERFIGHTINGINFO_OFFSET UNITYSDK_OFFSET(0xB90DD70)
#define MOLEMOLE_UIBABELTOWERPAGE02CONTROLLER__OPENRECORD_B__10_0_OFFSET UNITYSDK_OFFSET(0xB910330)
#define MOLEMOLE_UIBABELTOWERPAGE02CONTROLLER___BASE_AFTERSHOWLEVELUPANIMATION_OFFSET UNITYSDK_OFFSET(0xB910490)
#define MOLEMOLE_UIBABELTOWERPAGE02CONTROLLER___BASE_GETFIGHTINFOWIDGET_OFFSET UNITYSDK_OFFSET(0xB9104F0)
#define MOLEMOLE_UIBABELTOWERPAGE02CONTROLLER___BASE_INITSCROLL_OFFSET UNITYSDK_OFFSET(0xB910500)
#define MOLEMOLE_UIBABELTOWERPAGE02CONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0xB910510)
#define MOLEMOLE_UIBABELTOWERPAGE02CONTROLLER___BASE_ONPOSTREFRESHVIEW_OFFSET UNITYSDK_OFFSET(0xB9105B0)
#define MOLEMOLE_UIBABELTOWERPAGE02CONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0xB910630)
#define MOLEMOLE_UIBABELTOWERPAGE02CONTROLLER___BASE_OVERRIDEINITSCROLLINDEXANDFLOOR_OFFSET UNITYSDK_OFFSET(0xB910640)
#define MOLEMOLE_UIBABELTOWERPAGE02CONTROLLER___BASE_UPDATE_OFFSET UNITYSDK_OFFSET(0xB9106C0)
#define MOLEMOLE_UIBABELTOWERPAGE02CONTROLLER___BASE__OPENBABELTOWERFIGHTINGINFO_OFFSET UNITYSDK_OFFSET(0xB910480)

namespace MoleMole
{
	inline static constexpr unsigned int UIBabeltowerPage02Controller_TypeDefinitionIndex = 76863;

	class UIBabeltowerPage02Controller : public ::MoleMole::UIBabeltowerPageController
	{
	public:
		::Class_2_79AE422BA06F6D26_14* _view; // 0x3B0
		::System::Int32 _currentMvp; // 0x3B8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELTOWERPAGE02CONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELTOWERPAGE02CONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELTOWERPAGE02CONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnFairyFinish(::System::EventArgs* args)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELTOWERPAGE02CONTROLLER_ONFAIRYFINISH_OFFSET))(this, args);
		}

		::System::Void InitScroll()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELTOWERPAGE02CONTROLLER_INITSCROLL_OFFSET))(this);
		}

		::MoleMole::UIBabeltowerFightingInfoWidgetController* GetFightInfoWidget()
		{
			return ((::MoleMole::UIBabeltowerFightingInfoWidgetController*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELTOWERPAGE02CONTROLLER_GETFIGHTINFOWIDGET_OFFSET))(this);
		}

		::System::Void _OpenBabeltowerFightingInfo(::System::Boolean directOpen)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELTOWERPAGE02CONTROLLER__OPENBABELTOWERFIGHTINGINFO_OFFSET))(this, directOpen);
		}

		::MoleMole::ScrollViewItemWidgetController* CreateTop(::System::Func_1<::MoleMole::UIControlReference*>* arg)
		{
			return ((::MoleMole::ScrollViewItemWidgetController*(*)(::PVOID, ::System::Func_1<::MoleMole::UIControlReference*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELTOWERPAGE02CONTROLLER_CREATETOP_OFFSET))(this, arg);
		}

		::MoleMole::ScrollViewItemWidgetController* CreateBottom(::System::Func_1<::MoleMole::UIControlReference*>* arg)
		{
			return ((::MoleMole::ScrollViewItemWidgetController*(*)(::PVOID, ::System::Func_1<::MoleMole::UIControlReference*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELTOWERPAGE02CONTROLLER_CREATEBOTTOM_OFFSET))(this, arg);
		}

		::MoleMole::ScrollViewItemWidgetController* CreateSelectItem(::System::Func_1<::MoleMole::UIControlReference*>* arg)
		{
			return ((::MoleMole::ScrollViewItemWidgetController*(*)(::PVOID, ::System::Func_1<::MoleMole::UIControlReference*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELTOWERPAGE02CONTROLLER_CREATESELECTITEM_OFFSET))(this, arg);
		}

		::System::Void OpenRecord()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELTOWERPAGE02CONTROLLER_OPENRECORD_OFFSET))(this);
		}

		::System::Void RefreshTime()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELTOWERPAGE02CONTROLLER_REFRESHTIME_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELTOWERPAGE02CONTROLLER_UPDATE_OFFSET))(this);
		}

		::System::Void OnPostRefreshView(::System::Int32 initScrollIndex, ::System::UInt32 initFloor, ::System::Boolean isDoAnimation, ::System::Boolean isWaitAnimation)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::UInt32, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELTOWERPAGE02CONTROLLER_ONPOSTREFRESHVIEW_OFFSET))(this, initScrollIndex, initFloor, isDoAnimation, isWaitAnimation);
		}

		::System::Void RefreshPower()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELTOWERPAGE02CONTROLLER_REFRESHPOWER_OFFSET))(this);
		}

		::System::Int32 GetTotalPowerCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELTOWERPAGE02CONTROLLER_GETTOTALPOWERCOUNT_OFFSET))(this);
		}

		::System::ValueTuple_2<::System::Int32, ::System::UInt32> OverrideInitScrollIndexAndFloor(::System::Int32 scrollIndex, ::System::UInt32 floor)
		{
			return ((::System::ValueTuple_2<::System::Int32, ::System::UInt32>(*)(::PVOID, ::System::Int32, ::System::UInt32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELTOWERPAGE02CONTROLLER_OVERRIDEINITSCROLLINDEXANDFLOOR_OFFSET))(this, scrollIndex, floor);
		}

		::System::Void CheckNewbie()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELTOWERPAGE02CONTROLLER_CHECKNEWBIE_OFFSET))(this);
		}

		::System::Void AfterShowLevelUpAnimation()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELTOWERPAGE02CONTROLLER_AFTERSHOWLEVELUPANIMATION_OFFSET))(this);
		}

		::System::Int32 get_CurrentMvpCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELTOWERPAGE02CONTROLLER_GET_CURRENTMVPCOUNT_OFFSET))(this);
		}

		::System::Int32 CalculateCurrentMvpCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELTOWERPAGE02CONTROLLER_CALCULATECURRENTMVPCOUNT_OFFSET))(this);
		}

		::System::Void _OnUIInit_b__2_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELTOWERPAGE02CONTROLLER__ONUIINIT_B__2_0_OFFSET))(this);
		}

		::System::Void _CreateSelectItem_b__9_0(::System::UInt32 floorIndex, ::System::UInt32 realFloorIndex, ::System::Int32 selectIndex)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELTOWERPAGE02CONTROLLER__CREATESELECTITEM_B__9_0_OFFSET))(this, floorIndex, realFloorIndex, selectIndex);
		}

		::System::Void _OpenRecord_b__10_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELTOWERPAGE02CONTROLLER__OPENRECORD_B__10_0_OFFSET))(this);
		}

		::System::Void __base__OpenBabeltowerFightingInfo(::System::Boolean P0)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELTOWERPAGE02CONTROLLER___BASE__OPENBABELTOWERFIGHTINGINFO_OFFSET))(this, P0);
		}

		::System::Void __base_AfterShowLevelUpAnimation()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELTOWERPAGE02CONTROLLER___BASE_AFTERSHOWLEVELUPANIMATION_OFFSET))(this);
		}

		::MoleMole::UIBabeltowerFightingInfoWidgetController* __base_GetFightInfoWidget()
		{
			return ((::MoleMole::UIBabeltowerFightingInfoWidgetController*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELTOWERPAGE02CONTROLLER___BASE_GETFIGHTINFOWIDGET_OFFSET))(this);
		}

		::System::Void __base_InitScroll()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELTOWERPAGE02CONTROLLER___BASE_INITSCROLL_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELTOWERPAGE02CONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnPostRefreshView(::System::Int32 P0, ::System::UInt32 P1, ::System::Boolean P2, ::System::Boolean P3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::UInt32, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELTOWERPAGE02CONTROLLER___BASE_ONPOSTREFRESHVIEW_OFFSET))(this, P0, P1, P2, P3);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELTOWERPAGE02CONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::ValueTuple_2<::System::Int32, ::System::UInt32> __base_OverrideInitScrollIndexAndFloor(::System::Int32 P0, ::System::UInt32 P1)
		{
			return ((::System::ValueTuple_2<::System::Int32, ::System::UInt32>(*)(::PVOID, ::System::Int32, ::System::UInt32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELTOWERPAGE02CONTROLLER___BASE_OVERRIDEINITSCROLLINDEXANDFLOOR_OFFSET))(this, P0, P1);
		}

		::System::Void __base_Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELTOWERPAGE02CONTROLLER___BASE_UPDATE_OFFSET))(this);
		}
	};
}
