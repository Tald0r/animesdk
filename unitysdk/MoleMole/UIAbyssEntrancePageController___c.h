#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define MOLEMOLE_UIABYSSENTRANCEPAGECONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xB8D5BD0)
#define MOLEMOLE_UIABYSSENTRANCEPAGECONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0xB8D5C10)
#define MOLEMOLE_UIABYSSENTRANCEPAGECONTROLLER___C__GOTOMAINCITY_B__82_0_OFFSET UNITYSDK_OFFSET(0xB8D5E40)
#define MOLEMOLE_UIABYSSENTRANCEPAGECONTROLLER___C__SHOWENDTIMETIP_B__43_0_OFFSET UNITYSDK_OFFSET(0xB8D5C20)

namespace MoleMole
{
	inline static constexpr unsigned int UIAbyssEntrancePageController___c_TypeDefinitionIndex = 57302;

	class UIAbyssEntrancePageController___c : public ::System::Object
	{
	public:
		static ::System::Action** StaticGet___9__43_0()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(UIAbyssEntrancePageController___c_TypeDefinitionIndex)->GetStaticField(0x3C220);
		}
		static ::MoleMole::UIAbyssEntrancePageController___c** StaticGet___9()
		{
			return (::MoleMole::UIAbyssEntrancePageController___c**)Il2CppClass::FromTypeDefinitionIndex(UIAbyssEntrancePageController___c_TypeDefinitionIndex)->GetStaticField(0x3C228);
		}
		static ::System::Action** StaticGet___9__82_0()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(UIAbyssEntrancePageController___c_TypeDefinitionIndex)->GetStaticField(0x3C230);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSENTRANCEPAGECONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSENTRANCEPAGECONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Void _ShowEndTimeTip_b__43_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSENTRANCEPAGECONTROLLER___C__SHOWENDTIMETIP_B__43_0_OFFSET))(this);
		}

		::System::Void _GoToMainCity_b__82_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSENTRANCEPAGECONTROLLER___C__GOTOMAINCITY_B__82_0_OFFSET))(this);
		}
	};
}
