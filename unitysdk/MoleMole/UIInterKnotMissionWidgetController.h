#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_54D6B0A8C18161F6.h"
#include "unitysdk/MoleMole/UIInterKnotV3PageContext_MissionFocusItemStyle.h"
#include "unitysdk/MoleMole/UIWidgetController.h"
#include "unitysdk/System/TimeSpan.h"

class Class_1_2181504E881DDEE4;
class Class_1_A5FC45CC23522FB5;
class Class_1_D15EABFC012D3014;
class Class_2_208CC9941471731A_875;
class Class_2_EA1353AD6403670A;
namespace MoleMole { class ScrollViewItemWidgetController; }
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace MoleMole { class UIGeneralToggleWidgetController; }
namespace MoleMole { class UIInterKnotNewsTaskRowWidgetController; }
namespace MoleMole { class UIInterKnotPageConfig; }
namespace MoleMole { class UIInterKnotTrackBtnWidgetController; }
namespace System { class EventArgs; }
namespace System { class String; }
namespace System { template <typename T> class Func_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UIINTERKNOTMISSIONWIDGETCONTROLLER_CHECKCANTOGGLEHANDLE_OFFSET UNITYSDK_OFFSET(0x8A58BC0)
#define MOLEMOLE_UIINTERKNOTMISSIONWIDGETCONTROLLER_CLEARLASTTABMANUALNEW_OFFSET UNITYSDK_OFFSET(0x8A58460)
#define MOLEMOLE_UIINTERKNOTMISSIONWIDGETCONTROLLER_CLEARMANUALNEWS_OFFSET UNITYSDK_OFFSET(0x8A5A490)
#define MOLEMOLE_UIINTERKNOTMISSIONWIDGETCONTROLLER_GETCANENTERWORLDSTATE_OFFSET UNITYSDK_OFFSET(0x8A5C090)
#define MOLEMOLE_UIINTERKNOTMISSIONWIDGETCONTROLLER_GETMAINMANUALBYSEASONID_OFFSET UNITYSDK_OFFSET(0x8A5CE60)
#define MOLEMOLE_UIINTERKNOTMISSIONWIDGETCONTROLLER_GETMANUALCOMPARE_OFFSET UNITYSDK_OFFSET(0x8A5D590)
#define MOLEMOLE_UIINTERKNOTMISSIONWIDGETCONTROLLER_GETQUESTDESCPREFIX_OFFSET UNITYSDK_OFFSET(0x8A5E090)
#define MOLEMOLE_UIINTERKNOTMISSIONWIDGETCONTROLLER_GET_CONFIG_OFFSET UNITYSDK_OFFSET(0x8A57680)
#define MOLEMOLE_UIINTERKNOTMISSIONWIDGETCONTROLLER_HASMAINQUEST_OFFSET UNITYSDK_OFFSET(0x8A5CD50)
#define MOLEMOLE_UIINTERKNOTMISSIONWIDGETCONTROLLER_HASTRACKQUEST_OFFSET UNITYSDK_OFFSET(0x8A5C860)
#define MOLEMOLE_UIINTERKNOTMISSIONWIDGETCONTROLLER_INITMISSION_OFFSET UNITYSDK_OFFSET(0x8A599F0)
#define MOLEMOLE_UIINTERKNOTMISSIONWIDGETCONTROLLER_ISTRACKINGPERSONALQUEST_OFFSET UNITYSDK_OFFSET(0x8A606E0)
#define MOLEMOLE_UIINTERKNOTMISSIONWIDGETCONTROLLER_ONCLICLGROUPTAB_OFFSET UNITYSDK_OFFSET(0x8A59970)
#define MOLEMOLE_UIINTERKNOTMISSIONWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x8A58CD0)
#define MOLEMOLE_UIINTERKNOTMISSIONWIDGETCONTROLLER_ONCREATMISSIONITEM_OFFSET UNITYSDK_OFFSET(0x8A5A3A0)
#define MOLEMOLE_UIINTERKNOTMISSIONWIDGETCONTROLLER_ONGENERALTOGGLEHANDLE_OFFSET UNITYSDK_OFFSET(0x8A5A240)
#define MOLEMOLE_UIINTERKNOTMISSIONWIDGETCONTROLLER_ONHIDE_OFFSET UNITYSDK_OFFSET(0x8A58390)
#define MOLEMOLE_UIINTERKNOTMISSIONWIDGETCONTROLLER_ONLAYOUTPLATFORMCHANGED_OFFSET UNITYSDK_OFFSET(0x8A60740)
#define MOLEMOLE_UIINTERKNOTMISSIONWIDGETCONTROLLER_ONMISSIONITEMCLICKHANDLE_OFFSET UNITYSDK_OFFSET(0x8A58D70)
#define MOLEMOLE_UIINTERKNOTMISSIONWIDGETCONTROLLER_ONQUESTTRACKUPDATE_OFFSET UNITYSDK_OFFSET(0x8A57ED0)
#define MOLEMOLE_UIINTERKNOTMISSIONWIDGETCONTROLLER_ONSHOW_OFFSET UNITYSDK_OFFSET(0x8A58990)
#define MOLEMOLE_UIINTERKNOTMISSIONWIDGETCONTROLLER_ONTRACKBTNCLICKHANDLE_OFFSET UNITYSDK_OFFSET(0x8A5ACD0)
#define MOLEMOLE_UIINTERKNOTMISSIONWIDGETCONTROLLER_ONTRANSBTNCLICKHANDLE_OFFSET UNITYSDK_OFFSET(0x8A5C250)
#define MOLEMOLE_UIINTERKNOTMISSIONWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x8A608A0)
#define MOLEMOLE_UIINTERKNOTMISSIONWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x8A576A0)
#define MOLEMOLE_UIINTERKNOTMISSIONWIDGETCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x8A58810)
#define MOLEMOLE_UIINTERKNOTMISSIONWIDGETCONTROLLER_OPENMAP_OFFSET UNITYSDK_OFFSET(0x8A5C6F0)
#define MOLEMOLE_UIINTERKNOTMISSIONWIDGETCONTROLLER_REFRESHACTIVITYTIMER_OFFSET UNITYSDK_OFFSET(0x8A5E4E0)
#define MOLEMOLE_UIINTERKNOTMISSIONWIDGETCONTROLLER_REFRESHMISSIONDETAILLIST_OFFSET UNITYSDK_OFFSET(0x8A5D800)
#define MOLEMOLE_UIINTERKNOTMISSIONWIDGETCONTROLLER_REFRESHMISSIONIMAGE_OFFSET UNITYSDK_OFFSET(0x8A5F160)
#define MOLEMOLE_UIINTERKNOTMISSIONWIDGETCONTROLLER_REFRESHMISSIONREWARDLIST_OFFSET UNITYSDK_OFFSET(0x8A5EBC0)
#define MOLEMOLE_UIINTERKNOTMISSIONWIDGETCONTROLLER_REFRESHMONSTERLEVEL_OFFSET UNITYSDK_OFFSET(0x8A60190)
#define MOLEMOLE_UIINTERKNOTMISSIONWIDGETCONTROLLER_REFRESHTRACKTIP_OFFSET UNITYSDK_OFFSET(0x8A5F7C0)
#define MOLEMOLE_UIINTERKNOTMISSIONWIDGETCONTROLLER_SELECTQUEST_OFFSET UNITYSDK_OFFSET(0x8A5D0D0)
#define MOLEMOLE_UIINTERKNOTMISSIONWIDGETCONTROLLER_SET_CONFIG_OFFSET UNITYSDK_OFFSET(0x8A57690)
#define MOLEMOLE_UIINTERKNOTMISSIONWIDGETCONTROLLER_UPDATEMISSIONTRACK_OFFSET UNITYSDK_OFFSET(0x8A57F40)
#define MOLEMOLE_UIINTERKNOTMISSIONWIDGETCONTROLLER_UPDATESELECTEDMISSION_OFFSET UNITYSDK_OFFSET(0x8A590A0)
#define MOLEMOLE_UIINTERKNOTMISSIONWIDGETCONTROLLER__CCTOR_OFFSET UNITYSDK_OFFSET(0x8A60B70)
#define MOLEMOLE_UIINTERKNOTMISSIONWIDGETCONTROLLER__CHECKCANTOGGLEHANDLE_B__25_0_OFFSET UNITYSDK_OFFSET(0x8A60D90)
#define MOLEMOLE_UIINTERKNOTMISSIONWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x8A609F0)
#define MOLEMOLE_UIINTERKNOTMISSIONWIDGETCONTROLLER__INITMISSION_B__41_0_OFFSET UNITYSDK_OFFSET(0x8A60E30)
#define MOLEMOLE_UIINTERKNOTMISSIONWIDGETCONTROLLER__REFRESHACTIVITYTIMER_G__GETTIMESPANFROMTIMESTRING_49_0_OFFSET UNITYSDK_OFFSET(0x8A605A0)
#define MOLEMOLE_UIINTERKNOTMISSIONWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x8A60F10)
#define MOLEMOLE_UIINTERKNOTMISSIONWIDGETCONTROLLER___BASE_ONHIDE_OFFSET UNITYSDK_OFFSET(0x8A60F80)
#define MOLEMOLE_UIINTERKNOTMISSIONWIDGETCONTROLLER___BASE_ONLAYOUTPLATFORMCHANGED_OFFSET UNITYSDK_OFFSET(0x8A60FE0)
#define MOLEMOLE_UIINTERKNOTMISSIONWIDGETCONTROLLER___BASE_ONSHOW_OFFSET UNITYSDK_OFFSET(0x8A61040)
#define MOLEMOLE_UIINTERKNOTMISSIONWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x8A610B0)
#define MOLEMOLE_UIINTERKNOTMISSIONWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x8A61130)
#define MOLEMOLE_UIINTERKNOTMISSIONWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x8A61190)

namespace MoleMole
{
	inline static constexpr unsigned int UIInterKnotMissionWidgetController_TypeDefinitionIndex = 39919;

