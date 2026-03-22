#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_3EDF246633A325B0.h"
#include "unitysdk/Enum_3_3FDE76C86672FDDC.h"
#include "unitysdk/Foundation/Coroutine/CoroutineHandle.h"
#include "unitysdk/MoleMole/UILevelResultPageController_RewardItemMeta.h"
#include "unitysdk/MoleMole/UIWindowController.h"
#include "unitysdk/Struct_2_575273D27F02957E.h"

class Class_1_0D6706375CDAAE8C;
class Class_1_1685EC66FBD28897;
class Class_1_82297B6AFFE49354_1;
class Class_2_1A3197598F874EB7;
class Class_2_33EA27A25F076E07;
class Class_2_79F6D62CE30E3F8E_163;
class Class_2_9D9172C07F82DDAE;
class Class_3_4666E61F66433B1E_3;
class MonoUITableScrollV2;
namespace MoleMole { class MonoLevelResultInfo; }
namespace MoleMole { class ScrollViewItemWidgetController; }
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace MoleMole { class UIItemIconBtnWidgetController; }
namespace MoleMole { class UILevelResultPageContext; }
namespace MoleMole { class UILevelResultPageController_MissionRow; }
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UILEVELRESULTPAGECONTROLLER_ACTLEVELRESULTCAMERA_OFFSET UNITYSDK_OFFSET(0x7D3ADA0)
#define MOLEMOLE_UILEVELRESULTPAGECONTROLLER_CREATEITEMICON_OFFSET UNITYSDK_OFFSET(0x7D3EB90)
#define MOLEMOLE_UILEVELRESULTPAGECONTROLLER_GETSHOWREWARDLIST_OFFSET UNITYSDK_OFFSET(0x7D3EFC0)
#define MOLEMOLE_UILEVELRESULTPAGECONTROLLER_GET_WINDOWTYPE_OFFSET UNITYSDK_OFFSET(0x7D395C0)
#define MOLEMOLE_UILEVELRESULTPAGECONTROLLER_HASENDBATTLE_OFFSET UNITYSDK_OFFSET(0x7D3DAF0)
#define MOLEMOLE_UILEVELRESULTPAGECONTROLLER_INITACTVIEW_OFFSET UNITYSDK_OFFSET(0x7D3BCD0)
#define MOLEMOLE_UILEVELRESULTPAGECONTROLLER_INITCHESSBOARDVIEW_OFFSET UNITYSDK_OFFSET(0x7D3C320)
#define MOLEMOLE_UILEVELRESULTPAGECONTROLLER_INITDAILYCHALLENGEVIEW_OFFSET UNITYSDK_OFFSET(0x7D3C720)
#define MOLEMOLE_UILEVELRESULTPAGECONTROLLER_INITLOSEVIEW_OFFSET UNITYSDK_OFFSET(0x7D3CB60)
#define MOLEMOLE_UILEVELRESULTPAGECONTROLLER_INITVIEW_OFFSET UNITYSDK_OFFSET(0x7D3B2B0)
#define MOLEMOLE_UILEVELRESULTPAGECONTROLLER_INVOKEACTION1_OFFSET UNITYSDK_OFFSET(0x7D3EA00)
#define MOLEMOLE_UILEVELRESULTPAGECONTROLLER_INVOKEACTION2_OFFSET UNITYSDK_OFFSET(0x7D3EA80)
#define MOLEMOLE_UILEVELRESULTPAGECONTROLLER_ISADDITIONAUPITEM_OFFSET UNITYSDK_OFFSET(0x7D3EB00)
#define MOLEMOLE_UILEVELRESULTPAGECONTROLLER_ONCLICKITEMBTN_OFFSET UNITYSDK_OFFSET(0x7D3ED20)
#define MOLEMOLE_UILEVELRESULTPAGECONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x7D3BAA0)
#define MOLEMOLE_UILEVELRESULTPAGECONTROLLER_ONSHOW_OFFSET UNITYSDK_OFFSET(0x7D395D0)
#define MOLEMOLE_UILEVELRESULTPAGECONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x7D3BC10)
#define MOLEMOLE_UILEVELRESULTPAGECONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x7D3B380)
#define MOLEMOLE_UILEVELRESULTPAGECONTROLLER_PLAYEXIT_OFFSET UNITYSDK_OFFSET(0x7D3DCC0)
#define MOLEMOLE_UILEVELRESULTPAGECONTROLLER_REFRESHACTVIEW_OFFSET UNITYSDK_OFFSET(0x7D3DFA0)
#define MOLEMOLE_UILEVELRESULTPAGECONTROLLER_REFRESHCHALLENGE_OFFSET UNITYSDK_OFFSET(0x7D3D310)
#define MOLEMOLE_UILEVELRESULTPAGECONTROLLER_REFRESHCHESSBOARDVIEW_OFFSET UNITYSDK_OFFSET(0x7D3E040)
#define MOLEMOLE_UILEVELRESULTPAGECONTROLLER_REFRESHLOSEVIEW_OFFSET UNITYSDK_OFFSET(0x7D3E0E0)
#define MOLEMOLE_UILEVELRESULTPAGECONTROLLER_SETMOVE_OFFSET UNITYSDK_OFFSET(0x7D3B7A0)
#define MOLEMOLE_UILEVELRESULTPAGECONTROLLER_SETUIWINDOWSETTING_OFFSET UNITYSDK_OFFSET(0x7D3BB40)
#define MOLEMOLE_UILEVELRESULTPAGECONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x7D3F250)
#define MOLEMOLE_UILEVELRESULTPAGECONTROLLER__INITACTVIEW_B__15_0_OFFSET UNITYSDK_OFFSET(0x7D3F440)
#define MOLEMOLE_UILEVELRESULTPAGECONTROLLER__INITACTVIEW_B__15_1_OFFSET UNITYSDK_OFFSET(0x7D3F620)
#define MOLEMOLE_UILEVELRESULTPAGECONTROLLER__INITCHESSBOARDVIEW_B__17_0_OFFSET UNITYSDK_OFFSET(0x7D3FAF0)
#define MOLEMOLE_UILEVELRESULTPAGECONTROLLER__INITDAILYCHALLENGEVIEW_B__16_0_OFFSET UNITYSDK_OFFSET(0x7D3F8C0)
#define MOLEMOLE_UILEVELRESULTPAGECONTROLLER__INITLOSEVIEW_B__18_0_OFFSET UNITYSDK_OFFSET(0x7D3FD00)
#define MOLEMOLE_UILEVELRESULTPAGECONTROLLER__INITLOSEVIEW_B__18_1_OFFSET UNITYSDK_OFFSET(0x7D3FD80)
#define MOLEMOLE_UILEVELRESULTPAGECONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x7D3FEF0)
#define MOLEMOLE_UILEVELRESULTPAGECONTROLLER___BASE_ONSHOW_OFFSET UNITYSDK_OFFSET(0x7D3FF60)
#define MOLEMOLE_UILEVELRESULTPAGECONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x7D3FF70)
#define MOLEMOLE_UILEVELRESULTPAGECONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x7D3FF80)
#define MOLEMOLE_UILEVELRESULTPAGECONTROLLER___BASE_SETUIWINDOWSETTING_OFFSET UNITYSDK_OFFSET(0x7D3FF90)

