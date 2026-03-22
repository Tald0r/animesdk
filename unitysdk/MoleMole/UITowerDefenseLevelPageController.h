#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_C4CB11A2FD957208_Struct_2_98E057419FFAAB00.h"
#include "unitysdk/Enum_3_205E43D40B9E7AEA.h"
#include "unitysdk/Enum_3_3EDF246633A325B0.h"
#include "unitysdk/MoleMole/UITowerDefenseLevelPageController_BangBooEntryDataList.h"
#include "unitysdk/MoleMole/UIWindowController.h"

class Class_0_16E4307DCC419505_347;
class Class_1_1685EC66FBD28897;
class Class_1_7807B2B04302CD7B_13;
class Class_1_884BC23D25390AD2_1;
class Class_2_1CC0E2699D5FB1A6_2;
class Class_2_1DE31F486C9C83AD;
class Class_2_47F3EABB6C9CDECD;
namespace MoleMole { class UIBangBooBossRowWidgetController; }
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIItemIconBtnSmallWidgetController; }
namespace MoleMole { class UITowerBuffRowWidgetController; }
namespace MoleMole { class UITowerDefenseDayTabWidgetController; }
namespace MoleMole { class UITowerDefenseTabBtnWidgetController; }
namespace System { class EventArgs; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }

