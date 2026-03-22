#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define MOLEMOLE_UIINLEVELONLINEROLETIPSWIDGETCONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x8A3AF60)
#define MOLEMOLE_UIINLEVELONLINEROLETIPSWIDGETCONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x8A3AFA0)
#define MOLEMOLE_UIINLEVELONLINEROLETIPSWIDGETCONTROLLER___C__ONUIINIT_B__27_0_OFFSET UNITYSDK_OFFSET(0x8A3AFB0)

namespace MoleMole
{
	inline static constexpr unsigned int UIInLevelOnlineRoleTipsWidgetController___c_TypeDefinitionIndex = 67932;

	class UIInLevelOnlineRoleTipsWidgetController___c : public ::System::Object
	{
	public:
		static ::MoleMole::UIInLevelOnlineRoleTipsWidgetController___c** StaticGet___9()
		{
			return (::MoleMole::UIInLevelOnlineRoleTipsWidgetController___c**)Il2CppClass::FromTypeDefinitionIndex(UIInLevelOnlineRoleTipsWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x3A9A0);
		}
		static ::System::Action** StaticGet___9__27_0()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(UIInLevelOnlineRoleTipsWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x3A9A8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELONLINEROLETIPSWIDGETCONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELONLINEROLETIPSWIDGETCONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Void _OnUIInit_b__27_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELONLINEROLETIPSWIDGETCONTROLLER___C__ONUIINIT_B__27_0_OFFSET))(this);
		}
	};
}
