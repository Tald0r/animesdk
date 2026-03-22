#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_3EDF246633A325B0.h"
#include "unitysdk/MoleMole/UIBangBooUAVCardItemCollectPageController_BangbooTabType.h"
#include "unitysdk/MoleMole/UIBangBooUAVCardItemCollectPageController_TabData.h"
#include "unitysdk/MoleMole/UIWindowController.h"

class Class_2_79AE422BA06F6D26_35;
class Class_2_8EFBFDFF19FA6CA9;
namespace MoleMole { class UIBangbooUAVCardCollectWidgetController; }
namespace MoleMole { class UIBangbooUAVWeaponCollectWidgetController; }
namespace MoleMole { class UIControlReference; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UIBANGBOOUAVCARDITEMCOLLECTPAGECONTROLLER_GET_WINDOWTYPE_OFFSET UNITYSDK_OFFSET(0xCAA2330)
#define MOLEMOLE_UIBANGBOOUAVCARDITEMCOLLECTPAGECONTROLLER_INITREWARDBTN_OFFSET UNITYSDK_OFFSET(0xCAA2D20)
#define MOLEMOLE_UIBANGBOOUAVCARDITEMCOLLECTPAGECONTROLLER_INITTAB_OFFSET UNITYSDK_OFFSET(0xCAA2930)
#define MOLEMOLE_UIBANGBOOUAVCARDITEMCOLLECTPAGECONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0xCAA2340)
#define MOLEMOLE_UIBANGBOOUAVCARDITEMCOLLECTPAGECONTROLLER_ONTABSELECTHANDLE_OFFSET UNITYSDK_OFFSET(0xCAA3130)
#define MOLEMOLE_UIBANGBOOUAVCARDITEMCOLLECTPAGECONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0xCAA3080)
#define MOLEMOLE_UIBANGBOOUAVCARDITEMCOLLECTPAGECONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0xCAA23E0)
#define MOLEMOLE_UIBANGBOOUAVCARDITEMCOLLECTPAGECONTROLLER_OPENDETAIL_OFFSET UNITYSDK_OFFSET(0xCAA2F90)
#define MOLEMOLE_UIBANGBOOUAVCARDITEMCOLLECTPAGECONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0xCAA32B0)
#define MOLEMOLE_UIBANGBOOUAVCARDITEMCOLLECTPAGECONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0xCAA3320)
#define MOLEMOLE_UIBANGBOOUAVCARDITEMCOLLECTPAGECONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0xCAA3390)
#define MOLEMOLE_UIBANGBOOUAVCARDITEMCOLLECTPAGECONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0xCAA33A0)

namespace MoleMole
{
	inline static constexpr unsigned int UIBangBooUAVCardItemCollectPageController_TypeDefinitionIndex = 62188;

	class UIBangBooUAVCardItemCollectPageController : public ::MoleMole::UIWindowController
	{
	public:
		::Class_2_79AE422BA06F6D26_35* _view; // 0x2F8
		::System::Collections::Generic::List_1<::MoleMole::UIBangBooUAVCardItemCollectPageController_TabData>* typeTabs; // 0x300
		::Class_2_8EFBFDFF19FA6CA9* dreamModel; // 0x308
		::MoleMole::UIBangbooUAVWeaponCollectWidgetController* weaponWidget; // 0x310
		::MoleMole::UIBangbooUAVCardCollectWidgetController* cardWidget; // 0x318

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGBOOUAVCARDITEMCOLLECTPAGECONTROLLER__CTOR_OFFSET))(this);
		}

		::Enum_3_3EDF246633A325B0 get_windowType()
		{
			return ((::Enum_3_3EDF246633A325B0(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGBOOUAVCARDITEMCOLLECTPAGECONTROLLER_GET_WINDOWTYPE_OFFSET))(this);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGBOOUAVCARDITEMCOLLECTPAGECONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGBOOUAVCARDITEMCOLLECTPAGECONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OpenDetail()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGBOOUAVCARDITEMCOLLECTPAGECONTROLLER_OPENDETAIL_OFFSET))(this);
		}

		::System::Void InitRewardBtn()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGBOOUAVCARDITEMCOLLECTPAGECONTROLLER_INITREWARDBTN_OFFSET))(this);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGBOOUAVCARDITEMCOLLECTPAGECONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void InitTab()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGBOOUAVCARDITEMCOLLECTPAGECONTROLLER_INITTAB_OFFSET))(this);
		}

		::System::Void OnTabSelectHandle(::MoleMole::UIBangBooUAVCardItemCollectPageController_BangbooTabType type)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIBangBooUAVCardItemCollectPageController_BangbooTabType))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGBOOUAVCARDITEMCOLLECTPAGECONTROLLER_ONTABSELECTHANDLE_OFFSET))(this, type);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGBOOUAVCARDITEMCOLLECTPAGECONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGBOOUAVCARDITEMCOLLECTPAGECONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGBOOUAVCARDITEMCOLLECTPAGECONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}
	};
}
