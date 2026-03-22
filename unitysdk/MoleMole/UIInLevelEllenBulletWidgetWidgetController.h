#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIWidgetController.h"

class Class_2_3F751654DB473886_7;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }

#define MOLEMOLE_UIINLEVELELLENBULLETWIDGETWIDGETCONTROLLER_HANDLESHOWLIGHT_OFFSET UNITYSDK_OFFSET(0x80B7030)
#define MOLEMOLE_UIINLEVELELLENBULLETWIDGETWIDGETCONTROLLER_HANDLESHOW_OFFSET UNITYSDK_OFFSET(0x80B6EF0)
#define MOLEMOLE_UIINLEVELELLENBULLETWIDGETWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x80B6D70)
#define MOLEMOLE_UIINLEVELELLENBULLETWIDGETWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x80B6E10)
#define MOLEMOLE_UIINLEVELELLENBULLETWIDGETWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x80B6C20)
#define MOLEMOLE_UIINLEVELELLENBULLETWIDGETWIDGETCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x80B6CC0)
#define MOLEMOLE_UIINLEVELELLENBULLETWIDGETWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x80B71D0)
#define MOLEMOLE_UIINLEVELELLENBULLETWIDGETWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x80B7200)
#define MOLEMOLE_UIINLEVELELLENBULLETWIDGETWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x80B7270)
#define MOLEMOLE_UIINLEVELELLENBULLETWIDGETWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x80B72F0)
#define MOLEMOLE_UIINLEVELELLENBULLETWIDGETWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x80B7350)

namespace MoleMole
{
	inline static constexpr unsigned int UIInLevelEllenBulletWidgetWidgetController_TypeDefinitionIndex = 60491;

	class UIInLevelEllenBulletWidgetWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::Class_2_3F751654DB473886_7* _view; // 0x2A0
		::System::Int32 CtrlerIndex; // 0x2A8
		::System::Boolean _isShow; // 0x2AC

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELELLENBULLETWIDGETWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELELLENBULLETWIDGETWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELELLENBULLETWIDGETWIDGETCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELELLENBULLETWIDGETWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELELLENBULLETWIDGETWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void HandleShow(::System::Int32 curBulletCount, ::System::Int32 enhanceMode)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELELLENBULLETWIDGETWIDGETCONTROLLER_HANDLESHOW_OFFSET))(this, curBulletCount, enhanceMode);
		}

		::System::Void HandleShowLight(::System::Int32 enhanceMode)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELELLENBULLETWIDGETWIDGETCONTROLLER_HANDLESHOWLIGHT_OFFSET))(this, enhanceMode);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELELLENBULLETWIDGETWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELELLENBULLETWIDGETWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELELLENBULLETWIDGETWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELELLENBULLETWIDGETWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
