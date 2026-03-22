#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

class Class_2_14986121AA61AD99;
class Class_2_8CAD669444D1F6DE;

#define STRUCT_2_D155EB8BA80D90F8_DISPOSE_OFFSET UNITYSDK_OFFSET(0x766080)
#define STRUCT_2_D155EB8BA80D90F8__CTOR_OFFSET UNITYSDK_OFFSET(0x766070)

inline static constexpr unsigned int Struct_2_D155EB8BA80D90F8_TypeDefinitionIndex = 60243;

struct alignas(1) Struct_2_D155EB8BA80D90F8
{
	static ::Class_2_8CAD669444D1F6DE** StaticGet_Field_2_1()
	{
		return (::Class_2_8CAD669444D1F6DE**)Il2CppClass::FromTypeDefinitionIndex(Struct_2_D155EB8BA80D90F8_TypeDefinitionIndex)->GetStaticField(0x3F340);
	}
	static ::Class_2_14986121AA61AD99** StaticGet_Field_2_0()
	{
		return (::Class_2_14986121AA61AD99**)Il2CppClass::FromTypeDefinitionIndex(Struct_2_D155EB8BA80D90F8_TypeDefinitionIndex)->GetStaticField(0x3F348);
	}

	::System::Void _ctor(::Class_2_14986121AA61AD99* a1, ::Class_2_8CAD669444D1F6DE* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_14986121AA61AD99*, ::Class_2_8CAD669444D1F6DE*))((::PBYTE)hIl2Cpp + STRUCT_2_D155EB8BA80D90F8__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_D155EB8BA80D90F8_DISPOSE_OFFSET))(this);
	}
};
