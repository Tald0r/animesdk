#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIWidgetController.h"

class Class_1_48D56DACBE4271BC;
class Class_2_8127D35606966C67_5;
class Class_2_E71E286B10A21FB0;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }

#define MOLEMOLE_UIABINLEVELRANKINFOWIDGETCONTROLLER_BINDVIEW_OFFSET UNITYSDK_OFFSET(0xB316450)
#define MOLEMOLE_UIABINLEVELRANKINFOWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0xB3162D0)
#define MOLEMOLE_UIABINLEVELRANKINFOWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0xB316370)
#define MOLEMOLE_UIABINLEVELRANKINFOWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0xB3160A0)
#define MOLEMOLE_UIABINLEVELRANKINFOWIDGETCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0xB316160)
#define MOLEMOLE_UIABINLEVELRANKINFOWIDGETCONTROLLER__BINDVIEW_B__7_0_OFFSET UNITYSDK_OFFSET(0xB316660)
#define MOLEMOLE_UIABINLEVELRANKINFOWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0xB316630)
#define MOLEMOLE_UIABINLEVELRANKINFOWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0xB3167B0)
#define MOLEMOLE_UIABINLEVELRANKINFOWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0xB316820)
#define MOLEMOLE_UIABINLEVELRANKINFOWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0xB3168A0)
#define MOLEMOLE_UIABINLEVELRANKINFOWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0xB316900)

namespace MoleMole
{
	inline static constexpr unsigned int UIABInLevelRankInfoWidgetController_TypeDefinitionIndex = 39826;

	class UIABInLevelRankInfoWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::Class_2_8127D35606966C67_5* _view; // 0x2A0
		::Class_1_48D56DACBE4271BC* _syncHelper; // 0x2A8
		::Class_2_E71E286B10A21FB0* _inLevelData; // 0x2B0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABINLEVELRANKINFOWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABINLEVELRANKINFOWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABINLEVELRANKINFOWIDGETCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABINLEVELRANKINFOWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABINLEVELRANKINFOWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void BindView(::Class_2_E71E286B10A21FB0* inLevelData)
		{
			return ((::System::Void(*)(::PVOID, ::Class_2_E71E286B10A21FB0*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABINLEVELRANKINFOWIDGETCONTROLLER_BINDVIEW_OFFSET))(this, inLevelData);
		}

		::System::Void _BindView_b__7_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABINLEVELRANKINFOWIDGETCONTROLLER__BINDVIEW_B__7_0_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABINLEVELRANKINFOWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABINLEVELRANKINFOWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABINLEVELRANKINFOWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABINLEVELRANKINFOWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
