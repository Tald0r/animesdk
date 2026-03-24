#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_0ABEFAA659B6C774.h"
#include "unitysdk/Enum_3_A41D6F485D525776.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/MoleMole/ScrollViewItemWidgetController.h"
#include "unitysdk/MoleMole/UIMissionTipsRowWidgetController_ClickMode.h"

class Class_0_16E4307DCC419505_17;
class Class_1_380E15D819BCBADA;
class Class_1_3D70108AB8A5915A;
class Class_1_BEE9160742169A46;
class Class_2_21A7ACA4473668F9_2;
class Class_3_966C17C4C42EA45B;
namespace DG::Tweening { class Tweener; }
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace MoleMole { class UIMissionTipsRowWidgetController_ChallengeCacheData; }
namespace System { class Action; }
namespace System { class EventArgs; }
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T> class Func_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define MOLEMOLE_UIMISSIONTIPSROWWIDGETCONTROLLER_CANCELLAYOUTHEIGHT_OFFSET UNITYSDK_OFFSET(0xAE0F130)
#define MOLEMOLE_UIMISSIONTIPSROWWIDGETCONTROLLER_CANCELPLAY_OFFSET UNITYSDK_OFFSET(0xAE0F2A0)
#define MOLEMOLE_UIMISSIONTIPSROWWIDGETCONTROLLER_CANCEL_OFFSET UNITYSDK_OFFSET(0xAE0E0D0)
#define MOLEMOLE_UIMISSIONTIPSROWWIDGETCONTROLLER_CLEARCHALLENGECACHE_OFFSET UNITYSDK_OFFSET(0xAE06D50)
#define MOLEMOLE_UIMISSIONTIPSROWWIDGETCONTROLLER_CLEARCHALLENGE_OFFSET UNITYSDK_OFFSET(0xAE070A0)
#define MOLEMOLE_UIMISSIONTIPSROWWIDGETCONTROLLER_CLEARQUEST_OFFSET UNITYSDK_OFFSET(0xAE0BBA0)
#define MOLEMOLE_UIMISSIONTIPSROWWIDGETCONTROLLER_DISABLERECOMMEND_OFFSET UNITYSDK_OFFSET(0xAE0F310)
#define MOLEMOLE_UIMISSIONTIPSROWWIDGETCONTROLLER_ENDPLAY_OFFSET UNITYSDK_OFFSET(0xAE0F7B0)
#define MOLEMOLE_UIMISSIONTIPSROWWIDGETCONTROLLER_GETDETAILBYINDEX_OFFSET UNITYSDK_OFFSET(0xAE07AE0)
#define MOLEMOLE_UIMISSIONTIPSROWWIDGETCONTROLLER_GETISINBATTLE_OFFSET UNITYSDK_OFFSET(0xAE08D10)
#define MOLEMOLE_UIMISSIONTIPSROWWIDGETCONTROLLER_GETQUESTDESCRIPTIONSUFFIX_OFFSET UNITYSDK_OFFSET(0xAE0C260)
#define MOLEMOLE_UIMISSIONTIPSROWWIDGETCONTROLLER_GETTHEWORLDQUESTDESC_OFFSET UNITYSDK_OFFSET(0xAE0BE00)
#define MOLEMOLE_UIMISSIONTIPSROWWIDGETCONTROLLER_GET_CANREMOVE_OFFSET UNITYSDK_OFFSET(0xAE08420)
#define MOLEMOLE_UIMISSIONTIPSROWWIDGETCONTROLLER_GET_ISDISAPPEAR_OFFSET UNITYSDK_OFFSET(0xAE083D0)
#define MOLEMOLE_UIMISSIONTIPSROWWIDGETCONTROLLER_GET_ISMODIFIED_OFFSET UNITYSDK_OFFSET(0xAE08390)
#define MOLEMOLE_UIMISSIONTIPSROWWIDGETCONTROLLER_GET_ISPLAYING_OFFSET UNITYSDK_OFFSET(0xAE083B0)
#define MOLEMOLE_UIMISSIONTIPSROWWIDGETCONTROLLER_GET_ISREQUESTCHANGETRACK_OFFSET UNITYSDK_OFFSET(0xAE08400)
#define MOLEMOLE_UIMISSIONTIPSROWWIDGETCONTROLLER_GET_MULTIQUESTCOUNT_OFFSET UNITYSDK_OFFSET(0xAE0AED0)
#define MOLEMOLE_UIMISSIONTIPSROWWIDGETCONTROLLER_GET_QUESTID_OFFSET UNITYSDK_OFFSET(0xAE083F0)
#define MOLEMOLE_UIMISSIONTIPSROWWIDGETCONTROLLER_GET_QUESTINMENU_OFFSET UNITYSDK_OFFSET(0xAE0AEA0)
#define MOLEMOLE_UIMISSIONTIPSROWWIDGETCONTROLLER_GET__QUESTID_OFFSET UNITYSDK_OFFSET(0xAE0AEC0)
#define MOLEMOLE_UIMISSIONTIPSROWWIDGETCONTROLLER_KILLALLCOROUTINES_OFFSET UNITYSDK_OFFSET(0xAE0F400)
#define MOLEMOLE_UIMISSIONTIPSROWWIDGETCONTROLLER_MUTEMENUBTNCLICK_OFFSET UNITYSDK_OFFSET(0xAE08BB0)
#define MOLEMOLE_UIMISSIONTIPSROWWIDGETCONTROLLER_ONBIGSCENECHALLENGECONDITIONCHANGE_OFFSET UNITYSDK_OFFSET(0xAE07A70)
#define MOLEMOLE_UIMISSIONTIPSROWWIDGETCONTROLLER_ONCHALLENGECHANGED_OFFSET UNITYSDK_OFFSET(0xAE06FB0)
#define MOLEMOLE_UIMISSIONTIPSROWWIDGETCONTROLLER_ONCHALLENGESUBCONDITIONS_OFFSET UNITYSDK_OFFSET(0xAE07190)
#define MOLEMOLE_UIMISSIONTIPSROWWIDGETCONTROLLER_ONCHANGETRACK_OFFSET UNITYSDK_OFFSET(0xAE0F920)
#define MOLEMOLE_UIMISSIONTIPSROWWIDGETCONTROLLER_ONCLICKGUILDOPENMAP_OFFSET UNITYSDK_OFFSET(0xAE10010)
#define MOLEMOLE_UIMISSIONTIPSROWWIDGETCONTROLLER_ONCLICKGUILD_OFFSET UNITYSDK_OFFSET(0xAE0FCC0)
#define MOLEMOLE_UIMISSIONTIPSROWWIDGETCONTROLLER_ONCLICKOPENKNOT_OFFSET UNITYSDK_OFFSET(0xAE10590)
#define MOLEMOLE_UIMISSIONTIPSROWWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0xAE0AD20)
#define MOLEMOLE_UIMISSIONTIPSROWWIDGETCONTROLLER_ONENABLE_OFFSET UNITYSDK_OFFSET(0xAE0ABA0)
#define MOLEMOLE_UIMISSIONTIPSROWWIDGETCONTROLLER_ONPAUSE_OFFSET UNITYSDK_OFFSET(0xAE0F8A0)
#define MOLEMOLE_UIMISSIONTIPSROWWIDGETCONTROLLER_ONQUESTCHANGED_OFFSET UNITYSDK_OFFSET(0xAE0D590)
#define MOLEMOLE_UIMISSIONTIPSROWWIDGETCONTROLLER_ONQUESTCHANGEHANDLE_OFFSET UNITYSDK_OFFSET(0xAE10B10)
#define MOLEMOLE_UIMISSIONTIPSROWWIDGETCONTROLLER_ONSCROLLITEMUPDATE_OFFSET UNITYSDK_OFFSET(0xAE07C00)
#define MOLEMOLE_UIMISSIONTIPSROWWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0xAE0ADC0)
#define MOLEMOLE_UIMISSIONTIPSROWWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0xAE08F30)
#define MOLEMOLE_UIMISSIONTIPSROWWIDGETCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0xAE090F0)
#define MOLEMOLE_UIMISSIONTIPSROWWIDGETCONTROLLER_PLAYCHANGETRACKTIPSFADEOUT_OFFSET UNITYSDK_OFFSET(0xAE0F470)
#define MOLEMOLE_UIMISSIONTIPSROWWIDGETCONTROLLER_PLAYCHANGETRACK_OFFSET UNITYSDK_OFFSET(0xAE0DBF0)
#define MOLEMOLE_UIMISSIONTIPSROWWIDGETCONTROLLER_PLAYFADEINANIM_OFFSET UNITYSDK_OFFSET(0xAE06310)
#define MOLEMOLE_UIMISSIONTIPSROWWIDGETCONTROLLER_PLAYFADEOUTANIM_OFFSET UNITYSDK_OFFSET(0xAE06520)
#define MOLEMOLE_UIMISSIONTIPSROWWIDGETCONTROLLER_PLAYLAYOUTFADEIN_OFFSET UNITYSDK_OFFSET(0xAE0E950)
#define MOLEMOLE_UIMISSIONTIPSROWWIDGETCONTROLLER_PLAYLAYOUTFADEOUT_OFFSET UNITYSDK_OFFSET(0xAE0ECD0)
#define MOLEMOLE_UIMISSIONTIPSROWWIDGETCONTROLLER_PLAYMISSIONICONFADEIN_OFFSET UNITYSDK_OFFSET(0xAE0DA60)
#define MOLEMOLE_UIMISSIONTIPSROWWIDGETCONTROLLER_PLAYSWITCHINANIM_OFFSET UNITYSDK_OFFSET(0xAE0E580)
#define MOLEMOLE_UIMISSIONTIPSROWWIDGETCONTROLLER_PLAYSWITCHOUTANIM_OFFSET UNITYSDK_OFFSET(0xAE0E4C0)
#define MOLEMOLE_UIMISSIONTIPSROWWIDGETCONTROLLER_PLAYWITHCALLBACK_OFFSET UNITYSDK_OFFSET(0xAE0D790)
#define MOLEMOLE_UIMISSIONTIPSROWWIDGETCONTROLLER_REFRESHBATTLESTATE_OFFSET UNITYSDK_OFFSET(0xAE08E10)
#define MOLEMOLE_UIMISSIONTIPSROWWIDGETCONTROLLER_REFRESHBYQUESTID_OFFSET UNITYSDK_OFFSET(0xAE09490)
#define MOLEMOLE_UIMISSIONTIPSROWWIDGETCONTROLLER_REFRESHBYTEXTMAP_1_OFFSET UNITYSDK_OFFSET(0xAE0B1D0)
#define MOLEMOLE_UIMISSIONTIPSROWWIDGETCONTROLLER_REFRESHBYTEXTMAP_2_OFFSET UNITYSDK_OFFSET(0xAE0B290)
#define MOLEMOLE_UIMISSIONTIPSROWWIDGETCONTROLLER_REFRESHBYTEXTMAP_3_OFFSET UNITYSDK_OFFSET(0xAE0B7D0)
#define MOLEMOLE_UIMISSIONTIPSROWWIDGETCONTROLLER_REFRESHBYTEXTMAP_OFFSET UNITYSDK_OFFSET(0xAE0B120)
#define MOLEMOLE_UIMISSIONTIPSROWWIDGETCONTROLLER_REFRESHBYTEXT_1_OFFSET UNITYSDK_OFFSET(0xAE0B880)
#define MOLEMOLE_UIMISSIONTIPSROWWIDGETCONTROLLER_REFRESHBYTEXT_OFFSET UNITYSDK_OFFSET(0xAE0AEE0)
#define MOLEMOLE_UIMISSIONTIPSROWWIDGETCONTROLLER_REFRESHCHALLENGEID_OFFSET UNITYSDK_OFFSET(0xAE06A50)
#define MOLEMOLE_UIMISSIONTIPSROWWIDGETCONTROLLER_REFRESHQUESTDESC_OFFSET UNITYSDK_OFFSET(0xAE0B980)
#define MOLEMOLE_UIMISSIONTIPSROWWIDGETCONTROLLER_REFRESHQUESTICON_OFFSET UNITYSDK_OFFSET(0xAE06F40)
#define MOLEMOLE_UIMISSIONTIPSROWWIDGETCONTROLLER_REFRESHTEXT_OFFSET UNITYSDK_OFFSET(0xAE0B050)
#define MOLEMOLE_UIMISSIONTIPSROWWIDGETCONTROLLER_RESETANIM_OFFSET UNITYSDK_OFFSET(0xAE0C9D0)
#define MOLEMOLE_UIMISSIONTIPSROWWIDGETCONTROLLER_RESET_OFFSET UNITYSDK_OFFSET(0xAE08170)
#define MOLEMOLE_UIMISSIONTIPSROWWIDGETCONTROLLER_RESUMELAYOUTHEIGHT_OFFSET UNITYSDK_OFFSET(0xAE0E630)
#define MOLEMOLE_UIMISSIONTIPSROWWIDGETCONTROLLER_SAMPLEFADEINANIMAT_OFFSET UNITYSDK_OFFSET(0xAE0D600)
#define MOLEMOLE_UIMISSIONTIPSROWWIDGETCONTROLLER_SETCHALLENGEICONSTATE_OFFSET UNITYSDK_OFFSET(0xAE07BA0)
#define MOLEMOLE_UIMISSIONTIPSROWWIDGETCONTROLLER_SETCLICKMODE_OFFSET UNITYSDK_OFFSET(0xAE09950)
#define MOLEMOLE_UIMISSIONTIPSROWWIDGETCONTROLLER_SETCOMPLETEANIM_OFFSET UNITYSDK_OFFSET(0xAE082B0)
#define MOLEMOLE_UIMISSIONTIPSROWWIDGETCONTROLLER_SETCONSOLEACTIVE_OFFSET UNITYSDK_OFFSET(0xAE08AE0)
#define MOLEMOLE_UIMISSIONTIPSROWWIDGETCONTROLLER_SETFINISHFLIPOUTSTATE_OFFSET UNITYSDK_OFFSET(0xAE0E7D0)
#define MOLEMOLE_UIMISSIONTIPSROWWIDGETCONTROLLER_SETMISSIONCONSOLEBTNSTATE_OFFSET UNITYSDK_OFFSET(0xAE08E80)
#define MOLEMOLE_UIMISSIONTIPSROWWIDGETCONTROLLER_SETMULTIQUESTCOUNT_OFFSET UNITYSDK_OFFSET(0xAE0B6F0)
#define MOLEMOLE_UIMISSIONTIPSROWWIDGETCONTROLLER_SETQUESTDESCARGS_OFFSET UNITYSDK_OFFSET(0xAE0B660)
#define MOLEMOLE_UIMISSIONTIPSROWWIDGETCONTROLLER_SETQUESTICONSTATE_OFFSET UNITYSDK_OFFSET(0xAE0CC90)
#define MOLEMOLE_UIMISSIONTIPSROWWIDGETCONTROLLER_SETQUESTID_OFFSET UNITYSDK_OFFSET(0xAE0B760)
#define MOLEMOLE_UIMISSIONTIPSROWWIDGETCONTROLLER_SETQUESTTEXTFUNC_OFFSET UNITYSDK_OFFSET(0xAE0BC90)
#define MOLEMOLE_UIMISSIONTIPSROWWIDGETCONTROLLER_SETSKINBYTEXTMAP_OFFSET UNITYSDK_OFFSET(0xAE096D0)
#define MOLEMOLE_UIMISSIONTIPSROWWIDGETCONTROLLER_SET_CANREMOVE_OFFSET UNITYSDK_OFFSET(0xAE08430)
#define MOLEMOLE_UIMISSIONTIPSROWWIDGETCONTROLLER_SET_ISDISAPPEAR_OFFSET UNITYSDK_OFFSET(0xAE083E0)
#define MOLEMOLE_UIMISSIONTIPSROWWIDGETCONTROLLER_SET_ISMODIFIED_OFFSET UNITYSDK_OFFSET(0xAE083A0)
#define MOLEMOLE_UIMISSIONTIPSROWWIDGETCONTROLLER_SET_ISPLAYING_OFFSET UNITYSDK_OFFSET(0xAE083C0)
#define MOLEMOLE_UIMISSIONTIPSROWWIDGETCONTROLLER_SET_ISREQUESTCHANGETRACK_OFFSET UNITYSDK_OFFSET(0xAE08410)
#define MOLEMOLE_UIMISSIONTIPSROWWIDGETCONTROLLER_SET_QUESTINMENU_OFFSET UNITYSDK_OFFSET(0xAE0AEB0)
#define MOLEMOLE_UIMISSIONTIPSROWWIDGETCONTROLLER_SET__QUESTID_OFFSET UNITYSDK_OFFSET(0xAE06BE0)
#define MOLEMOLE_UIMISSIONTIPSROWWIDGETCONTROLLER_SHOWQUEST_OFFSET UNITYSDK_OFFSET(0xAE0BAF0)
#define MOLEMOLE_UIMISSIONTIPSROWWIDGETCONTROLLER_STARTPLAY_OFFSET UNITYSDK_OFFSET(0xAE0F720)
#define MOLEMOLE_UIMISSIONTIPSROWWIDGETCONTROLLER_STOPFADEOUT_OFFSET UNITYSDK_OFFSET(0xAE0DFC0)
#define MOLEMOLE_UIMISSIONTIPSROWWIDGETCONTROLLER_TRYTRIGGERBUTTON_OFFSET UNITYSDK_OFFSET(0xAE084C0)
#define MOLEMOLE_UIMISSIONTIPSROWWIDGETCONTROLLER_TRYTRIGGERINTERACTBUTTON_OFFSET UNITYSDK_OFFSET(0xAE08A50)
#define MOLEMOLE_UIMISSIONTIPSROWWIDGETCONTROLLER_TRYTRIGGEROPENMAPBUTTON_OFFSET UNITYSDK_OFFSET(0xAE08740)
#define MOLEMOLE_UIMISSIONTIPSROWWIDGETCONTROLLER_TRYTRIGGERRECOMMENDBUTTON_OFFSET UNITYSDK_OFFSET(0xAE08440)
#define MOLEMOLE_UIMISSIONTIPSROWWIDGETCONTROLLER_TRYTRIGGERTIPBUTTON_OFFSET UNITYSDK_OFFSET(0xAE087C0)
#define MOLEMOLE_UIMISSIONTIPSROWWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0xAE10BB0)
#define MOLEMOLE_UIMISSIONTIPSROWWIDGETCONTROLLER__ONCHALLENGECHANGED_B__6_0_OFFSET UNITYSDK_OFFSET(0xAE10D50)
#define MOLEMOLE_UIMISSIONTIPSROWWIDGETCONTROLLER__ONCHANGETRACK_B__122_0_OFFSET UNITYSDK_OFFSET(0xAE10E00)
#define MOLEMOLE_UIMISSIONTIPSROWWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0xAE11110)
#define MOLEMOLE_UIMISSIONTIPSROWWIDGETCONTROLLER___BASE_ONSCROLLITEMUPDATE_OFFSET UNITYSDK_OFFSET(0xAE11180)
#define MOLEMOLE_UIMISSIONTIPSROWWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0xAE11090)
#define MOLEMOLE_UIMISSIONTIPSROWWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0xAE11200)
#define MOLEMOLE_UIMISSIONTIPSROWWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0xAE11260)

