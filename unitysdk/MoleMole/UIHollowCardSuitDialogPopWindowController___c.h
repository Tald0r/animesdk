#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define MOLEMOLE_UIHOLLOWCARDSUITDIALOGPOPWINDOWCONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xBFCC450)
#define MOLEMOLE_UIHOLLOWCARDSUITDIALOGPOPWINDOWCONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0xBFCC490)
#define MOLEMOLE_UIHOLLOWCARDSUITDIALOGPOPWINDOWCONTROLLER___C__DOGOTONEST_B__37_0_OFFSET UNITYSDK_OFFSET(0xBFCC4A0)

namespace MoleMole
{
	inline static constexpr unsigned int UIHollowCardSuitDialogPopWindowController___c_TypeDefinitionIndex = 60813;

	class UIHollowCardSuitDialogPopWindowController___c : public ::System::Object
	{
	public:
		static ::System::Action** StaticGet___9__37_0()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(UIHollowCardSuitDialogPopWindowController___c_TypeDefinitionIndex)->GetStaticField(0x2D190);
		}
		static ::MoleMole::UIHollowCardSuitDialogPopWindowController___c** StaticGet___9()
		{
			return (::MoleMole::UIHollowCardSuitDialogPopWindowController___c**)Il2CppClass::FromTypeDefinitionIndex(UIHollowCardSuitDialogPopWindowController___c_TypeDefinitionIndex)->GetStaticField(0x2D198);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWCARDSUITDIALOGPOPWINDOWCONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWCARDSUITDIALOGPOPWINDOWCONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Void _DoGoToNest_b__37_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWCARDSUITDIALOGPOPWINDOWCONTROLLER___C__DOGOTONEST_B__37_0_OFFSET))(this);
		}
	};
}
