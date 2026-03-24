#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_3EDF246633A325B0.h"
#include "unitysdk/MoleMole/UICoopMatchPageController_LevelTabStatus.h"
#include "unitysdk/MoleMole/UIWindowController.h"
#include "unitysdk/Struct_2_575273D27F02957E.h"

class Class_1_48D56DACBE4271BC;
class Class_2_33A6C4AD3894AEEE;
class Class_2_C04F87C132BA9A06;
class Class_2_CA81EEAA0E1B3609;
class Class_3_1F2AB93F01651F88_1;
namespace MoleMole { class UIActivityCompWeekRewardBtnWidgetController; }
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace MoleMole { class UIGeneralNewHintWidgetController; }
namespace MoleMole { class UIGrandMarcelAdventureTipsRowWidgetController; }
namespace System { class Action; }
namespace System { class EventArgs; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class Coroutine; }

#define MOLEMOLE_UICOOPMATCHPAGECONTROLLER_CHECKTABCLICKWITHTIPS_OFFSET UNITYSDK_OFFSET(0xD1060C0)
#define MOLEMOLE_UICOOPMATCHPAGECONTROLLER_CHECKUNLOCKPOP_OFFSET UNITYSDK_OFFSET(0xD107890)
#define MOLEMOLE_UICOOPMATCHPAGECONTROLLER_DELTABLEVELNEW_OFFSET UNITYSDK_OFFSET(0xD106140)
#define MOLEMOLE_UICOOPMATCHPAGECONTROLLER_GETTABANIM_OFFSET UNITYSDK_OFFSET(0xD106820)
#define MOLEMOLE_UICOOPMATCHPAGECONTROLLER_GETTABINDEX_OFFSET UNITYSDK_OFFSET(0xD105CB0)
#define MOLEMOLE_UICOOPMATCHPAGECONTROLLER_GETTABTYPE_OFFSET UNITYSDK_OFFSET(0xD105940)
#define MOLEMOLE_UICOOPMATCHPAGECONTROLLER_GET_WINDOWTYPE_OFFSET UNITYSDK_OFFSET(0xD104860)
#define MOLEMOLE_UICOOPMATCHPAGECONTROLLER_GET__VIEWMODEL_OFFSET UNITYSDK_OFFSET(0xD104870)
#define MOLEMOLE_UICOOPMATCHPAGECONTROLLER_INITPLATFORMSETTING_OFFSET UNITYSDK_OFFSET(0xD1054D0)
#define MOLEMOLE_UICOOPMATCHPAGECONTROLLER_ONCLICKTAB_OFFSET UNITYSDK_OFFSET(0xD105D20)
#define MOLEMOLE_UICOOPMATCHPAGECONTROLLER_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0xD1048E0)
#define MOLEMOLE_UICOOPMATCHPAGECONTROLLER_ONGAMEROOMCHANGEDETAILHANDLE_OFFSET UNITYSDK_OFFSET(0xD106F70)
#define MOLEMOLE_UICOOPMATCHPAGECONTROLLER_ONPOSTPAGESHOWED_OFFSET UNITYSDK_OFFSET(0xD1077B0)
#define MOLEMOLE_UICOOPMATCHPAGECONTROLLER_ONUICLOSE_OFFSET UNITYSDK_OFFSET(0xD108410)
#define MOLEMOLE_UICOOPMATCHPAGECONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0xD1049A0)
#define MOLEMOLE_UICOOPMATCHPAGECONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0xD107540)
#define MOLEMOLE_UICOOPMATCHPAGECONTROLLER_PLAYTABFADEINANIM_OFFSET UNITYSDK_OFFSET(0xD106BB0)
#define MOLEMOLE_UICOOPMATCHPAGECONTROLLER_PLAYTABFADEOUTANIM_OFFSET UNITYSDK_OFFSET(0xD1069B0)
#define MOLEMOLE_UICOOPMATCHPAGECONTROLLER_REFRESHTABANIM_OFFSET UNITYSDK_OFFSET(0xD1061C0)
#define MOLEMOLE_UICOOPMATCHPAGECONTROLLER_SELECTTAB_OFFSET UNITYSDK_OFFSET(0xD1059B0)
#define MOLEMOLE_UICOOPMATCHPAGECONTROLLER_SETPLATFORMBTNSHOWSTATE_OFFSET UNITYSDK_OFFSET(0xD107620)
#define MOLEMOLE_UICOOPMATCHPAGECONTROLLER_SHOWTIP_OFFSET UNITYSDK_OFFSET(0xD1071F0)
#define MOLEMOLE_UICOOPMATCHPAGECONTROLLER_STOPSWITCHANIM_OFFSET UNITYSDK_OFFSET(0xD106700)
#define MOLEMOLE_UICOOPMATCHPAGECONTROLLER_STOPTABANIM_OFFSET UNITYSDK_OFFSET(0xD106DB0)
#define MOLEMOLE_UICOOPMATCHPAGECONTROLLER_TIPENDHANDLE_OFFSET UNITYSDK_OFFSET(0xD1073C0)
#define MOLEMOLE_UICOOPMATCHPAGECONTROLLER__CCTOR_OFFSET UNITYSDK_OFFSET(0xD1086D0)
#define MOLEMOLE_UICOOPMATCHPAGECONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0xD108480)
#define MOLEMOLE_UICOOPMATCHPAGECONTROLLER__ONPOSTPAGESHOWED_B__32_0_OFFSET UNITYSDK_OFFSET(0xD1090F0)
#define MOLEMOLE_UICOOPMATCHPAGECONTROLLER__ONUIINIT_B__6_0_OFFSET UNITYSDK_OFFSET(0xD1088F0)
#define MOLEMOLE_UICOOPMATCHPAGECONTROLLER__ONUIINIT_B__6_1_OFFSET UNITYSDK_OFFSET(0xD108930)
#define MOLEMOLE_UICOOPMATCHPAGECONTROLLER__ONUIOPEN_B__31_0_OFFSET UNITYSDK_OFFSET(0xD108FA0)
#define MOLEMOLE_UICOOPMATCHPAGECONTROLLER__ONUIOPEN_B__31_1_OFFSET UNITYSDK_OFFSET(0xD1090C0)
#define MOLEMOLE_UICOOPMATCHPAGECONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0xD109100)
#define MOLEMOLE_UICOOPMATCHPAGECONTROLLER___BASE_ONPOSTPAGESHOWED_OFFSET UNITYSDK_OFFSET(0xD109170)
#define MOLEMOLE_UICOOPMATCHPAGECONTROLLER___BASE_ONUICLOSE_OFFSET UNITYSDK_OFFSET(0xD109180)
#define MOLEMOLE_UICOOPMATCHPAGECONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0xD109190)
#define MOLEMOLE_UICOOPMATCHPAGECONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0xD1091A0)

