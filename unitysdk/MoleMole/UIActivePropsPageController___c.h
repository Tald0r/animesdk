#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define MOLEMOLE_UIACTIVEPROPSPAGECONTROLLER___C__BACKTOMAIN_B__19_0_OFFSET UNITYSDK_OFFSET(0xADA2450)
#define MOLEMOLE_UIACTIVEPROPSPAGECONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xADA2400)
#define MOLEMOLE_UIACTIVEPROPSPAGECONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0xADA2440)

namespace MoleMole
{
	inline static constexpr unsigned int UIActivePropsPageController___c_TypeDefinitionIndex = 78805;

	class UIActivePropsPageController___c : public ::System::Object
	{
	public:
		static ::System::Action** StaticGet___9__19_0()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(UIActivePropsPageController___c_TypeDefinitionIndex)->GetStaticField(0x341F0);
		}
		static ::MoleMole::UIActivePropsPageController___c** StaticGet___9()
		{
			return (::MoleMole::UIActivePropsPageController___c**)Il2CppClass::FromTypeDefinitionIndex(UIActivePropsPageController___c_TypeDefinitionIndex)->GetStaticField(0x341F8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVEPROPSPAGECONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVEPROPSPAGECONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Void _BackToMain_b__19_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVEPROPSPAGECONTROLLER___C__BACKTOMAIN_B__19_0_OFFSET))(this);
		}
	};
}
