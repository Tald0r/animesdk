#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Battle { class Entity; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System { template <typename T> class Func_1; }

#define STRUCT_2_C457B755E12E9DD0___C_METHOD_1_7952C32242C5A7A5_OFFSET UNITYSDK_OFFSET(0xB60A810)
#define STRUCT_2_C457B755E12E9DD0___C_METHOD_1_E1C47ED2E76F15D6_OFFSET UNITYSDK_OFFSET(0xB60A800)
#define STRUCT_2_C457B755E12E9DD0___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xB60A7B0)
#define STRUCT_2_C457B755E12E9DD0___C__CTOR_OFFSET UNITYSDK_OFFSET(0xB60A7F0)

inline static constexpr unsigned int Struct_2_C457B755E12E9DD0___c_TypeDefinitionIndex = 53248;

class Struct_2_C457B755E12E9DD0___c : public ::System::Object
{
public:
	static ::Struct_2_C457B755E12E9DD0___c** StaticGet___9()
	{
		return (::Struct_2_C457B755E12E9DD0___c**)Il2CppClass::FromTypeDefinitionIndex(Struct_2_C457B755E12E9DD0___c_TypeDefinitionIndex)->GetStaticField(0x39CF0);
	}
	static ::System::Func_1<::System::UInt32>** StaticGet___9__3_0()
	{
		return (::System::Func_1<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Struct_2_C457B755E12E9DD0___c_TypeDefinitionIndex)->GetStaticField(0x39CF8);
	}
	static ::System::Func_2<::MoleMole::Battle::Entity*, ::System::Boolean>** StaticGet___9__3_1()
	{
		return (::System::Func_2<::MoleMole::Battle::Entity*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(Struct_2_C457B755E12E9DD0___c_TypeDefinitionIndex)->GetStaticField(0x39D00);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + STRUCT_2_C457B755E12E9DD0___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_C457B755E12E9DD0___C__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_1_E1C47ED2E76F15D6(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + STRUCT_2_C457B755E12E9DD0___C_METHOD_1_E1C47ED2E76F15D6_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_7952C32242C5A7A5()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_C457B755E12E9DD0___C_METHOD_1_7952C32242C5A7A5_OFFSET))(this);
	}
};
