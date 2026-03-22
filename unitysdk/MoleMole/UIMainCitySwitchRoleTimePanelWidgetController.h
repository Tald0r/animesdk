#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/Coroutine/CoroutineHandle.h"
#include "unitysdk/MoleMole/UIWidgetController.h"

class Class_2_37FEA7F793EE2199;
class Class_2_79AE422BA06F6D26_243;
class Class_2_79AE422BA06F6D26_243_Class_2_16AC50F20374540A_1;
class Class_2_9E3E3CDA608A4F58;
namespace DG::Tweening { class Tween; }
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace System { class EventArgs; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
template <typename T> class Class_2_0D31A1661D004892;

#define MOLEMOLE_UIMAINCITYSWITCHROLETIMEPANELWIDGETCONTROLLER_ONCLICKSENDTIME_OFFSET UNITYSDK_OFFSET(0x98C2580)
#define MOLEMOLE_UIMAINCITYSWITCHROLETIMEPANELWIDGETCONTROLLER_ONCLICKTIMETAB_OFFSET UNITYSDK_OFFSET(0x98C2270)
#define MOLEMOLE_UIMAINCITYSWITCHROLETIMEPANELWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x98BFB00)
#define MOLEMOLE_UIMAINCITYSWITCHROLETIMEPANELWIDGETCONTROLLER_ONHIDE_OFFSET UNITYSDK_OFFSET(0x98BFBA0)
#define MOLEMOLE_UIMAINCITYSWITCHROLETIMEPANELWIDGETCONTROLLER_ONMAINCITYLOADREADYHANDLE_OFFSET UNITYSDK_OFFSET(0x98C2940)
#define MOLEMOLE_UIMAINCITYSWITCHROLETIMEPANELWIDGETCONTROLLER_ONSHOW_OFFSET UNITYSDK_OFFSET(0x98BF090)
#define MOLEMOLE_UIMAINCITYSWITCHROLETIMEPANELWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x98BFCA0)
#define MOLEMOLE_UIMAINCITYSWITCHROLETIMEPANELWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x98BE9C0)
#define MOLEMOLE_UIMAINCITYSWITCHROLETIMEPANELWIDGETCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x98BEFE0)
#define MOLEMOLE_UIMAINCITYSWITCHROLETIMEPANELWIDGETCONTROLLER_REFRESHBTN_OFFSET UNITYSDK_OFFSET(0x98BFE90)
#define MOLEMOLE_UIMAINCITYSWITCHROLETIMEPANELWIDGETCONTROLLER_REFRESHDESC_OFFSET UNITYSDK_OFFSET(0x98C0800)
#define MOLEMOLE_UIMAINCITYSWITCHROLETIMEPANELWIDGETCONTROLLER_REFRESHSTAGE_OFFSET UNITYSDK_OFFSET(0x98BF730)
#define MOLEMOLE_UIMAINCITYSWITCHROLETIMEPANELWIDGETCONTROLLER_REFRESHTIME_OFFSET UNITYSDK_OFFSET(0x98BF370)
#define MOLEMOLE_UIMAINCITYSWITCHROLETIMEPANELWIDGETCONTROLLER_REFRESHVIEW_OFFSET UNITYSDK_OFFSET(0x98BF270)
#define MOLEMOLE_UIMAINCITYSWITCHROLETIMEPANELWIDGETCONTROLLER_ROTARROW_OFFSET UNITYSDK_OFFSET(0x98C24D0)
#define MOLEMOLE_UIMAINCITYSWITCHROLETIMEPANELWIDGETCONTROLLER_TRYROTARROW_OFFSET UNITYSDK_OFFSET(0x98C0460)
#define MOLEMOLE_UIMAINCITYSWITCHROLETIMEPANELWIDGETCONTROLLER_UPDATE_OFFSET UNITYSDK_OFFSET(0x98BFE00)
#define MOLEMOLE_UIMAINCITYSWITCHROLETIMEPANELWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x98C2B10)
#define MOLEMOLE_UIMAINCITYSWITCHROLETIMEPANELWIDGETCONTROLLER__ONMAINCITYLOADREADYHANDLE_B__32_0_OFFSET UNITYSDK_OFFSET(0x98C2C90)
#define MOLEMOLE_UIMAINCITYSWITCHROLETIMEPANELWIDGETCONTROLLER__ONMAINCITYLOADREADYHANDLE_B__32_1_OFFSET UNITYSDK_OFFSET(0x98C2DD0)
#define MOLEMOLE_UIMAINCITYSWITCHROLETIMEPANELWIDGETCONTROLLER__ONUIINIT_B__16_0_OFFSET UNITYSDK_OFFSET(0x98C2C80)
#define MOLEMOLE_UIMAINCITYSWITCHROLETIMEPANELWIDGETCONTROLLER__REFRESHSTAGE_G__TOGGLESTAGEICON_25_1_OFFSET UNITYSDK_OFFSET(0x98C0760)
#define MOLEMOLE_UIMAINCITYSWITCHROLETIMEPANELWIDGETCONTROLLER__REFRESHTIME_G__GETTIMEPROGRESS_24_1_OFFSET UNITYSDK_OFFSET(0x98C0420)
#define MOLEMOLE_UIMAINCITYSWITCHROLETIMEPANELWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x98C2E80)
#define MOLEMOLE_UIMAINCITYSWITCHROLETIMEPANELWIDGETCONTROLLER___BASE_ONHIDE_OFFSET UNITYSDK_OFFSET(0x98C2EF0)
#define MOLEMOLE_UIMAINCITYSWITCHROLETIMEPANELWIDGETCONTROLLER___BASE_ONSHOW_OFFSET UNITYSDK_OFFSET(0x98C2F50)
#define MOLEMOLE_UIMAINCITYSWITCHROLETIMEPANELWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x98C2FC0)
#define MOLEMOLE_UIMAINCITYSWITCHROLETIMEPANELWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x98C3040)
#define MOLEMOLE_UIMAINCITYSWITCHROLETIMEPANELWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x98C30A0)

namespace MoleMole
{
	inline static constexpr unsigned int UIMainCitySwitchRoleTimePanelWidgetController_TypeDefinitionIndex = 70185;

	class UIMainCitySwitchRoleTimePanelWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		// static const ::System::String* TEXT_AM; // 0x0
		// static const ::System::String* TEXT_PM; // 0x0
		// static const ::System::String* TEXT_OVERNIGHT; // 0x0
		// static const ::System::String* TEXT_CANTSLEEP; // 0x0
		// static const ::System::String* ICON_SWITCH_ANIM; // 0x0
		::Il2CppArray<::System::String*>* TIME_NAME; // 0x2A0
		::Class_2_37FEA7F793EE2199* _model; // 0x2A8
		::System::Collections::Generic::List_1<::Class_2_9E3E3CDA608A4F58*>* _anims; // 0x2B0
		::Foundation::Coroutine::CoroutineHandle _handle; // 0x2B8
		::System::Int32 _curStage; // 0x2BC
		::Class_2_79AE422BA06F6D26_243* _view; // 0x2C0
		::DG::Tweening::Tween* _numTween; // 0x2C8
		::System::Single _currentMinues; // 0x2D0
		::System::Boolean _waitHallRefresh; // 0x2D4
		::System::Single _waitHallRefreshTimer; // 0x2D8
		::System::Collections::Generic::List_1<::System::String*>* _resultKeys; // 0x2E0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYSWITCHROLETIMEPANELWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYSWITCHROLETIMEPANELWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYSWITCHROLETIMEPANELWIDGETCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnShow(::MoleMole::UIControllerContextBase* showCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYSWITCHROLETIMEPANELWIDGETCONTROLLER_ONSHOW_OFFSET))(this, showCtrlContext);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYSWITCHROLETIMEPANELWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnHide()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYSWITCHROLETIMEPANELWIDGETCONTROLLER_ONHIDE_OFFSET))(this);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYSWITCHROLETIMEPANELWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYSWITCHROLETIMEPANELWIDGETCONTROLLER_UPDATE_OFFSET))(this);
		}

		::System::Void RefreshView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYSWITCHROLETIMEPANELWIDGETCONTROLLER_REFRESHVIEW_OFFSET))(this);
		}

		::System::Void RefreshTime(::System::Single targetMinues, ::System::Boolean anim)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYSWITCHROLETIMEPANELWIDGETCONTROLLER_REFRESHTIME_OFFSET))(this, targetMinues, anim);
		}

		::System::Void RefreshStage(::System::Int32 targetStage, ::System::Boolean anim)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYSWITCHROLETIMEPANELWIDGETCONTROLLER_REFRESHSTAGE_OFFSET))(this, targetStage, anim);
		}

		::System::Void RefreshDesc(::System::Boolean isRandom, ::System::Int32 targetTrust)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYSWITCHROLETIMEPANELWIDGETCONTROLLER_REFRESHDESC_OFFSET))(this, isRandom, targetTrust);
		}

		::System::Void RefreshBtn()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYSWITCHROLETIMEPANELWIDGETCONTROLLER_REFRESHBTN_OFFSET))(this);
		}

		::System::Void TryRotArrow(::System::Single nextRatio, ::System::Boolean force)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYSWITCHROLETIMEPANELWIDGETCONTROLLER_TRYROTARROW_OFFSET))(this, nextRatio, force);
		}

		::System::Collections::Generic::IEnumerator_1<::System::Single>* RotArrow(::System::Single nextRatio)
		{
			return ((::System::Collections::Generic::IEnumerator_1<::System::Single>*(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYSWITCHROLETIMEPANELWIDGETCONTROLLER_ROTARROW_OFFSET))(this, nextRatio);
		}

		::System::Void OnClickTimeTab(::System::Int32 index, ::System::Boolean anim)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYSWITCHROLETIMEPANELWIDGETCONTROLLER_ONCLICKTIMETAB_OFFSET))(this, index, anim);
		}

		::System::Void OnClickSendTime()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYSWITCHROLETIMEPANELWIDGETCONTROLLER_ONCLICKSENDTIME_OFFSET))(this);
		}

		::System::Void OnMainCityLoadReadyHandle(::System::EventArgs* obj)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYSWITCHROLETIMEPANELWIDGETCONTROLLER_ONMAINCITYLOADREADYHANDLE_OFFSET))(this, obj);
		}

		::System::Void _OnUIInit_b__16_0(::System::Int32 index)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYSWITCHROLETIMEPANELWIDGETCONTROLLER__ONUIINIT_B__16_0_OFFSET))(this, index);
		}

		static ::System::Single _RefreshTime_g__GetTimeProgress_24_1(::System::Single inHours, ::System::Single inMinutes)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYSWITCHROLETIMEPANELWIDGETCONTROLLER__REFRESHTIME_G__GETTIMEPROGRESS_24_1_OFFSET))(inHours, inMinutes);
		}

		static ::System::Void _RefreshStage_g__ToggleStageIcon_25_1(::System::Collections::Generic::List_1<::Class_2_0D31A1661D004892<::Class_2_79AE422BA06F6D26_243_Class_2_16AC50F20374540A_1*>*>* icons, ::System::Int32 stage)
		{
			return ((::System::Void(*)(::System::Collections::Generic::List_1<::Class_2_0D31A1661D004892<::Class_2_79AE422BA06F6D26_243_Class_2_16AC50F20374540A_1*>*>*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYSWITCHROLETIMEPANELWIDGETCONTROLLER__REFRESHSTAGE_G__TOGGLESTAGEICON_25_1_OFFSET))(icons, stage);
		}

		::System::Void _OnMainCityLoadReadyHandle_b__32_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYSWITCHROLETIMEPANELWIDGETCONTROLLER__ONMAINCITYLOADREADYHANDLE_B__32_0_OFFSET))(this);
		}

		::System::Void _OnMainCityLoadReadyHandle_b__32_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYSWITCHROLETIMEPANELWIDGETCONTROLLER__ONMAINCITYLOADREADYHANDLE_B__32_1_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYSWITCHROLETIMEPANELWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnHide()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYSWITCHROLETIMEPANELWIDGETCONTROLLER___BASE_ONHIDE_OFFSET))(this);
		}

		::System::Void __base_OnShow(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYSWITCHROLETIMEPANELWIDGETCONTROLLER___BASE_ONSHOW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYSWITCHROLETIMEPANELWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYSWITCHROLETIMEPANELWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYSWITCHROLETIMEPANELWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
