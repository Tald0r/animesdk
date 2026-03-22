#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UISettingEnumWidgetController.h"
#include "unitysdk/Struct_2_037D21AC29ED1130.h"

class Class_2_4ADD0419C7E71A92_1;
class Class_2_60DDD9C206686F44;
namespace MoleMole { class UIControllerContextBase; }
namespace MoleMole { class UIGeneralDynamicTipsPopWindowController; }
namespace MoleMole { class UIGeneralOptionDropDownBoxContext; }
namespace MoleMole { class UIGeneralPopUpHintWidgetController; }

#define MOLEMOLE_UIGENERALOPTIONDROPDOWNBOXCONTROLLER_GETBUTTON_OFFSET UNITYSDK_OFFSET(0xBFF4D20)
#define MOLEMOLE_UIGENERALOPTIONDROPDOWNBOXCONTROLLER_INITVIEW_OFFSET UNITYSDK_OFFSET(0xBFF4360)
#define MOLEMOLE_UIGENERALOPTIONDROPDOWNBOXCONTROLLER_ONDYNAMICTIPSCLOSE_OFFSET UNITYSDK_OFFSET(0xBFF4D90)
#define MOLEMOLE_UIGENERALOPTIONDROPDOWNBOXCONTROLLER_ONFILTERDROPVALUECHANGE_OFFSET UNITYSDK_OFFSET(0xBFF4F00)
#define MOLEMOLE_UIGENERALOPTIONDROPDOWNBOXCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0xBFF4080)
#define MOLEMOLE_UIGENERALOPTIONDROPDOWNBOXCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0xBFF4120)
#define MOLEMOLE_UIGENERALOPTIONDROPDOWNBOXCONTROLLER_REFRESHCONTEXT_OFFSET UNITYSDK_OFFSET(0xBFF4E80)
#define MOLEMOLE_UIGENERALOPTIONDROPDOWNBOXCONTROLLER_SETENABLE_OFFSET UNITYSDK_OFFSET(0xBFF4E10)
#define MOLEMOLE_UIGENERALOPTIONDROPDOWNBOXCONTROLLER_SHOWDROPDOWN_OFFSET UNITYSDK_OFFSET(0xBFF4790)
#define MOLEMOLE_UIGENERALOPTIONDROPDOWNBOXCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0xBFF5350)
#define MOLEMOLE_UIGENERALOPTIONDROPDOWNBOXCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0xBFF5360)
#define MOLEMOLE_UIGENERALOPTIONDROPDOWNBOXCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0xBFF53C0)

namespace MoleMole
{
	inline static constexpr unsigned int UIGeneralOptionDropDownBoxController_TypeDefinitionIndex = 41451;

	class UIGeneralOptionDropDownBoxController : public ::MoleMole::UISettingEnumWidgetController
	{
	public:
		::System::Boolean enabled; // 0x2E0
		::Class_2_4ADD0419C7E71A92_1* _view; // 0x2E8
		::MoleMole::UIGeneralOptionDropDownBoxContext* _context; // 0x2F0
		::MoleMole::UIGeneralPopUpHintWidgetController* _popUpHintController; // 0x2F8
		::MoleMole::UIGeneralDynamicTipsPopWindowController* _filterSelect; // 0x300
		::System::Int32 _curSelectIndex; // 0x308
		::Il2CppArray<::Struct_2_037D21AC29ED1130>* _selects; // 0x310

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALOPTIONDROPDOWNBOXCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALOPTIONDROPDOWNBOXCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALOPTIONDROPDOWNBOXCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void InitView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALOPTIONDROPDOWNBOXCONTROLLER_INITVIEW_OFFSET))(this);
		}

		::System::Void ShowDropDown()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALOPTIONDROPDOWNBOXCONTROLLER_SHOWDROPDOWN_OFFSET))(this);
		}

		::Class_2_60DDD9C206686F44* GetButton()
		{
			return ((::Class_2_60DDD9C206686F44*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALOPTIONDROPDOWNBOXCONTROLLER_GETBUTTON_OFFSET))(this);
		}

		::System::Void OnDynamicTipsClose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALOPTIONDROPDOWNBOXCONTROLLER_ONDYNAMICTIPSCLOSE_OFFSET))(this);
		}

		::System::Void SetEnable(::System::Boolean enable)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALOPTIONDROPDOWNBOXCONTROLLER_SETENABLE_OFFSET))(this, enable);
		}

		::System::Void RefreshContext(::MoleMole::UIGeneralOptionDropDownBoxContext* context)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIGeneralOptionDropDownBoxContext*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALOPTIONDROPDOWNBOXCONTROLLER_REFRESHCONTEXT_OFFSET))(this, context);
		}

		::System::Void OnFilterDropValueChange(::System::Int32 index, ::System::Boolean isSelectChanged)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALOPTIONDROPDOWNBOXCONTROLLER_ONFILTERDROPVALUECHANGE_OFFSET))(this, index, isSelectChanged);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALOPTIONDROPDOWNBOXCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALOPTIONDROPDOWNBOXCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
