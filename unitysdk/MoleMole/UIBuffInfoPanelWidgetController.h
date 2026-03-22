#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/MoleMole/UIWidgetController.h"

class Class_2_809B068491AD1EEA_4;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace System { class String; }

#define MOLEMOLE_UIBUFFINFOPANELWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0xB91DE00)
#define MOLEMOLE_UIBUFFINFOPANELWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0xB91DEA0)
#define MOLEMOLE_UIBUFFINFOPANELWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0xB91DCB0)
#define MOLEMOLE_UIBUFFINFOPANELWIDGETCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0xB91DD50)
#define MOLEMOLE_UIBUFFINFOPANELWIDGETCONTROLLER_REFRESHBUFFID_OFFSET UNITYSDK_OFFSET(0xB91DF80)
#define MOLEMOLE_UIBUFFINFOPANELWIDGETCONTROLLER_REFRESHBUFF_1_OFFSET UNITYSDK_OFFSET(0xB91E2C0)
#define MOLEMOLE_UIBUFFINFOPANELWIDGETCONTROLLER_REFRESHBUFF_OFFSET UNITYSDK_OFFSET(0xB91E070)
#define MOLEMOLE_UIBUFFINFOPANELWIDGETCONTROLLER_SETTITLE_OFFSET UNITYSDK_OFFSET(0xB91E1A0)
#define MOLEMOLE_UIBUFFINFOPANELWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0xB91E420)
#define MOLEMOLE_UIBUFFINFOPANELWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0xB91E450)
#define MOLEMOLE_UIBUFFINFOPANELWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0xB91E4C0)
#define MOLEMOLE_UIBUFFINFOPANELWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0xB91E540)
#define MOLEMOLE_UIBUFFINFOPANELWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0xB91E5A0)

namespace MoleMole
{
	inline static constexpr unsigned int UIBuffInfoPanelWidgetController_TypeDefinitionIndex = 47957;

	class UIBuffInfoPanelWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::Class_2_809B068491AD1EEA_4* _view; // 0x2A0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBUFFINFOPANELWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBUFFINFOPANELWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBUFFINFOPANELWIDGETCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBUFFINFOPANELWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBUFFINFOPANELWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void RefreshBuffID(::System::Int32 buffID)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBUFFINFOPANELWIDGETCONTROLLER_REFRESHBUFFID_OFFSET))(this, buffID);
		}

		::System::Void RefreshBuff(::System::String* nameKey, ::Foundation::AssetPath iconPath, ::System::String* descKey)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::Foundation::AssetPath, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBUFFINFOPANELWIDGETCONTROLLER_REFRESHBUFF_OFFSET))(this, nameKey, iconPath, descKey);
		}

		::System::Void SetTitle(::System::String* titleKey)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBUFFINFOPANELWIDGETCONTROLLER_SETTITLE_OFFSET))(this, titleKey);
		}

		::System::Void RefreshBuff_1(::System::String* nameKey, ::Foundation::AssetPath iconPath, ::System::String* descKey, ::System::Boolean showTitle, ::System::Boolean showBuff, ::System::Boolean showDesc)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::Foundation::AssetPath, ::System::String*, ::System::Boolean, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBUFFINFOPANELWIDGETCONTROLLER_REFRESHBUFF_1_OFFSET))(this, nameKey, iconPath, descKey, showTitle, showBuff, showDesc);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBUFFINFOPANELWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBUFFINFOPANELWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBUFFINFOPANELWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBUFFINFOPANELWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
