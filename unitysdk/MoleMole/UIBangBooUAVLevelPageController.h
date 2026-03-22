#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_C4CB11A2FD957208_Struct_2_98E057419FFAAB00.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask.h"
#include "unitysdk/MoleMole/UITowerDefenseLevelPageController.h"
#include "unitysdk/MoleMole/UITowerDefenseLevelPageController_BangBooEntryDataList.h"
#include "unitysdk/Struct_2_A725E4562D03EA4E_1.h"

class Class_0_16E4307DCC419505_347;
class Class_1_7807B2B04302CD7B_13;
class Class_2_1CC0E2699D5FB1A6_2;
class Class_2_8EFBFDFF19FA6CA9;
namespace MoleMole { class UIBangBooUAVInfoRowWidgetController; }
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace MoleMole { class UITowerDefenseDayTabWidgetController; }
namespace MoleMole { class UITowerDefenseTabBtnWidgetController; }
namespace System { class EventArgs; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }

#define MOLEMOLE_UIBANGBOOUAVLEVELPAGECONTROLLER_ADDDAYWIDGET_OFFSET UNITYSDK_OFFSET(0xBED7F20)
#define MOLEMOLE_UIBANGBOOUAVLEVELPAGECONTROLLER_DATALISTSELECT_OFFSET UNITYSDK_OFFSET(0xBED8D20)
#define MOLEMOLE_UIBANGBOOUAVLEVELPAGECONTROLLER_GETCANEQUIPCOUNT_OFFSET UNITYSDK_OFFSET(0xBED8250)
#define MOLEMOLE_UIBANGBOOUAVLEVELPAGECONTROLLER_GETENTRYLIST_OFFSET UNITYSDK_OFFSET(0xBED63A0)
#define MOLEMOLE_UIBANGBOOUAVLEVELPAGECONTROLLER_GETINITSELECTOR_OFFSET UNITYSDK_OFFSET(0xBED62F0)
#define MOLEMOLE_UIBANGBOOUAVLEVELPAGECONTROLLER_GETLEVELTABCONTROLLER_OFFSET UNITYSDK_OFFSET(0xBED7AC0)
#define MOLEMOLE_UIBANGBOOUAVLEVELPAGECONTROLLER_GETREWARDLIST_OFFSET UNITYSDK_OFFSET(0xBED6650)
#define MOLEMOLE_UIBANGBOOUAVLEVELPAGECONTROLLER_GET_CURRENTQUEST_OFFSET UNITYSDK_OFFSET(0xBED5520)
#define MOLEMOLE_UIBANGBOOUAVLEVELPAGECONTROLLER_HIDERECORD_OFFSET UNITYSDK_OFFSET(0xBED79A0)
#define MOLEMOLE_UIBANGBOOUAVLEVELPAGECONTROLLER_INITEQUIPLIST_OFFSET UNITYSDK_OFFSET(0xBED7040)
#define MOLEMOLE_UIBANGBOOUAVLEVELPAGECONTROLLER_ISUNLOCKENTRY_OFFSET UNITYSDK_OFFSET(0xBED5AF0)
#define MOLEMOLE_UIBANGBOOUAVLEVELPAGECONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0xBED5540)
#define MOLEMOLE_UIBANGBOOUAVLEVELPAGECONTROLLER_ONSTART_OFFSET UNITYSDK_OFFSET(0xBED5E50)
#define MOLEMOLE_UIBANGBOOUAVLEVELPAGECONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0xBED7FC0)
#define MOLEMOLE_UIBANGBOOUAVLEVELPAGECONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0xBED5680)
#define MOLEMOLE_UIBANGBOOUAVLEVELPAGECONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0xBED7B80)
#define MOLEMOLE_UIBANGBOOUAVLEVELPAGECONTROLLER_REFRESHDATADETAIL_OFFSET UNITYSDK_OFFSET(0xBED88C0)
#define MOLEMOLE_UIBANGBOOUAVLEVELPAGECONTROLLER_REFRESHDETAIL_OFFSET UNITYSDK_OFFSET(0xBED67F0)
#define MOLEMOLE_UIBANGBOOUAVLEVELPAGECONTROLLER_REFRESHLEVELLIST_OFFSET UNITYSDK_OFFSET(0xBED9250)
#define MOLEMOLE_UIBANGBOOUAVLEVELPAGECONTROLLER_REFRESHQUEST_OFFSET UNITYSDK_OFFSET(0xBED75C0)
#define MOLEMOLE_UIBANGBOOUAVLEVELPAGECONTROLLER_REFRESHTIME_OFFSET UNITYSDK_OFFSET(0xBED72D0)
#define MOLEMOLE_UIBANGBOOUAVLEVELPAGECONTROLLER_SET_CURRENTQUEST_OFFSET UNITYSDK_OFFSET(0xBED5530)
#define MOLEMOLE_UIBANGBOOUAVLEVELPAGECONTROLLER_SHOWTIPSASYNC_OFFSET UNITYSDK_OFFSET(0xBED7CF0)
#define MOLEMOLE_UIBANGBOOUAVLEVELPAGECONTROLLER_TRYSHOWLEVELCHANGEDTIPSASYNC_OFFSET UNITYSDK_OFFSET(0xBED7DB0)
#define MOLEMOLE_UIBANGBOOUAVLEVELPAGECONTROLLER_TRYSHOWNEWEQUIPTIPSASYNC_OFFSET UNITYSDK_OFFSET(0xBED7E60)
#define MOLEMOLE_UIBANGBOOUAVLEVELPAGECONTROLLER_TRYTRIGGERNEWBIEASYNC_OFFSET UNITYSDK_OFFSET(0xBED8610)
#define MOLEMOLE_UIBANGBOOUAVLEVELPAGECONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0xBEDA290)
#define MOLEMOLE_UIBANGBOOUAVLEVELPAGECONTROLLER__DATALISTSELECT_G__SETEQUIPID_33_0_OFFSET UNITYSDK_OFFSET(0xBED9200)
#define MOLEMOLE_UIBANGBOOUAVLEVELPAGECONTROLLER__INITEQUIPLIST_G__SETEQUIPDATA_30_0_OFFSET UNITYSDK_OFFSET(0xBED8410)
#define MOLEMOLE_UIBANGBOOUAVLEVELPAGECONTROLLER__REFRESHDATADETAIL_B__32_1_OFFSET UNITYSDK_OFFSET(0xBEDA400)
#define MOLEMOLE_UIBANGBOOUAVLEVELPAGECONTROLLER__REFRESHDATADETAIL_G__SETEQUIP_32_0_OFFSET UNITYSDK_OFFSET(0xBED89C0)
#define MOLEMOLE_UIBANGBOOUAVLEVELPAGECONTROLLER___BASE_ADDDAYWIDGET_OFFSET UNITYSDK_OFFSET(0xBEDAA80)
#define MOLEMOLE_UIBANGBOOUAVLEVELPAGECONTROLLER___BASE_DATALISTSELECT_OFFSET UNITYSDK_OFFSET(0xBEDAB20)
#define MOLEMOLE_UIBANGBOOUAVLEVELPAGECONTROLLER___BASE_GETENTRYLIST_OFFSET UNITYSDK_OFFSET(0xBEDAB30)
#define MOLEMOLE_UIBANGBOOUAVLEVELPAGECONTROLLER___BASE_GETINITSELECTOR_OFFSET UNITYSDK_OFFSET(0xBEDAB40)
#define MOLEMOLE_UIBANGBOOUAVLEVELPAGECONTROLLER___BASE_GETLEVELTABCONTROLLER_OFFSET UNITYSDK_OFFSET(0xBEDAB50)
#define MOLEMOLE_UIBANGBOOUAVLEVELPAGECONTROLLER___BASE_GETREWARDLIST_OFFSET UNITYSDK_OFFSET(0xBEDAB60)
#define MOLEMOLE_UIBANGBOOUAVLEVELPAGECONTROLLER___BASE_ISUNLOCKENTRY_OFFSET UNITYSDK_OFFSET(0xBEDAB70)
#define MOLEMOLE_UIBANGBOOUAVLEVELPAGECONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0xBEDABF0)
#define MOLEMOLE_UIBANGBOOUAVLEVELPAGECONTROLLER___BASE_ONSTART_OFFSET UNITYSDK_OFFSET(0xBEDAC90)
#define MOLEMOLE_UIBANGBOOUAVLEVELPAGECONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0xBEDACA0)
#define MOLEMOLE_UIBANGBOOUAVLEVELPAGECONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0xBEDACB0)
#define MOLEMOLE_UIBANGBOOUAVLEVELPAGECONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0xBEDACC0)
#define MOLEMOLE_UIBANGBOOUAVLEVELPAGECONTROLLER___BASE_REFRESHDATADETAIL_OFFSET UNITYSDK_OFFSET(0xBEDAD30)
#define MOLEMOLE_UIBANGBOOUAVLEVELPAGECONTROLLER___BASE_REFRESHDETAIL_OFFSET UNITYSDK_OFFSET(0xBEDAD40)
#define MOLEMOLE_UIBANGBOOUAVLEVELPAGECONTROLLER___BASE_REFRESHLEVELLIST_OFFSET UNITYSDK_OFFSET(0xBEDAD50)

