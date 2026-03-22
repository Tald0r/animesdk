#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIGeneralPopUpArrowWidgetController_ArrowPosition.h"
#include "unitysdk/MoleMole/UIWidgetController.h"

class Class_2_69CBB7FF0BE6A673_12;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }

#define MOLEMOLE_UIGENERALPOPUPARROWWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x8917E40)
#define MOLEMOLE_UIGENERALPOPUPARROWWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x8917EE0)
#define MOLEMOLE_UIGENERALPOPUPARROWWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x8917880)
#define MOLEMOLE_UIGENERALPOPUPARROWWIDGETCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x8917930)
#define MOLEMOLE_UIGENERALPOPUPARROWWIDGETCONTROLLER_REFRESHVIEW_OFFSET UNITYSDK_OFFSET(0x8917C80)
#define MOLEMOLE_UIGENERALPOPUPARROWWIDGETCONTROLLER_SETARROWPOSITION_OFFSET UNITYSDK_OFFSET(0x8917FC0)
#define MOLEMOLE_UIGENERALPOPUPARROWWIDGETCONTROLLER_SETARROWSTATE_OFFSET UNITYSDK_OFFSET(0x8917B70)
#define MOLEMOLE_UIGENERALPOPUPARROWWIDGETCONTROLLER_SETSHOWINGSTATE_OFFSET UNITYSDK_OFFSET(0x8918030)
#define MOLEMOLE_UIGENERALPOPUPARROWWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x89180B0)
#define MOLEMOLE_UIGENERALPOPUPARROWWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x89180E0)
#define MOLEMOLE_UIGENERALPOPUPARROWWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x8918150)
#define MOLEMOLE_UIGENERALPOPUPARROWWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x89181D0)
#define MOLEMOLE_UIGENERALPOPUPARROWWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x8918230)

namespace MoleMole
{
	inline static constexpr unsigned int UIGeneralPopUpArrowWidgetController_TypeDefinitionIndex = 43357;

	class UIGeneralPopUpArrowWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::Class_2_69CBB7FF0BE6A673_12* _view; // 0x2A0
		::MoleMole::UIGeneralPopUpArrowWidgetController_ArrowPosition _arrowPosition; // 0x2A8
		::System::Boolean _isShowing; // 0x2AC

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALPOPUPARROWWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALPOPUPARROWWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALPOPUPARROWWIDGETCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALPOPUPARROWWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALPOPUPARROWWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void SetArrowPosition(::MoleMole::UIGeneralPopUpArrowWidgetController_ArrowPosition position)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIGeneralPopUpArrowWidgetController_ArrowPosition))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALPOPUPARROWWIDGETCONTROLLER_SETARROWPOSITION_OFFSET))(this, position);
		}

		::System::Void SetShowingState(::System::Boolean show)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALPOPUPARROWWIDGETCONTROLLER_SETSHOWINGSTATE_OFFSET))(this, show);
		}

		::System::Void RefreshView(::System::Boolean show, ::System::Boolean force, ::System::Boolean playAnim)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALPOPUPARROWWIDGETCONTROLLER_REFRESHVIEW_OFFSET))(this, show, force, playAnim);
		}

		::System::Void SetArrowState(::MoleMole::UIGeneralPopUpArrowWidgetController_ArrowPosition position)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIGeneralPopUpArrowWidgetController_ArrowPosition))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALPOPUPARROWWIDGETCONTROLLER_SETARROWSTATE_OFFSET))(this, position);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALPOPUPARROWWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALPOPUPARROWWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALPOPUPARROWWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALPOPUPARROWWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
