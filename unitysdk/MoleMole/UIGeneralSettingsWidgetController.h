#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/ESystemSettingType.h"
#include "unitysdk/MoleMole/UIWidgetController.h"

class Class_2_2930B6D633C2701E_3;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace System { class EventArgs; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UIGENERALSETTINGSWIDGETCONTROLLER_INITVIEW_OFFSET UNITYSDK_OFFSET(0xA2A1490)
#define MOLEMOLE_UIGENERALSETTINGSWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0xA2A1C20)
#define MOLEMOLE_UIGENERALSETTINGSWIDGETCONTROLLER_ONLAYOUTPLATFORMCHANGED_OFFSET UNITYSDK_OFFSET(0xA2A1DA0)
#define MOLEMOLE_UIGENERALSETTINGSWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0xA2A1CC0)
#define MOLEMOLE_UIGENERALSETTINGSWIDGETCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0xA2A1320)
#define MOLEMOLE_UIGENERALSETTINGSWIDGETCONTROLLER_REFRESHVIEW_OFFSET UNITYSDK_OFFSET(0xA2A1E50)
#define MOLEMOLE_UIGENERALSETTINGSWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0xA2A1EC0)
#define MOLEMOLE_UIGENERALSETTINGSWIDGETCONTROLLER__ONUIOPEN_B__1_0_OFFSET UNITYSDK_OFFSET(0xA2A1F40)
#define MOLEMOLE_UIGENERALSETTINGSWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0xA2A2000)
#define MOLEMOLE_UIGENERALSETTINGSWIDGETCONTROLLER___BASE_ONLAYOUTPLATFORMCHANGED_OFFSET UNITYSDK_OFFSET(0xA2A2070)
#define MOLEMOLE_UIGENERALSETTINGSWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0xA2A20D0)
#define MOLEMOLE_UIGENERALSETTINGSWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0xA2A2150)

namespace MoleMole
{
	inline static constexpr unsigned int UIGeneralSettingsWidgetController_TypeDefinitionIndex = 45463;

	class UIGeneralSettingsWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::Class_2_2930B6D633C2701E_3* _view; // 0x2A0
		::MoleMole::ESystemSettingType _systemSettingType; // 0x2A8
		::System::Int32 _parentLayer; // 0x2AC
		::System::Collections::Generic::List_1<::MoleMole::UIWidgetController*>* _settingWidgetRowList; // 0x2B0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALSETTINGSWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALSETTINGSWIDGETCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALSETTINGSWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALSETTINGSWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void OnLayoutPlatformChanged()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALSETTINGSWIDGETCONTROLLER_ONLAYOUTPLATFORMCHANGED_OFFSET))(this);
		}

		::System::Void InitView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALSETTINGSWIDGETCONTROLLER_INITVIEW_OFFSET))(this);
		}

		::System::Void RefreshView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALSETTINGSWIDGETCONTROLLER_REFRESHVIEW_OFFSET))(this);
		}

		::System::Void _OnUIOpen_b__1_0(::System::EventArgs* args)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALSETTINGSWIDGETCONTROLLER__ONUIOPEN_B__1_0_OFFSET))(this, args);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALSETTINGSWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnLayoutPlatformChanged()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALSETTINGSWIDGETCONTROLLER___BASE_ONLAYOUTPLATFORMCHANGED_OFFSET))(this);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALSETTINGSWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALSETTINGSWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
