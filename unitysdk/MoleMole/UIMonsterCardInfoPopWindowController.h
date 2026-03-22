#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_3EDF246633A325B0.h"
#include "unitysdk/Enum_3_8E90989A26BC6232.h"
#include "unitysdk/MoleMole/Config/DamageElementType.h"
#include "unitysdk/MoleMole/UIWindowController.h"

class Class_1_5DA2E7556103D5A3_349;
class Class_2_79F6D62CE30E3F8E_8;
class Class_2_84CEDCEF739506C1_2;
namespace MoleMole { class MonoGamepadNavigatableList; }
namespace MoleMole { class ScrollViewItemWidgetController; }
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace MoleMole { class UIHadalZone_Common_HadalRoomContext; }
namespace MoleMole { class UIHadalZone_MonsterCardInfo_Row_V2_WidgetController; }
namespace MoleMole { class UIMonsterCardInfoPopWindowController_MonsterInfoExt; }
namespace System { class String; }
namespace System { template <typename T> class Func_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }

#define MOLEMOLE_UIMONSTERCARDINFOPOPWINDOWCONTROLLER_FILLQUESTIDTOEXTINFO_OFFSET UNITYSDK_OFFSET(0xC1446C0)
#define MOLEMOLE_UIMONSTERCARDINFOPOPWINDOWCONTROLLER_GETBOSSLEVEL_OFFSET UNITYSDK_OFFSET(0xC145180)
#define MOLEMOLE_UIMONSTERCARDINFOPOPWINDOWCONTROLLER_GETDESCLABELTEXT_OFFSET UNITYSDK_OFFSET(0xC145A10)
#define MOLEMOLE_UIMONSTERCARDINFOPOPWINDOWCONTROLLER_GET_EMPTY_OFFSET UNITYSDK_OFFSET(0xC1439E0)
#define MOLEMOLE_UIMONSTERCARDINFOPOPWINDOWCONTROLLER_GET_HOTSWITCHROOTLAYERSTATE_OFFSET UNITYSDK_OFFSET(0xC142CB0)
#define MOLEMOLE_UIMONSTERCARDINFOPOPWINDOWCONTROLLER_GET_NEEDSHOWCAMP_OFFSET UNITYSDK_OFFSET(0xC143C70)
#define MOLEMOLE_UIMONSTERCARDINFOPOPWINDOWCONTROLLER_GET_NEEDSHOWMONSTERTYPE_OFFSET UNITYSDK_OFFSET(0xC143C80)
#define MOLEMOLE_UIMONSTERCARDINFOPOPWINDOWCONTROLLER_GET_NEEDSHOWTARGET_OFFSET UNITYSDK_OFFSET(0xC143A60)
#define MOLEMOLE_UIMONSTERCARDINFOPOPWINDOWCONTROLLER_GET_WAVECOUNT_OFFSET UNITYSDK_OFFSET(0xC144520)
#define MOLEMOLE_UIMONSTERCARDINFOPOPWINDOWCONTROLLER_GET_WINDOWTYPE_OFFSET UNITYSDK_OFFSET(0xC142CC0)
#define MOLEMOLE_UIMONSTERCARDINFOPOPWINDOWCONTROLLER_ISMONSTERLOCKED_OFFSET UNITYSDK_OFFSET(0xC143D00)
#define MOLEMOLE_UIMONSTERCARDINFOPOPWINDOWCONTROLLER_ISMONSTERSHOWDESC_OFFSET UNITYSDK_OFFSET(0xC143A80)
#define MOLEMOLE_UIMONSTERCARDINFOPOPWINDOWCONTROLLER_ONCLICKTAB_OFFSET UNITYSDK_OFFSET(0xC145630)
#define MOLEMOLE_UIMONSTERCARDINFOPOPWINDOWCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0xC1438B0)
#define MOLEMOLE_UIMONSTERCARDINFOPOPWINDOWCONTROLLER_ONSCROLLVIEWSELECTHANDLE_OFFSET UNITYSDK_OFFSET(0xC144840)
#define MOLEMOLE_UIMONSTERCARDINFOPOPWINDOWCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0xC143950)
#define MOLEMOLE_UIMONSTERCARDINFOPOPWINDOWCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0xC142CD0)
#define MOLEMOLE_UIMONSTERCARDINFOPOPWINDOWCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0xC142E10)
#define MOLEMOLE_UIMONSTERCARDINFOPOPWINDOWCONTROLLER_OUTPUTDEBUGSTRING_OFFSET UNITYSDK_OFFSET(0xC143C90)
#define MOLEMOLE_UIMONSTERCARDINFOPOPWINDOWCONTROLLER_REFRESHEMPTYSTATE_OFFSET UNITYSDK_OFFSET(0xC144530)
#define MOLEMOLE_UIMONSTERCARDINFOPOPWINDOWCONTROLLER_REFRESHROOTSSTATE_OFFSET UNITYSDK_OFFSET(0xC143660)
#define MOLEMOLE_UIMONSTERCARDINFOPOPWINDOWCONTROLLER_REFRESHWAVECOUNT_OFFSET UNITYSDK_OFFSET(0xC1443B0)
#define MOLEMOLE_UIMONSTERCARDINFOPOPWINDOWCONTROLLER_SETMONSTERDESC_OFFSET UNITYSDK_OFFSET(0xC144120)
#define MOLEMOLE_UIMONSTERCARDINFOPOPWINDOWCONTROLLER_SETMONSTERLOCKED_OFFSET UNITYSDK_OFFSET(0xC143EE0)
#define MOLEMOLE_UIMONSTERCARDINFOPOPWINDOWCONTROLLER_SETMONSTERPLAYDESCLABEL_OFFSET UNITYSDK_OFFSET(0xC1451E0)
#define MOLEMOLE_UIMONSTERCARDINFOPOPWINDOWCONTROLLER_UPDATEBOSSCFGLIST_OFFSET UNITYSDK_OFFSET(0xC144350)
#define MOLEMOLE_UIMONSTERCARDINFOPOPWINDOWCONTROLLER_UPDATECAMP_OFFSET UNITYSDK_OFFSET(0xC146250)
#define MOLEMOLE_UIMONSTERCARDINFOPOPWINDOWCONTROLLER_UPDATETARGETPOSITION_OFFSET UNITYSDK_OFFSET(0xC1463A0)
#define MOLEMOLE_UIMONSTERCARDINFOPOPWINDOWCONTROLLER_UPDATETYPE_OFFSET UNITYSDK_OFFSET(0xC146300)
#define MOLEMOLE_UIMONSTERCARDINFOPOPWINDOWCONTROLLER__BINDBTNS_OFFSET UNITYSDK_OFFSET(0xC142F50)
#define MOLEMOLE_UIMONSTERCARDINFOPOPWINDOWCONTROLLER__CLEARPATCH_OFFSET UNITYSDK_OFFSET(0xC145B80)
#define MOLEMOLE_UIMONSTERCARDINFOPOPWINDOWCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0xC146B70)
#define MOLEMOLE_UIMONSTERCARDINFOPOPWINDOWCONTROLLER__GETONEWEAK_OFFSET UNITYSDK_OFFSET(0xC146450)
#define MOLEMOLE_UIMONSTERCARDINFOPOPWINDOWCONTROLLER__ONUIINIT_B__7_0_OFFSET UNITYSDK_OFFSET(0xC146C60)
#define MOLEMOLE_UIMONSTERCARDINFOPOPWINDOWCONTROLLER__UPDATEBOSSCARDS_OFFSET UNITYSDK_OFFSET(0xC1430C0)
#define MOLEMOLE_UIMONSTERCARDINFOPOPWINDOWCONTROLLER__UPDATEELEMENTPROP_OFFSET UNITYSDK_OFFSET(0xC145CD0)
#define MOLEMOLE_UIMONSTERCARDINFOPOPWINDOWCONTROLLER__UPDATEELEPROPTEXT_OFFSET UNITYSDK_OFFSET(0xC146610)
#define MOLEMOLE_UIMONSTERCARDINFOPOPWINDOWCONTROLLER__UPDATESELECTCARDINFO_OFFSET UNITYSDK_OFFSET(0xC144B70)
#define MOLEMOLE_UIMONSTERCARDINFOPOPWINDOWCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0xC146CF0)
#define MOLEMOLE_UIMONSTERCARDINFOPOPWINDOWCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0xC146D60)
#define MOLEMOLE_UIMONSTERCARDINFOPOPWINDOWCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0xC146D70)
#define MOLEMOLE_UIMONSTERCARDINFOPOPWINDOWCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0xC146D80)
#define MOLEMOLE_UIMONSTERCARDINFOPOPWINDOWCONTROLLER___BINDBTNS_B__11_0_OFFSET UNITYSDK_OFFSET(0xC146CE0)

