#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define MOLEMOLE_UIBASECONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xB2767E0)
#define MOLEMOLE_UIBASECONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0xB276820)
#define MOLEMOLE_UIBASECONTROLLER___C__GOTOMAINPAGE_B__183_0_OFFSET UNITYSDK_OFFSET(0xB276830)

namespace MoleMole
{
	inline static constexpr unsigned int UIBaseController___c_TypeDefinitionIndex = 58445;

	class UIBaseController___c : public ::System::Object
	{
	public:
		static ::System::Action** StaticGet___9__183_0()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(UIBaseController___c_TypeDefinitionIndex)->GetStaticField(0x3B6E0);
		}
		static ::MoleMole::UIBaseController___c** StaticGet___9()
		{
			return (::MoleMole::UIBaseController___c**)Il2CppClass::FromTypeDefinitionIndex(UIBaseController___c_TypeDefinitionIndex)->GetStaticField(0x3B6E8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIBASECONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBASECONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Void _GoToMainPage_b__183_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBASECONTROLLER___C__GOTOMAINPAGE_B__183_0_OFFSET))(this);
		}
	};
}
