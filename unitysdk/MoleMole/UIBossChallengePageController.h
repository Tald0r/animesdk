#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_3EDF246633A325B0.h"
#include "unitysdk/Enum_3_8E90989A26BC6232.h"
#include "unitysdk/MoleMole/UIBossChallengePageController_LayerInfoData.h"
#include "unitysdk/MoleMole/UIWindowController.h"
#include "unitysdk/Struct_2_49ABC235CB23B56F.h"

class Class_2_79AE422BA06F6D26_60;
namespace MoleMole { class ScrollViewItemWidgetController; }
namespace MoleMole { class UIBossChallengeBadgeRowWidgetController; }
namespace MoleMole { class UIBossChallengeInfoWidgetController; }
namespace MoleMole { class UIBossChallengeInfoWidgetController_UIBossChallengeInfoWidgetControllerContext; }
namespace MoleMole { class UIBossChallengePageRowWidgetController; }
namespace MoleMole { class UIBossChallengeRewardDialogPopWindowController; }
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace MoleMole { class UIGeneralRewardListBtnWidgetController; }
namespace System { class EventArgs; }
namespace System { class String; }
namespace System { template <typename T> class Func_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }

#define MOLEMOLE_UIBOSSCHALLENGEPAGECONTROLLER_BOSSCHALLENGEDIRECTTOLAYER_OFFSET UNITYSDK_OFFSET(0xCC4E770)
#define MOLEMOLE_UIBOSSCHALLENGEPAGECONTROLLER_CLEARRANKDATATIMEHANDLE_OFFSET UNITYSDK_OFFSET(0xCC4AD30)
#define MOLEMOLE_UIBOSSCHALLENGEPAGECONTROLLER_GET_HOTSWITCHROOTLAYERSTATE_OFFSET UNITYSDK_OFFSET(0xCC4AE90)
#define MOLEMOLE_UIBOSSCHALLENGEPAGECONTROLLER_GET_WINDOWTYPE_OFFSET UNITYSDK_OFFSET(0xCC4AE80)
#define MOLEMOLE_UIBOSSCHALLENGEPAGECONTROLLER_GODIRECTTOBOSSCHALLENGEINFO_OFFSET UNITYSDK_OFFSET(0xCC4E800)
#define MOLEMOLE_UIBOSSCHALLENGEPAGECONTROLLER_INITENDTIMER_OFFSET UNITYSDK_OFFSET(0xCC4C760)
#define MOLEMOLE_UIBOSSCHALLENGEPAGECONTROLLER_INITZONE_OFFSET UNITYSDK_OFFSET(0xCC4C210)
#define MOLEMOLE_UIBOSSCHALLENGEPAGECONTROLLER_ONBACKBTNCLICK_OFFSET UNITYSDK_OFFSET(0xCC4DC90)
#define MOLEMOLE_UIBOSSCHALLENGEPAGECONTROLLER_ONBOSSCHALLENGEINFOWIDGETVISIBLECHANGED_OFFSET UNITYSDK_OFFSET(0xCC4F2D0)
#define MOLEMOLE_UIBOSSCHALLENGEPAGECONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0xCC4AEA0)
#define MOLEMOLE_UIBOSSCHALLENGEPAGECONTROLLER_ONINFOBTNCLICK_OFFSET UNITYSDK_OFFSET(0xCC4E050)
#define MOLEMOLE_UIBOSSCHALLENGEPAGECONTROLLER_ONLAYERITEMCLICK_OFFSET UNITYSDK_OFFSET(0xCC4C6E0)
#define MOLEMOLE_UIBOSSCHALLENGEPAGECONTROLLER_ONMAINCITYBTNCLICK_OFFSET UNITYSDK_OFFSET(0xCC4DEF0)
#define MOLEMOLE_UIBOSSCHALLENGEPAGECONTROLLER_ONOKBTNCLICK_OFFSET UNITYSDK_OFFSET(0xCC4ECB0)
#define MOLEMOLE_UIBOSSCHALLENGEPAGECONTROLLER_ONRESETBTNCLICK_OFFSET UNITYSDK_OFFSET(0xCC4E380)
#define MOLEMOLE_UIBOSSCHALLENGEPAGECONTROLLER_ONRESETSUCCESS_OFFSET UNITYSDK_OFFSET(0xCC4D1A0)
#define MOLEMOLE_UIBOSSCHALLENGEPAGECONTROLLER_ONSELECTLAYER_OFFSET UNITYSDK_OFFSET(0xCC4D460)
#define MOLEMOLE_UIBOSSCHALLENGEPAGECONTROLLER_ONSHOW_OFFSET UNITYSDK_OFFSET(0xCC4B9B0)
#define MOLEMOLE_UIBOSSCHALLENGEPAGECONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0xCC4B7B0)
#define MOLEMOLE_UIBOSSCHALLENGEPAGECONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0xCC4AF40)
#define MOLEMOLE_UIBOSSCHALLENGEPAGECONTROLLER_OPENHISTORYPOPWINDOW_OFFSET UNITYSDK_OFFSET(0xCC4F430)
#define MOLEMOLE_UIBOSSCHALLENGEPAGECONTROLLER_OPENRANKINFO_OFFSET UNITYSDK_OFFSET(0xCC4F670)
#define MOLEMOLE_UIBOSSCHALLENGEPAGECONTROLLER_REFRESHBUTTONTEXT_OFFSET UNITYSDK_OFFSET(0xCC4BAA0)
#define MOLEMOLE_UIBOSSCHALLENGEPAGECONTROLLER_REFRESHGUIDEBTN_OFFSET UNITYSDK_OFFSET(0xCC4CEE0)
#define MOLEMOLE_UIBOSSCHALLENGEPAGECONTROLLER_REFRESHMEDALANDHISTORY_OFFSET UNITYSDK_OFFSET(0xCC4DDA0)
#define MOLEMOLE_UIBOSSCHALLENGEPAGECONTROLLER_REFRESHREWARDSTATE_OFFSET UNITYSDK_OFFSET(0xCC4BF40)
#define MOLEMOLE_UIBOSSCHALLENGEPAGECONTROLLER_REFRESHZONERANK_OFFSET UNITYSDK_OFFSET(0xCC4A6C0)
#define MOLEMOLE_UIBOSSCHALLENGEPAGECONTROLLER_REFRESHZONESCORE_OFFSET UNITYSDK_OFFSET(0xCC4A840)
#define MOLEMOLE_UIBOSSCHALLENGEPAGECONTROLLER_SETRANKDATATIMEHANDLE_OFFSET UNITYSDK_OFFSET(0xCC4AA60)
#define MOLEMOLE_UIBOSSCHALLENGEPAGECONTROLLER_SHOWSTARNUMINFO_OFFSET UNITYSDK_OFFSET(0xCC4CBA0)
#define MOLEMOLE_UIBOSSCHALLENGEPAGECONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0xCC4F720)
#define MOLEMOLE_UIBOSSCHALLENGEPAGECONTROLLER__ONOKBTNCLICK_B__43_0_OFFSET UNITYSDK_OFFSET(0xCC4FD90)
#define MOLEMOLE_UIBOSSCHALLENGEPAGECONTROLLER__ONUIINIT_B__29_0_OFFSET UNITYSDK_OFFSET(0xCC4FA30)
#define MOLEMOLE_UIBOSSCHALLENGEPAGECONTROLLER__ONUIINIT_B__29_1_OFFSET UNITYSDK_OFFSET(0xCC4FB70)
#define MOLEMOLE_UIBOSSCHALLENGEPAGECONTROLLER__ONUIINIT_B__29_2_OFFSET UNITYSDK_OFFSET(0xCC4FC50)
#define MOLEMOLE_UIBOSSCHALLENGEPAGECONTROLLER__ONUIINIT_B__29_3_OFFSET UNITYSDK_OFFSET(0xCC4FD80)
#define MOLEMOLE_UIBOSSCHALLENGEPAGECONTROLLER__REFRESHZONERANK_B__0_0_OFFSET UNITYSDK_OFFSET(0xCC4F860)
#define MOLEMOLE_UIBOSSCHALLENGEPAGECONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0xCC500D0)
#define MOLEMOLE_UIBOSSCHALLENGEPAGECONTROLLER___BASE_ONSHOW_OFFSET UNITYSDK_OFFSET(0xCC50140)
#define MOLEMOLE_UIBOSSCHALLENGEPAGECONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0xCC50150)
#define MOLEMOLE_UIBOSSCHALLENGEPAGECONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0xCC50160)

