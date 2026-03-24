#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector2.h"

#define CLASS_1_C8B18B78DC4BA202_STRUCT_2_795FE00D9D52DE65__CCTOR_OFFSET UNITYSDK_OFFSET(0x9F886D0)

inline static constexpr unsigned int Class_1_C8B18B78DC4BA202_Struct_2_795FE00D9D52DE65_TypeDefinitionIndex = 65623;

struct alignas(4) Class_1_C8B18B78DC4BA202_Struct_2_795FE00D9D52DE65
{
	static ::Class_1_C8B18B78DC4BA202_Struct_2_795FE00D9D52DE65* StaticGet_Field_2_2()
	{
		return (::Class_1_C8B18B78DC4BA202_Struct_2_795FE00D9D52DE65*)Il2CppClass::FromTypeDefinitionIndex(Class_1_C8B18B78DC4BA202_Struct_2_795FE00D9D52DE65_TypeDefinitionIndex)->GetStaticField(0x11310);
	}
	::System::Int32 Field_2_0; // 0x10
	::UnityEngine::Vector2 Field_2_1; // 0x14

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_C8B18B78DC4BA202_STRUCT_2_795FE00D9D52DE65__CCTOR_OFFSET))();
	}
};
