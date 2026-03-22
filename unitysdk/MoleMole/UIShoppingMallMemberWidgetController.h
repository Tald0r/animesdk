#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/InputActionEvent.h"
#include "unitysdk/MoleMole/UIWidgetController.h"

class Class_0_16E4307DCC419505_188;
class Class_2_C348D4002D60FECA;
namespace MoleMole { class MonoGamepadCustomList; }
namespace MoleMole { class ShoppingMallCardContext; }
namespace MoleMole { class UIAmerInfoWidgetController; }
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace UnityEngine { class Transform; }

#define MOLEMOLE_UISHOPPINGMALLMEMBERWIDGETCONTROLLER_CLICKSHOWRULE_OFFSET UNITYSDK_OFFSET(0x9A0D910)
#define MOLEMOLE_UISHOPPINGMALLMEMBERWIDGETCONTROLLER_ONCLICKBUY_OFFSET UNITYSDK_OFFSET(0x9A0DA60)
#define MOLEMOLE_UISHOPPINGMALLMEMBERWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x9A0D640)
#define MOLEMOLE_UISHOPPINGMALLMEMBERWIDGETCONTROLLER_ONINPUTACTION_OFFSET UNITYSDK_OFFSET(0x9A0DF10)
#define MOLEMOLE_UISHOPPINGMALLMEMBERWIDGETCONTROLLER_ONLAYOUTPLATFORMCHANGED_OFFSET UNITYSDK_OFFSET(0x9A0D6E0)
#define MOLEMOLE_UISHOPPINGMALLMEMBERWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x9A0D830)
#define MOLEMOLE_UISHOPPINGMALLMEMBERWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x9A0C9C0)
#define MOLEMOLE_UISHOPPINGMALLMEMBERWIDGETCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x9A0CDC0)
#define MOLEMOLE_UISHOPPINGMALLMEMBERWIDGETCONTROLLER_SHOWITEMTIPS_OFFSET UNITYSDK_OFFSET(0x9A0DBD0)
#define MOLEMOLE_UISHOPPINGMALLMEMBERWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x9A0E2C0)
#define MOLEMOLE_UISHOPPINGMALLMEMBERWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x9A0E2F0)
#define MOLEMOLE_UISHOPPINGMALLMEMBERWIDGETCONTROLLER___BASE_ONINPUTACTION_OFFSET UNITYSDK_OFFSET(0x9A0E360)
#define MOLEMOLE_UISHOPPINGMALLMEMBERWIDGETCONTROLLER___BASE_ONLAYOUTPLATFORMCHANGED_OFFSET UNITYSDK_OFFSET(0x9A0E390)
#define MOLEMOLE_UISHOPPINGMALLMEMBERWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x9A0E3F0)
#define MOLEMOLE_UISHOPPINGMALLMEMBERWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x9A0E470)
#define MOLEMOLE_UISHOPPINGMALLMEMBERWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x9A0E4D0)

namespace MoleMole
{
	inline static constexpr unsigned int UIShoppingMallMemberWidgetController_TypeDefinitionIndex = 48239;

	class UIShoppingMallMemberWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::Class_2_C348D4002D60FECA* _view; // 0x2A0
		::UnityEngine::Transform* _ameRoot; // 0x2A8
		::MoleMole::UIAmerInfoWidgetController* _amerInfoController; // 0x2B0
		::Class_0_16E4307DCC419505_188* data; // 0x2B8
		::MoleMole::ShoppingMallCardContext* _context; // 0x2C0
		::MoleMole::MonoGamepadCustomList* gamepadCustomList; // 0x2C8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISHOPPINGMALLMEMBERWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISHOPPINGMALLMEMBERWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISHOPPINGMALLMEMBERWIDGETCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISHOPPINGMALLMEMBERWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnLayoutPlatformChanged()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISHOPPINGMALLMEMBERWIDGETCONTROLLER_ONLAYOUTPLATFORMCHANGED_OFFSET))(this);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISHOPPINGMALLMEMBERWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void ClickShowRule()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISHOPPINGMALLMEMBERWIDGETCONTROLLER_CLICKSHOWRULE_OFFSET))(this);
		}

		::System::Void OnClickBuy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISHOPPINGMALLMEMBERWIDGETCONTROLLER_ONCLICKBUY_OFFSET))(this);
		}

		::System::Void ShowItemTips(::System::Int32 itemID)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UISHOPPINGMALLMEMBERWIDGETCONTROLLER_SHOWITEMTIPS_OFFSET))(this, itemID);
		}

		::System::Boolean OnInputAction(::MoleMole::InputActionEvent inputAction)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::InputActionEvent))((::PBYTE)hIl2Cpp + MOLEMOLE_UISHOPPINGMALLMEMBERWIDGETCONTROLLER_ONINPUTACTION_OFFSET))(this, inputAction);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISHOPPINGMALLMEMBERWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Boolean __base_OnInputAction(::MoleMole::InputActionEvent P0)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::InputActionEvent))((::PBYTE)hIl2Cpp + MOLEMOLE_UISHOPPINGMALLMEMBERWIDGETCONTROLLER___BASE_ONINPUTACTION_OFFSET))(this, P0);
		}

		::System::Void __base_OnLayoutPlatformChanged()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISHOPPINGMALLMEMBERWIDGETCONTROLLER___BASE_ONLAYOUTPLATFORMCHANGED_OFFSET))(this);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISHOPPINGMALLMEMBERWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISHOPPINGMALLMEMBERWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISHOPPINGMALLMEMBERWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
