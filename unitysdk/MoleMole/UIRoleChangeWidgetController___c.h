#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_3CDBAA6BC10A7F83;
namespace System { template <typename T> class Comparison_1; }

#define MOLEMOLE_UIROLECHANGEWIDGETCONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x9EBB7E0)
#define MOLEMOLE_UIROLECHANGEWIDGETCONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x9EBB820)
#define MOLEMOLE_UIROLECHANGEWIDGETCONTROLLER___C__INITVIEW_B__27_0_OFFSET UNITYSDK_OFFSET(0x9EBB830)

namespace MoleMole
{
	inline static constexpr unsigned int UIRoleChangeWidgetController___c_TypeDefinitionIndex = 68832;

	class UIRoleChangeWidgetController___c : public ::System::Object
	{
	public:
		static ::System::Comparison_1<::Class_1_3CDBAA6BC10A7F83*>** StaticGet___9__27_0()
		{
			return (::System::Comparison_1<::Class_1_3CDBAA6BC10A7F83*>**)Il2CppClass::FromTypeDefinitionIndex(UIRoleChangeWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x3AB80);
		}
		static ::MoleMole::UIRoleChangeWidgetController___c** StaticGet___9()
		{
			return (::MoleMole::UIRoleChangeWidgetController___c**)Il2CppClass::FromTypeDefinitionIndex(UIRoleChangeWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x3AB88);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLECHANGEWIDGETCONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLECHANGEWIDGETCONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Int32 _InitView_b__27_0(::Class_1_3CDBAA6BC10A7F83* a, ::Class_1_3CDBAA6BC10A7F83* b)
		{
			return ((::System::Int32(*)(::PVOID, ::Class_1_3CDBAA6BC10A7F83*, ::Class_1_3CDBAA6BC10A7F83*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLECHANGEWIDGETCONTROLLER___C__INITVIEW_B__27_0_OFFSET))(this, a, b);
		}
	};
}
