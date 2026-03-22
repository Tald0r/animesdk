#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }
namespace UnityEngine::Events { class UnityAction; }

#define MOLEMOLE_UIHOLLOWCARDOPTIONSDIALOGPOPWINDOWCONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xA6136C0)
#define MOLEMOLE_UIHOLLOWCARDOPTIONSDIALOGPOPWINDOWCONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0xA613700)
#define MOLEMOLE_UIHOLLOWCARDOPTIONSDIALOGPOPWINDOWCONTROLLER___C__EXITCHOICEEVENT_B__28_1_OFFSET UNITYSDK_OFFSET(0xA613860)
#define MOLEMOLE_UIHOLLOWCARDOPTIONSDIALOGPOPWINDOWCONTROLLER___C__INIT_B__11_0_OFFSET UNITYSDK_OFFSET(0xA613710)
#define MOLEMOLE_UIHOLLOWCARDOPTIONSDIALOGPOPWINDOWCONTROLLER___C__INIT_B__11_2_OFFSET UNITYSDK_OFFSET(0xA613840)
#define MOLEMOLE_UIHOLLOWCARDOPTIONSDIALOGPOPWINDOWCONTROLLER___C__ONCHOICERESPONSE_B__26_1_OFFSET UNITYSDK_OFFSET(0xA613850)

namespace MoleMole
{
	inline static constexpr unsigned int UIHollowCardOptionsDialogPopWindowController___c_TypeDefinitionIndex = 64595;

	class UIHollowCardOptionsDialogPopWindowController___c : public ::System::Object
	{
	public:
		static ::System::Action** StaticGet___9__26_1()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(UIHollowCardOptionsDialogPopWindowController___c_TypeDefinitionIndex)->GetStaticField(0x32710);
		}
		static ::System::Action** StaticGet___9__28_1()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(UIHollowCardOptionsDialogPopWindowController___c_TypeDefinitionIndex)->GetStaticField(0x32718);
		}
		static ::MoleMole::UIHollowCardOptionsDialogPopWindowController___c** StaticGet___9()
		{
			return (::MoleMole::UIHollowCardOptionsDialogPopWindowController___c**)Il2CppClass::FromTypeDefinitionIndex(UIHollowCardOptionsDialogPopWindowController___c_TypeDefinitionIndex)->GetStaticField(0x32720);
		}
		static ::UnityEngine::Events::UnityAction** StaticGet___9__11_0()
		{
			return (::UnityEngine::Events::UnityAction**)Il2CppClass::FromTypeDefinitionIndex(UIHollowCardOptionsDialogPopWindowController___c_TypeDefinitionIndex)->GetStaticField(0x32728);
		}
		static ::System::Action** StaticGet___9__11_2()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(UIHollowCardOptionsDialogPopWindowController___c_TypeDefinitionIndex)->GetStaticField(0x32730);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWCARDOPTIONSDIALOGPOPWINDOWCONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWCARDOPTIONSDIALOGPOPWINDOWCONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Void _Init_b__11_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWCARDOPTIONSDIALOGPOPWINDOWCONTROLLER___C__INIT_B__11_0_OFFSET))(this);
		}

		::System::Void _Init_b__11_2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWCARDOPTIONSDIALOGPOPWINDOWCONTROLLER___C__INIT_B__11_2_OFFSET))(this);
		}

		::System::Void _OnChoiceResponse_b__26_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWCARDOPTIONSDIALOGPOPWINDOWCONTROLLER___C__ONCHOICERESPONSE_B__26_1_OFFSET))(this);
		}

		::System::Void _ExitChoiceEvent_b__28_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWCARDOPTIONSDIALOGPOPWINDOWCONTROLLER___C__EXITCHOICEEVENT_B__28_1_OFFSET))(this);
		}
	};
}