#define MOLEMOLE_UITOWERDEFENSELEVELPAGECONTROLLER_ADDDAYWIDGET_OFFSET UNITYSDK_OFFSET(0xAA9E4E0)
#define MOLEMOLE_UITOWERDEFENSELEVELPAGECONTROLLER_CACHEENHANCE_OFFSET UNITYSDK_OFFSET(0xAAA1930)
#define MOLEMOLE_UITOWERDEFENSELEVELPAGECONTROLLER_CLEARDATALIST_OFFSET UNITYSDK_OFFSET(0xAAA13A0)
#define MOLEMOLE_UITOWERDEFENSELEVELPAGECONTROLLER_DATALISTSELECT_OFFSET UNITYSDK_OFFSET(0xAAA16A0)
#define MOLEMOLE_UITOWERDEFENSELEVELPAGECONTROLLER_GETENTRYLIST_OFFSET UNITYSDK_OFFSET(0xAA9E280)
#define MOLEMOLE_UITOWERDEFENSELEVELPAGECONTROLLER_GETINITSELECTOR_OFFSET UNITYSDK_OFFSET(0xAA9BC10)
#define MOLEMOLE_UITOWERDEFENSELEVELPAGECONTROLLER_GETLEVELTABCONTROLLER_OFFSET UNITYSDK_OFFSET(0xAA9FC30)
#define MOLEMOLE_UITOWERDEFENSELEVELPAGECONTROLLER_GETREWARDLIST_OFFSET UNITYSDK_OFFSET(0xAA9D4F0)
#define MOLEMOLE_UITOWERDEFENSELEVELPAGECONTROLLER_GET_MESSAGEMATCHPAGE_OFFSET UNITYSDK_OFFSET(0xAA9BC00)
#define MOLEMOLE_UITOWERDEFENSELEVELPAGECONTROLLER_GET_WINDOWTYPE_OFFSET UNITYSDK_OFFSET(0xAA9BBF0)
#define MOLEMOLE_UITOWERDEFENSELEVELPAGECONTROLLER_ISUNLOCKENTRY_OFFSET UNITYSDK_OFFSET(0xAA9E460)
#define MOLEMOLE_UITOWERDEFENSELEVELPAGECONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0xAA9BCB0)
#define MOLEMOLE_UITOWERDEFENSELEVELPAGECONTROLLER_ONLEVELSCROLLCREATE_OFFSET UNITYSDK_OFFSET(0xAAA0F60)
#define MOLEMOLE_UITOWERDEFENSELEVELPAGECONTROLLER_ONSTART_OFFSET UNITYSDK_OFFSET(0xAA9CF10)
#define MOLEMOLE_UITOWERDEFENSELEVELPAGECONTROLLER_ONTOWERDEFENSELEVELUPDATE_OFFSET UNITYSDK_OFFSET(0xAAA1110)
#define MOLEMOLE_UITOWERDEFENSELEVELPAGECONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0xAA9D450)
#define MOLEMOLE_UITOWERDEFENSELEVELPAGECONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0xAA9BD50)
#define MOLEMOLE_UITOWERDEFENSELEVELPAGECONTROLLER_OPENTUTORIAL_OFFSET UNITYSDK_OFFSET(0xAA9CD60)
#define MOLEMOLE_UITOWERDEFENSELEVELPAGECONTROLLER_REFRESHDATADETAIL_OFFSET UNITYSDK_OFFSET(0xAAA1440)
#define MOLEMOLE_UITOWERDEFENSELEVELPAGECONTROLLER_REFRESHDETAIL_OFFSET UNITYSDK_OFFSET(0xAA9E580)
#define MOLEMOLE_UITOWERDEFENSELEVELPAGECONTROLLER_REFRESHLEVELLIST_OFFSET UNITYSDK_OFFSET(0xAA9FCF0)
#define MOLEMOLE_UITOWERDEFENSELEVELPAGECONTROLLER_REFRESHREWARD_OFFSET UNITYSDK_OFFSET(0xAA9D690)
#define MOLEMOLE_UITOWERDEFENSELEVELPAGECONTROLLER_REFRESHSPECIALICON_OFFSET UNITYSDK_OFFSET(0xAA9DD40)
#define MOLEMOLE_UITOWERDEFENSELEVELPAGECONTROLLER_REFRESHVIEW_OFFSET UNITYSDK_OFFSET(0xAA9C260)
#define MOLEMOLE_UITOWERDEFENSELEVELPAGECONTROLLER_RESETCONTENTPOS_OFFSET UNITYSDK_OFFSET(0xAA9FAE0)
#define MOLEMOLE_UITOWERDEFENSELEVELPAGECONTROLLER_RESETDATALIST_OFFSET UNITYSDK_OFFSET(0xAA9F6E0)
#define MOLEMOLE_UITOWERDEFENSELEVELPAGECONTROLLER_STOPCONTENTANIMATION_OFFSET UNITYSDK_OFFSET(0xAA9F630)
#define MOLEMOLE_UITOWERDEFENSELEVELPAGECONTROLLER_UPDATE_OFFSET UNITYSDK_OFFSET(0xAA9E220)
#define MOLEMOLE_UITOWERDEFENSELEVELPAGECONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0xAAA1B70)
#define MOLEMOLE_UITOWERDEFENSELEVELPAGECONTROLLER__ONUIINIT_B__12_0_OFFSET UNITYSDK_OFFSET(0xAAA1F10)
#define MOLEMOLE_UITOWERDEFENSELEVELPAGECONTROLLER__REFRESHDATADETAIL_B__33_0_OFFSET UNITYSDK_OFFSET(0xAAA1FE0)
#define MOLEMOLE_UITOWERDEFENSELEVELPAGECONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0xAAA2550)
#define MOLEMOLE_UITOWERDEFENSELEVELPAGECONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0xAAA25C0)
#define MOLEMOLE_UITOWERDEFENSELEVELPAGECONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0xAAA25D0)

namespace MoleMole
{
	inline static constexpr unsigned int UITowerDefenseLevelPageController_TypeDefinitionIndex = 73962;