namespace MoleMole
{
	inline static constexpr unsigned int UIBossChallengePageController_TypeDefinitionIndex = 77348;

	class UIBossChallengePageController : public ::MoleMole::UIWindowController
	{
	public:
		// static const ::System::String* BOSS_CHALLENGE_PAGE_CHANGE_R_TO_L; // 0x0
		// static const ::System::String* BOSS_CHALLENGE_PAGE_CHANGE_L_TO_R; // 0x0
		// static const ::System::String* BOSS_CHALLENGE_PAGE_BM_FADE_OUT; // 0x0
		// static const ::System::String* BOSS_CHALLENGE_PAGE_BM_FADE_IN; // 0x0
		::Struct_2_49ABC235CB23B56F _refreshRankTimerHandle; // 0x2F8
		::Class_2_79AE422BA06F6D26_60* _view; // 0x308
		::System::Collections::Generic::List_1<::MoleMole::UIBossChallengePageRowWidgetController*>* _layerCtrlerList; // 0x310
		::System::Int32 _zoneID; // 0x318
		::MoleMole::UIBossChallengePageController_LayerInfoData _selectedLayer; // 0x31C
		::System::Collections::Generic::List_1<::MoleMole::UIBossChallengePageController_LayerInfoData>* _layerScrollDataList; // 0x328
		::MoleMole::UIBossChallengeInfoWidgetController* _bossChallengeInfoWidget; // 0x330
		::MoleMole::UIGeneralRewardListBtnWidgetController* _rewardBtnCtrler; // 0x338
		::System::Collections::Generic::Dictionary_2<::System::String*, ::UnityEngine::GameObject*>* _loadedPortrait; // 0x340
		::UnityEngine::GameObject* _lastPortrait; // 0x348
		::System::Boolean _isPageAnimationPlayed; // 0x350
		::MoleMole::UIGeneralRewardListBtnWidgetController* _rewardListBtnWidgetCtrler; // 0x358
		::MoleMole::UIBossChallengeInfoWidgetController_UIBossChallengeInfoWidgetControllerContext* _bossChallengeInfoWidgetControllerContext; // 0x360
		::MoleMole::UIBossChallengeRewardDialogPopWindowController* _bossChallengeRewardCtrler; // 0x368
		::MoleMole::UIBossChallengeBadgeRowWidgetController* _badgeRow; // 0x370

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBOSSCHALLENGEPAGECONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void RefreshZoneRank()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBOSSCHALLENGEPAGECONTROLLER_REFRESHZONERANK_OFFSET))(this);
		}

		::System::Void RefreshZoneScore()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBOSSCHALLENGEPAGECONTROLLER_REFRESHZONESCORE_OFFSET))(this);
		}

		::System::Void SetRankDataTimeHandle()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBOSSCHALLENGEPAGECONTROLLER_SETRANKDATATIMEHANDLE_OFFSET))(this);
		}

		::System::Void ClearRankDataTimeHandle()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBOSSCHALLENGEPAGECONTROLLER_CLEARRANKDATATIMEHANDLE_OFFSET))(this);
		}

		::Enum_3_3EDF246633A325B0 get_windowType()
		{
			return ((::Enum_3_3EDF246633A325B0(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBOSSCHALLENGEPAGECONTROLLER_GET_WINDOWTYPE_OFFSET))(this);
		}

		::Enum_3_8E90989A26BC6232 get_HotSwitchRootLayerState()
		{
			return ((::Enum_3_8E90989A26BC6232(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBOSSCHALLENGEPAGECONTROLLER_GET_HOTSWITCHROOTLAYERSTATE_OFFSET))(this);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBOSSCHALLENGEPAGECONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBOSSCHALLENGEPAGECONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBOSSCHALLENGEPAGECONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void OnShow(::MoleMole::UIControllerContextBase* showCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBOSSCHALLENGEPAGECONTROLLER_ONSHOW_OFFSET))(this, showCtrlContext);
		}

		::System::Void InitZone(::System::Int32 zoneID)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBOSSCHALLENGEPAGECONTROLLER_INITZONE_OFFSET))(this, zoneID);
		}

		::System::Void OnResetSuccess()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBOSSCHALLENGEPAGECONTROLLER_ONRESETSUCCESS_OFFSET))(this);
		}

		::System::Void RefreshRewardState()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBOSSCHALLENGEPAGECONTROLLER_REFRESHREWARDSTATE_OFFSET))(this);
		}

		::System::Void OnLayerItemClick(::MoleMole::UIBossChallengePageRowWidgetController* clickedLayerItem)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIBossChallengePageRowWidgetController*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBOSSCHALLENGEPAGECONTROLLER_ONLAYERITEMCLICK_OFFSET))(this, clickedLayerItem);
		}

		::System::Void OnSelectLayer(::MoleMole::UIBossChallengePageController_LayerInfoData layerData)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIBossChallengePageController_LayerInfoData))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBOSSCHALLENGEPAGECONTROLLER_ONSELECTLAYER_OFFSET))(this, layerData);
		}

		::System::Void OnBackBtnClick()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBOSSCHALLENGEPAGECONTROLLER_ONBACKBTNCLICK_OFFSET))(this);
		}

		::System::Void OnMainCityBtnClick()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBOSSCHALLENGEPAGECONTROLLER_ONMAINCITYBTNCLICK_OFFSET))(this);
		}

		::System::Void OnInfoBtnClick()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBOSSCHALLENGEPAGECONTROLLER_ONINFOBTNCLICK_OFFSET))(this);
		}

		::System::Void OnResetBtnClick()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBOSSCHALLENGEPAGECONTROLLER_ONRESETBTNCLICK_OFFSET))(this);
		}

		::System::Void BossChallengeDirectToLayer(::System::EventArgs* args)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBOSSCHALLENGEPAGECONTROLLER_BOSSCHALLENGEDIRECTTOLAYER_OFFSET))(this, args);
		}

		::System::Void GoDirectToBossChallengeInfo(::System::Int32 layerIndex)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBOSSCHALLENGEPAGECONTROLLER_GODIRECTTOBOSSCHALLENGEINFO_OFFSET))(this, layerIndex);
		}

		::System::Void OnOkBtnClick()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBOSSCHALLENGEPAGECONTROLLER_ONOKBTNCLICK_OFFSET))(this);
		}

		::System::Void InitEndTimer()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBOSSCHALLENGEPAGECONTROLLER_INITENDTIMER_OFFSET))(this);
		}

		::System::Void ShowStarNumInfo()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBOSSCHALLENGEPAGECONTROLLER_SHOWSTARNUMINFO_OFFSET))(this);
		}

		::System::Void RefreshButtonText(::System::Boolean bossChallengeInfoWidgetVisible)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBOSSCHALLENGEPAGECONTROLLER_REFRESHBUTTONTEXT_OFFSET))(this, bossChallengeInfoWidgetVisible);
		}

		::System::Void OnBossChallengeInfoWidgetVisibleChanged(::System::Boolean isVisible)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBOSSCHALLENGEPAGECONTROLLER_ONBOSSCHALLENGEINFOWIDGETVISIBLECHANGED_OFFSET))(this, isVisible);
		}

		::System::Void RefreshMedalAndHistory(::System::Boolean show)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBOSSCHALLENGEPAGECONTROLLER_REFRESHMEDALANDHISTORY_OFFSET))(this, show);
		}

		::System::Void OpenHistoryPopWindow()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBOSSCHALLENGEPAGECONTROLLER_OPENHISTORYPOPWINDOW_OFFSET))(this);
		}

		::System::Void OpenRankInfo()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBOSSCHALLENGEPAGECONTROLLER_OPENRANKINFO_OFFSET))(this);
		}

		::System::Void RefreshGuideBtn()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBOSSCHALLENGEPAGECONTROLLER_REFRESHGUIDEBTN_OFFSET))(this);
		}

		::System::Void _RefreshZoneRank_b__0_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBOSSCHALLENGEPAGECONTROLLER__REFRESHZONERANK_B__0_0_OFFSET))(this);
		}

		::MoleMole::ScrollViewItemWidgetController* _OnUIInit_b__29_0(::System::Func_1<::MoleMole::UIControlReference*>* reference)
		{
			return ((::MoleMole::ScrollViewItemWidgetController*(*)(::PVOID, ::System::Func_1<::MoleMole::UIControlReference*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBOSSCHALLENGEPAGECONTROLLER__ONUIINIT_B__29_0_OFFSET))(this, reference);
		}

		::System::Void _OnUIInit_b__29_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBOSSCHALLENGEPAGECONTROLLER__ONUIINIT_B__29_1_OFFSET))(this);
		}

		::System::Void _OnUIInit_b__29_2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBOSSCHALLENGEPAGECONTROLLER__ONUIINIT_B__29_2_OFFSET))(this);
		}

		::System::Void _OnUIInit_b__29_3(::System::EventArgs* args)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBOSSCHALLENGEPAGECONTROLLER__ONUIINIT_B__29_3_OFFSET))(this, args);
		}

		::System::Void _OnOkBtnClick_b__43_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBOSSCHALLENGEPAGECONTROLLER__ONOKBTNCLICK_B__43_0_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBOSSCHALLENGEPAGECONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnShow(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBOSSCHALLENGEPAGECONTROLLER___BASE_ONSHOW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBOSSCHALLENGEPAGECONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBOSSCHALLENGEPAGECONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}
	};
}
