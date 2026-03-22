#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIWidgetController.h"

class Class_2_D90F2B37C5861C3F;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace MoleMole { class UIMiddleTip; }
namespace System { class EventArgs; }
namespace System { class String; }

#define MOLEMOLE_UIGENERALBOSSSPECIALTIPSWIDGETCONTROLLER_HIDETIP_OFFSET UNITYSDK_OFFSET(0xA917010)
#define MOLEMOLE_UIGENERALBOSSSPECIALTIPSWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0xA916980)
#define MOLEMOLE_UIGENERALBOSSSPECIALTIPSWIDGETCONTROLLER_ONGIVENMIDDLETIPSHIDE_OFFSET UNITYSDK_OFFSET(0xA917180)
#define MOLEMOLE_UIGENERALBOSSSPECIALTIPSWIDGETCONTROLLER_ONMIDDLETIPSHIDE_OFFSET UNITYSDK_OFFSET(0xA916FA0)
#define MOLEMOLE_UIGENERALBOSSSPECIALTIPSWIDGETCONTROLLER_ONMIDDLETIPSSHOW_OFFSET UNITYSDK_OFFSET(0xA916B40)
#define MOLEMOLE_UIGENERALBOSSSPECIALTIPSWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0xA916A20)
#define MOLEMOLE_UIGENERALBOSSSPECIALTIPSWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0xA9165E0)
#define MOLEMOLE_UIGENERALBOSSSPECIALTIPSWIDGETCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0xA9168D0)
#define MOLEMOLE_UIGENERALBOSSSPECIALTIPSWIDGETCONTROLLER_SHOWTIP_OFFSET UNITYSDK_OFFSET(0xA916C00)
#define MOLEMOLE_UIGENERALBOSSSPECIALTIPSWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0xA917300)
#define MOLEMOLE_UIGENERALBOSSSPECIALTIPSWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0xA917330)
#define MOLEMOLE_UIGENERALBOSSSPECIALTIPSWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0xA9173A0)
#define MOLEMOLE_UIGENERALBOSSSPECIALTIPSWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0xA917420)
#define MOLEMOLE_UIGENERALBOSSSPECIALTIPSWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0xA917480)

namespace MoleMole
{
	inline static constexpr unsigned int UIGeneralBossSpecialTipsWidgetController_TypeDefinitionIndex = 46811;

	class UIGeneralBossSpecialTipsWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		static ::System::Boolean* StaticGet_IsShowing()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(UIGeneralBossSpecialTipsWidgetController_TypeDefinitionIndex)->GetStaticField(0xE0A0);
		}
		// static const ::System::String* FadeInAnim; // 0x0
		// static const ::System::String* FadeOutAnim; // 0x0
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
