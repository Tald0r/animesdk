#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class RidusGotBooSkillEx; }
namespace System { template <typename T> class Predicate_1; }

#define MOLEMOLE_UIRIDUSGOTBOOSKILLSIMPLEGROUPWIDGETCONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xB26BE70)
#define MOLEMOLE_UIRIDUSGOTBOOSKILLSIMPLEGROUPWIDGETCONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0xB26BEB0)
#define MOLEMOLE_UIRIDUSGOTBOOSKILLSIMPLEGROUPWIDGETCONTROLLER___C__ONSCROLLITEMUPDATE_B__6_0_OFFSET UNITYSDK_OFFSET(0xB26BEC0)

namespace MoleMole
{
	inline static constexpr unsigned int UIRidusGotBooSkillSimpleGroupWidgetController___c_TypeDefinitionIndex = 42697;

	class UIRidusGotBooSkillSimpleGroupWidgetController___c : public ::System::Object
	{
	public:
		static ::MoleMole::UIRidusGotBooSkillSimpleGroupWidgetController___c** StaticGet___9()
		{
			return (::MoleMole::UIRidusGotBooSkillSimpleGroupWidgetController___c**)Il2CppClass::FromTypeDefinitionIndex(UIRidusGotBooSkillSimpleGroupWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x301D0);
		}
		static ::System::Predicate_1<::MoleMole::RidusGotBooSkillEx*>** StaticGet___9__6_0()
		{
			return (::System::Predicate_1<::MoleMole::RidusGotBooSkillEx*>**)Il2CppClass::FromTypeDefinitionIndex(UIRidusGotBooSkillSimpleGroupWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x301D8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIRIDUSGOTBOOSKILLSIMPLEGROUPWIDGETCONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRIDUSGOTBOOSKILLSIMPLEGROUPWIDGETCONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Boolean _OnScrollItemUpdate_b__6_0(::MoleMole::RidusGotBooSkillEx* x)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::RidusGotBooSkillEx*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRIDUSGOTBOOSKILLSIMPLEGROUPWIDGETCONTROLLER___C__ONSCROLLITEMUPDATE_B__6_0_OFFSET))(this, x);
		}
	};
}
