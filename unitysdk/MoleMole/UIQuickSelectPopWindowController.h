#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_3EDF246633A325B0.h"
#include "unitysdk/MoleMole/UIWindowController.h"

class Class_1_0D6706375CDAAE8C;
class Class_2_60638234271CCDB8_120;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace MoleMole { class UIGeneralFilterGroupRowWidgetController; }
namespace MoleMole { class UIGeneralFilterItemRowWidgetController; }
namespace MoleMole { class UIGeneralToggleWidgetController; }
namespace MoleMole { class UIQuickSelectPopWindowContext; }

#define MOLEMOLE_UIQUICKSELECTPOPWINDOWCONTROLLER_GET_WINDOWTYPE_OFFSET UNITYSDK_OFFSET(0xA3E8150)
#define MOLEMOLE_UIQUICKSELECTPOPWINDOWCONTROLLER_ISITEMEQUIPPED_OFFSET UNITYSDK_OFFSET(0xA3E9E70)
#define MOLEMOLE_UIQUICKSELECTPOPWINDOWCONTROLLER_ISITEMLEVELUP_OFFSET UNITYSDK_OFFSET(0xA3E9F70)
#define MOLEMOLE_UIQUICKSELECTPOPWINDOWCONTROLLER_ISITEMLOCK_OFFSET UNITYSDK_OFFSET(0xA3E9D60)
#define MOLEMOLE_UIQUICKSELECTPOPWINDOWCONTROLLER_ISITEMTRASH_OFFSET UNITYSDK_OFFSET(0xA3EA080)
#define MOLEMOLE_UIQUICKSELECTPOPWINDOWCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0xA3E9350)
#define MOLEMOLE_UIQUICKSELECTPOPWINDOWCONTROLLER_ONOKBTNCLICK_OFFSET UNITYSDK_OFFSET(0xA3EA150)
#define MOLEMOLE_UIQUICKSELECTPOPWINDOWCONTROLLER_ONRESETBTNCLICK_OFFSET UNITYSDK_OFFSET(0xA3EA430)
#define MOLEMOLE_UIQUICKSELECTPOPWINDOWCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0xA3E93F0)
#define MOLEMOLE_UIQUICKSELECTPOPWINDOWCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0xA3E8160)
#define MOLEMOLE_UIQUICKSELECTPOPWINDOWCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0xA3E8450)
#define MOLEMOLE_UIQUICKSELECTPOPWINDOWCONTROLLER_REFRESHITEMTYPEROW_OFFSET UNITYSDK_OFFSET(0xA3E9480)
#define MOLEMOLE_UIQUICKSELECTPOPWINDOWCONTROLLER_REFRESHNUM_OFFSET UNITYSDK_OFFSET(0xA3E9750)
#define MOLEMOLE_UIQUICKSELECTPOPWINDOWCONTROLLER_REFRESHVIEW_OFFSET UNITYSDK_OFFSET(0xA3E8600)
#define MOLEMOLE_UIQUICKSELECTPOPWINDOWCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0xA3EA4A0)
#define MOLEMOLE_UIQUICKSELECTPOPWINDOWCONTROLLER__REFRESHVIEW_B__20_0_OFFSET UNITYSDK_OFFSET(0xA3EA4B0)
#define MOLEMOLE_UIQUICKSELECTPOPWINDOWCONTROLLER__REFRESHVIEW_B__20_1_OFFSET UNITYSDK_OFFSET(0xA3EA4E0)
#define MOLEMOLE_UIQUICKSELECTPOPWINDOWCONTROLLER__REFRESHVIEW_B__20_2_OFFSET UNITYSDK_OFFSET(0xA3EA530)
#define MOLEMOLE_UIQUICKSELECTPOPWINDOWCONTROLLER__REFRESHVIEW_B__20_3_OFFSET UNITYSDK_OFFSET(0xA3EA580)
#define MOLEMOLE_UIQUICKSELECTPOPWINDOWCONTROLLER__REFRESHVIEW_B__20_4_OFFSET UNITYSDK_OFFSET(0xA3EA5D0)
#define MOLEMOLE_UIQUICKSELECTPOPWINDOWCONTROLLER__REFRESHVIEW_B__20_5_OFFSET UNITYSDK_OFFSET(0xA3EA620)
#define MOLEMOLE_UIQUICKSELECTPOPWINDOWCONTROLLER__REFRESHVIEW_B__20_6_OFFSET UNITYSDK_OFFSET(0xA3EA670)
#define MOLEMOLE_UIQUICKSELECTPOPWINDOWCONTROLLER__REFRESHVIEW_B__20_7_OFFSET UNITYSDK_OFFSET(0xA3EA6A0)
#define MOLEMOLE_UIQUICKSELECTPOPWINDOWCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0xA3EA6D0)
#define MOLEMOLE_UIQUICKSELECTPOPWINDOWCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0xA3EA740)
#define MOLEMOLE_UIQUICKSELECTPOPWINDOWCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0xA3EA750)
#define MOLEMOLE_UIQUICKSELECTPOPWINDOWCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0xA3EA760)

namespace MoleMole
{
	inline static constexpr unsigned int UIQuickSelectPopWindowController_TypeDefinitionIndex = 74392;

