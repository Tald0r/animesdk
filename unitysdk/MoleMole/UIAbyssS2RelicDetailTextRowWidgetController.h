#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIWidgetController.h"

class Class_2_208CC9941471731A_620;
class Class_2_8127D35606966C67_3;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace System { class String; }

#define MOLEMOLE_UIABYSSS2RELICDETAILTEXTROWWIDGETCONTROLLER_BUILDLEVELDESC_OFFSET UNITYSDK_OFFSET(0x9AEF7B0)
#define MOLEMOLE_UIABYSSS2RELICDETAILTEXTROWWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x9AEF310)
#define MOLEMOLE_UIABYSSS2RELICDETAILTEXTROWWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x9AEF3B0)
#define MOLEMOLE_UIABYSSS2RELICDETAILTEXTROWWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x9AEF270)
#define MOLEMOLE_UIABYSSS2RELICDETAILTEXTROWWIDGETCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x9AEF490)
#define MOLEMOLE_UIABYSSS2RELICDETAILTEXTROWWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x9AEFC40)
#define MOLEMOLE_UIABYSSS2RELICDETAILTEXTROWWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x9AEFC70)
#define MOLEMOLE_UIABYSSS2RELICDETAILTEXTROWWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x9AEFCE0)
#define MOLEMOLE_UIABYSSS2RELICDETAILTEXTROWWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x9AEFD60)
#define MOLEMOLE_UIABYSSS2RELICDETAILTEXTROWWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x9AEFDC0)

namespace MoleMole
{
	inline static constexpr unsigned int UIAbyssS2RelicDetailTextRowWidgetController_TypeDefinitionIndex = 56722;

	class UIAbyssS2RelicDetailTextRowWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		// static const ::System::String* RelicNormalLevelColor; // 0x0
		// static const ::System::String* RelicCurLevelLevelColor; // 0x0
		// static const ::System::String* RelicCurLevelTextColor; // 0x0
		::Class_2_8127D35606966C67_3* _view; // 0x2A0
		::System::Boolean _showDetail; // 0x2A8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2RELICDETAILTEXTROWWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2RELICDETAILTEXTROWWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2RELICDETAILTEXTROWWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2RELICDETAILTEXTROWWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2RELICDETAILTEXTROWWIDGETCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::String* BuildLevelDesc(::Class_2_208CC9941471731A_620* levelConfig, ::System::Boolean light, ::System::Boolean hideLevel)
		{
			return ((::System::String*(*)(::PVOID, ::Class_2_208CC9941471731A_620*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2RELICDETAILTEXTROWWIDGETCONTROLLER_BUILDLEVELDESC_OFFSET))(this, levelConfig, light, hideLevel);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2RELICDETAILTEXTROWWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2RELICDETAILTEXTROWWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2RELICDETAILTEXTROWWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2RELICDETAILTEXTROWWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
