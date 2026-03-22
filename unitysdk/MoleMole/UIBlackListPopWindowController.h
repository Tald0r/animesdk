#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_3EDF246633A325B0.h"
#include "unitysdk/MoleMole/UIWindowController.h"
#include "unitysdk/Struct_2_3912DACC4CA46F07.h"

class Class_1_BE6BF7909AD9D940;
class Class_2_2F3C7D4EFC74D485;
class Class_2_F71813D54A1980F5;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UIBLACKLISTPOPWINDOWCONTROLLER_GET_WINDOWTYPE_OFFSET UNITYSDK_OFFSET(0xA25A110)
#define MOLEMOLE_UIBLACKLISTPOPWINDOWCONTROLLER_ONCLICKCONSOLEBLACKLISTTAB_OFFSET UNITYSDK_OFFSET(0xA25B310)
#define MOLEMOLE_UIBLACKLISTPOPWINDOWCONTROLLER_ONCLICKINGAMEBLACKLISTTAB_OFFSET UNITYSDK_OFFSET(0xA25B380)
#define MOLEMOLE_UIBLACKLISTPOPWINDOWCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0xA25A940)
#define MOLEMOLE_UIBLACKLISTPOPWINDOWCONTROLLER_ONRECEIVEBLACKLIST_OFFSET UNITYSDK_OFFSET(0xA25AA70)
#define MOLEMOLE_UIBLACKLISTPOPWINDOWCONTROLLER_ONREMOVEFROMBLACKLIST_OFFSET UNITYSDK_OFFSET(0xA25AF80)
#define MOLEMOLE_UIBLACKLISTPOPWINDOWCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0xA25A9E0)
#define MOLEMOLE_UIBLACKLISTPOPWINDOWCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0xA25A120)
#define MOLEMOLE_UIBLACKLISTPOPWINDOWCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0xA25A890)
#define MOLEMOLE_UIBLACKLISTPOPWINDOWCONTROLLER_PLATFORM_ONRECEIVEBLACKLIST_OFFSET UNITYSDK_OFFSET(0xA25B0E0)
#define MOLEMOLE_UIBLACKLISTPOPWINDOWCONTROLLER_SHOWEMPTYCONTENT_OFFSET UNITYSDK_OFFSET(0xA25AC70)
#define MOLEMOLE_UIBLACKLISTPOPWINDOWCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0xA25B450)
#define MOLEMOLE_UIBLACKLISTPOPWINDOWCONTROLLER__ONUIINIT_B__4_0_OFFSET UNITYSDK_OFFSET(0xA25B4C0)
#define MOLEMOLE_UIBLACKLISTPOPWINDOWCONTROLLER__ONUIINIT_B__4_1_OFFSET UNITYSDK_OFFSET(0xA25B540)
#define MOLEMOLE_UIBLACKLISTPOPWINDOWCONTROLLER__ONUIINIT_B__4_2_OFFSET UNITYSDK_OFFSET(0xA25B5C0)
#define MOLEMOLE_UIBLACKLISTPOPWINDOWCONTROLLER__ONUIINIT_B__4_3_OFFSET UNITYSDK_OFFSET(0xA25B5D0)
#define MOLEMOLE_UIBLACKLISTPOPWINDOWCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0xA25B640)
#define MOLEMOLE_UIBLACKLISTPOPWINDOWCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0xA25B6B0)
#define MOLEMOLE_UIBLACKLISTPOPWINDOWCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0xA25B6C0)
#define MOLEMOLE_UIBLACKLISTPOPWINDOWCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0xA25B6D0)

namespace MoleMole
{
	inline static constexpr unsigned int UIBlackListPopWindowController_TypeDefinitionIndex = 41404;

	class UIBlackListPopWindowController : public ::MoleMole::UIWindowController
	{
	public:
		::Class_2_2F3C7D4EFC74D485* _model; // 0x2F8
		::Class_2_F71813D54A1980F5* _view; // 0x300
		::System::Int32 _currSelectIdx; // 0x308
		::System::Collections::Generic::List_1<::Class_1_BE6BF7909AD9D940*>* _blackList; // 0x310
		::System::Collections::Generic::List_1<::Struct_2_3912DACC4CA46F07>* _dataList; // 0x318
		::System::Boolean _allowShowPlatform; // 0x320
		::System::Boolean _isSelectingInGameTab; // 0x321

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBLACKLISTPOPWINDOWCONTROLLER__CTOR_OFFSET))(this);
		}

		::Enum_3_3EDF246633A325B0 get_windowType()
		{
			return ((::Enum_3_3EDF246633A325B0(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBLACKLISTPOPWINDOWCONTROLLER_GET_WINDOWTYPE_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBLACKLISTPOPWINDOWCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBLACKLISTPOPWINDOWCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBLACKLISTPOPWINDOWCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBLACKLISTPOPWINDOWCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void OnReceiveBlackList(::System::Collections::Generic::List_1<::Class_1_BE6BF7909AD9D940*>* list)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_1_BE6BF7909AD9D940*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBLACKLISTPOPWINDOWCONTROLLER_ONRECEIVEBLACKLIST_OFFSET))(this, list);
		}

		::System::Void OnRemoveFromBlackList(::System::Int32 index)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBLACKLISTPOPWINDOWCONTROLLER_ONREMOVEFROMBLACKLIST_OFFSET))(this, index);
		}

		::System::Void ShowEmptyContent(::System::Boolean isEmpty)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBLACKLISTPOPWINDOWCONTROLLER_SHOWEMPTYCONTENT_OFFSET))(this, isEmpty);
		}

		::System::Void Platform_OnReceiveBlackList(::System::Collections::Generic::List_1<::Class_1_BE6BF7909AD9D940*>* list)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_1_BE6BF7909AD9D940*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBLACKLISTPOPWINDOWCONTROLLER_PLATFORM_ONRECEIVEBLACKLIST_OFFSET))(this, list);
		}

		::System::Void OnClickConsoleBlackListTab()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBLACKLISTPOPWINDOWCONTROLLER_ONCLICKCONSOLEBLACKLISTTAB_OFFSET))(this);
		}

		::System::Void OnClickInGameBlackListTab()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBLACKLISTPOPWINDOWCONTROLLER_ONCLICKINGAMEBLACKLISTTAB_OFFSET))(this);
		}

		::System::Void _OnUIInit_b__4_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBLACKLISTPOPWINDOWCONTROLLER__ONUIINIT_B__4_0_OFFSET))(this);
		}

		::System::Void _OnUIInit_b__4_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBLACKLISTPOPWINDOWCONTROLLER__ONUIINIT_B__4_1_OFFSET))(this);
		}

		::System::Void _OnUIInit_b__4_2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBLACKLISTPOPWINDOWCONTROLLER__ONUIINIT_B__4_2_OFFSET))(this);
		}

		::System::Void _OnUIInit_b__4_3()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBLACKLISTPOPWINDOWCONTROLLER__ONUIINIT_B__4_3_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBLACKLISTPOPWINDOWCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBLACKLISTPOPWINDOWCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBLACKLISTPOPWINDOWCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBLACKLISTPOPWINDOWCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
