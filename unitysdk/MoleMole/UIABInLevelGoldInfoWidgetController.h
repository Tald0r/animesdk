#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIWidgetController.h"

class Class_1_48D56DACBE4271BC;
class Class_2_8127D35606966C67_2;
class Class_2_E71E286B10A21FB0;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }

#define MOLEMOLE_UIABINLEVELGOLDINFOWIDGETCONTROLLER_BINDVIEW_OFFSET UNITYSDK_OFFSET(0xD398920)
#define MOLEMOLE_UIABINLEVELGOLDINFOWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0xD398790)
#define MOLEMOLE_UIABINLEVELGOLDINFOWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0xD398830)
#define MOLEMOLE_UIABINLEVELGOLDINFOWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0xD398640)
#define MOLEMOLE_UIABINLEVELGOLDINFOWIDGETCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0xD3986E0)
#define MOLEMOLE_UIABINLEVELGOLDINFOWIDGETCONTROLLER__BINDVIEW_B__7_0_OFFSET UNITYSDK_OFFSET(0xD398B80)
#define MOLEMOLE_UIABINLEVELGOLDINFOWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0xD398B50)
#define MOLEMOLE_UIABINLEVELGOLDINFOWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0xD398D90)
#define MOLEMOLE_UIABINLEVELGOLDINFOWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0xD398E00)
#define MOLEMOLE_UIABINLEVELGOLDINFOWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0xD398E80)
#define MOLEMOLE_UIABINLEVELGOLDINFOWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0xD398EE0)

namespace MoleMole
{
	inline static constexpr unsigned int UIABInLevelGoldInfoWidgetController_TypeDefinitionIndex = 38886;

	class UIABInLevelGoldInfoWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::Class_2_8127D35606966C67_2* _view; // 0x2A0
		::Class_2_E71E286B10A21FB0* _inLevelData; // 0x2A8
		::Class_1_48D56DACBE4271BC* _syncHelper; // 0x2B0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABINLEVELGOLDINFOWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABINLEVELGOLDINFOWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABINLEVELGOLDINFOWIDGETCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABINLEVELGOLDINFOWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABINLEVELGOLDINFOWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void BindView(::Class_2_E71E286B10A21FB0* data)
		{
			return ((::System::Void(*)(::PVOID, ::Class_2_E71E286B10A21FB0*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABINLEVELGOLDINFOWIDGETCONTROLLER_BINDVIEW_OFFSET))(this, data);
		}

		::System::Void _BindView_b__7_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABINLEVELGOLDINFOWIDGETCONTROLLER__BINDVIEW_B__7_0_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABINLEVELGOLDINFOWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABINLEVELGOLDINFOWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABINLEVELGOLDINFOWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABINLEVELGOLDINFOWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
