#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_3EDF246633A325B0.h"
#include "unitysdk/MoleMole/UIWindowController.h"

class Class_1_3CBC14188D0079E3;
class Class_1_8B57604365300A64;
class Class_1_E5C5FCDBF5C3BDAC;
class Class_2_699998D4E6F32559;
class Class_2_79AE422BA06F6D26_192;
namespace MoleMole { class UIActivityGotoMissionRowWidgetController; }
namespace MoleMole { class UICinemaRewardContext; }
namespace MoleMole { class UICinemaRewardLevelWidgetController; }
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UICINEMAREWARDPAGECONTROLLER_GET_WINDOWTYPE_OFFSET UNITYSDK_OFFSET(0xACF5640)
#define MOLEMOLE_UICINEMAREWARDPAGECONTROLLER_ONCLICKTAKEALLREWARD_OFFSET UNITYSDK_OFFSET(0xACF7070)
#define MOLEMOLE_UICINEMAREWARDPAGECONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0xACF5650)
#define MOLEMOLE_UICINEMAREWARDPAGECONTROLLER_ONSERVERDATACHANGED_OFFSET UNITYSDK_OFFSET(0xACF62E0)
#define MOLEMOLE_UICINEMAREWARDPAGECONTROLLER_ONSHOW_OFFSET UNITYSDK_OFFSET(0xACF5FF0)
#define MOLEMOLE_UICINEMAREWARDPAGECONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0xACF61C0)
#define MOLEMOLE_UICINEMAREWARDPAGECONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0xACF56F0)
#define MOLEMOLE_UICINEMAREWARDPAGECONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0xACF5F40)
#define MOLEMOLE_UICINEMAREWARDPAGECONTROLLER_OPENDETAIL_OFFSET UNITYSDK_OFFSET(0xACF71E0)
#define MOLEMOLE_UICINEMAREWARDPAGECONTROLLER_REFRESHFETCHALLBTN_OFFSET UNITYSDK_OFFSET(0xACF63E0)
#define MOLEMOLE_UICINEMAREWARDPAGECONTROLLER_REFRESHINFO_OFFSET UNITYSDK_OFFSET(0xACF6140)
#define MOLEMOLE_UICINEMAREWARDPAGECONTROLLER_REFRESHLEFTEXPINFO_OFFSET UNITYSDK_OFFSET(0xACF6AA0)
#define MOLEMOLE_UICINEMAREWARDPAGECONTROLLER_REFRESHLEVELINFO_OFFSET UNITYSDK_OFFSET(0xACF66A0)
#define MOLEMOLE_UICINEMAREWARDPAGECONTROLLER_REFRESHREWARDLIST_OFFSET UNITYSDK_OFFSET(0xACF6540)
#define MOLEMOLE_UICINEMAREWARDPAGECONTROLLER_SORTREWARD_OFFSET UNITYSDK_OFFSET(0xACF72E0)
#define MOLEMOLE_UICINEMAREWARDPAGECONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0xACF7430)
#define MOLEMOLE_UICINEMAREWARDPAGECONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0xACF7440)
#define MOLEMOLE_UICINEMAREWARDPAGECONTROLLER___BASE_ONSHOW_OFFSET UNITYSDK_OFFSET(0xACF74B0)
#define MOLEMOLE_UICINEMAREWARDPAGECONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0xACF74C0)
#define MOLEMOLE_UICINEMAREWARDPAGECONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0xACF74D0)
#define MOLEMOLE_UICINEMAREWARDPAGECONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0xACF74E0)

namespace MoleMole
{
	inline static constexpr unsigned int UICinemaRewardPageController_TypeDefinitionIndex = 69488;

	class UICinemaRewardPageController : public ::MoleMole::UIWindowController
	{
	public:
		::Class_2_79AE422BA06F6D26_192* _view; // 0x2F8
		::Class_1_E5C5FCDBF5C3BDAC* progressBarHandler; // 0x300
		::MoleMole::UICinemaRewardLevelWidgetController* levelWidgetController; // 0x308
		::System::Collections::Generic::List_1<::MoleMole::UIActivityGotoMissionRowWidgetController*>* accessList; // 0x310
		::Class_1_3CBC14188D0079E3* itemIconHandler; // 0x318
		::System::Collections::Generic::List_1<::Class_1_8B57604365300A64*>* rewardList; // 0x320
		::Class_2_699998D4E6F32559* model; // 0x328
		::MoleMole::UICinemaRewardContext* context; // 0x330
		::System::UInt32 nowShowLevel; // 0x338

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMAREWARDPAGECONTROLLER__CTOR_OFFSET))(this);
		}

		::Enum_3_3EDF246633A325B0 get_windowType()
		{
			return ((::Enum_3_3EDF246633A325B0(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMAREWARDPAGECONTROLLER_GET_WINDOWTYPE_OFFSET))(this);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMAREWARDPAGECONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMAREWARDPAGECONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMAREWARDPAGECONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnShow(::MoleMole::UIControllerContextBase* showCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMAREWARDPAGECONTROLLER_ONSHOW_OFFSET))(this, showCtrlContext);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMAREWARDPAGECONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void OnServerDataChanged()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMAREWARDPAGECONTROLLER_ONSERVERDATACHANGED_OFFSET))(this);
		}

		::System::Void RefreshInfo()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMAREWARDPAGECONTROLLER_REFRESHINFO_OFFSET))(this);
		}

		::System::Void RefreshRewardList()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMAREWARDPAGECONTROLLER_REFRESHREWARDLIST_OFFSET))(this);
		}

		::System::Void RefreshLevelInfo()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMAREWARDPAGECONTROLLER_REFRESHLEVELINFO_OFFSET))(this);
		}

		::System::Void RefreshLeftExpInfo(::System::Int32 showItemCount, ::System::Int32 nextNeedCount)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMAREWARDPAGECONTROLLER_REFRESHLEFTEXPINFO_OFFSET))(this, showItemCount, nextNeedCount);
		}

		::System::Void RefreshFetchAllBtn()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMAREWARDPAGECONTROLLER_REFRESHFETCHALLBTN_OFFSET))(this);
		}

		::System::Void OnClickTakeAllReward()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMAREWARDPAGECONTROLLER_ONCLICKTAKEALLREWARD_OFFSET))(this);
		}

		::System::Void OpenDetail()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMAREWARDPAGECONTROLLER_OPENDETAIL_OFFSET))(this);
		}

		::System::Int32 SortReward(::Class_1_8B57604365300A64* rewardA, ::Class_1_8B57604365300A64* rewardB)
		{
			return ((::System::Int32(*)(::PVOID, ::Class_1_8B57604365300A64*, ::Class_1_8B57604365300A64*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMAREWARDPAGECONTROLLER_SORTREWARD_OFFSET))(this, rewardA, rewardB);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMAREWARDPAGECONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnShow(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMAREWARDPAGECONTROLLER___BASE_ONSHOW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMAREWARDPAGECONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMAREWARDPAGECONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMAREWARDPAGECONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