namespace MoleMole
{
	inline static constexpr unsigned int UIMissionTipsRowWidgetController_TypeDefinitionIndex = 70849;

	class UIMissionTipsRowWidgetController : public ::MoleMole::ScrollViewItemWidgetController
	{
	public:
		::Class_1_380E15D819BCBADA* _groupChallengeConfig; // 0x2D0
		::System::UInt32 _currentGroupID; // 0x2D8
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::MoleMole::UIMissionTipsRowWidgetController_ChallengeCacheData*>* _challengeCache; // 0x2E0
		::Class_1_BEE9160742169A46* _uiCompleteAnimationCtrl; // 0x2E8
		::System::Boolean _IsModified_k__BackingField; // 0x2F0
		::System::Boolean _IsPlaying_k__BackingField; // 0x2F1
		::System::Boolean _IsDisappear_k__BackingField; // 0x2F2
		::System::Boolean _IsRequestChangeTrack_k__BackingField; // 0x2F3
		::System::Boolean _CanRemove_k__BackingField; // 0x2F4
		::Class_2_21A7ACA4473668F9_2* _view; // 0x2F8
		::UnityEngine::GameObject* _questIcon; // 0x300
		::System::String* _curAnimName; // 0x308
		::Class_1_3D70108AB8A5915A* _animResetHelperList; // 0x310
		::System::Collections::Generic::List_1<::DG::Tweening::Tweener*>* _tweenerList; // 0x318
		::System::Single _minHeight; // 0x320
		::System::Int32 _questIconIndex; // 0x324
		::MoleMole::UIMissionTipsRowWidgetController_ClickMode _clickMode; // 0x328
		::MoleMole::UIMissionTipsRowWidgetController_ClickMode _tipClickMode; // 0x32C
		::Enum_3_0ABEFAA659B6C774 _iconType; // 0x330
		::Enum_3_A41D6F485D525776 _tipType; // 0x334
		::System::Boolean _QuestInMenu_k__BackingField; // 0x338
		::System::Int32 __questId; // 0x33C
		::Class_3_966C17C4C42EA45B* _questInfo; // 0x340
		::System::Int32 _multiQuestCount; // 0x348

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMISSIONTIPSROWWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void RefreshChallengeID(::System::Int32 challengeId, ::System::UInt32 GroupId, ::System::Boolean force)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMISSIONTIPSROWWIDGETCONTROLLER_REFRESHCHALLENGEID_OFFSET))(this, challengeId, GroupId, force);
		}

		::System::Void ClearChallenge()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMISSIONTIPSROWWIDGETCONTROLLER_CLEARCHALLENGE_OFFSET))(this);
		}

		::System::Void OnChallengeChanged()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMISSIONTIPSROWWIDGETCONTROLLER_ONCHALLENGECHANGED_OFFSET))(this);
		}

		::System::Void OnBigSceneChallengeConditionChange(::System::EventArgs* args)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMISSIONTIPSROWWIDGETCONTROLLER_ONBIGSCENECHALLENGECONDITIONCHANGE_OFFSET))(this, args);
		}

		::System::Void ClearChallengeCache()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMISSIONTIPSROWWIDGETCONTROLLER_CLEARCHALLENGECACHE_OFFSET))(this);
		}

		::System::Void OnChallengeSubConditions(::System::Boolean firstUpdate)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMISSIONTIPSROWWIDGETCONTROLLER_ONCHALLENGESUBCONDITIONS_OFFSET))(this, firstUpdate);
		}

		::UnityEngine::UI::Extension::UILocalizationText* GetDetailByIndex(::System::UInt32 index)
		{
			return ((::UnityEngine::UI::Extension::UILocalizationText*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMISSIONTIPSROWWIDGETCONTROLLER_GETDETAILBYINDEX_OFFSET))(this, index);
		}

		::System::Void SetChallengeIconState()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMISSIONTIPSROWWIDGETCONTROLLER_SETCHALLENGEICONSTATE_OFFSET))(this);
		}

		::System::Void OnScrollItemUpdate(::System::Int32 index, ::System::Object* data, ::System::Boolean init)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMISSIONTIPSROWWIDGETCONTROLLER_ONSCROLLITEMUPDATE_OFFSET))(this, index, data, init);
		}

		::System::Void SetCompleteAnim(::System::Boolean isComplete)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMISSIONTIPSROWWIDGETCONTROLLER_SETCOMPLETEANIM_OFFSET))(this, isComplete);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMISSIONTIPSROWWIDGETCONTROLLER_RESET_OFFSET))(this);
		}

		::System::Boolean get_IsModified()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMISSIONTIPSROWWIDGETCONTROLLER_GET_ISMODIFIED_OFFSET))(this);
		}

		::System::Void set_IsModified(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMISSIONTIPSROWWIDGETCONTROLLER_SET_ISMODIFIED_OFFSET))(this, value);
		}

		::System::Boolean get_IsPlaying()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMISSIONTIPSROWWIDGETCONTROLLER_GET_ISPLAYING_OFFSET))(this);
		}

		::System::Void set_IsPlaying(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMISSIONTIPSROWWIDGETCONTROLLER_SET_ISPLAYING_OFFSET))(this, value);
		}

		::System::Boolean get_IsDisappear()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMISSIONTIPSROWWIDGETCONTROLLER_GET_ISDISAPPEAR_OFFSET))(this);
		}

		::System::Void set_IsDisappear(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMISSIONTIPSROWWIDGETCONTROLLER_SET_ISDISAPPEAR_OFFSET))(this, value);
		}

		::System::Int32 get_QuestId()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMISSIONTIPSROWWIDGETCONTROLLER_GET_QUESTID_OFFSET))(this);
		}

		::System::Boolean get_IsRequestChangeTrack()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMISSIONTIPSROWWIDGETCONTROLLER_GET_ISREQUESTCHANGETRACK_OFFSET))(this);
		}

		::System::Void set_IsRequestChangeTrack(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMISSIONTIPSROWWIDGETCONTROLLER_SET_ISREQUESTCHANGETRACK_OFFSET))(this, value);
		}

		::System::Boolean get_CanRemove()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMISSIONTIPSROWWIDGETCONTROLLER_GET_CANREMOVE_OFFSET))(this);
		}

		::System::Void set_CanRemove(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMISSIONTIPSROWWIDGETCONTROLLER_SET_CANREMOVE_OFFSET))(this, value);
		}

		::System::Boolean TryTriggerRecommendButton()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMISSIONTIPSROWWIDGETCONTROLLER_TRYTRIGGERRECOMMENDBUTTON_OFFSET))(this);
		}

		::System::Boolean TryTriggerOpenMapButton()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMISSIONTIPSROWWIDGETCONTROLLER_TRYTRIGGEROPENMAPBUTTON_OFFSET))(this);
		}

		::System::Boolean TryTriggerInteractButton()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMISSIONTIPSROWWIDGETCONTROLLER_TRYTRIGGERINTERACTBUTTON_OFFSET))(this);
		}

		::System::Void SetConsoleActive(::System::Boolean active, ::System::Boolean force)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMISSIONTIPSROWWIDGETCONTROLLER_SETCONSOLEACTIVE_OFFSET))(this, active, force);
		}

		::System::Boolean TryTriggerButton()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMISSIONTIPSROWWIDGETCONTROLLER_TRYTRIGGERBUTTON_OFFSET))(this);
		}

		::System::Boolean TryTriggerTipButton()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMISSIONTIPSROWWIDGETCONTROLLER_TRYTRIGGERTIPBUTTON_OFFSET))(this);
		}

		::System::Boolean GetIsInbattle()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMISSIONTIPSROWWIDGETCONTROLLER_GETISINBATTLE_OFFSET))(this);
		}

		::System::Void RefreshBattleState()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMISSIONTIPSROWWIDGETCONTROLLER_REFRESHBATTLESTATE_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMISSIONTIPSROWWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMISSIONTIPSROWWIDGETCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMISSIONTIPSROWWIDGETCONTROLLER_ONENABLE_OFFSET))(this);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMISSIONTIPSROWWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMISSIONTIPSROWWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Boolean MuteMenuBtnClick()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMISSIONTIPSROWWIDGETCONTROLLER_MUTEMENUBTNCLICK_OFFSET))(this);
		}

		::System::Boolean get_QuestInMenu()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMISSIONTIPSROWWIDGETCONTROLLER_GET_QUESTINMENU_OFFSET))(this);
		}

		::System::Void set_QuestInMenu(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMISSIONTIPSROWWIDGETCONTROLLER_SET_QUESTINMENU_OFFSET))(this, value);
		}

		::System::Int32 get__questID()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMISSIONTIPSROWWIDGETCONTROLLER_GET__QUESTID_OFFSET))(this);
		}

		::System::Void set__questID(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMISSIONTIPSROWWIDGETCONTROLLER_SET__QUESTID_OFFSET))(this, value);
		}

		::System::Int32 get_MultiQuestCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMISSIONTIPSROWWIDGETCONTROLLER_GET_MULTIQUESTCOUNT_OFFSET))(this);
		}

		::System::Void RefreshByQuestID(::System::Int32 questID, ::System::Boolean force)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMISSIONTIPSROWWIDGETCONTROLLER_REFRESHBYQUESTID_OFFSET))(this, questID, force);
		}

		::System::Void RefreshByText(::System::Func_1<::System::String*>* textFunc, ::Foundation::AssetPath iconPath)
		{
			return ((::System::Void(*)(::PVOID, ::System::Func_1<::System::String*>*, ::Foundation::AssetPath))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMISSIONTIPSROWWIDGETCONTROLLER_REFRESHBYTEXT_OFFSET))(this, textFunc, iconPath);
		}

		::System::Void RefreshText()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMISSIONTIPSROWWIDGETCONTROLLER_REFRESHTEXT_OFFSET))(this);
		}

		::System::Void RefreshByTextMap(::System::String* key, ::Foundation::AssetPath iconPath, ::System::String* subTextMapKey)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::Foundation::AssetPath, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMISSIONTIPSROWWIDGETCONTROLLER_REFRESHBYTEXTMAP_OFFSET))(this, key, iconPath, subTextMapKey);
		}

		::System::Void RefreshByTextMap_1(::System::String* key, ::Foundation::AssetPath iconPath, ::System::String* subTextMapKey, ::Enum_3_0ABEFAA659B6C774 overrideIconType)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::Foundation::AssetPath, ::System::String*, ::Enum_3_0ABEFAA659B6C774))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMISSIONTIPSROWWIDGETCONTROLLER_REFRESHBYTEXTMAP_1_OFFSET))(this, key, iconPath, subTextMapKey, overrideIconType);
		}

		::System::Void SetSkinByTextMap(::System::String* key, ::Foundation::AssetPath iconPath, ::System::String* subTextMapKey)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::Foundation::AssetPath, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMISSIONTIPSROWWIDGETCONTROLLER_SETSKINBYTEXTMAP_OFFSET))(this, key, iconPath, subTextMapKey);
		}

		::System::Void RefreshByTextMap_2(::System::String* key, ::Foundation::AssetPath iconPath, ::System::Collections::Generic::List_1<::System::String*>* subDetails)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::Foundation::AssetPath, ::System::Collections::Generic::List_1<::System::String*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMISSIONTIPSROWWIDGETCONTROLLER_REFRESHBYTEXTMAP_2_OFFSET))(this, key, iconPath, subDetails);
		}

		::System::Void SetQuestDescArgs(::Il2CppArray<::System::Object*>* args)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMISSIONTIPSROWWIDGETCONTROLLER_SETQUESTDESCARGS_OFFSET))(this, args);
		}

		::System::Void SetMultiQuestCount(::System::Int32 count)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMISSIONTIPSROWWIDGETCONTROLLER_SETMULTIQUESTCOUNT_OFFSET))(this, count);
		}

		::System::Void SetQuestID(::System::Int32 questID)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMISSIONTIPSROWWIDGETCONTROLLER_SETQUESTID_OFFSET))(this, questID);
		}

		::System::Void RefreshByTextMap_3(::System::String* key, ::System::Int32 questId)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMISSIONTIPSROWWIDGETCONTROLLER_REFRESHBYTEXTMAP_3_OFFSET))(this, key, questId);
		}

		::System::Void RefreshByText_1(::System::String* key, ::System::Int32 questId)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMISSIONTIPSROWWIDGETCONTROLLER_REFRESHBYTEXT_1_OFFSET))(this, key, questId);
		}

		::System::Void RefreshQuestDesc()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMISSIONTIPSROWWIDGETCONTROLLER_REFRESHQUESTDESC_OFFSET))(this);
		}

		::System::Void ClearQuest()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMISSIONTIPSROWWIDGETCONTROLLER_CLEARQUEST_OFFSET))(this);
		}

		::System::Void ShowQuest()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMISSIONTIPSROWWIDGETCONTROLLER_SHOWQUEST_OFFSET))(this);
		}

		static ::System::Void SetQuestTextFunc(::UnityEngine::UI::Extension::UILocalizationText* questDesc, ::Class_0_16E4307DCC419505_17* questCondition)
		{
			return ((::System::Void(*)(::UnityEngine::UI::Extension::UILocalizationText*, ::Class_0_16E4307DCC419505_17*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMISSIONTIPSROWWIDGETCONTROLLER_SETQUESTTEXTFUNC_OFFSET))(questDesc, questCondition);
		}

		static ::System::String* GetTheWorldQuestDesc(::Class_0_16E4307DCC419505_17* questCondition)
		{
			return ((::System::String*(*)(::Class_0_16E4307DCC419505_17*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMISSIONTIPSROWWIDGETCONTROLLER_GETTHEWORLDQUESTDESC_OFFSET))(questCondition);
		}

		static ::System::String* GetQuestDescriptionSuffix(::Class_0_16E4307DCC419505_17* questCondition)
		{
			return ((::System::String*(*)(::Class_0_16E4307DCC419505_17*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMISSIONTIPSROWWIDGETCONTROLLER_GETQUESTDESCRIPTIONSUFFIX_OFFSET))(questCondition);
		}

		::System::Void RefreshQuestIcon()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMISSIONTIPSROWWIDGETCONTROLLER_REFRESHQUESTICON_OFFSET))(this);
		}

		::System::Void SetQuestIconState()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMISSIONTIPSROWWIDGETCONTROLLER_SETQUESTICONSTATE_OFFSET))(this);
		}

		::System::Void OnQuestChanged()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMISSIONTIPSROWWIDGETCONTROLLER_ONQUESTCHANGED_OFFSET))(this);
		}

		::System::Void SampleFadeInAnimAt(::System::Boolean fromResume, ::System::Single normalizedTime)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMISSIONTIPSROWWIDGETCONTROLLER_SAMPLEFADEINANIMAT_OFFSET))(this, fromResume, normalizedTime);
		}

		::System::Void PlayFadeInAnim(::System::Boolean fromResume, ::System::Action* callback, ::System::Boolean cancelLayout)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Action*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMISSIONTIPSROWWIDGETCONTROLLER_PLAYFADEINANIM_OFFSET))(this, fromResume, callback, cancelLayout);
		}

		::System::Void PlayMissionIconFadeIn(::System::Action* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMISSIONTIPSROWWIDGETCONTROLLER_PLAYMISSIONICONFADEIN_OFFSET))(this, callback);
		}

		::System::Void PlayChangeTrack(::System::Action* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMISSIONTIPSROWWIDGETCONTROLLER_PLAYCHANGETRACK_OFFSET))(this, callback);
		}

		::System::Void StopFadeOut()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMISSIONTIPSROWWIDGETCONTROLLER_STOPFADEOUT_OFFSET))(this);
		}

		::System::Void PlayFadeOutAnim(::System::Boolean fromResume, ::System::Action* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMISSIONTIPSROWWIDGETCONTROLLER_PLAYFADEOUTANIM_OFFSET))(this, fromResume, callback);
		}

		::System::Void PlaySwitchOutAnim(::System::Boolean flipOut, ::System::Action* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMISSIONTIPSROWWIDGETCONTROLLER_PLAYSWITCHOUTANIM_OFFSET))(this, flipOut, callback);
		}

		::System::Void PlaySwitchInAnim(::System::Boolean sound)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMISSIONTIPSROWWIDGETCONTROLLER_PLAYSWITCHINANIM_OFFSET))(this, sound);
		}

		::System::Void Cancel()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMISSIONTIPSROWWIDGETCONTROLLER_CANCEL_OFFSET))(this);
		}

		::System::Void SetFinishFlipOutState(::System::Single normalizedTime)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMISSIONTIPSROWWIDGETCONTROLLER_SETFINISHFLIPOUTSTATE_OFFSET))(this, normalizedTime);
		}

		::System::Void PlayLayoutFadeIn(::System::Single height, ::System::Boolean isFromResume, ::System::Action* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMISSIONTIPSROWWIDGETCONTROLLER_PLAYLAYOUTFADEIN_OFFSET))(this, height, isFromResume, callback);
		}

		::System::Void PlayLayoutFadeout(::System::Action* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMISSIONTIPSROWWIDGETCONTROLLER_PLAYLAYOUTFADEOUT_OFFSET))(this, callback);
		}

		::System::Void CancelLayoutHeight()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMISSIONTIPSROWWIDGETCONTROLLER_CANCELLAYOUTHEIGHT_OFFSET))(this);
		}

		::System::Void ResumeLayoutHeight()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMISSIONTIPSROWWIDGETCONTROLLER_RESUMELAYOUTHEIGHT_OFFSET))(this);
		}

		::System::Void CancelPlay()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMISSIONTIPSROWWIDGETCONTROLLER_CANCELPLAY_OFFSET))(this);
		}

		::System::Void DisableRecommend()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMISSIONTIPSROWWIDGETCONTROLLER_DISABLERECOMMEND_OFFSET))(this);
		}

		::System::Void KillAllCoroutines()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMISSIONTIPSROWWIDGETCONTROLLER_KILLALLCOROUTINES_OFFSET))(this);
		}

		::System::Void PlayChangeTrackTipsFadeOut(::System::Action* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMISSIONTIPSROWWIDGETCONTROLLER_PLAYCHANGETRACKTIPSFADEOUT_OFFSET))(this, callback);
		}

		::System::Void StartPlay(::System::Int32 ms, ::System::Action* nextPlay)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Action*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMISSIONTIPSROWWIDGETCONTROLLER_STARTPLAY_OFFSET))(this, ms, nextPlay);
		}

		::System::Void EndPlay()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMISSIONTIPSROWWIDGETCONTROLLER_ENDPLAY_OFFSET))(this);
		}

		::System::Void OnPause()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMISSIONTIPSROWWIDGETCONTROLLER_ONPAUSE_OFFSET))(this);
		}

		::System::Void SetMissionConsoleBtnState()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMISSIONTIPSROWWIDGETCONTROLLER_SETMISSIONCONSOLEBTNSTATE_OFFSET))(this);
		}

		::System::Void SetClickMode()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMISSIONTIPSROWWIDGETCONTROLLER_SETCLICKMODE_OFFSET))(this);
		}

		::System::Void ResetAnim()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMISSIONTIPSROWWIDGETCONTROLLER_RESETANIM_OFFSET))(this);
		}

		::System::Void PlayWithCallback(::System::String* animName, ::System::Action* callback, ::System::Boolean needReset, ::System::Boolean cancelLayout)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMISSIONTIPSROWWIDGETCONTROLLER_PLAYWITHCALLBACK_OFFSET))(this, animName, callback, needReset, cancelLayout);
		}

		::System::Void OnChangeTrack()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMISSIONTIPSROWWIDGETCONTROLLER_ONCHANGETRACK_OFFSET))(this);
		}

		::System::Void OnClickGuild()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMISSIONTIPSROWWIDGETCONTROLLER_ONCLICKGUILD_OFFSET))(this);
		}

		::System::Void OnClickGuildOpenMap()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMISSIONTIPSROWWIDGETCONTROLLER_ONCLICKGUILDOPENMAP_OFFSET))(this);
		}

		::System::Void OnClickOpenKnot()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMISSIONTIPSROWWIDGETCONTROLLER_ONCLICKOPENKNOT_OFFSET))(this);
		}

		::System::Void OnQuestChangeHandle(::System::EventArgs* args)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMISSIONTIPSROWWIDGETCONTROLLER_ONQUESTCHANGEHANDLE_OFFSET))(this, args);
		}

		::System::String* _OnChallengeChanged_b__6_0()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMISSIONTIPSROWWIDGETCONTROLLER__ONCHALLENGECHANGED_B__6_0_OFFSET))(this);
		}

		::System::Void _OnChangeTrack_b__122_0(::System::Boolean ret)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMISSIONTIPSROWWIDGETCONTROLLER__ONCHANGETRACK_B__122_0_OFFSET))(this, ret);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMISSIONTIPSROWWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMISSIONTIPSROWWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnScrollItemUpdate(::System::Int32 P0, ::System::Object* P1, ::System::Boolean P2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMISSIONTIPSROWWIDGETCONTROLLER___BASE_ONSCROLLITEMUPDATE_OFFSET))(this, P0, P1, P2);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMISSIONTIPSROWWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMISSIONTIPSROWWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
