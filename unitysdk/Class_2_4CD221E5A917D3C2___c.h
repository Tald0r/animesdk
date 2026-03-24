#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_4CD221E5A917D3C2_Struct_2_529B3F495DCAB259.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T> class Comparison_1; }

#define CLASS_2_4CD221E5A917D3C2___C_METHOD_1_AB0EE7DBC2453EDE_OFFSET UNITYSDK_OFFSET(0x6822E10)
#define CLASS_2_4CD221E5A917D3C2___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x6822DC0)
#define CLASS_2_4CD221E5A917D3C2___C__CTOR_OFFSET UNITYSDK_OFFSET(0x6822E00)

inline static constexpr unsigned int Class_2_4CD221E5A917D3C2___c_TypeDefinitionIndex = 48182;

class Class_2_4CD221E5A917D3C2___c : public ::System::Object
{
public:
	static ::Class_2_4CD221E5A917D3C2___c** StaticGet___9()
	{
		return (::Class_2_4CD221E5A917D3C2___c**)Il2CppClass::FromTypeDefinitionIndex(Class_2_4CD221E5A917D3C2___c_TypeDefinitionIndex)->GetStaticField(0x3C080);
	}
	static ::System::Comparison_1<::Class_2_4CD221E5A917D3C2_Struct_2_529B3F495DCAB259>** StaticGet___9__15_0()
	{
		return (::System::Comparison_1<::Class_2_4CD221E5A917D3C2_Struct_2_529B3F495DCAB259>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_4CD221E5A917D3C2___c_TypeDefinitionIndex)->GetStaticField(0x3C088);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_4CD221E5A917D3C2___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4CD221E5A917D3C2___C__CTOR_OFFSET))(this);
	}

	::System::Int32 Method_1_AB0EE7DBC2453EDE(::Class_2_4CD221E5A917D3C2_Struct_2_529B3F495DCAB259 a1, ::Class_2_4CD221E5A917D3C2_Struct_2_529B3F495DCAB259 a2)
	{
		return ((::System::Int32(*)(::PVOID, ::Class_2_4CD221E5A917D3C2_Struct_2_529B3F495DCAB259, ::Class_2_4CD221E5A917D3C2_Struct_2_529B3F495DCAB259))((::PBYTE)hIl2Cpp + CLASS_2_4CD221E5A917D3C2___C_METHOD_1_AB0EE7DBC2453EDE_OFFSET))(this, a1, a2);
	}
};
