#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIWidgetController.h"

class Class_2_56AF18CD74DA940A_3;
class Class_3_F29999C3DD3E09BA;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace UnityEngine { class Transform; }

#define MOLEMOLE_UIDATAFIXGAMEWIDGETCONTROLLER_GET_CONTENTROOT_OFFSET UNITYSDK_OFFSET(0xA916B20)
#define MOLEMOLE_UIDATAFIXGAMEWIDGETCONTROLLER_INITROW_OFFSET UNITYSDK_OFFSET(0xA917200)
#define MOLEMOLE_UIDATAFIXGAMEWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0xA916FF0)
#define MOLEMOLE_UIDATAFIXGAMEWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0xA9170B0)
#define MOLEMOLE_UIDATAFIXGAMEWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0xA916B40)
#define MOLEMOLE_UIDATAFIXGAMEWIDGETCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0xA916D60)
#define MOLEMOLE_UIDATAFIXGAMEWIDGETCONTROLLER_REFRESHVIEW_OFFSET UNITYSDK_OFFSET(0xA916E80)
#define MOLEMOLE_UIDATAFIXGAMEWIDGETCONTROLLER_RESETVIEW_OFFSET UNITYSDK_OFFSET(0xA917190)
#define MOLEMOLE_UIDATAFIXGAMEWIDGETCONTROLLER_SET_CONTENTROOT_OFFSET UNITYSDK_OFFSET(0xA916B30)
#define MOLEMOLE_UIDATAFIXGAMEWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0xA917670)
#define MOLEMOLE_UIDATAFIXGAMEWIDGETCONTROLLER__ONUIINIT_B__6_0_OFFSET UNITYSDK_OFFSET(0xA9176A0)
#define MOLEMOLE_UIDATAFIXGAMEWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0xA9176B0)
#define MOLEMOLE_UIDATAFIXGAMEWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0xA917720)
#define MOLEMOLE_UIDATAFIXGAMEWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0xA9177A0)
#define MOLEMOLE_UIDATAFIXGAMEWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0xA917800)

namespace MoleMole
{
	inline static constexpr unsigned int UIDataFixGameWidgetController_TypeDefinitionIndex = 66804;

	class UIDataFixGameWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::Class_2_56AF18CD74DA940A_3* _view; // 0x2A0
		::Class_3_F29999C3DD3E09BA* _model; // 0x2A8
		::UnityEngine::Transform* _ContentRoot_k__BackingField; // 0x2B0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDATAFIXGAMEWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::UnityEngine::Transform* get_ContentRoot()
		{
			return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDATAFIXGAMEWIDGETCONTROLLER_GET_CONTENTROOT_OFFSET))(this);
		}

		::System::Void set_ContentRoot(::UnityEngine::Transform* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDATAFIXGAMEWIDGETCONTROLLER_SET_CONTENTROOT_OFFSET))(this, value);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDATAFIXGAMEWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDATAFIXGAMEWIDGETCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDATAFIXGAMEWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDATAFIXGAMEWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void ResetView(::System::Boolean isReal)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDATAFIXGAMEWIDGETCONTROLLER_RESETVIEW_OFFSET))(this, isReal);
		}

		::System::Void RefreshView(::System::Boolean isReal)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDATAFIXGAMEWIDGETCONTROLLER_REFRESHVIEW_OFFSET))(this, isReal);
		}

		::System::Boolean InitRow()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDATAFIXGAMEWIDGETCONTROLLER_INITROW_OFFSET))(this);
		}

		::System::Void _OnUIInit_b__6_0(::System::Boolean win, ::System::Int32 _)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDATAFIXGAMEWIDGETCONTROLLER__ONUIINIT_B__6_0_OFFSET))(this, win, _);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDATAFIXGAMEWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDATAFIXGAMEWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDATAFIXGAMEWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDATAFIXGAMEWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
