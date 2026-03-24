#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIHandBookManualWidgetController_TabItem; }
namespace System { template <typename T> class Action_1; }
namespace System { template <typename T> class Comparison_1; }

#define MOLEMOLE_UIHANDBOOKMANUALWIDGETCONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xB104A20)
#define MOLEMOLE_UIHANDBOOKMANUALWIDGETCONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0xB104A60)
#define MOLEMOLE_UIHANDBOOKMANUALWIDGETCONTROLLER___C__INITTAB_B__19_0_OFFSET UNITYSDK_OFFSET(0xB104A70)
#define MOLEMOLE_UIHANDBOOKMANUALWIDGETCONTROLLER___C__UPDATEWISHLISTSYSTEMPLAN_B__21_0_OFFSET UNITYSDK_OFFSET(0xB104AF0)

namespace MoleMole
{
	inline static constexpr unsigned int UIHandBookManualWidgetController___c_TypeDefinitionIndex = 37680;

	class UIHandBookManualWidgetController___c : public ::System::Object
	{
	public:
		static ::MoleMole::UIHandBookManualWidgetController___c** StaticGet___9()
		{
			return (::MoleMole::UIHandBookManualWidgetController___c**)Il2CppClass::FromTypeDefinitionIndex(UIHandBookManualWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x43230);
		}
		static ::System::Comparison_1<::MoleMole::UIHandBookManualWidgetController_TabItem*>** StaticGet___9__19_0()
		{
			return (::System::Comparison_1<::MoleMole::UIHandBookManualWidgetController_TabItem*>**)Il2CppClass::FromTypeDefinitionIndex(UIHandBookManualWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x43238);
		}
		static ::System::Action_1<::System::Int32>** StaticGet___9__21_0()
		{
			return (::System::Action_1<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(UIHandBookManualWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x43240);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKMANUALWIDGETCONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKMANUALWIDGETCONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Int32 _InitTab_b__19_0(::MoleMole::UIHandBookManualWidgetController_TabItem* l, ::MoleMole::UIHandBookManualWidgetController_TabItem* r)
		{
			return ((::System::Int32(*)(::PVOID, ::MoleMole::UIHandBookManualWidgetController_TabItem*, ::MoleMole::UIHandBookManualWidgetController_TabItem*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKMANUALWIDGETCONTROLLER___C__INITTAB_B__19_0_OFFSET))(this, l, r);
		}

		::System::Void _UpdateWishlistSystemPlan_b__21_0(::System::Int32 ret)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKMANUALWIDGETCONTROLLER___C__UPDATEWISHLISTSYSTEMPLAN_B__21_0_OFFSET))(this, ret);
		}
	};
}
