#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define MOLEMOLE_UIVIRUSWIDGETCONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x953DD10)
#define MOLEMOLE_UIVIRUSWIDGETCONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x953DD50)
#define MOLEMOLE_UIVIRUSWIDGETCONTROLLER___C__ONCLICKMAINCITY_B__41_0_OFFSET UNITYSDK_OFFSET(0x953DD60)

namespace MoleMole
{
	inline static constexpr unsigned int UIVirusWidgetController___c_TypeDefinitionIndex = 66325;

	class UIVirusWidgetController___c : public ::System::Object
	{
	public:
		static ::MoleMole::UIVirusWidgetController___c** StaticGet___9()
		{
			return (::MoleMole::UIVirusWidgetController___c**)Il2CppClass::FromTypeDefinitionIndex(UIVirusWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x40920);
		}
		static ::System::Action** StaticGet___9__41_0()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(UIVirusWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x40928);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIVIRUSWIDGETCONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVIRUSWIDGETCONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Void _OnClickMainCity_b__41_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVIRUSWIDGETCONTROLLER___C__ONCLICKMAINCITY_B__41_0_OFFSET))(this);
		}
	};
}
