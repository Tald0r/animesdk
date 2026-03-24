#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"

class Class_2_208CC9941471731A_574;
class Class_2_3B0F8CEEFA465A87;
namespace System { template <typename T1, typename T2> class Func_2; }

#define MOLEMOLE_UIABINLEVELPLAYERINFOWIDGETCONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xB7142F0)
#define MOLEMOLE_UIABINLEVELPLAYERINFOWIDGETCONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0xB714330)
#define MOLEMOLE_UIABINLEVELPLAYERINFOWIDGETCONTROLLER___C__REFRESHBANGBOO_B__19_0_OFFSET UNITYSDK_OFFSET(0xB714340)
#define MOLEMOLE_UIABINLEVELPLAYERINFOWIDGETCONTROLLER___C__REFRESHBANGBOO_B__19_1_OFFSET UNITYSDK_OFFSET(0xB714390)

namespace MoleMole
{
	inline static constexpr unsigned int UIABInLevelPlayerInfoWidgetController___c_TypeDefinitionIndex = 55468;

	class UIABInLevelPlayerInfoWidgetController___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::Class_2_3B0F8CEEFA465A87*, ::System::Boolean>** StaticGet___9__19_0()
		{
			return (::System::Func_2<::Class_2_3B0F8CEEFA465A87*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(UIABInLevelPlayerInfoWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x37000);
		}
		static ::MoleMole::UIABInLevelPlayerInfoWidgetController___c** StaticGet___9()
		{
			return (::MoleMole::UIABInLevelPlayerInfoWidgetController___c**)Il2CppClass::FromTypeDefinitionIndex(UIABInLevelPlayerInfoWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x37008);
		}
		static ::System::Func_2<::Class_2_3B0F8CEEFA465A87*, ::System::ValueTuple_2<::Class_2_208CC9941471731A_574*, ::Class_2_3B0F8CEEFA465A87*>>** StaticGet___9__19_1()
		{
			return (::System::Func_2<::Class_2_3B0F8CEEFA465A87*, ::System::ValueTuple_2<::Class_2_208CC9941471731A_574*, ::Class_2_3B0F8CEEFA465A87*>>**)Il2CppClass::FromTypeDefinitionIndex(UIABInLevelPlayerInfoWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x37010);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIABINLEVELPLAYERINFOWIDGETCONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABINLEVELPLAYERINFOWIDGETCONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Boolean _RefreshBangBoo_b__19_0(::Class_2_3B0F8CEEFA465A87* slot)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_2_3B0F8CEEFA465A87*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABINLEVELPLAYERINFOWIDGETCONTROLLER___C__REFRESHBANGBOO_B__19_0_OFFSET))(this, slot);
		}

		::System::ValueTuple_2<::Class_2_208CC9941471731A_574*, ::Class_2_3B0F8CEEFA465A87*> _RefreshBangBoo_b__19_1(::Class_2_3B0F8CEEFA465A87* slot)
		{
			return ((::System::ValueTuple_2<::Class_2_208CC9941471731A_574*, ::Class_2_3B0F8CEEFA465A87*>(*)(::PVOID, ::Class_2_3B0F8CEEFA465A87*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABINLEVELPLAYERINFOWIDGETCONTROLLER___C__REFRESHBANGBOO_B__19_1_OFFSET))(this, slot);
		}
	};
}
