#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIWidgetController.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace MoleMole { class UIControllerContextBase; }
namespace MoleMole { class UIGeneralDynamicTipsPopWindowController; }
namespace UnityEngine { class Transform; }

#define MOLEMOLE_UIBASEDYNAMICTIPSWIDGETCONTROLLER_CLOSEPARENT_OFFSET UNITYSDK_OFFSET(0xC5F7220)
#define MOLEMOLE_UIBASEDYNAMICTIPSWIDGETCONTROLLER_GETLOCATETRANSFORM_OFFSET UNITYSDK_OFFSET(0xC5F7380)
#define MOLEMOLE_UIBASEDYNAMICTIPSWIDGETCONTROLLER_GET_ENABLEPOSITIONTICK_OFFSET UNITYSDK_OFFSET(0xC5F70C0)
#define MOLEMOLE_UIBASEDYNAMICTIPSWIDGETCONTROLLER_GET_ISCLICKMASKTOCLOSE_OFFSET UNITYSDK_OFFSET(0xC5F70A0)
#define MOLEMOLE_UIBASEDYNAMICTIPSWIDGETCONTROLLER_GET_POSITIONOFFSET_OFFSET UNITYSDK_OFFSET(0xC5F70B0)
#define MOLEMOLE_UIBASEDYNAMICTIPSWIDGETCONTROLLER_ONREFRESHWIDGETROOTPOSITION_OFFSET UNITYSDK_OFFSET(0xC5F73E0)
#define MOLEMOLE_UIBASEDYNAMICTIPSWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0xC5F71B0)
#define MOLEMOLE_UIBASEDYNAMICTIPSWIDGETCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0xC5F70D0)
#define MOLEMOLE_UIBASEDYNAMICTIPSWIDGETCONTROLLER_SETPARENTCTRL_OFFSET UNITYSDK_OFFSET(0xC5F7310)
#define MOLEMOLE_UIBASEDYNAMICTIPSWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0xC5F7440)
#define MOLEMOLE_UIBASEDYNAMICTIPSWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0xC5F7470)
#define MOLEMOLE_UIBASEDYNAMICTIPSWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0xC5F74F0)

namespace MoleMole
{
	inline static constexpr unsigned int UIBaseDynamicTipsWidgetController_TypeDefinitionIndex = 37833;

	class UIBaseDynamicTipsWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::MoleMole::UIGeneralDynamicTipsPopWindowController* _parentDynamicTipCtrl; // 0x2A0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBASEDYNAMICTIPSWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Boolean get_IsClickMaskToClose()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBASEDYNAMICTIPSWIDGETCONTROLLER_GET_ISCLICKMASKTOCLOSE_OFFSET))(this);
		}

		::UnityEngine::Vector2 get_PositionOffset()
		{
			return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBASEDYNAMICTIPSWIDGETCONTROLLER_GET_POSITIONOFFSET_OFFSET))(this);
		}

		::System::Boolean get_EnablePositionTick()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBASEDYNAMICTIPSWIDGETCONTROLLER_GET_ENABLEPOSITIONTICK_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBASEDYNAMICTIPSWIDGETCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBASEDYNAMICTIPSWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void SetParentCtrl(::MoleMole::UIGeneralDynamicTipsPopWindowController* parent)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIGeneralDynamicTipsPopWindowController*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBASEDYNAMICTIPSWIDGETCONTROLLER_SETPARENTCTRL_OFFSET))(this, parent);
		}

		::UnityEngine::Transform* GetLocateTransform()
		{
			return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBASEDYNAMICTIPSWIDGETCONTROLLER_GETLOCATETRANSFORM_OFFSET))(this);
		}

		::System::Void OnRefreshWidgetRootPosition()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBASEDYNAMICTIPSWIDGETCONTROLLER_ONREFRESHWIDGETROOTPOSITION_OFFSET))(this);
		}

		::System::Void CloseParent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBASEDYNAMICTIPSWIDGETCONTROLLER_CLOSEPARENT_OFFSET))(this);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBASEDYNAMICTIPSWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBASEDYNAMICTIPSWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
