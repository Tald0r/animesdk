#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_C4CB11A2FD957208_Struct_2_98E057419FFAAB00.h"
#include "unitysdk/MoleMole/UIMainCityStorePageController.h"

class Class_0_16E4307DCC419505_7;
class Class_1_0D6706375CDAAE8C;
class Class_2_208CC9941471731A_723;
class Class_2_79AE422BA06F6D26_129;
class Class_3_0ECDE22EF9FEEAE2_1;
class Class_3_D0B68EB9E337E202_5;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace MoleMole { class UIItemIconBtnWidgetController; }
namespace System { class Action; }
namespace System { class EventArgs; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UIMAINCITYREVIVALPAGECONTROLLER_GET_ALLFINISHED_OFFSET UNITYSDK_OFFSET(0x6CC2660)
#define MOLEMOLE_UIMAINCITYREVIVALPAGECONTROLLER_ONBEFOREREWARDWINDOWCLOSE_OFFSET UNITYSDK_OFFSET(0x6CC44A0)
#define MOLEMOLE_UIMAINCITYREVIVALPAGECONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x6CC17D0)
#define MOLEMOLE_UIMAINCITYREVIVALPAGECONTROLLER_ONITEMCHANGED_OFFSET UNITYSDK_OFFSET(0x6CC4600)
#define MOLEMOLE_UIMAINCITYREVIVALPAGECONTROLLER_ONREWARDWINDOWCLOSED_OFFSET UNITYSDK_OFFSET(0x6CC4590)
#define MOLEMOLE_UIMAINCITYREVIVALPAGECONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x6CC21B0)
#define MOLEMOLE_UIMAINCITYREVIVALPAGECONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x6CC18B0)
#define MOLEMOLE_UIMAINCITYREVIVALPAGECONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x6CC1CA0)
#define MOLEMOLE_UIMAINCITYREVIVALPAGECONTROLLER_REFRESHDATA_OFFSET UNITYSDK_OFFSET(0x6CC1D80)
#define MOLEMOLE_UIMAINCITYREVIVALPAGECONTROLLER_REFRESHDELIVERBTN_OFFSET UNITYSDK_OFFSET(0x6CC3860)
#define MOLEMOLE_UIMAINCITYREVIVALPAGECONTROLLER_REFRESHMATERIALPROGRESSVIEW_OFFSET UNITYSDK_OFFSET(0x6CC3330)
#define MOLEMOLE_UIMAINCITYREVIVALPAGECONTROLLER_REFRESHMATERIALVIEW_OFFSET UNITYSDK_OFFSET(0x6CC2990)
#define MOLEMOLE_UIMAINCITYREVIVALPAGECONTROLLER_REFRESHREWARDVIEW_OFFSET UNITYSDK_OFFSET(0x6CC2E90)
#define MOLEMOLE_UIMAINCITYREVIVALPAGECONTROLLER_REFRESHVIEW_OFFSET UNITYSDK_OFFSET(0x6CC2240)
#define MOLEMOLE_UIMAINCITYREVIVALPAGECONTROLLER_SETALLFINISHEDVIEW_OFFSET UNITYSDK_OFFSET(0x6CC26E0)
#define MOLEMOLE_UIMAINCITYREVIVALPAGECONTROLLER_SETPROGRESS_OFFSET UNITYSDK_OFFSET(0x6CC39D0)
#define MOLEMOLE_UIMAINCITYREVIVALPAGECONTROLLER_SETUIWINDOWSETTING_OFFSET UNITYSDK_OFFSET(0x6CC20C0)
#define MOLEMOLE_UIMAINCITYREVIVALPAGECONTROLLER_SHOWGETITEMLIST_OFFSET UNITYSDK_OFFSET(0x6CC4140)
#define MOLEMOLE_UIMAINCITYREVIVALPAGECONTROLLER_SUBMITLANDITEMS_OFFSET UNITYSDK_OFFSET(0x6CC3E60)
#define MOLEMOLE_UIMAINCITYREVIVALPAGECONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x6CC4910)
#define MOLEMOLE_UIMAINCITYREVIVALPAGECONTROLLER__ONUIINIT_B__1_0_OFFSET UNITYSDK_OFFSET(0x6CC49D0)
#define MOLEMOLE_UIMAINCITYREVIVALPAGECONTROLLER__REFRESHVIEW_B__27_0_OFFSET UNITYSDK_OFFSET(0x6CC4B30)
#define MOLEMOLE_UIMAINCITYREVIVALPAGECONTROLLER__SUBMITLANDITEMS_B__31_0_OFFSET UNITYSDK_OFFSET(0x6CC4DE0)
#define MOLEMOLE_UIMAINCITYREVIVALPAGECONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x6CC4E40)
#define MOLEMOLE_UIMAINCITYREVIVALPAGECONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x6CC4EB0)
#define MOLEMOLE_UIMAINCITYREVIVALPAGECONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x6CC4EC0)
#define MOLEMOLE_UIMAINCITYREVIVALPAGECONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x6CC4ED0)
#define MOLEMOLE_UIMAINCITYREVIVALPAGECONTROLLER___BASE_SETUIWINDOWSETTING_OFFSET UNITYSDK_OFFSET(0x6CC4EE0)

namespace MoleMole
{
	inline static constexpr unsigned int UIMainCityRevivalPageController_TypeDefinitionIndex = 53380;

