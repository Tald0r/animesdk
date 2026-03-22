#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine::Events { class UnityAction; }

#define MOLEMOLE_UIHOLLOWINFODIALOGPOPWINDOWCONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x8A2F860)
#define MOLEMOLE_UIHOLLOWINFODIALOGPOPWINDOWCONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x8A2F8A0)
#define MOLEMOLE_UIHOLLOWINFODIALOGPOPWINDOWCONTROLLER___C__ONUIINIT_B__5_0_OFFSET UNITYSDK_OFFSET(0x8A2F8B0)

namespace MoleMole
{
	inline static constexpr unsigned int UIHollowInfoDialogPopWindowController___c_TypeDefinitionIndex = 73872;

	class UIHollowInfoDialogPopWindowController___c : public ::System::Object
	{
	public:
		static ::UnityEngine::Events::UnityAction** StaticGet___9__5_0()
		{
			return (::UnityEngine::Events::UnityAction**)Il2CppClass::FromTypeDefinitionIndex(UIHollowInfoDialogPopWindowController___c_TypeDefinitionIndex)->GetStaticField(0x38C30);
		}
		static ::MoleMole::UIHollowInfoDialogPopWindowController___c** StaticGet___9()
		{
			return (::MoleMole::UIHollowInfoDialogPopWindowController___c**)Il2CppClass::FromTypeDefinitionIndex(UIHollowInfoDialogPopWindowController___c_TypeDefinitionIndex)->GetStaticField(0x38C38);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWINFODIALOGPOPWINDOWCONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWINFODIALOGPOPWINDOWCONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Void _OnUIInit_b__5_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWINFODIALOGPOPWINDOWCONTROLLER___C__ONUIINIT_B__5_0_OFFSET))(this);
		}
	};
}