	class UIQuickSelectPopWindowController : public ::MoleMole::UIWindowController
	{
	public:
		::Class_2_60638234271CCDB8_120* _view; // 0x2F8
		::MoleMole::UIQuickSelectPopWindowContext* _context; // 0x300
		::MoleMole::UIGeneralFilterGroupRowWidgetController* _itemTypeWidgetDelete; // 0x308
		::MoleMole::UIGeneralFilterItemRowWidgetController* _itemTypeRowWidgetAll; // 0x310
		::MoleMole::UIGeneralFilterGroupRowWidgetController* _itemTypeWidgetRarity; // 0x318
		::MoleMole::UIGeneralFilterItemRowWidgetController* _itemTypeRowWidgetB; // 0x320
		::MoleMole::UIGeneralFilterItemRowWidgetController* _itemTypeRowWidgetA; // 0x328
		::MoleMole::UIGeneralFilterItemRowWidgetController* _itemTypeRowWidgetS; // 0x330
		::System::Boolean isSelectAllDelete; // 0x338
		::System::Boolean isSelectBRarity; // 0x339
		::System::Boolean isSelectARarity; // 0x33A
		::System::Boolean isSelectSRarity; // 0x33B
		::System::Int32 curSelectRarity; // 0x33C
		::MoleMole::UIGeneralToggleWidgetController* _toggle; // 0x340

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIQUICKSELECTPOPWINDOWCONTROLLER__CTOR_OFFSET))(this);
		}

		::Enum_3_3EDF246633A325B0 get_windowType()
		{
			return ((::Enum_3_3EDF246633A325B0(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIQUICKSELECTPOPWINDOWCONTROLLER_GET_WINDOWTYPE_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIQUICKSELECTPOPWINDOWCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIQUICKSELECTPOPWINDOWCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIQUICKSELECTPOPWINDOWCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIQUICKSELECTPOPWINDOWCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void RefreshView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIQUICKSELECTPOPWINDOWCONTROLLER_REFRESHVIEW_OFFSET))(this);
		}

		::System::Void RefreshItemTypeRow()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIQUICKSELECTPOPWINDOWCONTROLLER_REFRESHITEMTYPEROW_OFFSET))(this);
		}

		::System::Void RefreshNum()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIQUICKSELECTPOPWINDOWCONTROLLER_REFRESHNUM_OFFSET))(this);
		}

		::System::Boolean IsItemLock(::Class_1_0D6706375CDAAE8C* itemData)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_0D6706375CDAAE8C*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIQUICKSELECTPOPWINDOWCONTROLLER_ISITEMLOCK_OFFSET))(this, itemData);
		}

		::System::Boolean IsItemTrash(::Class_1_0D6706375CDAAE8C* itemData)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_0D6706375CDAAE8C*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIQUICKSELECTPOPWINDOWCONTROLLER_ISITEMTRASH_OFFSET))(this, itemData);
		}

		::System::Boolean IsItemEquipped(::Class_1_0D6706375CDAAE8C* itemData)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_0D6706375CDAAE8C*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIQUICKSELECTPOPWINDOWCONTROLLER_ISITEMEQUIPPED_OFFSET))(this, itemData);
		}

		::System::Boolean IsItemLevelUp(::Class_1_0D6706375CDAAE8C* itemData)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_0D6706375CDAAE8C*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIQUICKSELECTPOPWINDOWCONTROLLER_ISITEMLEVELUP_OFFSET))(this, itemData);
		}

		::System::Void OnOkBtnClick()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIQUICKSELECTPOPWINDOWCONTROLLER_ONOKBTNCLICK_OFFSET))(this);
		}

		::System::Void OnResetBtnClick()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIQUICKSELECTPOPWINDOWCONTROLLER_ONRESETBTNCLICK_OFFSET))(this);
		}

		::System::Void _RefreshView_b__20_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIQUICKSELECTPOPWINDOWCONTROLLER__REFRESHVIEW_B__20_0_OFFSET))(this);
		}

		::System::Void _RefreshView_b__20_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIQUICKSELECTPOPWINDOWCONTROLLER__REFRESHVIEW_B__20_1_OFFSET))(this);
		}

		::System::Void _RefreshView_b__20_2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIQUICKSELECTPOPWINDOWCONTROLLER__REFRESHVIEW_B__20_2_OFFSET))(this);
		}

		::System::Void _RefreshView_b__20_3()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIQUICKSELECTPOPWINDOWCONTROLLER__REFRESHVIEW_B__20_3_OFFSET))(this);
		}

		::System::Void _RefreshView_b__20_4()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIQUICKSELECTPOPWINDOWCONTROLLER__REFRESHVIEW_B__20_4_OFFSET))(this);
		}

		::System::Void _RefreshView_b__20_5()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIQUICKSELECTPOPWINDOWCONTROLLER__REFRESHVIEW_B__20_5_OFFSET))(this);
		}

		::System::Void _RefreshView_b__20_6()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIQUICKSELECTPOPWINDOWCONTROLLER__REFRESHVIEW_B__20_6_OFFSET))(this);
		}

		::System::Void _RefreshView_b__20_7()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIQUICKSELECTPOPWINDOWCONTROLLER__REFRESHVIEW_B__20_7_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIQUICKSELECTPOPWINDOWCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIQUICKSELECTPOPWINDOWCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIQUICKSELECTPOPWINDOWCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIQUICKSELECTPOPWINDOWCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
