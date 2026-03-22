#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIWidgetController.h"

class Class_2_7BEEB90214042948_1;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace MoleMole { class UIFashionStoreKeyItemWidgetController_Context; }

#define MOLEMOLE_UIFASHIONSTOREKEYITEMWIDGETCONTROLLER_ONCLICKITEM_OFFSET UNITYSDK_OFFSET(0xC62BE90)
#define MOLEMOLE_UIFASHIONSTOREKEYITEMWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0xC62BD10)
#define MOLEMOLE_UIFASHIONSTOREKEYITEMWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0xC62BDB0)
#define MOLEMOLE_UIFASHIONSTOREKEYITEMWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0xC62B760)
#define MOLEMOLE_UIFASHIONSTOREKEYITEMWIDGETCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0xC62B940)
#define MOLEMOLE_UIFASHIONSTOREKEYITEMWIDGETCONTROLLER_TRYREFRESHBYMINIGAMECONTEXT_OFFSET UNITYSDK_OFFSET(0xC62BA20)
#define MOLEMOLE_UIFASHIONSTOREKEYITEMWIDGETCONTROLLER_TRYREFRESHBYMUSICEDITCONTEXT_OFFSET UNITYSDK_OFFSET(0xC62BB40)
#define MOLEMOLE_UIFASHIONSTOREKEYITEMWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0xC62C090)
#define MOLEMOLE_UIFASHIONSTOREKEYITEMWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0xC62C0C0)
#define MOLEMOLE_UIFASHIONSTOREKEYITEMWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0xC62C130)
#define MOLEMOLE_UIFASHIONSTOREKEYITEMWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0xC62C1B0)
#define MOLEMOLE_UIFASHIONSTOREKEYITEMWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0xC62C210)

namespace MoleMole
{
	inline static constexpr unsigned int UIFashionStoreKeyItemWidgetController_TypeDefinitionIndex = 40325;

	class UIFashionStoreKeyItemWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::Class_2_7BEEB90214042948_1* _view; // 0x2A0
		::System::Int32 m_keyID; // 0x2A8
		::MoleMole::UIFashionStoreKeyItemWidgetController_Context* _context; // 0x2B0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFASHIONSTOREKEYITEMWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFASHIONSTOREKEYITEMWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFASHIONSTOREKEYITEMWIDGETCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Boolean TryRefreshByMinigameContext(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFASHIONSTOREKEYITEMWIDGETCONTROLLER_TRYREFRESHBYMINIGAMECONTEXT_OFFSET))(this, openCtrlContext);
		}

		::System::Boolean TryRefreshByMusicEditContext(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFASHIONSTOREKEYITEMWIDGETCONTROLLER_TRYREFRESHBYMUSICEDITCONTEXT_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFASHIONSTOREKEYITEMWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFASHIONSTOREKEYITEMWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void OnClickItem()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFASHIONSTOREKEYITEMWIDGETCONTROLLER_ONCLICKITEM_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFASHIONSTOREKEYITEMWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFASHIONSTOREKEYITEMWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFASHIONSTOREKEYITEMWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFASHIONSTOREKEYITEMWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
