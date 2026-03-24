#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine::Events { class UnityAction; }

#define MOLEMOLE_UIACTIVITYCHECKINGAMEWIDGETCONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xC27E100)
#define MOLEMOLE_UIACTIVITYCHECKINGAMEWIDGETCONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0xC27E140)
#define MOLEMOLE_UIACTIVITYCHECKINGAMEWIDGETCONTROLLER___C__ONUIINIT_B__5_0_OFFSET UNITYSDK_OFFSET(0xC27E150)

namespace MoleMole
{
	inline static constexpr unsigned int UIActivityCheckinGameWidgetController___c_TypeDefinitionIndex = 52149;

	class UIActivityCheckinGameWidgetController___c : public ::System::Object
	{
	public:
		static ::UnityEngine::Events::UnityAction** StaticGet___9__5_0()
		{
			return (::UnityEngine::Events::UnityAction**)Il2CppClass::FromTypeDefinitionIndex(UIActivityCheckinGameWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x3B630);
		}
		static ::MoleMole::UIActivityCheckinGameWidgetController___c** StaticGet___9()
		{
			return (::MoleMole::UIActivityCheckinGameWidgetController___c**)Il2CppClass::FromTypeDefinitionIndex(UIActivityCheckinGameWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x3B638);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYCHECKINGAMEWIDGETCONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYCHECKINGAMEWIDGETCONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Void _OnUIInit_b__5_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYCHECKINGAMEWIDGETCONTROLLER___C__ONUIINIT_B__5_0_OFFSET))(this);
		}
	};
}
