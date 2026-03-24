#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define MOLEMOLE_UIYOROZUYADIFFICULTWIDGETCONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x9721C30)
#define MOLEMOLE_UIYOROZUYADIFFICULTWIDGETCONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x9721C70)
#define MOLEMOLE_UIYOROZUYADIFFICULTWIDGETCONTROLLER___C__GOTOMAINCITY_B__26_0_OFFSET UNITYSDK_OFFSET(0x9721C80)

namespace MoleMole
{
	inline static constexpr unsigned int UIYorozuyaDifficultWidgetController___c_TypeDefinitionIndex = 56358;

	class UIYorozuyaDifficultWidgetController___c : public ::System::Object
	{
	public:
		static ::MoleMole::UIYorozuyaDifficultWidgetController___c** StaticGet___9()
		{
			return (::MoleMole::UIYorozuyaDifficultWidgetController___c**)Il2CppClass::FromTypeDefinitionIndex(UIYorozuyaDifficultWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x45330);
		}
		static ::System::Action** StaticGet___9__26_0()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(UIYorozuyaDifficultWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x45338);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIYOROZUYADIFFICULTWIDGETCONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIYOROZUYADIFFICULTWIDGETCONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Void _GoToMainCity_b__26_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIYOROZUYADIFFICULTWIDGETCONTROLLER___C__GOTOMAINCITY_B__26_0_OFFSET))(this);
		}
	};
}