	class UIMainCityRevivalPageController : public ::MoleMole::UIMainCityStorePageController
	{
	public:
		// static const ::System::String* LevelUpAnimation; // 0x0
		// static const ::System::Single MaterialProgressDuration; // 0x0
		// static const ::System::String* LevelUpSoundKey; // 0x0
		// static const ::System::String* ProgressValueFormat; // 0x0
		::Class_2_79AE422BA06F6D26_129* _view; // 0x308
		::System::Collections::Generic::List_1<::Class_1_C4CB11A2FD957208_Struct_2_98E057419FFAAB00>* _availableItems; // 0x310
		::System::Int32 _landID; // 0x318
		::Class_3_0ECDE22EF9FEEAE2_1* _progress; // 0x320
		::System::Int32 _prvLv; // 0x328
		::System::Int32 _curLv; // 0x32C
		::System::Int32 _materialItemID; // 0x330
		::System::Int32 _prvSubmittedCount; // 0x334
		::System::Int32 _prvTargetCount; // 0x338
		::System::Int32 _curSubmittedCount; // 0x33C
		::System::Int32 _curTargetCount; // 0x340
		::Class_1_0D6706375CDAAE8C* _material; // 0x348
		::Class_3_D0B68EB9E337E202_5* _rewardedItems; // 0x350
		::System::Single _progressOffset; // 0x358
		::System::Single _maxProgressValue; // 0x35C
		::MoleMole::UIItemIconBtnWidgetController* _materialIconWidget; // 0x360
		::System::Boolean _isShowingGetItemList; // 0x368

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYREVIVALPAGECONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYREVIVALPAGECONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYREVIVALPAGECONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYREVIVALPAGECONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void SetUIWindowSetting()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYREVIVALPAGECONTROLLER_SETUIWINDOWSETTING_OFFSET))(this);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYREVIVALPAGECONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void RefreshData(::System::Boolean init)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYREVIVALPAGECONTROLLER_REFRESHDATA_OFFSET))(this, init);
		}

		::System::Void RefreshView(::Class_2_208CC9941471731A_723* landTemplate, ::System::Boolean init)
		{
			return ((::System::Void(*)(::PVOID, ::Class_2_208CC9941471731A_723*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYREVIVALPAGECONTROLLER_REFRESHVIEW_OFFSET))(this, landTemplate, init);
		}

		::System::Void RefreshMaterialView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYREVIVALPAGECONTROLLER_REFRESHMATERIALVIEW_OFFSET))(this);
		}

		::System::Void RefreshRewardView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYREVIVALPAGECONTROLLER_REFRESHREWARDVIEW_OFFSET))(this);
		}

		::System::Void RefreshMaterialProgressView(::System::Single curProgress, ::System::Single prvProgress, ::System::Action* onDone)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::System::Action*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYREVIVALPAGECONTROLLER_REFRESHMATERIALPROGRESSVIEW_OFFSET))(this, curProgress, prvProgress, onDone);
		}

		::System::Void SubmitLandItems()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYREVIVALPAGECONTROLLER_SUBMITLANDITEMS_OFFSET))(this);
		}

		::System::Void SetProgress(::System::Single progress)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYREVIVALPAGECONTROLLER_SETPROGRESS_OFFSET))(this, progress);
		}

		::System::Void ShowGetItemList(::System::Collections::Generic::List_1<::Class_1_0D6706375CDAAE8C*>* items)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_1_0D6706375CDAAE8C*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYREVIVALPAGECONTROLLER_SHOWGETITEMLIST_OFFSET))(this, items);
		}

		::System::Void OnBeforeRewardWindowClose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYREVIVALPAGECONTROLLER_ONBEFOREREWARDWINDOWCLOSE_OFFSET))(this);
		}

		::System::Void OnRewardWindowClosed()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYREVIVALPAGECONTROLLER_ONREWARDWINDOWCLOSED_OFFSET))(this);
		}

		::System::Void OnItemChanged(::System::EventArgs* eventArgs)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYREVIVALPAGECONTROLLER_ONITEMCHANGED_OFFSET))(this, eventArgs);
		}

		::System::Boolean get_AllFinished()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYREVIVALPAGECONTROLLER_GET_ALLFINISHED_OFFSET))(this);
		}

		::System::Void RefreshDeliverBtn(::System::Boolean enable)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYREVIVALPAGECONTROLLER_REFRESHDELIVERBTN_OFFSET))(this, enable);
		}

		::System::Void SetAllFinishedView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYREVIVALPAGECONTROLLER_SETALLFINISHEDVIEW_OFFSET))(this);
		}

		::System::Void _OnUIInit_b__1_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYREVIVALPAGECONTROLLER__ONUIINIT_B__1_0_OFFSET))(this);
		}

		::System::Void _RefreshView_b__27_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYREVIVALPAGECONTROLLER__REFRESHVIEW_B__27_0_OFFSET))(this);
		}

		::System::Void _SubmitLandItems_b__31_0(::Class_0_16E4307DCC419505_7* message)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_7*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYREVIVALPAGECONTROLLER__SUBMITLANDITEMS_B__31_0_OFFSET))(this, message);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYREVIVALPAGECONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYREVIVALPAGECONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYREVIVALPAGECONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYREVIVALPAGECONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}

		::System::Void __base_SetUIWindowSetting()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYREVIVALPAGECONTROLLER___BASE_SETUIWINDOWSETTING_OFFSET))(this);
		}
	};
}