namespace MoleMole
{
	inline static constexpr unsigned int UIMonsterCardInfoPopWindowController_TypeDefinitionIndex = 36905;

	class UIMonsterCardInfoPopWindowController : public ::MoleMole::UIWindowController
	{
	public:
		// static const ::System::String* CARD_WEAK_ICON_PATTERN; // 0x0
		// static const ::System::String* CARD_WEAK_TEXT_PATTERN; // 0x0
		// static const ::System::String* CARD_KEY_TEXT_PATTERN; // 0x0
		::Class_2_79F6D62CE30E3F8E_8* _view; // 0x2F8
		::MoleMole::UIHadalZone_Common_HadalRoomContext* _roomCtx; // 0x300
		::System::Collections::Generic::List_1<::Class_2_84CEDCEF739506C1_2*>* _monsterConfigList; // 0x308
		::System::Collections::Generic::List_1<::System::String*>* m_targetPositionList; // 0x310
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::MoleMole::UIMonsterCardInfoPopWindowController_MonsterInfoExt*>* m_monsterExtInfoDict; // 0x318
		::System::Int32 m_questID; // 0x320
		::MoleMole::MonoGamepadNavigatableList* m_naviList; // 0x328
		::System::Int32 m_curMonsterID; // 0x330
		::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* _cacheEleList; // 0x338
		::System::Int32 _curEleIndex; // 0x340

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMONSTERCARDINFOPOPWINDOWCONTROLLER__CTOR_OFFSET))(this);
		}

		::Enum_3_8E90989A26BC6232 get_HotSwitchRootLayerState()
		{
			return ((::Enum_3_8E90989A26BC6232(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMONSTERCARDINFOPOPWINDOWCONTROLLER_GET_HOTSWITCHROOTLAYERSTATE_OFFSET))(this);
		}

		::Enum_3_3EDF246633A325B0 get_windowType()
		{
			return ((::Enum_3_3EDF246633A325B0(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMONSTERCARDINFOPOPWINDOWCONTROLLER_GET_WINDOWTYPE_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMONSTERCARDINFOPOPWINDOWCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMONSTERCARDINFOPOPWINDOWCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMONSTERCARDINFOPOPWINDOWCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMONSTERCARDINFOPOPWINDOWCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void _BindBtns()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMONSTERCARDINFOPOPWINDOWCONTROLLER__BINDBTNS_OFFSET))(this);
		}

		::System::Void RefreshRootsState()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMONSTERCARDINFOPOPWINDOWCONTROLLER_REFRESHROOTSSTATE_OFFSET))(this);
		}

		::System::Boolean get_NeedShowTarget()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMONSTERCARDINFOPOPWINDOWCONTROLLER_GET_NEEDSHOWTARGET_OFFSET))(this);
		}

		::System::Boolean get_NeedShowCamp()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMONSTERCARDINFOPOPWINDOWCONTROLLER_GET_NEEDSHOWCAMP_OFFSET))(this);
		}

		::System::Boolean get_NeedShowMonsterType()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMONSTERCARDINFOPOPWINDOWCONTROLLER_GET_NEEDSHOWMONSTERTYPE_OFFSET))(this);
		}

		::System::Void OutputDebugString(::System::String* prefix)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMONSTERCARDINFOPOPWINDOWCONTROLLER_OUTPUTDEBUGSTRING_OFFSET))(this, prefix);
		}

		::System::Boolean IsMonsterLocked(::System::Int32 monsterCardID)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMONSTERCARDINFOPOPWINDOWCONTROLLER_ISMONSTERLOCKED_OFFSET))(this, monsterCardID);
		}

		::System::Boolean IsMonsterShowDesc(::System::Int32 monsterID, ::System::String*& desc)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::String*&))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMONSTERCARDINFOPOPWINDOWCONTROLLER_ISMONSTERSHOWDESC_OFFSET))(this, monsterID, desc);
		}

		::System::Void SetMonsterLocked(::System::Int32 monsterID, ::System::Boolean isLocked)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMONSTERCARDINFOPOPWINDOWCONTROLLER_SETMONSTERLOCKED_OFFSET))(this, monsterID, isLocked);
		}

		::System::Void SetMonsterDesc(::System::Int32 monsterID, ::System::String* desc)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMONSTERCARDINFOPOPWINDOWCONTROLLER_SETMONSTERDESC_OFFSET))(this, monsterID, desc);
		}

		::System::Void UpdateBossCfgList()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMONSTERCARDINFOPOPWINDOWCONTROLLER_UPDATEBOSSCFGLIST_OFFSET))(this);
		}

		::System::Void RefreshWaveCount()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMONSTERCARDINFOPOPWINDOWCONTROLLER_REFRESHWAVECOUNT_OFFSET))(this);
		}

		::System::Int32 get_WaveCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMONSTERCARDINFOPOPWINDOWCONTROLLER_GET_WAVECOUNT_OFFSET))(this);
		}

		::System::Void _UpdateBossCards()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMONSTERCARDINFOPOPWINDOWCONTROLLER__UPDATEBOSSCARDS_OFFSET))(this);
		}

		::System::Void OnScrollViewSelectHandle(::System::Int32 index)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMONSTERCARDINFOPOPWINDOWCONTROLLER_ONSCROLLVIEWSELECTHANDLE_OFFSET))(this, index);
		}

		::System::Void FillQuestIDToExtInfo()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMONSTERCARDINFOPOPWINDOWCONTROLLER_FILLQUESTIDTOEXTINFO_OFFSET))(this);
		}

		::System::Boolean get_Empty()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMONSTERCARDINFOPOPWINDOWCONTROLLER_GET_EMPTY_OFFSET))(this);
		}

		::System::Void RefreshEmptyState()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMONSTERCARDINFOPOPWINDOWCONTROLLER_REFRESHEMPTYSTATE_OFFSET))(this);
		}

		::System::Int32 GetBossLevel()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMONSTERCARDINFOPOPWINDOWCONTROLLER_GETBOSSLEVEL_OFFSET))(this);
		}

		::System::Void SetMonsterPlayDescLabel(::System::String* key)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMONSTERCARDINFOPOPWINDOWCONTROLLER_SETMONSTERPLAYDESCLABEL_OFFSET))(this, key);
		}

		::System::String* GetDescLabelText(::Class_1_5DA2E7556103D5A3_349* cardCfg, ::System::Boolean isLocked)
		{
			return ((::System::String*(*)(::PVOID, ::Class_1_5DA2E7556103D5A3_349*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMONSTERCARDINFOPOPWINDOWCONTROLLER_GETDESCLABELTEXT_OFFSET))(this, cardCfg, isLocked);
		}

		::System::Void _UpdateSelectCardInfo(::MoleMole::UIHadalZone_MonsterCardInfo_Row_V2_WidgetController* item)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIHadalZone_MonsterCardInfo_Row_V2_WidgetController*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMONSTERCARDINFOPOPWINDOWCONTROLLER__UPDATESELECTCARDINFO_OFFSET))(this, item);
		}

		::System::Void UpdateCamp(::Class_1_5DA2E7556103D5A3_349* cfg)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_5DA2E7556103D5A3_349*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMONSTERCARDINFOPOPWINDOWCONTROLLER_UPDATECAMP_OFFSET))(this, cfg);
		}

		::System::Void UpdateType(::Class_1_5DA2E7556103D5A3_349* cfg)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_5DA2E7556103D5A3_349*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMONSTERCARDINFOPOPWINDOWCONTROLLER_UPDATETYPE_OFFSET))(this, cfg);
		}

		::System::Void UpdateTargetPosition(::System::String* descKey)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMONSTERCARDINFOPOPWINDOWCONTROLLER_UPDATETARGETPOSITION_OFFSET))(this, descKey);
		}

		::System::Void _ClearPatch()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMONSTERCARDINFOPOPWINDOWCONTROLLER__CLEARPATCH_OFFSET))(this);
		}

		::System::Void _UpdateElementProp(::System::Collections::Generic::List_1<::MoleMole::Config::DamageElementType>* eleIds, ::System::Boolean isWeak, ::System::Boolean needEmpty)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::MoleMole::Config::DamageElementType>*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMONSTERCARDINFOPOPWINDOWCONTROLLER__UPDATEELEMENTPROP_OFFSET))(this, eleIds, isWeak, needEmpty);
		}

		::System::Void _UpdateElePropText(::MoleMole::Config::DamageElementType eleID, ::System::Boolean isWeak)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::DamageElementType, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMONSTERCARDINFOPOPWINDOWCONTROLLER__UPDATEELEPROPTEXT_OFFSET))(this, eleID, isWeak);
		}

		::UnityEngine::GameObject* _GetOneWeak()
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMONSTERCARDINFOPOPWINDOWCONTROLLER__GETONEWEAK_OFFSET))(this);
		}

		::System::Void OnClickTab(::System::Int32 index)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMONSTERCARDINFOPOPWINDOWCONTROLLER_ONCLICKTAB_OFFSET))(this, index);
		}

		::MoleMole::ScrollViewItemWidgetController* _OnUIInit_b__7_0(::System::Func_1<::MoleMole::UIControlReference*>* reference)
		{
			return ((::MoleMole::ScrollViewItemWidgetController*(*)(::PVOID, ::System::Func_1<::MoleMole::UIControlReference*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMONSTERCARDINFOPOPWINDOWCONTROLLER__ONUIINIT_B__7_0_OFFSET))(this, reference);
		}

		::System::Void __BindBtns_b__11_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMONSTERCARDINFOPOPWINDOWCONTROLLER___BINDBTNS_B__11_0_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMONSTERCARDINFOPOPWINDOWCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMONSTERCARDINFOPOPWINDOWCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMONSTERCARDINFOPOPWINDOWCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMONSTERCARDINFOPOPWINDOWCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