namespace MoleMole
{
	inline static constexpr unsigned int UIBangBooUAVLevelPageController_TypeDefinitionIndex = 43289;

	class UIBangBooUAVLevelPageController : public ::MoleMole::UITowerDefenseLevelPageController
	{
	public:
		// static const ::System::Int32 LevelChangeTipId = 0x2DCD02; // 0x0
		// static const ::System::Int32 NewEquipTipId = 0x2DCD11; // 0x0
		::Class_2_1CC0E2699D5FB1A6_2* _view; // 0x378
		::System::Collections::Generic::List_1<::Struct_2_A725E4562D03EA4E_1>* equipList; // 0x380
		::System::Collections::Generic::List_1<::System::Int32>* EquipTmpList; // 0x388
		::System::Collections::Generic::List_1<::MoleMole::UIBangBooUAVInfoRowWidgetController*>* questInfos; // 0x390
		::Class_2_8EFBFDFF19FA6CA9* dreamModel; // 0x398
		::System::Collections::Generic::List_1<::System::Int32>* lockTipsList; // 0x3A0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGBOOUAVLEVELPAGECONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Int32 get_currentQuest()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGBOOUAVLEVELPAGECONTROLLER_GET_CURRENTQUEST_OFFSET))(this);
		}

		::System::Void set_currentQuest(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGBOOUAVLEVELPAGECONTROLLER_SET_CURRENTQUEST_OFFSET))(this, value);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGBOOUAVLEVELPAGECONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGBOOUAVLEVELPAGECONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Boolean IsUnlockEntry(::System::Int32 entryID)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGBOOUAVLEVELPAGECONTROLLER_ISUNLOCKENTRY_OFFSET))(this, entryID);
		}

		::System::Void OnStart()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGBOOUAVLEVELPAGECONTROLLER_ONSTART_OFFSET))(this);
		}

		::Class_0_16E4307DCC419505_347* GetInitSelector()
		{
			return ((::Class_0_16E4307DCC419505_347*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGBOOUAVLEVELPAGECONTROLLER_GETINITSELECTOR_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::Class_1_C4CB11A2FD957208_Struct_2_98E057419FFAAB00>* GetRewardList()
		{
			return ((::System::Collections::Generic::List_1<::Class_1_C4CB11A2FD957208_Struct_2_98E057419FFAAB00>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGBOOUAVLEVELPAGECONTROLLER_GETREWARDLIST_OFFSET))(this);
		}

		::System::Void RefreshDetail(::Class_1_7807B2B04302CD7B_13* data)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_7807B2B04302CD7B_13*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGBOOUAVLEVELPAGECONTROLLER_REFRESHDETAIL_OFFSET))(this, data);
		}

		::System::Void RefreshQuest()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGBOOUAVLEVELPAGECONTROLLER_REFRESHQUEST_OFFSET))(this);
		}

		::System::Void RefreshTime()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGBOOUAVLEVELPAGECONTROLLER_REFRESHTIME_OFFSET))(this);
		}

		::System::Void HideRecord()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGBOOUAVLEVELPAGECONTROLLER_HIDERECORD_OFFSET))(this);
		}

		::MoleMole::UITowerDefenseTabBtnWidgetController* GetLevelTabController(::UnityEngine::Transform* root)
		{
			return ((::MoleMole::UITowerDefenseTabBtnWidgetController*(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGBOOUAVLEVELPAGECONTROLLER_GETLEVELTABCONTROLLER_OFFSET))(this, root);
		}

		::System::Collections::Generic::List_1<::MoleMole::UITowerDefenseLevelPageController_BangBooEntryDataList>* GetEntryList()
		{
			return ((::System::Collections::Generic::List_1<::MoleMole::UITowerDefenseLevelPageController_BangBooEntryDataList>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGBOOUAVLEVELPAGECONTROLLER_GETENTRYLIST_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGBOOUAVLEVELPAGECONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::Cysharp::Threading::Tasks::UniTask ShowTipsAsync()
		{
			return ((::Cysharp::Threading::Tasks::UniTask(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGBOOUAVLEVELPAGECONTROLLER_SHOWTIPSASYNC_OFFSET))(this);
		}

		::Cysharp::Threading::Tasks::UniTask TryShowLevelChangedTipsAsync()
		{
			return ((::Cysharp::Threading::Tasks::UniTask(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGBOOUAVLEVELPAGECONTROLLER_TRYSHOWLEVELCHANGEDTIPSASYNC_OFFSET))(this);
		}

		::Cysharp::Threading::Tasks::UniTask TryShowNewEquipTipsAsync()
		{
			return ((::Cysharp::Threading::Tasks::UniTask(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGBOOUAVLEVELPAGECONTROLLER_TRYSHOWNEWEQUIPTIPSASYNC_OFFSET))(this);
		}

		::MoleMole::UITowerDefenseDayTabWidgetController* AddDayWidget(::UnityEngine::GameObject* go)
		{
			return ((::MoleMole::UITowerDefenseDayTabWidgetController*(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGBOOUAVLEVELPAGECONTROLLER_ADDDAYWIDGET_OFFSET))(this, go);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGBOOUAVLEVELPAGECONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Int32 GetCanEquipCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGBOOUAVLEVELPAGECONTROLLER_GETCANEQUIPCOUNT_OFFSET))(this);
		}

		::System::Void InitEquipList()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGBOOUAVLEVELPAGECONTROLLER_INITEQUIPLIST_OFFSET))(this);
		}

		::Cysharp::Threading::Tasks::UniTask TryTriggerNewbieAsync()
		{
			return ((::Cysharp::Threading::Tasks::UniTask(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGBOOUAVLEVELPAGECONTROLLER_TRYTRIGGERNEWBIEASYNC_OFFSET))(this);
		}

		::System::Void RefreshDataDetail()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGBOOUAVLEVELPAGECONTROLLER_REFRESHDATADETAIL_OFFSET))(this);
		}

		::System::Void DataListSelect(::System::EventArgs* args)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGBOOUAVLEVELPAGECONTROLLER_DATALISTSELECT_OFFSET))(this, args);
		}

		::System::Void RefreshLevelList(::System::Int32 entryID)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGBOOUAVLEVELPAGECONTROLLER_REFRESHLEVELLIST_OFFSET))(this, entryID);
		}

		::System::Void _InitEquipList_g__SetEquipData_30_0(::Struct_2_A725E4562D03EA4E_1& data, ::System::Int32 equipid, ::System::Boolean equiplock)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_A725E4562D03EA4E_1&, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGBOOUAVLEVELPAGECONTROLLER__INITEQUIPLIST_G__SETEQUIPDATA_30_0_OFFSET))(this, data, equipid, equiplock);
		}

		::System::Void _RefreshDataDetail_g__SetEquip_32_0(::System::Int32 index, ::Struct_2_A725E4562D03EA4E_1 equipData)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::Struct_2_A725E4562D03EA4E_1))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGBOOUAVLEVELPAGECONTROLLER__REFRESHDATADETAIL_G__SETEQUIP_32_0_OFFSET))(this, index, equipData);
		}

		::System::Void _RefreshDataDetail_b__32_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGBOOUAVLEVELPAGECONTROLLER__REFRESHDATADETAIL_B__32_1_OFFSET))(this);
		}

		::System::Void _DataListSelect_g__SetEquipID_33_0(::System::Int32 index, ::System::Int32 equipID)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGBOOUAVLEVELPAGECONTROLLER__DATALISTSELECT_G__SETEQUIPID_33_0_OFFSET))(this, index, equipID);
		}

		::MoleMole::UITowerDefenseDayTabWidgetController* __base_AddDayWidget(::UnityEngine::GameObject* P0)
		{
			return ((::MoleMole::UITowerDefenseDayTabWidgetController*(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGBOOUAVLEVELPAGECONTROLLER___BASE_ADDDAYWIDGET_OFFSET))(this, P0);
		}

		::System::Void __base_DataListSelect(::System::EventArgs* P0)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGBOOUAVLEVELPAGECONTROLLER___BASE_DATALISTSELECT_OFFSET))(this, P0);
		}

		::System::Collections::Generic::List_1<::MoleMole::UITowerDefenseLevelPageController_BangBooEntryDataList>* __base_GetEntryList()
		{
			return ((::System::Collections::Generic::List_1<::MoleMole::UITowerDefenseLevelPageController_BangBooEntryDataList>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGBOOUAVLEVELPAGECONTROLLER___BASE_GETENTRYLIST_OFFSET))(this);
		}

		::Class_0_16E4307DCC419505_347* __base_GetInitSelector()
		{
			return ((::Class_0_16E4307DCC419505_347*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGBOOUAVLEVELPAGECONTROLLER___BASE_GETINITSELECTOR_OFFSET))(this);
		}

		::MoleMole::UITowerDefenseTabBtnWidgetController* __base_GetLevelTabController(::UnityEngine::Transform* P0)
		{
			return ((::MoleMole::UITowerDefenseTabBtnWidgetController*(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGBOOUAVLEVELPAGECONTROLLER___BASE_GETLEVELTABCONTROLLER_OFFSET))(this, P0);
		}

		::System::Collections::Generic::List_1<::Class_1_C4CB11A2FD957208_Struct_2_98E057419FFAAB00>* __base_GetRewardList()
		{
			return ((::System::Collections::Generic::List_1<::Class_1_C4CB11A2FD957208_Struct_2_98E057419FFAAB00>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGBOOUAVLEVELPAGECONTROLLER___BASE_GETREWARDLIST_OFFSET))(this);
		}

		::System::Boolean __base_IsUnlockEntry(::System::Int32 P0)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGBOOUAVLEVELPAGECONTROLLER___BASE_ISUNLOCKENTRY_OFFSET))(this, P0);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGBOOUAVLEVELPAGECONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnStart()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGBOOUAVLEVELPAGECONTROLLER___BASE_ONSTART_OFFSET))(this);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGBOOUAVLEVELPAGECONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGBOOUAVLEVELPAGECONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGBOOUAVLEVELPAGECONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}

		::System::Void __base_RefreshDataDetail()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGBOOUAVLEVELPAGECONTROLLER___BASE_REFRESHDATADETAIL_OFFSET))(this);
		}

		::System::Void __base_RefreshDetail(::Class_1_7807B2B04302CD7B_13* P0)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_7807B2B04302CD7B_13*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGBOOUAVLEVELPAGECONTROLLER___BASE_REFRESHDETAIL_OFFSET))(this, P0);
		}

		::System::Void __base_RefreshLevelList(::System::Int32 P0)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGBOOUAVLEVELPAGECONTROLLER___BASE_REFRESHLEVELLIST_OFFSET))(this, P0);
		}
	};
}
