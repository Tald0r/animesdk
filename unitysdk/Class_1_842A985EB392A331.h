#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_3A1DCD22526CC6D0.h"
#include "unitysdk/System/Object.h"

class Class_3_DD4E81D56D779236;

#define CLASS_1_842A985EB392A331__CCTOR_OFFSET UNITYSDK_OFFSET(0xB318700)

inline static constexpr unsigned int Class_1_842A985EB392A331_TypeDefinitionIndex = 42151;

class Class_1_842A985EB392A331 : public ::System::Object
{
public:
	static ::Class_3_DD4E81D56D779236** StaticGet_Field_1_1()
	{
		return (::Class_3_DD4E81D56D779236**)Il2CppClass::FromTypeDefinitionIndex(Class_1_842A985EB392A331_TypeDefinitionIndex)->GetStaticField(0x30260);
	}
	static ::Il2CppArray<::Enum_3_3A1DCD22526CC6D0>** StaticGet_Field_1_0()
	{
		return (::Il2CppArray<::Enum_3_3A1DCD22526CC6D0>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_842A985EB392A331_TypeDefinitionIndex)->GetStaticField(0x30268);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_842A985EB392A331__CCTOR_OFFSET))();
	}
};
