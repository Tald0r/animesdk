#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_3EDF246633A325B0.h"
#include "unitysdk/MoleMole/UIWindowController.h"

namespace MoleMole { class UIControllerContextBase; }
namespace System { class String; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class CanvasGroup; }

#define MOLEMOLE_UIGENERALBLACKMASKCONTROLLER_GET_WINDOWTYPE_OFFSET UNITYSDK_OFFSET(0xA362A80)
#define MOLEMOLE_UIGENERALBLACKMASKCONTROLLER_ONUICLOSE_OFFSET UNITYSDK_OFFSET(0xA362F20)
#define MOLEMOLE_UIGENERALBLACKMASKCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0xA362F90)
#define MOLEMOLE_UIGENERALBLACKMASKCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0xA362A90)
#define MOLEMOLE_UIGENERALBLACKMASKCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0xA362C10)
#define MOLEMOLE_UIGENERALBLACKMASKCONTROLLER__CCTOR_OFFSET UNITYSDK_OFFSET(0xA363010)
#define MOLEMOLE_UIGENERALBLACKMASKCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0xA363000)
#define MOLEMOLE_UIGENERALBLACKMASKCONTROLLER___BASE_ONUICLOSE_OFFSET UNITYSDK_OFFSET(0xA363060)
#define MOLEMOLE_UIGENERALBLACKMASKCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0xA363070)
#define MOLEMOLE_UIGENERALBLACKMASKCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0xA363080)
#define MOLEMOLE_UIGENERALBLACKMASKCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0xA363090)

namespace MoleMole
{
	inline static constexpr unsigned int UIGeneralBlackMaskController_TypeDefinitionIndex = 64989;

	class UIGeneralBlackMaskController : public ::MoleMole::UIWindowController
	{
	public:
		static ::System::String** StaticGet_FadeOutAnimName()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(UIGeneralBlackMaskController_TypeDefinitionIndex)->GetStaticField(0x440A0);
		}
		static ::System::String** StaticGet_FadeInAnimName()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(UIGeneralBlackMaskController_TypeDefinitionIndex)->GetStaticField(0x440A8);
		}
		::UnityEngine::Animation* _animation; // 0x2F8
		::UnityEngine::CanvasGroup* _canvasGroup; // 0x300

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALBLACKMASKCONTROLLER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALBLACKMASKCONTROLLER__CCTOR_OFFSET))();
		}

		::Enum_3_3EDF246633A325B0 get_windowType()
		{
			return ((::Enum_3_3EDF246633A325B0(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALBLACKMASKCONTROLLER_GET_WINDOWTYPE_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALBLACKMASKCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALBLACKMASKCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnUIClose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALBLACKMASKCONTROLLER_ONUICLOSE_OFFSET))(this);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALBLACKMASKCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIClose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALBLACKMASKCONTROLLER___BASE_ONUICLOSE_OFFSET))(this);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALBLACKMASKCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALBLACKMASKCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALBLACKMASKCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
