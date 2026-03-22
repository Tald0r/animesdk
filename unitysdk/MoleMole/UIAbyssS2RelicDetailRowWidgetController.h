#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/MoleMole/UIWidgetController.h"

class Class_2_208CC9941471731A_620;
class Class_2_75FB4A09078427E5_5;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace System { class String; }

#define MOLEMOLE_UIABYSSS2RELICDETAILROWWIDGETCONTROLLER_BUILDLEVELDESC_OFFSET UNITYSDK_OFFSET(0xD84F0A0)
#define MOLEMOLE_UIABYSSS2RELICDETAILROWWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0xD84E8C0)
#define MOLEMOLE_UIABYSSS2RELICDETAILROWWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0xD84F530)
#define MOLEMOLE_UIABYSSS2RELICDETAILROWWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0xD84E820)
#define MOLEMOLE_UIABYSSS2RELICDETAILROWWIDGETCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0xD84EB70)
#define MOLEMOLE_UIABYSSS2RELICDETAILROWWIDGETCONTROLLER_REFRESHVIEW_OFFSET UNITYSDK_OFFSET(0xD84E960)
#define MOLEMOLE_UIABYSSS2RELICDETAILROWWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0xD84F610)
#define MOLEMOLE_UIABYSSS2RELICDETAILROWWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0xD84F640)
#define MOLEMOLE_UIABYSSS2RELICDETAILROWWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0xD84F6B0)
#define MOLEMOLE_UIABYSSS2RELICDETAILROWWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0xD84F730)
#define MOLEMOLE_UIABYSSS2RELICDETAILROWWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0xD84F790)

namespace MoleMole
{
	inline static constexpr unsigned int UIAbyssS2RelicDetailRowWidgetController_TypeDefinitionIndex = 63548;

	class UIAbyssS2RelicDetailRowWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		// static const ::System::String* RelicNormalLevelColor; // 0x0
		// static const ::System::String* RelicCurLevelLevelColor; // 0x0
		// static const ::System::String* RelicCurLevelTextColor; // 0x0
		::Class_2_75FB4A09078427E5_5* _view; // 0x2A0
		::System::Boolean _showDetail; // 0x2A8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2RELICDETAILROWWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2RELICDETAILROWWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2RELICDETAILROWWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void RefreshView(::Foundation::AssetPath iconPath, ::System::String* iconText, ::System::String* detail)
		{
			return ((::System::Void(*)(::PVOID, ::Foundation::AssetPath, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2RELICDETAILROWWIDGETCONTROLLER_REFRESHVIEW_OFFSET))(this, iconPath, iconText, detail);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2RELICDETAILROWWIDGETCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2RELICDETAILROWWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::String* BuildLevelDesc(::Class_2_208CC9941471731A_620* levelConfig, ::System::Boolean light, ::System::Boolean hideLevel)
		{
			return ((::System::String*(*)(::PVOID, ::Class_2_208CC9941471731A_620*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2RELICDETAILROWWIDGETCONTROLLER_BUILDLEVELDESC_OFFSET))(this, levelConfig, light, hideLevel);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2RELICDETAILROWWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2RELICDETAILROWWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2RELICDETAILROWWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2RELICDETAILROWWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
