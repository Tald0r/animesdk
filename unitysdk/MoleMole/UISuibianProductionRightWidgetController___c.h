#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define MOLEMOLE_UISUIBIANPRODUCTIONRIGHTWIDGETCONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x73D7AF0)
#define MOLEMOLE_UISUIBIANPRODUCTIONRIGHTWIDGETCONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x73D7B30)
#define MOLEMOLE_UISUIBIANPRODUCTIONRIGHTWIDGETCONTROLLER___C__ONPRODUCT_B__23_10_OFFSET UNITYSDK_OFFSET(0x73D7B50)
#define MOLEMOLE_UISUIBIANPRODUCTIONRIGHTWIDGETCONTROLLER___C__ONPRODUCT_B__23_11_OFFSET UNITYSDK_OFFSET(0x73D7C20)
#define MOLEMOLE_UISUIBIANPRODUCTIONRIGHTWIDGETCONTROLLER___C__ONPRODUCT_B__23_4_OFFSET UNITYSDK_OFFSET(0x73D7B40)

namespace MoleMole
{
	inline static constexpr unsigned int UISuibianProductionRightWidgetController___c_TypeDefinitionIndex = 38591;

	class UISuibianProductionRightWidgetController___c : public ::System::Object
	{
	public:
		static ::MoleMole::UISuibianProductionRightWidgetController___c** StaticGet___9()
		{
			return (::MoleMole::UISuibianProductionRightWidgetController___c**)Il2CppClass::FromTypeDefinitionIndex(UISuibianProductionRightWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x36D50);
		}
		static ::System::Action** StaticGet___9__23_10()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(UISuibianProductionRightWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x36D58);
		}
		static ::System::Action** StaticGet___9__23_11()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(UISuibianProductionRightWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x36D60);
		}
		static ::System::Action** StaticGet___9__23_4()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(UISuibianProductionRightWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x36D68);
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
