#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine::Events { class UnityAction; }

#define MOLEMOLE_UIMAILDIALOGPOPWINDOWCONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xCFCAF00)
#define MOLEMOLE_UIMAILDIALOGPOPWINDOWCONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0xCFCAF40)
#define MOLEMOLE_UIMAILDIALOGPOPWINDOWCONTROLLER___C__ONUIINIT_B__4_5_OFFSET UNITYSDK_OFFSET(0xCFCAF50)

namespace MoleMole
{
	inline static constexpr unsigned int UIMailDialogPopWindowController___c_TypeDefinitionIndex = 46586;

	class UIMailDialogPopWindowController___c : public ::System::Object
	{
	public:
		static ::MoleMole::UIMailDialogPopWindowController___c** StaticGet___9()
		{
			return (::MoleMole::UIMailDialogPopWindowController___c**)Il2CppClass::FromTypeDefinitionIndex(UIMailDialogPopWindowController___c_TypeDefinitionIndex)->GetStaticField(0x300B0);
		}
		static ::UnityEngine::Events::UnityAction** StaticGet___9__4_5()
		{
			return (::UnityEngine::Events::UnityAction**)Il2CppClass::FromTypeDefinitionIndex(UIMailDialogPopWindowController___c_TypeDefinitionIndex)->GetStaticField(0x300B8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAILDIALOGPOPWINDOWCONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAILDIALOGPOPWINDOWCONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Void _OnUIInit_b__4_5()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAILDIALOGPOPWINDOWCONTROLLER___C__ONUIINIT_B__4_5_OFFSET))(this);
		}
	};
}