namespace MoleMole
{
	inline static constexpr unsigned int UICoopMatchPageController_TypeDefinitionIndex = 74029;

	class UICoopMatchPageController : public ::MoleMole::UIWindowController
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::MoleMole::UICoopMatchPageController_LevelTabStatus, ::Il2CppArray<::System::String*>*>** StaticGet__tabAnimNameDict()
		{
			return (::System::Collections::Generic::Dictionary_2<::MoleMole::UICoopMatchPageController_LevelTabStatus, ::Il2CppArray<::System::String*>*>**)Il2CppClass::FromTypeDefinitionIndex(UICoopMatchPageController_TypeDefinitionIndex)->GetStaticField(0x45200);
		}
		::System::Collections::Generic::Dictionary_2<::MoleMole::UICoopMatchPageController_LevelTabStatus, ::MoleMole::UIGeneralNewHintWidgetController*>* _tabNewHintCtrlDict; // 0x2F8
		::MoleMole::UICoopMatchPageController_LevelTabStatus _activityBattleSubType; // 0x300
		::UnityEngine::Coroutine* _switchAnimCoroutineFadeOut; // 0x308
		::UnityEngine::Coroutine* _switchAnimCoroutineFadeIn; // 0x310
		::System::Int32 _switchAnimIndex; // 0x318
		::MoleMole::UIGrandMarcelAdventureTipsRowWidgetController* tipCtrl; // 0x320
		::System::Collections::Generic::List_1<::System::String*>* _waitTipList; // 0x328
		::Class_1_48D56DACBE4271BC* propertySync; // 0x330
		::Class_2_CA81EEAA0E1B3609* _coopPanelModel; // 0x338
		::Class_2_C04F87C132BA9A06* _coopPlayModel; // 0x340
		::MoleMole::UIActivityCompWeekRewardBtnWidgetController* _rewardBtn; // 0x348
		::Class_3_1F2AB93F01651F88_1* _view; // 0x350

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOOPMATCHPAGECONTROLLER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UICOOPMATCHPAGECONTROLLER__CCTOR_OFFSET))();
		}

		::Enum_3_3EDF246633A325B0 get_windowType()
		{
			return ((::Enum_3_3EDF246633A325B0(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOOPMATCHPAGECONTROLLER_GET_WINDOWTYPE_OFFSET))(this);
		}

		::Class_2_33A6C4AD3894AEEE* get__viewModel()
		{
			return ((::Class_2_33A6C4AD3894AEEE*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOOPMATCHPAGECONTROLLER_GET__VIEWMODEL_OFFSET))(this);
		}

		::System::Void OnCreateViewModel(::Struct_2_575273D27F02957E& binderInfo, ::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_575273D27F02957E&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOOPMATCHPAGECONTROLLER_ONCREATEVIEWMODEL_OFFSET))(this, binderInfo, controlReference);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOOPMATCHPAGECONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::MoleMole::UICoopMatchPageController_LevelTabStatus GetTabType(::System::Int32 tabIndex)
		{
			return ((::MoleMole::UICoopMatchPageController_LevelTabStatus(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOOPMATCHPAGECONTROLLER_GETTABTYPE_OFFSET))(this, tabIndex);
		}

		::System::Int32 GetTabIndex(::MoleMole::UICoopMatchPageController_LevelTabStatus activityBattleSubType)
		{
			return ((::System::Int32(*)(::PVOID, ::MoleMole::UICoopMatchPageController_LevelTabStatus))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOOPMATCHPAGECONTROLLER_GETTABINDEX_OFFSET))(this, activityBattleSubType);
		}

		::System::Void OnClickTab(::MoleMole::UICoopMatchPageController_LevelTabStatus activityBattleSubType)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UICoopMatchPageController_LevelTabStatus))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOOPMATCHPAGECONTROLLER_ONCLICKTAB_OFFSET))(this, activityBattleSubType);
		}

		::System::Boolean CheckTabClickWithTips(::MoleMole::UICoopMatchPageController_LevelTabStatus subType)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::UICoopMatchPageController_LevelTabStatus))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOOPMATCHPAGECONTROLLER_CHECKTABCLICKWITHTIPS_OFFSET))(this, subType);
		}

		::System::Void SelectTab(::MoleMole::UICoopMatchPageController_LevelTabStatus activityBattleSubType, ::System::Boolean withAni, ::System::Int32 questID)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UICoopMatchPageController_LevelTabStatus, ::System::Boolean, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOOPMATCHPAGECONTROLLER_SELECTTAB_OFFSET))(this, activityBattleSubType, withAni, questID);
		}

		::System::Void DelTabLevelNew(::MoleMole::UICoopMatchPageController_LevelTabStatus subType)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UICoopMatchPageController_LevelTabStatus))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOOPMATCHPAGECONTROLLER_DELTABLEVELNEW_OFFSET))(this, subType);
		}

		::System::Void RefreshTabAnim(::MoleMole::UICoopMatchPageController_LevelTabStatus oldSubType, ::MoleMole::UICoopMatchPageController_LevelTabStatus newSubType, ::System::Boolean withAni, ::System::Action* fadeOutCallBack)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UICoopMatchPageController_LevelTabStatus, ::MoleMole::UICoopMatchPageController_LevelTabStatus, ::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOOPMATCHPAGECONTROLLER_REFRESHTABANIM_OFFSET))(this, oldSubType, newSubType, withAni, fadeOutCallBack);
		}

		::System::Void PlayTabFadeInAnim(::MoleMole::UICoopMatchPageController_LevelTabStatus subType, ::System::Action* finishCb)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UICoopMatchPageController_LevelTabStatus, ::System::Action*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOOPMATCHPAGECONTROLLER_PLAYTABFADEINANIM_OFFSET))(this, subType, finishCb);
		}

		::System::Void PlayTabFadeOutAnim(::MoleMole::UICoopMatchPageController_LevelTabStatus subType, ::System::Action* finishCb)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UICoopMatchPageController_LevelTabStatus, ::System::Action*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOOPMATCHPAGECONTROLLER_PLAYTABFADEOUTANIM_OFFSET))(this, subType, finishCb);
		}

		::System::Void StopSwitchAnim()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOOPMATCHPAGECONTROLLER_STOPSWITCHANIM_OFFSET))(this);
		}

		::System::Void StopTabAnim()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOOPMATCHPAGECONTROLLER_STOPTABANIM_OFFSET))(this);
		}

		::UnityEngine::Animation* GetTabAnim(::MoleMole::UICoopMatchPageController_LevelTabStatus subType)
		{
			return ((::UnityEngine::Animation*(*)(::PVOID, ::MoleMole::UICoopMatchPageController_LevelTabStatus))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOOPMATCHPAGECONTROLLER_GETTABANIM_OFFSET))(this, subType);
		}

		::System::Void OnGameRoomChangeDetailHandle(::System::EventArgs* obj)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOOPMATCHPAGECONTROLLER_ONGAMEROOMCHANGEDETAILHANDLE_OFFSET))(this, obj);
		}

		::System::Void ShowTip(::System::String* mes)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOOPMATCHPAGECONTROLLER_SHOWTIP_OFFSET))(this, mes);
		}

		::System::Void TipEndHandle()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOOPMATCHPAGECONTROLLER_TIPENDHANDLE_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOOPMATCHPAGECONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnPostPageShowed()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOOPMATCHPAGECONTROLLER_ONPOSTPAGESHOWED_OFFSET))(this);
		}

		::System::Void CheckUnlockPop()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOOPMATCHPAGECONTROLLER_CHECKUNLOCKPOP_OFFSET))(this);
		}

		::System::Void InitPlatformSetting()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOOPMATCHPAGECONTROLLER_INITPLATFORMSETTING_OFFSET))(this);
		}

		::System::Void SetPlatformBtnShowState()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOOPMATCHPAGECONTROLLER_SETPLATFORMBTNSHOWSTATE_OFFSET))(this);
		}

		::System::Void OnUIClose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOOPMATCHPAGECONTROLLER_ONUICLOSE_OFFSET))(this);
		}

		::System::Void _OnUIInit_b__6_0(::System::EventArgs* args)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOOPMATCHPAGECONTROLLER__ONUIINIT_B__6_0_OFFSET))(this, args);
		}

		::System::Void _OnUIInit_b__6_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOOPMATCHPAGECONTROLLER__ONUIINIT_B__6_1_OFFSET))(this);
		}

		::System::Void _OnUIOpen_b__31_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOOPMATCHPAGECONTROLLER__ONUIOPEN_B__31_0_OFFSET))(this);
		}

		::System::Void _OnUIOpen_b__31_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOOPMATCHPAGECONTROLLER__ONUIOPEN_B__31_1_OFFSET))(this);
		}

		::System::Void _OnPostPageShowed_b__32_0(::System::EventArgs* _)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOOPMATCHPAGECONTROLLER__ONPOSTPAGESHOWED_B__32_0_OFFSET))(this, _);
		}

		::System::Void __base_OnCreateViewModel(::Struct_2_575273D27F02957E& P0, ::MoleMole::UIControlReference* P1)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_575273D27F02957E&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOOPMATCHPAGECONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET))(this, P0, P1);
		}

		::System::Void __base_OnPostPageShowed()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOOPMATCHPAGECONTROLLER___BASE_ONPOSTPAGESHOWED_OFFSET))(this);
		}

		::System::Void __base_OnUIClose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOOPMATCHPAGECONTROLLER___BASE_ONUICLOSE_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOOPMATCHPAGECONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOOPMATCHPAGECONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
