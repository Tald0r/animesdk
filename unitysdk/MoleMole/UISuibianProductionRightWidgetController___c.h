#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define MOLEMOLE_UISUIBIANPRODUCTIONRIGHTWIDGETCONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x7BCD5F0)
#define MOLEMOLE_UISUIBIANPRODUCTIONRIGHTWIDGETCONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x7BCD630)
#define MOLEMOLE_UISUIBIANPRODUCTIONRIGHTWIDGETCONTROLLER___C__ONPRODUCT_B__23_10_OFFSET UNITYSDK_OFFSET(0x7BCD650)
#define MOLEMOLE_UISUIBIANPRODUCTIONRIGHTWIDGETCONTROLLER___C__ONPRODUCT_B__23_11_OFFSET UNITYSDK_OFFSET(0x7BCD710)
#define MOLEMOLE_UISUIBIANPRODUCTIONRIGHTWIDGETCONTROLLER___C__ONPRODUCT_B__23_4_OFFSET UNITYSDK_OFFSET(0x7BCD640)

namespace MoleMole
{
	inline static constexpr unsigned int UISuibianProductionRightWidgetController___c_TypeDefinitionIndex = 39142;

	class UISuibianProductionRightWidgetController___c : public ::System::Object
	{
	public:
		static ::System::Action** StaticGet___9__23_11()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(UISuibianProductionRightWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x399E0);
		}
		static ::System::Action** StaticGet___9__23_10()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(UISuibianProductionRightWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x399E8);
		}
		static ::MoleMole::UISuibianProductionRightWidgetController___c** StaticGet___9()
		{
			return (::MoleMole::UISuibianProductionRightWidgetController___c**)Il2CppClass::FromTypeDefinitionIndex(UISuibianProductionRightWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x399F0);
		}
		static ::System::Action** StaticGet___9__23_4()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(UISuibianProductionRightWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x399F8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UISUIBIANPRODUCTIONRIGHTWIDGETCONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUIBIANPRODUCTIONRIGHTWIDGETCONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Void _OnProduct_b__23_4()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUIBIANPRODUCTIONRIGHTWIDGETCONTROLLER___C__ONPRODUCT_B__23_4_OFFSET))(this);
		}

		::System::Void _OnProduct_b__23_10()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUIBIANPRODUCTIONRIGHTWIDGETCONTROLLER___C__ONPRODUCT_B__23_10_OFFSET))(this);
		}

		::System::Void _OnProduct_b__23_11()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUIBIANPRODUCTIONRIGHTWIDGETCONTROLLER___C__ONPRODUCT_B__23_11_OFFSET))(this);
		}
	};
}
