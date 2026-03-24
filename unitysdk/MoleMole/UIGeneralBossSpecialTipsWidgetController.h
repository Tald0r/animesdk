#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIWidgetController.h"

class Class_2_D90F2B37C5861C3F;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace MoleMole { class UIMiddleTip; }
namespace System { class EventArgs; }

#define MOLEMOLE_UIGENERALBOSSSPECIALTIPSWIDGETCONTROLLER_HIDETIP_OFFSET UNITYSDK_OFFSET(0xA93D4C0)
#define MOLEMOLE_UIGENERALBOSSSPECIALTIPSWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0xA93CE30)
#define MOLEMOLE_UIGENERALBOSSSPECIALTIPSWIDGETCONTROLLER_ONGIVENMIDDLETIPSHIDE_OFFSET UNITYSDK_OFFSET(0xA93D630)
#define MOLEMOLE_UIGENERALBOSSSPECIALTIPSWIDGETCONTROLLER_ONMIDDLETIPSHIDE_OFFSET UNITYSDK_OFFSET(0xA93D450)
#define MOLEMOLE_UIGENERALBOSSSPECIALTIPSWIDGETCONTROLLER_ONMIDDLETIPSSHOW_OFFSET UNITYSDK_OFFSET(0xA93CFF0)
#define MOLEMOLE_UIGENERALBOSSSPECIALTIPSWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0xA93CED0)
#define MOLEMOLE_UIGENERALBOSSSPECIALTIPSWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0xA93CA90)
#define MOLEMOLE_UIGENERALBOSSSPECIALTIPSWIDGETCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0xA93CD80)
#define MOLEMOLE_UIGENERALBOSSSPECIALTIPSWIDGETCONTROLLER_SHOWTIP_OFFSET UNITYSDK_OFFSET(0xA93D0B0)
#define MOLEMOLE_UIGENERALBOSSSPECIALTIPSWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0xA93D700)
#define MOLEMOLE_UIGENERALBOSSSPECIALTIPSWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0xA93D730)
#define MOLEMOLE_UIGENERALBOSSSPECIALTIPSWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0xA93D7A0)
#define MOLEMOLE_UIGENERALBOSSSPECIALTIPSWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0xA93D820)
#define MOLEMOLE_UIGENERALBOSSSPECIALTIPSWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0xA93D880)

namespace MoleMole
{
	inline static constexpr unsigned int UIGeneralBossSpecialTipsWidgetController_TypeDefinitionIndex = 41080;

	class UIGeneralBossSpecialTipsWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		static ::System::Boolean* StaticGet_IsShowing()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(UIGeneralBossSpecialTipsWidgetController_TypeDefinitionIndex)->GetStaticField(0xE6B0);
		}
		::Class_2_D90F2B37C5861C3F* _view; // 0x2A0
		::MoleMole::UIMiddleTip* _currentTip; // 0x2A8
		::System::Boolean isShow; // 0x2B0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALBOSSSPECIALTIPSWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALBOSSSPECIALTIPSWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALBOSSSPECIALTIPSWIDGETCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALBOSSSPECIALTIPSWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALBOSSSPECIALTIPSWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void OnMiddleTipsShow(::System::EventArgs* args)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALBOSSSPECIALTIPSWIDGETCONTROLLER_ONMIDDLETIPSSHOW_OFFSET))(this, args);
		}

		::System::Void OnMiddleTipsHide(::System::EventArgs* args)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALBOSSSPECIALTIPSWIDGETCONTROLLER_ONMIDDLETIPSHIDE_OFFSET))(this, args);
		}

		::System::Void OnGivenMiddleTipsHide(::System::EventArgs* args)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALBOSSSPECIALTIPSWIDGETCONTROLLER_ONGIVENMIDDLETIPSHIDE_OFFSET))(this, args);
		}

		::System::Void ShowTip(::MoleMole::UIMiddleTip* tips)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIMiddleTip*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALBOSSSPECIALTIPSWIDGETCONTROLLER_SHOWTIP_OFFSET))(this, tips);
		}

		::System::Void HideTip()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALBOSSSPECIALTIPSWIDGETCONTROLLER_HIDETIP_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALBOSSSPECIALTIPSWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALBOSSSPECIALTIPSWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALBOSSSPECIALTIPSWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALBOSSSPECIALTIPSWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