	class UITowerDefenseLevelPageController : public ::MoleMole::UIWindowController
	{
	public:
		// static const ::System::Int32 TOTALENHANCECOUNT = 0x2; // 0x0
		::Class_0_16E4307DCC419505_347* initSelector; // 0x2F8
		::Class_2_1CC0E2699D5FB1A6_2* _view; // 0x300
		::Class_2_1DE31F486C9C83AD* towerModel; // 0x308
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* towerEntryIndex; // 0x310
		::System::Boolean inited; // 0x318
		::System::Int32 firstUnlockIndex; // 0x31C
		::Class_2_47F3EABB6C9CDECD* newBieModel; // 0x320
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::Class_1_884BC23D25390AD2_1*>* clientEnhanceList; // 0x328
		::System::Int32 lastEnableQuestID; // 0x330
		::System::Int32 lastEnableEntryID; // 0x334
		::System::Int32 curEntryID; // 0x338
		::System::Int32 curQuestid; // 0x33C
		::System::Collections::Generic::List_1<::MoleMole::UIItemIconBtnSmallWidgetController*>* rewards; // 0x340
		::System::Collections::Generic::List_1<::MoleMole::UIBangBooBossRowWidgetController*>* monsterlist; // 0x348
		::System::Collections::Generic::List_1<::MoleMole::UITowerDefenseTabBtnWidgetController*>* tabBtns; // 0x350
		::Il2CppArray<::System::Int32>* dataDetails; // 0x358
		::System::Collections::Generic::List_1<::MoleMole::UITowerBuffRowWidgetController*>* buffRows; // 0x360
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::MoleMole::UITowerDefenseDayTabWidgetController*>* dayWidgets; // 0x368
		::System::Int32 initQuestID; // 0x370

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITOWERDEFENSELEVELPAGECONTROLLER__CTOR_OFFSET))(this);
		}

		::Enum_3_3EDF246633A325B0 get_windowType()
		{
			return ((::Enum_3_3EDF246633A325B0(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITOWERDEFENSELEVELPAGECONTROLLER_GET_WINDOWTYPE_OFFSET))(this);
		}

		::Enum_3_205E43D40B9E7AEA get_MessageMatchPage()
		{
			return ((::Enum_3_205E43D40B9E7AEA(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITOWERDEFENSELEVELPAGECONTROLLER_GET_MESSAGEMATCHPAGE_OFFSET))(this);
		}

		::Class_0_16E4307DCC419505_347* GetInitSelector()
		{
			return ((::Class_0_16E4307DCC419505_347*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITOWERDEFENSELEVELPAGECONTROLLER_GETINITSELECTOR_OFFSET))(this);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UITOWERDEFENSELEVELPAGECONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITOWERDEFENSELEVELPAGECONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OpenTutorial()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITOWERDEFENSELEVELPAGECONTROLLER_OPENTUTORIAL_OFFSET))(this);
		}

		::System::Void OnStart()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITOWERDEFENSELEVELPAGECONTROLLER_ONSTART_OFFSET))(this);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITOWERDEFENSELEVELPAGECONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::Class_1_C4CB11A2FD957208_Struct_2_98E057419FFAAB00>* GetRewardList()
		{
			return ((::System::Collections::Generic::List_1<::Class_1_C4CB11A2FD957208_Struct_2_98E057419FFAAB00>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITOWERDEFENSELEVELPAGECONTROLLER_GETREWARDLIST_OFFSET))(this);
		}

		::System::Void RefreshReward()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITOWERDEFENSELEVELPAGECONTROLLER_REFRESHREWARD_OFFSET))(this);
		}

		::System::Void RefreshSpecialIcon(::Class_1_1685EC66FBD28897* viewData)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_1685EC66FBD28897*))((::PBYTE)hIl2Cpp + MOLEMOLE_UITOWERDEFENSELEVELPAGECONTROLLER_REFRESHSPECIALICON_OFFSET))(this, viewData);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITOWERDEFENSELEVELPAGECONTROLLER_UPDATE_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::MoleMole::UITowerDefenseLevelPageController_BangBooEntryDataList>* GetEntryList()
		{
			return ((::System::Collections::Generic::List_1<::MoleMole::UITowerDefenseLevelPageController_BangBooEntryDataList>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITOWERDEFENSELEVELPAGECONTROLLER_GETENTRYLIST_OFFSET))(this);
		}

		::System::Boolean IsUnlockEntry(::System::Int32 entryID)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UITOWERDEFENSELEVELPAGECONTROLLER_ISUNLOCKENTRY_OFFSET))(this, entryID);
		}

		::MoleMole::UITowerDefenseDayTabWidgetController* AddDayWidget(::UnityEngine::GameObject* go)
		{
			return ((::MoleMole::UITowerDefenseDayTabWidgetController*(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + MOLEMOLE_UITOWERDEFENSELEVELPAGECONTROLLER_ADDDAYWIDGET_OFFSET))(this, go);
		}

		::System::Void RefreshView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITOWERDEFENSELEVELPAGECONTROLLER_REFRESHVIEW_OFFSET))(this);
		}

		::System::Void RefreshDetail(::Class_1_7807B2B04302CD7B_13* data)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_7807B2B04302CD7B_13*))((::PBYTE)hIl2Cpp + MOLEMOLE_UITOWERDEFENSELEVELPAGECONTROLLER_REFRESHDETAIL_OFFSET))(this, data);
		}

		::System::Void ResetContentPos()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITOWERDEFENSELEVELPAGECONTROLLER_RESETCONTENTPOS_OFFSET))(this);
		}

		::System::Void StopContentAnimation()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITOWERDEFENSELEVELPAGECONTROLLER_STOPCONTENTANIMATION_OFFSET))(this);
		}

		::MoleMole::UITowerDefenseTabBtnWidgetController* GetLevelTabController(::UnityEngine::Transform* root)
		{
			return ((::MoleMole::UITowerDefenseTabBtnWidgetController*(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + MOLEMOLE_UITOWERDEFENSELEVELPAGECONTROLLER_GETLEVELTABCONTROLLER_OFFSET))(this, root);
		}

		::System::Void RefreshLevelList(::System::Int32 entryID)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UITOWERDEFENSELEVELPAGECONTROLLER_REFRESHLEVELLIST_OFFSET))(this, entryID);
		}

		::System::Void OnLevelScrollCreate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITOWERDEFENSELEVELPAGECONTROLLER_ONLEVELSCROLLCREATE_OFFSET))(this);
		}

		::System::Void OnTowerDefenseLevelUpdate(::MoleMole::UITowerDefenseTabBtnWidgetController* ctrl, ::System::Int32 index, ::System::Object* data, ::System::Boolean init)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UITowerDefenseTabBtnWidgetController*, ::System::Int32, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UITOWERDEFENSELEVELPAGECONTROLLER_ONTOWERDEFENSELEVELUPDATE_OFFSET))(this, ctrl, index, data, init);
		}

		::System::Void ClearDataList()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITOWERDEFENSELEVELPAGECONTROLLER_CLEARDATALIST_OFFSET))(this);
		}

		::System::Void ResetDataList()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITOWERDEFENSELEVELPAGECONTROLLER_RESETDATALIST_OFFSET))(this);
		}

		::System::Void RefreshDataDetail()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITOWERDEFENSELEVELPAGECONTROLLER_REFRESHDATADETAIL_OFFSET))(this);
		}

		::System::Void DataListSelect(::System::EventArgs* args)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UITOWERDEFENSELEVELPAGECONTROLLER_DATALISTSELECT_OFFSET))(this, args);
		}

		::System::Void CacheEnhance(::System::Collections::Generic::List_1<::System::Int32>* dataList, ::System::Int32 dataType)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::Int32>*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UITOWERDEFENSELEVELPAGECONTROLLER_CACHEENHANCE_OFFSET))(this, dataList, dataType);
		}

		::System::Void _OnUIInit_b__12_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITOWERDEFENSELEVELPAGECONTROLLER__ONUIINIT_B__12_0_OFFSET))(this);
		}

		::System::Void _RefreshDataDetail_b__33_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITOWERDEFENSELEVELPAGECONTROLLER__REFRESHDATADETAIL_B__33_0_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UITOWERDEFENSELEVELPAGECONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITOWERDEFENSELEVELPAGECONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITOWERDEFENSELEVELPAGECONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}
	};
}