namespace MoleMole
{
	inline static constexpr unsigned int UILevelResultPageController_TypeDefinitionIndex = 61529;

	class UILevelResultPageController : public ::MoleMole::UIWindowController
	{
	public:
		::Class_2_79F6D62CE30E3F8E_163* _view; // 0x2F8
		::MoleMole::UILevelResultPageContext* _resultPageContext; // 0x300
		::System::Collections::Generic::List_1<::Class_1_1685EC66FBD28897*>* showList; // 0x308
		::System::Collections::Generic::List_1<::MoleMole::UIItemIconBtnWidgetController*>* _caches; // 0x310
		::System::Boolean _skip; // 0x318
		::Enum_3_3FDE76C86672FDDC _curShowType; // 0x31C
		::System::Action* Action1; // 0x320
		::System::Action* Action2; // 0x328
		::MoleMole::MonoLevelResultInfo* _levelResultInfo; // 0x330
		::Class_2_1A3197598F874EB7* _questModel; // 0x338
		::Class_3_4666E61F66433B1E_3* Ret; // 0x340
		::System::Int32 _score; // 0x348
		::System::Collections::Generic::List_1<::Class_1_0D6706375CDAAE8C*>* _RewardItems; // 0x350
		::System::Collections::Generic::List_1<::MoleMole::UILevelResultPageController_RewardItemMeta>* _rewardItemsMeta; // 0x358
		::MonoUITableScrollV2* _missionscroll; // 0x360
		::MonoUITableScrollV2* _challengescroll; // 0x368
		::Class_2_9D9172C07F82DDAE* _itemModel; // 0x370
		::System::Collections::Generic::List_1<::Class_1_82297B6AFFE49354_1*>* _recordItems; // 0x378
		::System::Collections::Generic::List_1<::MoleMole::UILevelResultPageController_MissionRow*>* _missionItems; // 0x380
		::System::Int32 _nextID; // 0x388
		::System::Collections::Generic::List_1<::System::Int32>* _challenge; // 0x390
		::System::Boolean _procedure; // 0x398
		::System::Int32 _nextFile; // 0x39C
		::Class_2_33EA27A25F076E07* _mainStoryModel; // 0x3A0
		::Foundation::Coroutine::CoroutineHandle _animHandle; // 0x3A8
		::System::Boolean _isShowed; // 0x3AC

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILEVELRESULTPAGECONTROLLER__CTOR_OFFSET))(this);
		}

		::Enum_3_3EDF246633A325B0 get_windowType()
		{
			return ((::Enum_3_3EDF246633A325B0(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILEVELRESULTPAGECONTROLLER_GET_WINDOWTYPE_OFFSET))(this);
		}

		::System::Void OnShow(::MoleMole::UIControllerContextBase* showContextBase)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UILEVELRESULTPAGECONTROLLER_ONSHOW_OFFSET))(this, showContextBase);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILEVELRESULTPAGECONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UILEVELRESULTPAGECONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void SetUIWindowSetting()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILEVELRESULTPAGECONTROLLER_SETUIWINDOWSETTING_OFFSET))(this);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILEVELRESULTPAGECONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void ActLevelResultCamera()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILEVELRESULTPAGECONTROLLER_ACTLEVELRESULTCAMERA_OFFSET))(this);
		}

		::System::Void SetMove(::System::Boolean enable)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UILEVELRESULTPAGECONTROLLER_SETMOVE_OFFSET))(this, enable);
		}

		::System::Void InitView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILEVELRESULTPAGECONTROLLER_INITVIEW_OFFSET))(this);
		}

		::System::Void RefreshChallenge()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILEVELRESULTPAGECONTROLLER_REFRESHCHALLENGE_OFFSET))(this);
		}

		::System::Boolean HasEndBattle()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILEVELRESULTPAGECONTROLLER_HASENDBATTLE_OFFSET))(this);
		}

		::System::Void PlayExit(::System::Action* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + MOLEMOLE_UILEVELRESULTPAGECONTROLLER_PLAYEXIT_OFFSET))(this, callback);
		}

		::System::Void InitActView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILEVELRESULTPAGECONTROLLER_INITACTVIEW_OFFSET))(this);
		}

		::System::Void InitDailyChallengeView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILEVELRESULTPAGECONTROLLER_INITDAILYCHALLENGEVIEW_OFFSET))(this);
		}

		::System::Void InitChessboardView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILEVELRESULTPAGECONTROLLER_INITCHESSBOARDVIEW_OFFSET))(this);
		}

		::System::Void InitLoseView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILEVELRESULTPAGECONTROLLER_INITLOSEVIEW_OFFSET))(this);
		}

		::System::Void InvokeAction1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILEVELRESULTPAGECONTROLLER_INVOKEACTION1_OFFSET))(this);
		}

		::System::Void InvokeAction2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILEVELRESULTPAGECONTROLLER_INVOKEACTION2_OFFSET))(this);
		}

		::System::Boolean IsAdditionaUpItem(::System::Int32 itemId)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UILEVELRESULTPAGECONTROLLER_ISADDITIONAUPITEM_OFFSET))(this, itemId);
		}

		::MoleMole::ScrollViewItemWidgetController* CreateItemIcon(::Struct_2_575273D27F02957E binderInfo)
		{
			return ((::MoleMole::ScrollViewItemWidgetController*(*)(::PVOID, ::Struct_2_575273D27F02957E))((::PBYTE)hIl2Cpp + MOLEMOLE_UILEVELRESULTPAGECONTROLLER_CREATEITEMICON_OFFSET))(this, binderInfo);
		}

		::System::Void OnClickItemBtn(::System::Int32 index)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UILEVELRESULTPAGECONTROLLER_ONCLICKITEMBTN_OFFSET))(this, index);
		}

		::System::Collections::Generic::IEnumerator_1<::System::Single>* RefreshChessboardView()
		{
			return ((::System::Collections::Generic::IEnumerator_1<::System::Single>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILEVELRESULTPAGECONTROLLER_REFRESHCHESSBOARDVIEW_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::Class_1_1685EC66FBD28897*>* GetShowRewardList(::System::Collections::Generic::List_1<::MoleMole::UILevelResultPageController_RewardItemMeta>* dataList)
		{
			return ((::System::Collections::Generic::List_1<::Class_1_1685EC66FBD28897*>*(*)(::PVOID, ::System::Collections::Generic::List_1<::MoleMole::UILevelResultPageController_RewardItemMeta>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UILEVELRESULTPAGECONTROLLER_GETSHOWREWARDLIST_OFFSET))(this, dataList);
		}

		::System::Void RefreshLoseView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILEVELRESULTPAGECONTROLLER_REFRESHLOSEVIEW_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerator_1<::System::Single>* RefreshActView()
		{
			return ((::System::Collections::Generic::IEnumerator_1<::System::Single>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILEVELRESULTPAGECONTROLLER_REFRESHACTVIEW_OFFSET))(this);
		}

		::System::Void _InitActView_b__15_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILEVELRESULTPAGECONTROLLER__INITACTVIEW_B__15_0_OFFSET))(this);
		}

		::System::Void _InitActView_b__15_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILEVELRESULTPAGECONTROLLER__INITACTVIEW_B__15_1_OFFSET))(this);
		}

		::System::Void _InitDailyChallengeView_b__16_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILEVELRESULTPAGECONTROLLER__INITDAILYCHALLENGEVIEW_B__16_0_OFFSET))(this);
		}

		::System::Void _InitChessboardView_b__17_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILEVELRESULTPAGECONTROLLER__INITCHESSBOARDVIEW_B__17_0_OFFSET))(this);
		}

		::System::Void _InitLoseView_b__18_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILEVELRESULTPAGECONTROLLER__INITLOSEVIEW_B__18_0_OFFSET))(this);
		}

		::System::Void _InitLoseView_b__18_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILEVELRESULTPAGECONTROLLER__INITLOSEVIEW_B__18_1_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UILEVELRESULTPAGECONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnShow(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UILEVELRESULTPAGECONTROLLER___BASE_ONSHOW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILEVELRESULTPAGECONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILEVELRESULTPAGECONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_SetUIWindowSetting()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILEVELRESULTPAGECONTROLLER___BASE_SETUIWINDOWSETTING_OFFSET))(this);
		}
	};
}
