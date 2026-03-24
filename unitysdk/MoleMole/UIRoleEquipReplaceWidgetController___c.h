#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_A3CFC20DC3954F5C_1;
namespace System { template <typename T1, typename T2> class Func_2; }

#define MOLEMOLE_UIROLEEQUIPREPLACEWIDGETCONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xA244B50)
#define MOLEMOLE_UIROLEEQUIPREPLACEWIDGETCONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0xA244B90)
#define MOLEMOLE_UIROLEEQUIPREPLACEWIDGETCONTROLLER___C__REFRESHRESETBTN_B__137_0_OFFSET UNITYSDK_OFFSET(0xA244BA0)

namespace MoleMole
{
	inline static constexpr unsigned int UIRoleEquipReplaceWidgetController___c_TypeDefinitionIndex = 57483;

	class UIRoleEquipReplaceWidgetController___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::Class_2_A3CFC20DC3954F5C_1*, ::System::Boolean>** StaticGet___9__137_0()
		{
			return (::System::Func_2<::Class_2_A3CFC20DC3954F5C_1*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(UIRoleEquipReplaceWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x40880);
		}
		static ::MoleMole::UIRoleEquipReplaceWidgetController___c** StaticGet___9()
		{
			return (::MoleMole::UIRoleEquipReplaceWidgetController___c**)Il2CppClass::FromTypeDefinitionIndex(UIRoleEquipReplaceWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x40888);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLEEQUIPREPLACEWIDGETCONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLEEQUIPREPLACEWIDGETCONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Boolean _RefreshResetBtn_b__137_0(::Class_2_A3CFC20DC3954F5C_1* equip)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_2_A3CFC20DC3954F5C_1*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLEEQUIPREPLACEWIDGETCONTROLLER___C__REFRESHRESETBTN_B__137_0_OFFSET))(this, equip);
		}
	};
}
