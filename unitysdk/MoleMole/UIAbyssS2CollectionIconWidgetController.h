#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIWidgetController.h"

class Class_2_22FEBBA7FA4D4D4A_6;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace System { class String; }

#define MOLEMOLE_UIABYSSS2COLLECTIONICONWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0xB5CB440)
#define MOLEMOLE_UIABYSSS2COLLECTIONICONWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0xB5CB4E0)
#define MOLEMOLE_UIABYSSS2COLLECTIONICONWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0xB5CB2F0)
#define MOLEMOLE_UIABYSSS2COLLECTIONICONWIDGETCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0xB5CB390)
#define MOLEMOLE_UIABYSSS2COLLECTIONICONWIDGETCONTROLLER_REFRESHVIEW_OFFSET UNITYSDK_OFFSET(0xB5CB5C0)
#define MOLEMOLE_UIABYSSS2COLLECTIONICONWIDGETCONTROLLER_SETICON_OFFSET UNITYSDK_OFFSET(0xB5CB6D0)
#define MOLEMOLE_UIABYSSS2COLLECTIONICONWIDGETCONTROLLER_SETOUTLINE_OFFSET UNITYSDK_OFFSET(0xB5CB770)
#define MOLEMOLE_UIABYSSS2COLLECTIONICONWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0xB5CB810)
#define MOLEMOLE_UIABYSSS2COLLECTIONICONWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0xB5CB840)
#define MOLEMOLE_UIABYSSS2COLLECTIONICONWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0xB5CB8B0)
#define MOLEMOLE_UIABYSSS2COLLECTIONICONWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0xB5CB930)
#define MOLEMOLE_UIABYSSS2COLLECTIONICONWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0xB5CB990)

namespace MoleMole
{
	inline static constexpr unsigned int UIAbyssS2CollectionIconWidgetController_TypeDefinitionIndex = 61659;

	class UIAbyssS2CollectionIconWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::Class_2_22FEBBA7FA4D4D4A_6* _view; // 0x2A0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2COLLECTIONICONWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2COLLECTIONICONWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2COLLECTIONICONWIDGETCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2COLLECTIONICONWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2COLLECTIONICONWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void RefreshView(::System::String* iconPath, ::System::Boolean outlineActive)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2COLLECTIONICONWIDGETCONTROLLER_REFRESHVIEW_OFFSET))(this, iconPath, outlineActive);
		}

		::System::Void SetOutline(::System::Boolean outlineActive)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2COLLECTIONICONWIDGETCONTROLLER_SETOUTLINE_OFFSET))(this, outlineActive);
		}

		::System::Void SetIcon(::System::String* iconPath)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2COLLECTIONICONWIDGETCONTROLLER_SETICON_OFFSET))(this, iconPath);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2COLLECTIONICONWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2COLLECTIONICONWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2COLLECTIONICONWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2COLLECTIONICONWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