	class UIInterKnotMissionWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		static ::System::Collections::Generic::List_1<::System::String*>** StaticGet_specialPics()
		{
			return (::System::Collections::Generic::List_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(UIInterKnotMissionWidgetController_TypeDefinitionIndex)->GetStaticField(0x34FE0);
		}
		static ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::String*>** StaticGet_ConditionKeyMap()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(UIInterKnotMissionWidgetController_TypeDefinitionIndex)->GetStaticField(0x34FE8);
		}
		::Class_2_EA1353AD6403670A* _view; // 0x2A0
		::MoleMole::UIInterKnotTrackBtnWidgetController* _trackBtnWidget; // 0x2A8
		::MoleMole::UIInterKnotPageConfig* _Config_k__BackingField; // 0x2B0
		::System::Collections::Generic::List_1<::MoleMole::UIWidgetController*>* itemList; // 0x2B8
		::MoleMole::UIInterKnotV3PageContext_MissionFocusItemStyle _focusItemStyle; // 0x2C0
		::System::Collections::Generic::List_1<::System::Int32>* specialQuestList; // 0x2D0
		::System::Collections::Generic::List_1<::MoleMole::UIInterKnotNewsTaskRowWidgetController*>* taskRowCurrentList; // 0x2D8
		::System::Collections::Generic::List_1<::Class_2_208CC9941471731A_875*>* sortTabList; // 0x2E0
		::Class_1_D15EABFC012D3014* _postProxy; // 0x2E8
		::Enum_3_54D6B0A8C18161F6 _lastGroupType; // 0x2F0
		::System::Collections::Generic::List_1<::Class_1_A5FC45CC23522FB5*>* _showMissionList; // 0x2F8
		::MoleMole::UIGeneralToggleWidgetController* _generalToggle; // 0x300
		::System::Int32 _selectTab; // 0x308
		::System::Int32 _defaultSelectQuestID; // 0x30C
		::System::Int32 _selectIndex; // 0x310
		::System::Int32 _selectQuestID; // 0x314
		::System::Boolean _isRepeatClick; // 0x318
		::System::Collections::Generic::List_1<::Class_1_2181504E881DDEE4*>* manualNewList; // 0x320
		::System::Collections::Generic::List_1<::Class_1_2181504E881DDEE4*>* manualList; // 0x328
		::Enum_3_54D6B0A8C18161F6 lastType; // 0x330
		::System::Collections::Generic::List_1<::System::UInt32>* times; // 0x338

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINTERKNOTMISSIONWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIINTERKNOTMISSIONWIDGETCONTROLLER__CCTOR_OFFSET))();
		}

		::MoleMole::UIInterKnotPageConfig* get_Config()
		{
			return ((::MoleMole::UIInterKnotPageConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINTERKNOTMISSIONWIDGETCONTROLLER_GET_CONFIG_OFFSET))(this);
		}

		::System::Void set_Config(::MoleMole::UIInterKnotPageConfig* value)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIInterKnotPageConfig*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINTERKNOTMISSIONWIDGETCONTROLLER_SET_CONFIG_OFFSET))(this, value);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINTERKNOTMISSIONWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnQuestTrackUpdate(::System::EventArgs* obj)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINTERKNOTMISSIONWIDGETCONTROLLER_ONQUESTTRACKUPDATE_OFFSET))(this, obj);
		}

		::System::Void OnHide()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINTERKNOTMISSIONWIDGETCONTROLLER_ONHIDE_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINTERKNOTMISSIONWIDGETCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnShow(::MoleMole::UIControllerContextBase* showCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINTERKNOTMISSIONWIDGETCONTROLLER_ONSHOW_OFFSET))(this, showCtrlContext);
		}

		::System::Boolean CheckCanToggleHandle()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINTERKNOTMISSIONWIDGETCONTROLLER_CHECKCANTOGGLEHANDLE_OFFSET))(this);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINTERKNOTMISSIONWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnMissionItemClickHandle(::System::Int32 obj)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINTERKNOTMISSIONWIDGETCONTROLLER_ONMISSIONITEMCLICKHANDLE_OFFSET))(this, obj);
		}

		::System::Void OnCliclGroupTab(::System::Int32 index)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINTERKNOTMISSIONWIDGETCONTROLLER_ONCLICLGROUPTAB_OFFSET))(this, index);
		}

		::System::Void OnGeneralToggleHandle(::System::Boolean isOn, ::System::Boolean isInit)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINTERKNOTMISSIONWIDGETCONTROLLER_ONGENERALTOGGLEHANDLE_OFFSET))(this, isOn, isInit);
		}

		::MoleMole::ScrollViewItemWidgetController* OnCreatMissionItem(::System::Func_1<::MoleMole::UIControlReference*>* arg)
		{
			return ((::MoleMole::ScrollViewItemWidgetController*(*)(::PVOID, ::System::Func_1<::MoleMole::UIControlReference*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINTERKNOTMISSIONWIDGETCONTROLLER_ONCREATMISSIONITEM_OFFSET))(this, arg);
		}

		::System::Void ClearManualNews()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINTERKNOTMISSIONWIDGETCONTROLLER_CLEARMANUALNEWS_OFFSET))(this);
		}

		::System::Void OnTrackBtnClickHandle()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINTERKNOTMISSIONWIDGETCONTROLLER_ONTRACKBTNCLICKHANDLE_OFFSET))(this);
		}

		static ::System::Boolean GetCanEnterWorldState(::System::Int32 questID)
		{
			return ((::System::Boolean(*)(::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINTERKNOTMISSIONWIDGETCONTROLLER_GETCANENTERWORLDSTATE_OFFSET))(questID);
		}

		::System::Void OnTransBtnClickHandle()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINTERKNOTMISSIONWIDGETCONTROLLER_ONTRANSBTNCLICKHANDLE_OFFSET))(this);
		}

		::System::Void OpenMap(::System::Int32 questID)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINTERKNOTMISSIONWIDGETCONTROLLER_OPENMAP_OFFSET))(this, questID);
		}

		::System::Void UpdateMissionTrack(::System::Boolean success)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINTERKNOTMISSIONWIDGETCONTROLLER_UPDATEMISSIONTRACK_OFFSET))(this, success);
		}

		::System::Void ClearLastTabManualNew()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINTERKNOTMISSIONWIDGETCONTROLLER_CLEARLASTTABMANUALNEW_OFFSET))(this);
		}

		::System::Void InitMission(::System::Int32 tabGroup)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINTERKNOTMISSIONWIDGETCONTROLLER_INITMISSION_OFFSET))(this, tabGroup);
		}

		::System::Int32 GetMainManualBySeasonID(::System::Int32 seasonID)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINTERKNOTMISSIONWIDGETCONTROLLER_GETMAINMANUALBYSEASONID_OFFSET))(this, seasonID);
		}

		::System::Void SelectQuest(::System::Int32 questID)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINTERKNOTMISSIONWIDGETCONTROLLER_SELECTQUEST_OFFSET))(this, questID);
		}

		::System::Int32 GetManualCompare(::Class_1_2181504E881DDEE4* a, ::Class_1_2181504E881DDEE4* b)
		{
			return ((::System::Int32(*)(::PVOID, ::Class_1_2181504E881DDEE4*, ::Class_1_2181504E881DDEE4*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINTERKNOTMISSIONWIDGETCONTROLLER_GETMANUALCOMPARE_OFFSET))(this, a, b);
		}

		::System::Void UpdateSelectedMission()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINTERKNOTMISSIONWIDGETCONTROLLER_UPDATESELECTEDMISSION_OFFSET))(this);
		}

		::System::Void RefreshTrackTip(::Class_1_2181504E881DDEE4* manual)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_2181504E881DDEE4*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINTERKNOTMISSIONWIDGETCONTROLLER_REFRESHTRACKTIP_OFFSET))(this, manual);
		}

		::System::Void RefreshMissionDetailList()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINTERKNOTMISSIONWIDGETCONTROLLER_REFRESHMISSIONDETAILLIST_OFFSET))(this);
		}

		::System::Void RefreshMonsterLevel()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINTERKNOTMISSIONWIDGETCONTROLLER_REFRESHMONSTERLEVEL_OFFSET))(this);
		}

		::System::Void RefreshActivityTimer()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINTERKNOTMISSIONWIDGETCONTROLLER_REFRESHACTIVITYTIMER_OFFSET))(this);
		}

		static ::System::String* GetQuestDescPrefix(::System::Int32 descQuestId)
		{
			return ((::System::String*(*)(::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINTERKNOTMISSIONWIDGETCONTROLLER_GETQUESTDESCPREFIX_OFFSET))(descQuestId);
		}

		::System::Void RefreshMissionRewardList()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINTERKNOTMISSIONWIDGETCONTROLLER_REFRESHMISSIONREWARDLIST_OFFSET))(this);
		}

		::System::Void RefreshMissionImage()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINTERKNOTMISSIONWIDGETCONTROLLER_REFRESHMISSIONIMAGE_OFFSET))(this);
		}

		::System::Boolean IsTrackingPersonalQuest()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINTERKNOTMISSIONWIDGETCONTROLLER_ISTRACKINGPERSONALQUEST_OFFSET))(this);
		}

		::System::Int32 HasTrackQuest(::System::Collections::Generic::List_1<::Class_1_2181504E881DDEE4*>* manualList, ::System::Int32& index)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_1_2181504E881DDEE4*>*, ::System::Int32&))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINTERKNOTMISSIONWIDGETCONTROLLER_HASTRACKQUEST_OFFSET))(this, manualList, index);
		}

		::System::Int32 HasMainQuest(::System::Collections::Generic::List_1<::Class_1_2181504E881DDEE4*>* manualList)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_1_2181504E881DDEE4*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINTERKNOTMISSIONWIDGETCONTROLLER_HASMAINQUEST_OFFSET))(this, manualList);
		}

		::System::Void OnLayoutPlatformChanged()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINTERKNOTMISSIONWIDGETCONTROLLER_ONLAYOUTPLATFORMCHANGED_OFFSET))(this);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINTERKNOTMISSIONWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void _CheckCanToggleHandle_b__25_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINTERKNOTMISSIONWIDGETCONTROLLER__CHECKCANTOGGLEHANDLE_B__25_0_OFFSET))(this);
		}

		::System::Int32 _InitMission_b__41_0(::Class_1_A5FC45CC23522FB5* a, ::Class_1_A5FC45CC23522FB5* b)
		{
			return ((::System::Int32(*)(::PVOID, ::Class_1_A5FC45CC23522FB5*, ::Class_1_A5FC45CC23522FB5*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINTERKNOTMISSIONWIDGETCONTROLLER__INITMISSION_B__41_0_OFFSET))(this, a, b);
		}

		static ::System::TimeSpan _RefreshActivityTimer_g__GetTimeSpanFromTimeString_49_0(::System::String* str)
		{
			return ((::System::TimeSpan(*)(::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINTERKNOTMISSIONWIDGETCONTROLLER__REFRESHACTIVITYTIMER_G__GETTIMESPANFROMTIMESTRING_49_0_OFFSET))(str);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINTERKNOTMISSIONWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnHide()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINTERKNOTMISSIONWIDGETCONTROLLER___BASE_ONHIDE_OFFSET))(this);
		}

		::System::Void __base_OnLayoutPlatformChanged()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINTERKNOTMISSIONWIDGETCONTROLLER___BASE_ONLAYOUTPLATFORMCHANGED_OFFSET))(this);
		}

		::System::Void __base_OnShow(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINTERKNOTMISSIONWIDGETCONTROLLER___BASE_ONSHOW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINTERKNOTMISSIONWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINTERKNOTMISSIONWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINTERKNOTMISSIONWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
