#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define MOLEMOLE_UIACTIVITYCAMERASETTLEMENTPOPWINDOWCONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x8CC0AF0)
#define MOLEMOLE_UIACTIVITYCAMERASETTLEMENTPOPWINDOWCONTROLLER___C__CLICKRESTARTUI_B__13_0_OFFSET UNITYSDK_OFFSET(0x8CC0B40)
#define MOLEMOLE_UIACTIVITYCAMERASETTLEMENTPOPWINDOWCONTROLLER___C__CLOSEUIPHOTOMODEEND_B__19_0_OFFSET UNITYSDK_OFFSET(0x8CC0C00)
#define MOLEMOLE_UIACTIVITYCAMERASETTLEMENTPOPWINDOWCONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x8CC0B30)

namespace MoleMole
{
	inline static constexpr unsigned int UIActivityCameraSettlementPopWindowController___c_TypeDefinitionIndex = 38768;

	class UIActivityCameraSettlementPopWindowController___c : public ::System::Object
	{
	public:
		static ::MoleMole::UIActivityCameraSettlementPopWindowController___c** StaticGet___9()
		{
			return (::MoleMole::UIActivityCameraSettlementPopWindowController___c**)Il2CppClass::FromTypeDefinitionIndex(UIActivityCameraSettlementPopWindowController___c_TypeDefinitionIndex)->GetStaticField(0x2E140);
		}
		static ::System::Action** StaticGet___9__13_0()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(UIActivityCameraSettlementPopWindowController___c_TypeDefinitionIndex)->GetStaticField(0x2E148);
		}
		static ::System::Action** StaticGet___9__19_0()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(UIActivityCameraSettlementPopWindowController___c_TypeDefinitionIndex)->GetStaticField(0x2E150);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYCAMERASETTLEMENTPOPWINDOWCONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYCAMERASETTLEMENTPOPWINDOWCONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Void _ClickRestartUI_b__13_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYCAMERASETTLEMENTPOPWINDOWCONTROLLER___C__CLICKRESTARTUI_B__13_0_OFFSET))(this);
		}

		::System::Void _CloseUIPhotoModeEnd_b__19_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYCAMERASETTLEMENTPOPWINDOWCONTROLLER___C__CLOSEUIPHOTOMODEEND_B__19_0_OFFSET))(this);
		}
	};
}
