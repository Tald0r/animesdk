#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_A3A16622F32D01AD_Struct_2_BBD456EBC9087BC2_5.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T> class Comparison_1; }

#define CLASS_2_A3A16622F32D01AD___C_METHOD_1_442BD36408A5FFF0_OFFSET UNITYSDK_OFFSET(0x750ACB0)
#define CLASS_2_A3A16622F32D01AD___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x750AC60)
#define CLASS_2_A3A16622F32D01AD___C__CTOR_OFFSET UNITYSDK_OFFSET(0x750ACA0)

inline static constexpr unsigned int Class_2_A3A16622F32D01AD___c_TypeDefinitionIndex = 79938;

class Class_2_A3A16622F32D01AD___c : public ::System::Object
{
public:
	static ::System::Comparison_1<::Class_2_A3A16622F32D01AD_Struct_2_BBD456EBC9087BC2_5>** StaticGet___9__5_0()
	{
		return (::System::Comparison_1<::Class_2_A3A16622F32D01AD_Struct_2_BBD456EBC9087BC2_5>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_A3A16622F32D01AD___c_TypeDefinitionIndex)->GetStaticField(0x40A10);
	}
	static ::Class_2_A3A16622F32D01AD___c** StaticGet___9()
	{
		return (::Class_2_A3A16622F32D01AD___c**)Il2CppClass::FromTypeDefinitionIndex(Class_2_A3A16622F32D01AD___c_TypeDefinitionIndex)->GetStaticField(0x40A18);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_A3A16622F32D01AD___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A3A16622F32D01AD___C__CTOR_OFFSET))(this);
	}

	::System::Int32 Method_1_442BD36408A5FFF0(::Class_2_A3A16622F32D01AD_Struct_2_BBD456EBC9087BC2_5 a1, ::Class_2_A3A16622F32D01AD_Struct_2_BBD456EBC9087BC2_5 a2)
	{
		return ((::System::Int32(*)(::PVOID, ::Class_2_A3A16622F32D01AD_Struct_2_BBD456EBC9087BC2_5, ::Class_2_A3A16622F32D01AD_Struct_2_BBD456EBC9087BC2_5))((::PBYTE)hIl2Cpp + CLASS_2_A3A16622F32D01AD___C_METHOD_1_442BD36408A5FFF0_OFFSET))(this, a1, a2);
	}
};
